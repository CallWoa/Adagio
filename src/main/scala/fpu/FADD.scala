package fpu

import chisel3._
import chisel3.util._

//sigWidth includes hidden bit
class FarPath(val expWidth: Int, val sigWidth: Int, val outSigWidth: Int)
  extends Module {
  val io = IO(new Bundle() {
    val in = Input(new Bundle() {
      val a, b = new RawFloat(expWidth, sigWidth)
      val addSig = Bool()
      val tinyAdd = Bool()
      val shiftNum = UInt(log2Ceil(sigWidth).W)
    })
    val out = Output(new Bundle() {
      val result = UInt((expWidth + outSigWidth).W)
      val far_path_of = Bool()
    })
  })
  val shiftNum = io.in.shiftNum
  val tinyAdd = io.in.tinyAdd
  val aIsZero = !io.in.a.exp.orR
  val bIsZero = !io.in.b.exp.orR
  val bothZero = aIsZero & bIsZero
  val result_sign = io.in.a.sign
  val (alignedSigB, sigB_sticky) = ShiftRightJam(Cat(io.in.b.sig, 0.U(2.W)), shiftNum)
  val pos_sigB = Cat(0.U(1.W), alignedSigB, sigB_sticky)
  val neg_sigB = Cat(1.U(1.W), (~Cat(alignedSigB, sigB_sticky)).asUInt + 1.U)
  val adder_in_sigB = Mux(io.in.addSig, pos_sigB, neg_sigB)
  val adder_in_sigA = Cat(0.U(1.W), io.in.a.sig, 0.U(3.W))
  val resultSigInNormalCase = adder_in_sigA + adder_in_sigB
  val resultSigInZeroCase = adder_in_sigA
  val result_sig_raw = Mux(bIsZero, resultSigInZeroCase, resultSigInNormalCase)

  val cout = result_sig_raw.head(1).asBool
  val keep = result_sig_raw.tail(1).head(1).asBool
  val borrow = result_sig_raw.head(2) === 0.U
  val resultSigNoRound = PriorityMux(
    Seq(cout, keep||tinyAdd, borrow),
    Seq(
      result_sig_raw.head(outSigWidth + 2) ## result_sig_raw.tail(outSigWidth + 2).orR,
      result_sig_raw.tail(1).head(outSigWidth + 2) ## result_sig_raw.tail(outSigWidth + 3).orR,
      result_sig_raw.tail(2).head(outSigWidth + 2) ## result_sig_raw.tail(outSigWidth + 4).orR
    )
  )

  val resultExpNoRound = PriorityMux(
    Seq(
      cout -> (io.in.a.exp + 1.U),
      (keep || bothZero) -> io.in.a.exp,
      (borrow || tinyAdd) -> (io.in.a.exp - 1.U)
    )
  )

  val farPathResult = Wire(new RawFloat(expWidth, outSigWidth + 3))
  farPathResult.exp  := resultExpNoRound
  farPathResult.sign := result_sign
  farPathResult.sig  := resultSigNoRound

  val far_path_rounder = RoundingUnit(
    in = resultSigNoRound.tail(1),
    sign = result_sign,
    width = outSigWidth - 1
  )

  val far_path_may_of = io.in.b.exp.andR && io.in.addSig
  val far_path_of_before_round =
    resultExpNoRound === ((BigInt(1) << expWidth) - 1).U
  val far_path_of_after_round = far_path_rounder.io.cout &&
    resultExpNoRound === ((BigInt(1) << expWidth) - 2).U

  io.out.far_path_of := far_path_of_before_round || far_path_of_after_round || far_path_may_of

  val far_path_exp_rounded = far_path_rounder.io.cout + resultExpNoRound
  val far_path_sig_rounded = far_path_rounder.io.out

  io.out.result :=
    Cat(farPathResult.sign, far_path_exp_rounded, far_path_sig_rounded)
}

