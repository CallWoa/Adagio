package TensorCore

import chisel3._
import chisel3.util._

class Threadgroup(bit: Int) extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(new Bundle() {
      val matrix_a = Output(new Matrix(bit))
      val matrix_b = Output(new Matrix(bit))
      val matrix_c = Output(new Matrix(bit))
      val ctrl = Output(new tcCtrl())
      val decode = Output(new Decode())
    }))
    val out = Decoupled(new Bundle() {
      val matrix_d = Output(new Matrix(bit))
      val decode = Output(new Decode())
    })
  })

  val flush = io.in.bits.ctrl.flush
  val decode = io.in.bits.decode
  val matASel = io.in.bits.ctrl.matASel
  val mixPc = io.in.bits.ctrl.mixPcMode
  val matrix_a = io.in.bits.matrix_a
  val matrix_b = io.in.bits.matrix_b
  val matrix_c = io.in.bits.matrix_c

  val dp_in_valid = RegInit(false.B)
  val tg_out_valid = RegInit(false.B)
  val dp_in_va = Reg(Vec(4, UInt(srcType.len.W)))
  val dp_in_c =  Reg(Vec(4, UInt(desType.len.W)))
  val dp_in_rowtag = Reg(UInt(2.W))
  val matrix_d_buffer = Reg(Vec(4, UInt((k_conf * fp16.len).W)))
  val decode_out_buffer = Reg(new Decode)

  val dp_out_ctrl = Wire(new DP_CtrlFlow)
  val dpResult = Wire(Vec(k_conf, UInt(fp32.len.W)))
  val dp_out_valid = Wire(Bool())
  val dp_in_ready = Wire(Bool())
  val d_buffer_ready = Wire(Bool())

  val s0 :: s1 :: s2 :: s3 :: s4 :: Nil = Enum(5)
  val state = RegInit(s0)

  when(((state === s0) || (state === s2 && mixPc) || (state === s4 && !mixPc)) && io.in.fire){
    state := s1
    dp_in_va := Mux(matASel, matrix_a.readvec(2),  matrix_a.readvec(0))
    dp_in_c := Mux(mixPc, matrix_c.readvec(0, Some(fp32), Some(2)), box(matrix_c.readvec(0), k_conf))
    dp_in_rowtag := 0.U
    dp_in_valid := true.B
  }.elsewhen(state === s1 && dp_in_ready) {
    state := s2
    dp_in_va := Mux(matASel, matrix_a.readvec(3),  matrix_a.readvec(1))
    dp_in_c := Mux(mixPc, matrix_c.readvec(1, Some(fp32), Some(2)), box(matrix_c.readvec(1), k_conf))
    dp_in_rowtag := 1.U
  } .elsewhen(state === s2 && dp_in_ready) {
    when(!mixPc) {
      state := s3
      dp_in_va := matrix_a.readvec(2)
      dp_in_c := box(matrix_c.readvec(2), k_conf)
      dp_in_rowtag := 2.U
    }.otherwise {
      state := s0
      dp_in_valid := false.B
    }
  } .elsewhen(state === s3 && dp_in_ready) {
    state := s4
    dp_in_va := matrix_a.readvec(3)
    dp_in_c := box(matrix_c.readvec(3), k_conf)
    dp_in_rowtag := 3.U
  } .elsewhen(state === s4 && dp_in_ready) {
      state := s0
      dp_in_valid := false.B
  }.otherwise {
    state := state
    dp_in_va := dp_in_va
    dp_in_c := dp_in_c
    dp_in_rowtag := dp_in_rowtag
  }

  when(flush){
    state := s0
    dp_in_valid := false.B
  }

  for (y <- 0 until k_conf) {
    val dp_in_vb = RegNext(matrix_b).readvec(y)
    val dp_in_ctrl = Wire(new DP_CtrlFlow)
    dp_in_ctrl.mixPc := RegNext(mixPc)
    if(y == 0){
      dp_in_ctrl.decode := RegNext(decode)
      dp_in_ctrl.rowtag := dp_in_rowtag
    }else{
      dp_in_ctrl.decode := DontCare
      dp_in_ctrl.rowtag := DontCare
    }
    val dp = DotProdUnit(dp_in_va, dp_in_vb, dp_in_c(y), dp_in_ctrl,
      j_conf, srcType.expWidth, srcType.sigWidth, desType.expWidth, desType.sigWidth,
      dp_in_valid, d_buffer_ready, flush
    )
    dpResult(y) := dp._1
    if(y == 0){
      dp_out_valid := dp._2
      dp_in_ready := dp._3
      dp_out_ctrl := dp._4
    }
  }

  val result_fp16 = Cat((0 to 3).reverse.map(n => dpResult(n).tail(16)))
  val result_fp32_lo = Cat(dpResult(1), dpResult(0))
  val result_fp32_hi = Cat(dpResult(3), dpResult(2))

  when(io.out.ready) {
    tg_out_valid := false.B
  }
  when(dp_out_valid && d_buffer_ready){
    switch(dp_out_ctrl.rowtag) {
      is(0.U) {
        decode_out_buffer := dp_out_ctrl.decode
        when(dp_out_ctrl.mixPc) {
          matrix_d_buffer(0) := result_fp32_lo
          matrix_d_buffer(1) := result_fp32_hi
        }.otherwise {
          matrix_d_buffer(0) := result_fp16
        }
      }
      is(1.U) {
        when(dp_out_ctrl.mixPc) {
          matrix_d_buffer(2) := result_fp32_lo
          matrix_d_buffer(3) := result_fp32_hi
          tg_out_valid := true.B
        }.otherwise {
          matrix_d_buffer(1) := result_fp16
        }
      }
      is(2.U) {
        matrix_d_buffer(2) := result_fp16
      }
      is(3.U) {
        matrix_d_buffer(3) := result_fp16
        tg_out_valid := true.B
      }
    }
  }
  when(flush){
    tg_out_valid := false.B
  }
  d_buffer_ready := !tg_out_valid || io.out.ready

  io.out.bits.matrix_d.data := Cat(matrix_d_buffer.reverse)
  io.out.bits.decode := decode_out_buffer
  io.out.valid := tg_out_valid
  io.in.ready := !dp_in_valid | (dp_in_ready && ((state === s2) && mixPc) || (state === s4))
}

object Threadgroup{
  def apply(bit: Int, a: Matrix, b: Matrix, c: Matrix, ctrl: tcCtrl,
            pre_valid: Bool, post_ready: Bool, decode: Option[Decode] = None) = {
    val tg = Module(new Threadgroup(bit))

    val decode_in = if(decode.isDefined) decode.get else DontCare

    tg.io.in.valid := pre_valid
    tg.io.in.bits.matrix_a := a
    tg.io.in.bits.matrix_b := b
    tg.io.in.bits.matrix_c := c
    tg.io.in.bits.ctrl := ctrl
    tg.io.in.bits.decode := decode_in
    tg.io.out.ready := post_ready

    (tg.io.out.bits.matrix_d, tg.io.out.valid, tg.io.in.ready, tg.io.out.bits.decode)
  }
}

object threadgroup0 extends App {
  emitVerilog(new Threadgroup(matsize), Array("--target-dir", "generated"))
}