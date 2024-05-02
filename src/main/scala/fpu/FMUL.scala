package fpu

import chisel3._
import chisel3.util._
import fpu.lza_utils._

class FMULSrc (val expWidth: Int, val sigWidth: Int) extends Bundle {
  val a, b = Output(UInt((expWidth + sigWidth).W))
}

class FMULToFADD_fflags extends Bundle {
  val isNaN = Bool()
  val isInf = Bool()
  val isInv = Bool()
  val overflow = Bool()
}

class FMULToFADD(val expWidth: Int, val sigWidth: Int) extends Bundle {
  val fp_prod = UInt((expWidth + sigWidth).W)
  val inter_flags = new FMULToFADD_fflags
}

//precision rises after multiplication with no rounding
class FMULnoRound(val inExpWidth: Int, val inSigWidth: Int,
                  val outExpWidth: Int, val outSigWidth: Int) extends Module {
  val io = IO(new Bundle() {
    val in = Flipped(Decoupled(new FMULSrc(inExpWidth, inSigWidth)))
    val toFADD = Decoupled(Output(new FMULToFADD(outExpWidth, outSigWidth)))
  })
  require((outExpWidth >= inExpWidth) && (outSigWidth >= inSigWidth))
  val valid = io.in.valid
  val fp_a = FloatPoint.fromUInt(io.in.bits.a, inExpWidth, inSigWidth)
  val fp_b = FloatPoint.fromUInt(io.in.bits.b, inExpWidth, inSigWidth)
  val (decode_a, decode_b) = (fp_a.decode, fp_b.decode)
  val raw_a = RawFloat.fromFP(fp_a, Some(decode_a.expNotZero))
  val raw_b = RawFloat.fromFP(fp_b, Some(decode_b.expNotZero))
  /*------------------------------------------------------------------------
  *------------------------------------------------------------------------*/
  val hasZero = decode_a.isZero | decode_b.isZero
  val resultSign = fp_a.sign ^ fp_b.sign
  val expSum = Cat(0.U(1.W), raw_a.exp) + Cat(0.U(1.W), raw_b.exp)
  val inBiasInt = FloatPoint.expBias(inExpWidth)
  val outBiasInt = FloatPoint.expBias(outExpWidth)
  val expSumUpPc = Cat(0.U((outExpWidth - inExpWidth - 1).W), expSum) + (outBiasInt - 2*inBiasInt).U
  val resultExpNoShift = PriorityMux(
    Seq(
      hasZero -> 0.U(outExpWidth.W),
      true.B -> expSumUpPc
    )
  )
  val resultSigNoShift = (raw_a.sig * raw_b.sig)(inSigWidth*2 - 1, 0)
  /*------------------------------------------------------------------------
  Shift
  *------------------------------------------------------------------------*/
  val aLZC = LZC(raw_a.sig)
  val bLZC = LZC(raw_b.sig)
  val lzcRaw = aLZC + bLZC
  val ErrorDetectMask = Cat(1.U(1.W), 0.U((inSigWidth * 2 - 1).W)) >> lzcRaw
  val lzcError = !(resultSigNoShift & ErrorDetectMask).orR
  val lzc = Mux(lzcError, lzcRaw + 1.U, lzcRaw)
  val shiftLimit = (resultExpNoShift + 1.U) <= lzc

  val resultSigShifted = (resultSigNoShift << Mux(shiftLimit, resultExpNoShift, lzc))(inSigWidth*2 - 1, 0)
  val resultExpShifted = Mux(shiftLimit, 0.U(outExpWidth.W), resultExpNoShift - lzc + 1.U)
  /*------------------------------------------------------------------------
  Special Case
  *------------------------------------------------------------------------*/
  val hasNaN = decode_a.isNaN || decode_b.isNaN
  val hasSNaN = decode_a.isSNaN || decode_b.isSNaN
  val hasInf = decode_a.isInf || decode_b.isInf
  val special_case_happen = hasZero || hasNaN || hasInf

  val zero_mul_inf = hasZero && hasInf
  val nan_result = hasNaN || zero_mul_inf
  val special_iv = hasSNaN || zero_mul_inf
  val special_result = Mux(nan_result,
    Cat(0.U(1.W), Fill(outExpWidth + 1, 1.U(1.W)), 0.U((outSigWidth - 2).W)), // default NaN
    Mux(hasInf,
      Cat(
        resultSign,
        ((BigInt(1) << outExpWidth) - 1).U(outExpWidth.W),
        0.U((outSigWidth - 1).W)), // inf
      Cat(resultSign, 0.U((outExpWidth + outSigWidth - 1).W)) // zero
    )
  )
  /*------------------------------------------------------------------------
  Result
  *------------------------------------------------------------------------*/
  io.toFADD.bits.fp_prod := Mux(special_case_happen,
    special_result,
    Cat(resultSign, resultExpShifted, resultSigShifted.tail(1), 0.U((outSigWidth - 2 * inSigWidth).W))
  )
  io.in.ready := io.toFADD.ready
  io.toFADD.valid := valid
  io.toFADD.bits.inter_flags.isInf := hasInf
  io.toFADD.bits.inter_flags.isInv := special_iv
  io.toFADD.bits.inter_flags.isNaN := nan_result
  io.toFADD.bits.inter_flags.overflow := false.B
}