class ClosePath(val expWidth: Int, val sigWidth: Int, val outSigWidth: Int)
  extends Module {
  val io = IO(new Bundle() {
    val in = Input(new Bundle() {
      val a, b = new RawFloat(expWidth, sigWidth)
      val needShift = Bool()
    })
    val out = Output(new Bundle() {
      val result = UInt((expWidth + outSigWidth).W)
      val close_path_of = Bool()
    })
  })
  //result calculate
  val a_sig = Cat(io.in.a.sig, 0.U(1.W))
  val b_sig = (Cat(io.in.b.sig, 0.U(1.W)) >> io.in.needShift)
  val bIsZero = !io.in.b.exp.orR
  val resultSigComplementForm = Mux(bIsZero,
    Cat(0.U(1.W), a_sig),
    Cat(0.U(1.W), a_sig) + Cat(1.U(1.W), (~b_sig).asUInt + 1.U))
  val a_LessThan_b = resultSigComplementForm.head(1).asBool
  val resultSigNoRound = Mux(a_LessThan_b,
    (~resultSigComplementForm.tail(1)).asUInt + 1.U,
    resultSigComplementForm.tail(1))
  val result_sign = Mux(a_LessThan_b, ~io.in.a.sign , io.in.a.sign)
  //leading zero counting
  val lza = Module(new LZA(sigWidth + 1))
  lza.io.a := a_sig
  lza.io.b := b_sig
  val lzc = lza.io.lzc
  val lzaError = lza.io.error
  val closePathSigIsZero = lza.io.zero

  val closePathResult = Wire(new RawFloat(expWidth, outSigWidth + 3))
  closePathResult.sign := result_sign

  val resultExpNoRound = Mux(closePathSigIsZero, 0.U(expWidth.W), io.in.a.exp)
  val resultExpIsZero = resultExpNoRound === 0.U

  val shiftLimit = resultExpNoRound <= (lzc + lzaError.asUInt)
  val exp_s1 = resultExpNoRound - lzc
  val exp_s2 = exp_s1 - lzaError
  closePathResult.exp := Mux(shiftLimit, 0.U, exp_s2)

  val sigShiftNum = PriorityMux(
    Seq(
      resultExpIsZero -> 0.U,
      shiftLimit -> (resultExpNoRound - 1.U),
      true.B -> lzc
    )
  )
  val sig_s1 = (resultSigNoRound << sigShiftNum)(sigWidth, 0)
  val sig_s2 = Mux(lzaError, Cat(sig_s1.tail(1), 0.U(1.W)), sig_s1)
  val sig_s3 = if (outSigWidth + 3 > sigWidth + 1) {
    Cat(
      Mux(shiftLimit, sig_s1, sig_s2),
      0.U((outSigWidth + 3 - sigWidth - 1).W)
    )
  } else {
    Mux(shiftLimit, sig_s1, sig_s2)
  }
  val close_path_sig = sig_s3.head(outSigWidth + 2) ## sig_s3.tail(outSigWidth + 2).orR
  closePathResult.sig := close_path_sig

  val near_path_rounder = RoundingUnit(
    in = close_path_sig.tail(1),
    sign = closePathResult.sign,
    width = outSigWidth - 1
  )

  val near_path_exp_rounded = near_path_rounder.io.cout + closePathResult.exp
  val near_path_sig_rounded = near_path_rounder.io.out
  io.out.close_path_of := near_path_exp_rounded === (~0.U(expWidth.W)).asUInt
  io.out.result := Cat(
    closePathResult.sign && !closePathSigIsZero,
    near_path_exp_rounded,
    near_path_sig_rounded
  )
}

//----------------------------------------------------------------------------
//----------------------------------------------------------------------------
class FADDIn (val expWidth: Int, val sigWidth: Int) extends Bundle {
  val a = Output(UInt((expWidth + sigWidth).W))
  val b = Output(UInt((expWidth + sigWidth).W))
}

class FADDOut (val expWidth: Int, val sigWidth: Int) extends Bundle {
  val result = Output(UInt((expWidth + sigWidth).W))
}

