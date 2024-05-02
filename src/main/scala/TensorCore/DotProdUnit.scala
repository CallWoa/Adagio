package TensorCore

import chisel3._
import chisel3.util._
import fpu._

class DotProdUnitIn (nelem: Int,
                     inExpWidth: Int, inSigWidth: Int,
                     outExpWidth: Int, outSigWidth: Int) extends Bundle {
  val vec_a = Output(Vec(nelem, UInt((inExpWidth + inSigWidth).W)))
  val vec_b = Output(Vec(nelem, UInt((inExpWidth + inSigWidth).W)))
  val c = Output(UInt((outExpWidth + outSigWidth).W))
  val mixPc = Output(Bool())
  val roundingMode = Output(UInt(3.W))
  val rowtag = Output(UInt(2.W))
}

class DotProdUnitOut (expWidth: Int, sigWidth: Int) extends Bundle {
  val fflags = Output(UInt(5.W))
  val result = Output(UInt((expWidth + sigWidth).W))
  val mixPc = Output(Bool())
  val rowtag = Output(UInt(2.W))
}

//nelem : number of elements in a vector
class DotProdUnit (nelem: Int,
                   inExpWidth: Int, inSigWidth: Int,
                   outExpWidth: Int, outSigWidth: Int) extends Module
{
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(new DotProdUnitIn(nelem, inExpWidth, inSigWidth, outExpWidth, outSigWidth)))
    val out = Decoupled(new DotProdUnitOut(outExpWidth, outSigWidth))
  })
  require(nelem >= 4)
  require((outExpWidth >= inExpWidth) && (outSigWidth >= inSigWidth))
  val rm_s1 = io.in.bits.roundingMode
  val mixPc_s1 = io.in.bits.mixPc
  val rowtag_s1 = io.in.bits.rowtag
  val vec_a = io.in.bits.vec_a
  val vec_b = io.in.bits.vec_b
  val c = io.in.bits.c
  /*------------------------------------------------------------------------
  Stage1: FMUL / FCVT
  *------------------------------------------------------------------------*/
  val fmulResult = Wire(Vec(nelem, new FMULToFADD(outExpWidth, outSigWidth)))
  val fmulValid, fmulReady = Wire(Vec(nelem, Bool()))
  val fu_num = nelem / 2
  val nextNelem = nelem - fu_num + 1
  val firstFaddReady = Wire(Vec(fu_num, Bool()))
  for(i <- 0 until nelem){
    val fmul = FMULnoRound(vec_a(i), vec_b(i), inExpWidth, inSigWidth, outExpWidth, outSigWidth, io.in.valid, firstFaddReady.reduce(_&&_))
    fmulResult(i) := fmul._1
    fmulValid(i) := fmul._2
    fmulReady(i) := fmul._3
  }

  val fcvt = FPUpConverter(unbox(c), inExpWidth, inSigWidth, outExpWidth, outSigWidth, io.in.valid, firstFaddReady.reduce(_&&_))
  val c_fp32 = Mux(mixPc_s1, c, fcvt._1.result)