object FMULnoRound {
  def apply(a: UInt, b: UInt,
            inExpWidth: Int, inSigWidth: Int,
            outExpWidth: Int, outSigWidth: Int,
            pre_valid: Bool, post_ready: Bool) = {
    val fmul = Module(new FMULnoRound(inExpWidth, inSigWidth, outExpWidth, outSigWidth))

//    val prehandshaked = pre_valid && fmul.io.in.ready
//    val valid = RegInit(false.B)
//    when(fmul.io.toFADD.valid && post_ready) {
//      valid := false.B
//    }
//    when(prehandshaked) {
//      valid := true.B
//    }

    fmul.io.in.valid := pre_valid
//    fmul.io.in.bits.a := RegEnable(a, prehandshaked)
//    fmul.io.in.bits.b := RegEnable(b, prehandshaked)
    fmul.io.in.bits.a := a
    fmul.io.in.bits.b := b
    fmul.io.toFADD.ready := post_ready

    (fmul.io.toFADD.bits, fmul.io.toFADD.valid, fmul.io.in.ready)
  }
}

class FMUL(val expWidth: Int, val sigWidth: Int) extends Module {
  val io = IO(new Bundle() {
    val a, b = Input(UInt((expWidth + sigWidth).W))
    val roundingMode = Input(UInt(3.W))
    val result = Output(UInt((expWidth + sigWidth).W))
    val fflags = Output(UInt(5.W))
  })
  val fp_a = FloatPoint.fromUInt(io.a, expWidth, sigWidth)
  val fp_b = FloatPoint.fromUInt(io.b, expWidth, sigWidth)
  val (decode_a, decode_b) = (fp_a.decode, fp_b.decode)
  val raw_a = RawFloat.fromFP(fp_a, Some(decode_a.expNotZero))
  val raw_b = RawFloat.fromFP(fp_b, Some(decode_b.expNotZero))
  /*------------------------------------------------------------------------
  *------------------------------------------------------------------------*/
  val hasZero = decode_a.isZero | decode_b.isZero
  val resultSign = fp_a.sign ^ fp_b.sign
  val expSum = raw_a.exp +& raw_b.exp
  val biasInt = FloatPoint.expBias(expWidth)
  val expSumMinusBias = Cat(0.U(1.W), expSum) - biasInt.U
  val expUnderflow = expSumMinusBias.head(1).asBool
  val expDiffAbs = Mux(
    expUnderflow,
    ~expSumMinusBias.tail(1) + 1.U,
    expSumMinusBias.tail(1)
  )
  val expOverflow = expDiffAbs > ((1 << expWidth) - 2).U
  val resultExpNoShift = PriorityMux(
    Seq(
      (expUnderflow | hasZero) -> 0.U,
      expOverflow -> ((1 << expWidth) - 1).U,
      true.B -> expDiffAbs
    )
  )
  val resultSigNoShift = (raw_a.sig * raw_b.sig)(sigWidth*2 - 1, 0)
  /*------------------------------------------------------------------------
  Shift
  *------------------------------------------------------------------------*/
  val aLZC = LZC(raw_a.sig)
  val bLZC = LZC(raw_b.sig)
  val lzcRaw = aLZC + bLZC
  val ErrorDetectMask = Cat(1.U(1.W), 0.U((sigWidth * 2 - 1).W)) >> lzcRaw
  val lzcError = !(resultSigNoShift & ErrorDetectMask).orR
  val lzc = Mux(lzcError, lzcRaw + 1.U, lzcRaw)
//  val rightShiftLimit = (expSumMinusBias_abs + lzc) > (sigWidth * 2).U
  val resultExpRightShifted = resultExpNoShift
  val (resultSigRightShifted, rightShiftSticky) = ShiftRightJam(resultSigNoShift, expDiffAbs)
  val leftShiftLimit = (resultExpNoShift + 1.U) <= lzc
  val resultSigLeftShifted = (resultSigNoShift << Mux(leftShiftLimit, resultExpNoShift, lzc))(sigWidth*2 - 1, 0)

