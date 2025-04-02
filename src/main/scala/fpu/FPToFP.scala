package fpu

import chisel3._
import chisel3.util._
import fpu.lza_utils._

class FPConverterIn(
                     val inExpWidth:   Int,
                     val inSigWidth:   Int
                   ) extends Bundle {
    val in = Input(UInt((inExpWidth + inSigWidth).W))
}

class FPConverterOut(
                     val outExpWidth:  Int,
                     val outSigWidth:  Int
                   ) extends Bundle {
  val result = Output(UInt((outExpWidth + outSigWidth).W))
}

class FPDownConverter(
                       inExpWidth:   Int,
                       inSigWidth:   Int,
                       outExpWidth:  Int,
                       outSigWidth:  Int
                     ) extends Module {
  val io = IO(new Bundle() {
    val in = Flipped(Decoupled(new FPConverterIn(inExpWidth, inSigWidth)))
    val out = Decoupled(new FPConverterOut(outExpWidth, outSigWidth))
  })
  val valid = io.in.valid
  val down_cvt = (inExpWidth > outExpWidth) && (inSigWidth > outSigWidth)
  require(down_cvt)

  val diffExp =
    FloatPoint.expBias(inExpWidth) - FloatPoint.expBias(outExpWidth)
  val fp_in = FloatPoint.fromUInt(io.in.bits.in, inExpWidth, inSigWidth)
  val decode = fp_in.decode
  val resultExpNoRound = fp_in.exp.zext - diffExp.S

  /*
      Normal path
   */
  val normal_sig = fp_in.sig.head(outSigWidth - 1)
  val normal_roundBit = fp_in.sig.tail(outSigWidth - 1).head(1).asBool
  val normal_stickyBit = fp_in.sig.tail(outSigWidth).orR

  val normal_rounder = Module(new RoundingUnit(outSigWidth - 1))
  normal_rounder.io.in := normal_sig
  normal_rounder.io.roundIn := normal_roundBit
  normal_rounder.io.stickyIn := normal_stickyBit
  normal_rounder.io.signIn := fp_in.sign

  val normal_sig_rounded = normal_rounder.io.out
  val normal_exp_rounded = Mux(normal_rounder.io.cout, resultExpNoRound + 1.S, resultExpNoRound)
  val expOverflow = Mux(
    normal_rounder.io.cout,
    resultExpNoRound > (FloatPoint.maxNormExp(outExpWidth) - 1).S,
    resultExpNoRound > FloatPoint.maxNormExp(outExpWidth).S
  )
  /*------------------------------------------------------------------------
  Subnormal Path
   ------------------------------------------------------------------------*/
  val shamt = (diffExp + 1).U(inExpWidth.W) - fp_in.exp
  val (subnormal_sig, shift_sticky) = ShiftRightJam(
    Cat(decode.expNotZero, fp_in.sig.head(outSigWidth)),
    shamt
  )
  val subnormal_sitckyBit = shift_sticky | normal_stickyBit
  val subnormal_rounder = Module(new RoundingUnit(outSigWidth - 1))
  subnormal_rounder.io.in := subnormal_sig.tail(1).head(outSigWidth - 1)
  subnormal_rounder.io.roundIn := subnormal_sig(0)
  subnormal_rounder.io.stickyIn := subnormal_sitckyBit
  subnormal_rounder.io.signIn := fp_in.sign
  val subnormal_sig_rounded = subnormal_rounder.io.out
  val subnormal_exp_rounded = Mux(subnormal_rounder.io.cout, 1.U, 0.U)

  val mayBeSubnormal = resultExpNoRound < 1.S
  /*------------------------------------------------------------------------
  Normal Result
   ------------------------------------------------------------------------*/
   val normal_of_exp = ((BigInt(1) << outExpWidth) - 1).U(outExpWidth.W)
  val normal_of_sig = 0.U((outSigWidth - 1).W)
  val common_exp = Mux1H(
    Seq(
      !mayBeSubnormal && expOverflow,
      !mayBeSubnormal && !expOverflow,
      mayBeSubnormal
    ),
    Seq(
      normal_of_exp,
      normal_exp_rounded(outExpWidth - 1, 0),
      subnormal_exp_rounded
    )
  )
  val common_sig = Mux1H(
    Seq(
      !mayBeSubnormal && expOverflow,
      !mayBeSubnormal && !expOverflow,
      mayBeSubnormal
    ),
    Seq(
      normal_of_sig,
      normal_sig_rounded,
      subnormal_sig_rounded
    )
  )

  /*------------------------------------------------------------------------
  Final Result
   ------------------------------------------------------------------------*/
  val special_case = decode.expIsOnes // NaN or Inf
  val result = Cat(
    !decode.isNaN && fp_in.sign,
    Mux1H(
      Seq(special_case, !special_case),
      Seq(~0.U(outExpWidth.W), common_exp)
    ),
    Mux1H(
      Seq(special_case, !special_case),
      Seq(
        Cat(decode.sigNotZero, 0.U((outSigWidth - 2).W)),
        common_sig
      )
    )
  )

  io.in.ready := io.out.ready
  io.out.valid := valid
  io.out.bits.result := result
}

