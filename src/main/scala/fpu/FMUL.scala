package fpu

import chisel3._
import chisel3.util._
import fpu.lza_utils._

class FMULSrc (val expWidth: Int, val sigWidth: Int) extends Bundle {
  val a, b = Output(UInt((expWidth + sigWidth).W))
}

//precision rises after multiplication with no rounding
class FMULnoRound(val inExpWidth: Int, val inSigWidth: Int,
                  val outExpWidth: Int, val outSigWidth: Int) extends Module {
  val io = IO(new Bundle() {
    val in = Flipped(Decoupled(new FMULSrc(inExpWidth, inSigWidth)))
    val toFADD = Decoupled(Output(UInt((outExpWidth + outSigWidth).W)))
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
  val hasInf = decode_a.isInf || decode_b.isInf
  val special_case_happen = hasZero || hasNaN || hasInf

  val zero_mul_inf = hasZero && hasInf
  val nan_result = hasNaN || zero_mul_inf
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
  io.toFADD.bits := Mux(special_case_happen,
    special_result,
    Cat(resultSign, resultExpShifted, resultSigShifted.tail(1), 0.U((outSigWidth - 2 * inSigWidth).W))
  )
  io.in.ready := io.toFADD.ready
  io.toFADD.valid := valid
}

object FMULnoRound {
  def apply(a: UInt, b: UInt,
            inExpWidth: Int, inSigWidth: Int,
            outExpWidth: Int, outSigWidth: Int) = {
    val fmul = Module(new FMULnoRound(inExpWidth, inSigWidth, outExpWidth, outSigWidth))

    fmul.io.in.valid := DontCare
    fmul.io.in.bits.a := a
    fmul.io.in.bits.b := b
    fmul.io.toFADD.ready := DontCare

    (fmul.io.toFADD.bits, fmul.io.toFADD.valid, fmul.io.in.ready)
  }
}

object FMULnoRound16 extends App {
  emitVerilog(new FMULnoRound(5, 11, 8, 24), Array("--target-dir", "generated"))
}