package TensorCore

import chisel3._
import chisel3.util._
import fpu._

class DP_CtrlFlow extends Bundle{
  val mixPc = Bool()
  val rowtag = UInt(2.W)
  val decode = new Decode
}

//nelem : number of elements in a vector
class DotProdUnit (
                    nelem: Int,
                    inExpWidth: Int, inSigWidth: Int,
                    outExpWidth: Int, outSigWidth: Int,
                  ) extends Module
{
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(new Bundle() {
      val vec_a = Output(Vec(nelem, UInt((inExpWidth + inSigWidth).W)))
      val vec_b = Output(Vec(nelem, UInt((inExpWidth + inSigWidth).W)))
      val c = Output(UInt((outExpWidth + outSigWidth).W))
      val flush = Output(Bool())
      val ctrl = Output(new DP_CtrlFlow)
    }))
    val out = Decoupled(new Bundle() {
      val result = Output(UInt((outExpWidth + outSigWidth).W))
      val ctrl = Output(new DP_CtrlFlow)
    })
  })
  require(nelem >= 4)
  require((outExpWidth >= inExpWidth) && (outSigWidth >= inSigWidth))
  val vec_a = io.in.bits.vec_a
  val vec_b = io.in.bits.vec_b
  val c = io.in.bits.c
  val ctrl = io.in.bits.ctrl
  val flush = io.in.bits.flush
  /*------------------------------------------------------------------------
  Stage1: FMUL / FCVT
  *------------------------------------------------------------------------*/
  val fmulResult = Wire(Vec(nelem + 1, UInt((outExpWidth + outSigWidth).W)))
  val s2_ready = Wire(Bool())
  for(i <- 0 until nelem){
    val fmul = FMULnoRound(vec_a(i), vec_b(i), inExpWidth, inSigWidth, outExpWidth, outSigWidth)
    fmulResult(i) := fmul._1
  }

  val fcvt = FPUpConverter(unbox(c), inExpWidth, inSigWidth, outExpWidth, outSigWidth)
  fmulResult(nelem) := Mux(ctrl.mixPc, c, fcvt._1.result)
  io.in.ready := s2_ready
  /*------------------------------------------------------------------------
  Stage2 - StageX： adder Tree
  *------------------------------------------------------------------------*/
  val fs_ready = Wire(Bool())
  def addTree(width: Int, preResult: Vec[UInt], preValid: Bool, preReady: Bool, pre_ctrl: DP_CtrlFlow):(UInt, Bool, DP_CtrlFlow) = {
    require(width >= 2)
    class pre_data_bundle extends Bundle{
      val res = Output(Vec(width, UInt((outExpWidth + outSigWidth).W)))
      val ctrl = Output(new DP_CtrlFlow)
    }
    val pre_data = Wire(new pre_data_bundle)
    pre_data.res := preResult
    pre_data.ctrl := pre_ctrl
    val out_ready = Wire(Bool())
    val pipeline = PipelineReg(new pre_data_bundle, pre_data, preValid, out_ready, flush)
    val ctrl_this = pipeline._1.ctrl
    val out_valid = pipeline._2
    preReady := pipeline._3
    if(width == 2){
      out_ready := fs_ready
      val a = pipeline._1.res(0)
      val b = pipeline._1.res(1)
      val final_fadd = FADD(a, b, outExpWidth, outSigWidth)
      (final_fadd, out_valid, ctrl_this)
    }else{
      val fu_num = width / 2
      val nextWidth = width - fu_num
      val addResult = Wire(Vec(nextWidth, UInt((outExpWidth + outSigWidth).W)))
      for (i <- 0 to fu_num) {
        if (i < width / 2) {
          val a = pipeline._1.res(2 * i)
          val b = pipeline._1.res(2 * i + 1)
          addResult(i) := FADD(a, b, outExpWidth, outSigWidth)
        } else if (width % 2 == 1) {
          addResult(i) := pipeline._1.res(width - 1)
        } else {}
      }
      addTree(nextWidth, addResult, out_valid, out_ready, ctrl_this)
    }
  }

  val (atResult, atValid, ctrl_sx) = addTree(nelem + 1, fmulResult, io.in.valid, s2_ready, ctrl)
  /*------------------------------------------------------------------------
  Final Stage： FCVT in FP16 Mode
  *------------------------------------------------------------------------*/
  class sx_data_bundle extends Bundle{
    val res = Output(UInt((outExpWidth + outSigWidth).W))
    val ctrl = Output(new DP_CtrlFlow)
  }
  val data_sx = Wire(new sx_data_bundle)
  data_sx.res := atResult
  data_sx.ctrl := ctrl_sx
  val pipeline_sx_fs = PipelineReg(new sx_data_bundle, data_sx, atValid, io.out.ready, flush)
  val res_final = pipeline_sx_fs._1.res
  val ctrl_final = pipeline_sx_fs._1.ctrl
  val fs_valid = pipeline_sx_fs._2
  fs_ready := pipeline_sx_fs._3

  val finalfcvt = FPDownConverter(res_final, outExpWidth, outSigWidth, inExpWidth, inSigWidth)

  io.out.bits.result := Mux(ctrl_final.mixPc, res_final, box(finalfcvt._1.result))
  io.out.bits.ctrl := ctrl_final
  io.out.valid := fs_valid
}

object DotProdUnit {
  def apply(a: Vec[UInt], b: Vec[UInt], c: UInt, dp_ctrl: DP_CtrlFlow,
            nelem: Int, inExpWidth: Int, inSigWidth: Int, outExpWidth: Int, outSigWidth: Int,
            pre_valid: Bool, post_ready: Bool, flush: Bool) = {
    val dp = Module(new DotProdUnit(nelem, inExpWidth, inSigWidth, outExpWidth, outSigWidth))

    dp.io.in.valid := pre_valid
    dp.io.in.bits.vec_a := a
    dp.io.in.bits.vec_b := b
    dp.io.in.bits.c := c
    dp.io.in.bits.ctrl := dp_ctrl
    dp.io.in.bits.flush := flush
    dp.io.out.ready := post_ready

    (dp.io.out.bits.result, dp.io.out.valid, dp.io.in.ready, dp.io.out.bits.ctrl)
  }
}

object FEDP extends App {
  emitVerilog(new DotProdUnit(4, 5, 11, 8, 24), Array("--target-dir", "generated"))
}