class FADD(expWidth: Int, sigWidth: Int) extends Module
{
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(new FADDIn(expWidth, sigWidth)))
    val out = Decoupled(new FADDOut(expWidth, sigWidth))
  })
  val valid = io.in.valid
  val ready = io.out.ready
  val fp_a = FloatPoint.fromUInt(io.in.bits.a, expWidth, sigWidth)
  val fp_b = FloatPoint.fromUInt(io.in.bits.b, expWidth, sigWidth)
  val decode_a = fp_a.decode
  val decode_b = fp_b.decode
  val raw_a = RawFloat.fromFP(fp_a, Some(decode_a.expNotZero), Some(decode_a.isSubnormal))
  val raw_b = RawFloat.fromFP(fp_b, Some(decode_b.expNotZero), Some(decode_b.isSubnormal))
  //Path Select & Exponent Difference
  val addSig = fp_a.sign === fp_b.sign
  val needSwap = raw_a.exp < raw_b.exp
  val diffExp = Mux(needSwap, raw_b.exp - raw_a.exp, raw_a.exp - raw_b.exp)
  //Exponent Align Limit
  val alignLimitWidth = log2Ceil(sigWidth)
  val initShiftNum = diffExp(alignLimitWidth - 1, 0)
  val isMaxAlign = diffExp > (sigWidth + 2).U  //the difference between a.exp and b.exp is out of sig shift limit
  val shiftNum = Mux(isMaxAlign, (sigWidth + 2).U(alignLimitWidth.W), initShiftNum)
  val closePathSel = !addSig && !isMaxAlign && (initShiftNum <= 1.U)
  /*------------------------------------------------------------------------
  far Path
  *------------------------------------------------------------------------*/
  val farPath = Module(new FarPath(expWidth, sigWidth, sigWidth))
  farPath.io.in.a := Mux(needSwap, raw_b, raw_a)
  farPath.io.in.b := Mux(needSwap, raw_a, raw_b)
  farPath.io.in.addSig := addSig
  farPath.io.in.tinyAdd := decode_a.expIsZero & decode_b.expIsZero
  farPath.io.in.shiftNum := shiftNum
  val farPathResult = farPath.io.out.result
  val far_path_of = farPath.io.out.far_path_of
  /*------------------------------------------------------------------------
  close Path
   ------------------------------------------------------------------------*/
  val closePath = Module(new ClosePath(expWidth, sigWidth, sigWidth))
  closePath.io.in.a := Mux(needSwap, raw_b, raw_a)
  closePath.io.in.b := Mux(needSwap, raw_a, raw_b)
  closePath.io.in.needShift := initShiftNum === 1.U
  val closePathResult = closePath.io.out.result
  val close_path_of = closePath.io.out.close_path_of
  /*------------------------------------------------------------------------
  special case
  *------------------------------------------------------------------------*/
  val a_isNaN = decode_a.isNaN
  val a_isInf = decode_a.isInf
  val b_isNaN = decode_b.isNaN
  val b_isInf = decode_b.isInf

  val special_path_hasNaN = a_isNaN || b_isNaN
  val special_path_hasInf = a_isInf || b_isInf
  val special_path_inf_iv = a_isInf && b_isInf && !addSig
  val special_case_happen = special_path_hasNaN || special_path_hasInf

  val special_path_result = Mux(
    special_path_hasNaN || special_path_inf_iv,
    Cat(0.U(1.W), Fill(expWidth + 1, 1.U(1.W)), 0.U((sigWidth - 2).W)), //qNaN
    Cat(                                                                //Inf
      Mux(a_isInf, fp_a.sign, fp_b.sign),
      ~0.U(expWidth.W),
      0.U((sigWidth - 1).W)
    )
  )
  /*------------------------------------------------------------------------
  result
  *------------------------------------------------------------------------*/
  val common_overflow_sign =
    Mux(closePathSel, closePathResult.head(1).asBool, farPathResult.head(1).asBool)

  val common_overflow_exp = ((BigInt(1) << expWidth) - 1).U(expWidth.W)
  val common_overflow_sig = 0.U((sigWidth - 1).W)
  val common_overflow = !closePathSel && far_path_of || closePathSel && close_path_of

  io.in.ready := ready
  io.out.valid := valid
  io.out.bits.result := Mux(
    special_case_happen,
    special_path_result,
    Mux(
      common_overflow,
      Cat(common_overflow_sign, common_overflow_exp, common_overflow_sig),
      Mux(closePathSel, closePathResult, farPathResult)
    )
  )
}

object FADD {
  def apply(a: UInt, b: UInt,
            expWidth: Int, sigWidth: Int) = {
    require((a.getWidth <= expWidth + sigWidth) && (b.getWidth <= expWidth + sigWidth))

    val faddModule = Module(new FADD(expWidth, sigWidth))

    val a_pad = if (a.getWidth < expWidth + sigWidth) padd_tail(a, expWidth + sigWidth) else a
    val b_pad = if (b.getWidth < expWidth + sigWidth) padd_tail(b, expWidth + sigWidth) else b

    faddModule.io.in.valid := DontCare
    faddModule.io.in.bits.a := a_pad
    faddModule.io.in.bits.b := b_pad
    faddModule.io.out.ready := DontCare

    faddModule.io.out.bits.result
  }
  def padd_tail(x: UInt, w: Int): UInt = Cat(x, 0.U((w - x.getWidth).W))
}

object FADD32 extends App {
  emitVerilog(new FADD(8, 24), Array("--target-dir", "generated"))
}