  val resultExpShifted = Mux(leftShiftLimit || expUnderflow, 0.U, resultExpNoShift - lzc + 1.U)
  val resultSigShifted = Mux(expUnderflow,
    Cat(resultSigRightShifted, rightShiftSticky),
    Cat(resultSigLeftShifted, 0.U)
  )
  /*------------------------------------------------------------------------
  Rounding
  *------------------------------------------------------------------------*/
  val rm = io.roundingMode
  val resultShifted = Wire(new RawFloat(expWidth, sigWidth + 3))
  resultShifted.sign := resultSign
  resultShifted.exp := resultExpShifted
  resultShifted.sig := resultSigShifted.head(sigWidth + 2) ## resultSigShifted.tail(sigWidth + 2).orR
  val tininess_rounder = Module(new TininessRounder(expWidth, sigWidth))
  tininess_rounder.io.in := resultShifted
  tininess_rounder.io.rm := rm
  val tininess = tininess_rounder.io.tininess
  val rounder = RoundingUnit(
    resultShifted.sig.tail(1), // hidden bit is not needed
    rm,
    resultShifted.sign,
    sigWidth - 1
  )
  val exp_rounded = rounder.io.cout + resultShifted.exp
  val sig_rounded = rounder.io.out
  /*------------------------------------------------------------------------
  Exception
  *------------------------------------------------------------------------*/
  val common_of = Mux(
    rounder.io.cout,
    resultShifted.exp === ((BigInt(1) << expWidth) - 2).U,
    resultShifted.exp === ((BigInt(1) << expWidth) - 1).U
  ) || expOverflow
  val common_ix = rounder.io.inexact | common_of
  val common_uf = tininess & common_ix

  val rmin = RoundingUnit.is_rmin(rm, resultShifted.sign)

  val of_exp = Mux(rmin,
    ((BigInt(1) << expWidth) - 2).U(expWidth.W),
    ((BigInt(1) << expWidth) - 1).U(expWidth.W)
  )
  /*------------------------------------------------------------------------
  Special Case
  *------------------------------------------------------------------------*/
  val hasNaN = decode_a.isNaN || decode_b.isNaN
  val hasSNaN = decode_a.isSNaN || decode_b.isSNaN
  val hasInf = decode_a.isInf || decode_b.isInf
  val special_case_happen = hasZero || hasNaN || hasInf

  val zero_mul_inf = hasZero && hasInf
  val nan_result = hasNaN || zero_mul_inf
  val special_iv = hasSNaN || zero_mul_inf
  val special_result = Mux(nan_result,
    Cat(0.U(1.W), Fill(expWidth + 1, 1.U(1.W)), 0.U((sigWidth - 2).W)), // default NaN
    Mux(hasInf,
      Cat(
        resultShifted.sign,
        ((BigInt(1) << expWidth) - 1).U(expWidth.W),
        0.U((sigWidth - 1).W)), // inf
      Cat(resultShifted.sign, 0.U((expWidth + sigWidth - 1).W)) // zero
    )
  )
  val special_fflags = Cat(special_iv, false.B, false.B, false.B, false.B)
  /*------------------------------------------------------------------------
  Result
  *------------------------------------------------------------------------*/
  val common_exp = Mux(
    common_of,
    of_exp,
    exp_rounded(expWidth - 1, 0)
  )
  val common_sig = Mux(
    common_of,
    Mux(rmin, Fill(sigWidth - 1, 1.U(1.W)), 0.U((sigWidth - 1).W)),
    sig_rounded
  )
  val common_result =
    Cat(resultShifted.sign, common_exp, common_sig)

  val common_fflags = Cat(false.B, false.B, common_of, common_uf, common_ix)

  io.result := Mux(special_case_happen, special_result, common_result)
  io.fflags := Mux(special_case_happen, special_fflags, common_fflags)
}

object FMULnoRound16 extends App {
  emitVerilog(new FMULnoRound(5, 11, 8, 24), Array("--target-dir", "generated"))
}