object FPDownConverter {
  def apply(in: UInt,
            inExpWidth: Int, inSigWidth: Int,
            outExpWidth: Int, outSigWidth: Int) = {
    require((inExpWidth >= outExpWidth) && (inSigWidth >= outSigWidth))

    val fcvt = Module(new FPDownConverter(inExpWidth, inSigWidth, outExpWidth, outSigWidth))

    fcvt.io.in.valid := DontCare
    fcvt.io.in.bits.in := in
    fcvt.io.out.ready := DontCare

    (fcvt.io.out.bits, fcvt.io.out.valid, fcvt.io.in.ready)
  }
}

class FPUpConverter(
                     inExpWidth:   Int,
                     inSigWidth:  Int,
                     outExpWidth:  Int,
                     outSigWidth: Int
                   ) extends Module {
  val io = IO(new Bundle() {
    val in = Flipped(Decoupled(new FPConverterIn(inExpWidth, inSigWidth)))
    val out = Decoupled(new FPConverterOut(outExpWidth, outSigWidth))
  })
  val valid = io.in.valid
  val up_cvt = (inExpWidth < outExpWidth) && (inSigWidth < outSigWidth)
  require(up_cvt)
  val fp_in = FloatPoint.fromUInt(io.in.bits.in, inExpWidth, inSigWidth)
  val decode_in = fp_in.decode
  val diffExp =
    FloatPoint.expBias(outExpWidth) - FloatPoint.expBias(inExpWidth)
  val normal_sig = fp_in.sig
  val normal_exp = diffExp.U(outExpWidth.W) + fp_in.exp
  /*------------------------------------------------------------------------
  Subnormal Path
   ------------------------------------------------------------------------*/
  val subnormal_shamt = LZC(fp_in.sig)
  val subnormal_sig =
    Cat((fp_in.sig << subnormal_shamt)(inSigWidth - 3, 0), 0.U(1.W))
  val subnormal_exp = diffExp.U(outExpWidth.W) - subnormal_shamt
  /*------------------------------------------------------------------------
  Final Result
   ------------------------------------------------------------------------*/
  val result = Cat(
    !decode_in.isNaN && fp_in.sign,
    Mux1H(
      Seq(
        decode_in.expIsOnes,
        decode_in.isZero,
        decode_in.isSubnormal,
        !decode_in.expIsOnes && !decode_in.expIsZero
      ),
      Seq(
        ~0.U(outExpWidth.W),
        0.U(outExpWidth.W),
        subnormal_exp,
        normal_exp
      )
    ),
    Mux1H(
      Seq(
        decode_in.expIsOnes,
        decode_in.expIsZero,
        !decode_in.expIsOnes && !decode_in.expIsZero
      ),
      Seq(
        Cat(decode_in.sigNotZero, 0.U((outSigWidth - 2).W)),
        Cat(subnormal_sig, 0.U((outSigWidth - inSigWidth).W)),
        Cat(normal_sig, 0.U((outSigWidth - inSigWidth).W))
      )
    )
  )

  io.in.ready := io.out.ready
  io.out.valid := valid
  io.out.bits.result := result
}

object FPUpConverter {
  def apply(in: UInt,
            inExpWidth: Int, inSigWidth: Int,
            outExpWidth: Int, outSigWidth: Int) = {
    require((inExpWidth <= outExpWidth) && (inSigWidth <= outSigWidth))

    val fcvt = Module(new FPUpConverter(inExpWidth, inSigWidth, outExpWidth, outSigWidth))

    fcvt.io.in.valid := DontCare
    fcvt.io.in.bits.in := in
    fcvt.io.out.ready := DontCare

    (fcvt.io.out.bits, fcvt.io.out.valid, fcvt.io.in.ready)
  }
}