//  val fcvtValid = fcvt._2
  val fcvtReady = fcvt._3

  io.in.ready := fmulReady.reduce(_&&_) && fcvtReady
  /*------------------------------------------------------------------------
  Stage2: The first layer of adders
  *------------------------------------------------------------------------*/
  val s1_handshaked_s2 = fmulValid.reduce(_&&_) && firstFaddReady.reduce(_&&_)
  val mixPc_s2 = RegEnable(mixPc_s1, s1_handshaked_s2)
  val rm_s2 = RegEnable(rm_s1, s1_handshaked_s2)
  val rowtag_s2 = RegEnable(rowtag_s1, s1_handshaked_s2)
  val firstAddResult = Wire(Vec(nextNelem, UInt((outExpWidth + outSigWidth).W)))
  val firstFaddValid = Wire(Vec(fu_num, Bool()))
  val firstPostReady = Wire(Vec(nextNelem/2, Bool()))
  for (i <- 0 to fu_num) {
    if (i < fu_num) {
      val a = fmulResult(2 * i).fp_prod
      val b = fmulResult(2 * i + 1).fp_prod
      val a_inter_flags = fmulResult(2 * i).inter_flags
      val b_inter_flags = fmulResult(2 * i + 1).inter_flags
      val prevalid = fmulValid(2 * i) && fmulValid(2 * i + 1)
      val firstfadd = FADD(a, b, rm_s2, outExpWidth, outSigWidth,
        prevalid, firstPostReady.reduce(_&&_),
        true.B, true.B, Some(a_inter_flags), Some(b_inter_flags))
      firstAddResult(i) := firstfadd._1
      firstFaddValid(i) := firstfadd._3
      firstFaddReady(i) := firstfadd._4
    } else if (nelem % 2 == 1) {
      firstAddResult(i) := RegEnable(fmulResult(nelem - 1).fp_prod, s1_handshaked_s2)
    }
  }
  firstAddResult(nextNelem - 1) := RegEnable(c_fp32, s1_handshaked_s2)
  /*------------------------------------------------------------------------
  Remaining Stage： adder Tree
  *------------------------------------------------------------------------*/
  def addTree(width: Int, preResult: Vec[UInt], preValid: Bool, preReady: Vec[Bool], preRM: UInt, preMixPc: Bool, preRowtag: UInt) : (UInt, UInt, Bool, UInt, Bool, UInt) = {
    require(width >= 2)
    val prehandshaked = preValid && preReady.reduce(_ && _)
    val rm_this = RegEnable(preRM, prehandshaked)
    val mixPc_this = RegEnable(preMixPc, prehandshaked)
    val rowtag_this = RegEnable(preRowtag, prehandshaked)
    if(width == 2){
      val fadd = FADD(preResult(0), preResult(1), rm_this, outExpWidth, outSigWidth, preValid, io.out.ready, false.B, false.B)
      preReady(0) := fadd._4
      (fadd._1, fadd._2, fadd._3, rm_this, mixPc_this, rowtag_this)
    }else{
      val fu_num = width / 2
      val nextWidth = width - fu_num
      val addResult = Wire(Vec(nextWidth, UInt((outExpWidth + outSigWidth).W)))
      val postValid = Wire(Vec(fu_num, Bool()))
      val postReady = Wire(Vec(nextWidth / 2, Bool()))
      for (i <- 0 to width / 2) {
        if (i < width / 2) {
          val a = preResult(2 * i)
          val b = preResult(2 * i + 1)
          val fadd = FADD(a, b, rm_this, outExpWidth, outSigWidth, preValid, postReady.reduce(_&&_), false.B, false.B)
          addResult(i) := fadd._1
          postValid(i) := fadd._3
          preReady(i) := fadd._4
        } else if (width % 2 == 1) {
          addResult(i) := RegEnable(preResult(width - 1), prehandshaked)
        } else {}
      }
      if (nextWidth == 2) {
        val posthandshaked = postValid.reduce(_&&_) && postReady.reduce(_ && _)
        val rm_final = RegEnable(rm_this, posthandshaked)
        val mixPc_final = RegEnable(mixPc_this, posthandshaked)
        val rowtag_final = RegEnable(rowtag_this, posthandshaked)
        val fadd = FADD(addResult(0), addResult(1), rm_final, outExpWidth, outSigWidth, postValid.reduce(_&&_), io.out.ready, false.B, false.B)
        postReady(0) := fadd._4
        (fadd._1, fadd._2, fadd._3, rm_final, mixPc_final, rowtag_final)
      } else addTree(nextWidth, addResult, postValid.reduce(_&&_), postReady, rm_this, mixPc_this, rowtag_this)
    }
  }

  val (atResult, atflags, atValid, rm_sx, mixPc_sx, rowtag_sx) = addTree(nextNelem, firstAddResult, firstFaddValid.reduce(_&&_), firstPostReady, rm_s2, mixPc_s2, rowtag_s2)
  /*------------------------------------------------------------------------
  Extra Stage： final FCVT
  *------------------------------------------------------------------------*/
  val sx_handshaked_es = atValid && io.out.ready

  val rm_es = RegEnable(rm_sx, sx_handshaked_es)
  val mixPc_es = RegEnable(mixPc_sx, sx_handshaked_es)
  val rowtag_es = RegEnable(rowtag_sx, sx_handshaked_es)
  val atResult_es = RegEnable(atResult, sx_handshaked_es)
  val atflags_es = RegEnable(atflags, sx_handshaked_es)

  val esValid = RegInit(false.B)
  when(io.out.fire()){
    esValid := false.B
  }
  when(sx_handshaked_es){
    esValid := true.B
  }

  val finalfcvt = FPDownConverter(atResult, rm_es, outExpWidth, outSigWidth, inExpWidth, inSigWidth, atValid && !mixPc_sx, io.out.ready)
  io.out.bits.result := Mux(mixPc_es, atResult_es, box(finalfcvt._1.result))
  io.out.bits.fflags := atflags_es | finalfcvt._1.fflags
  io.out.bits.mixPc := mixPc_es
  io.out.bits.rowtag := rowtag_es
  io.out.valid := finalfcvt._2 || (mixPc_es && esValid)

}

object DotProdUnit {
  def apply(a: Vec[UInt], b: Vec[UInt], c: UInt, mixPc: Bool, rm: UInt, rowtag: UInt,
            nelem: Int, inExpWidth: Int, inSigWidth: Int, outExpWidth: Int, outSigWidth: Int,
            pre_valid: Bool, post_ready: Bool) = {
    val dp = Module(new DotProdUnit(nelem, inExpWidth, inSigWidth, outExpWidth, outSigWidth))

//    val prehandshaked = pre_valid && dp.io.in.ready
//    val valid = RegInit(false.B)
//    when(dp.io.out.valid && post_ready) {
//      valid := false.B
//    }
//    when(prehandshaked) {
//      valid := true.B
//    }

    dp.io.in.valid := pre_valid
    dp.io.in.bits.vec_a := a
    dp.io.in.bits.vec_b := b
    dp.io.in.bits.c := c
    dp.io.in.bits.mixPc := mixPc
    dp.io.in.bits.roundingMode := rm
    dp.io.in.bits.rowtag := rowtag
    dp.io.out.ready := post_ready

    (dp.io.out.bits.result, dp.io.out.bits.fflags, dp.io.out.valid, dp.io.in.ready, dp.io.out.bits.mixPc, dp.io.out.bits.rowtag)
  }
}

object FEDP extends App {
  emitVerilog(new DotProdUnit(4, 5, 11, 8, 24), Array("--target-dir", "generated"))
}