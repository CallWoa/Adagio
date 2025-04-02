package TensorCore

import chisel3._
import chisel3.util._

class tgSrc (bit: Int) extends Bundle{
  val matrix_a = Output(new Matrix(bit))
  val matrix_b = Output(new Matrix(bit))
  val matrix_c = Output(new Matrix(bit))
}

class Octet (bit: Int) extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(new Bundle() {
      val threadgroup0 = new tgSrc(bit)
      val threadgroup4 = new tgSrc(bit)
      val ctrl = new tcCtrl()
      val decode = new Decode()
    }))
    val out = Decoupled(new Bundle() {
      val threadgroup0_matrix_d = Output(new Matrix(bit))
      val threadgroup4_matrix_d = Output(new Matrix(bit))
      val decode = new Decode()
    })
  })

  val matBSel = io.in.bits.ctrl.matBSel

  val tg0_matrix_a = io.in.bits.threadgroup0.matrix_a
  val tg0_matrix_b = io.in.bits.threadgroup0.matrix_b
  val tg0_matrix_c = io.in.bits.threadgroup0.matrix_c
  val tg4_matrix_a = io.in.bits.threadgroup4.matrix_a
  val tg4_matrix_b = io.in.bits.threadgroup4.matrix_b
  val tg4_matrix_c = io.in.bits.threadgroup4.matrix_c
  val (tg0_matrix_d, tg0_valid, tg0_ready, tg0_decode) = Threadgroup(bit,
    tg0_matrix_a, Mux(matBSel, tg4_matrix_b, tg0_matrix_b), tg0_matrix_c,
    io.in.bits.ctrl, io.in.valid, io.out.ready, Some(io.in.bits.decode))
  val (tg4_matrix_d, tg4_valid, tg4_ready, tg4_decode) = Threadgroup(bit,
    tg4_matrix_a, Mux(matBSel, tg4_matrix_b, tg0_matrix_b), tg4_matrix_c,
    io.in.bits.ctrl, io.in.valid, io.out.ready)

  io.in.ready := tg0_ready
  io.out.valid := tg0_valid
  io.out.bits.threadgroup0_matrix_d := tg0_matrix_d
  io.out.bits.threadgroup4_matrix_d := tg4_matrix_d
  io.out.bits.decode := tg0_decode
}

object Octet{
  def apply(bit: Int,
            tg0a: Matrix, tg0b: Matrix, tg0c: Matrix,
            tg4a: Matrix, tg4b: Matrix, tg4c: Matrix,
            ctrl: tcCtrl, pre_valid: Bool, post_ready: Bool,
            decode: Option[Decode] = None) = {
    val ot = Module(new Octet(bit))
    val decode_in = if(decode.isDefined) decode.get else DontCare

    ot.io.in.valid := pre_valid
    ot.io.in.bits.threadgroup0.matrix_a := tg0a
    ot.io.in.bits.threadgroup0.matrix_b := tg0b
    ot.io.in.bits.threadgroup0.matrix_c := tg0c
    ot.io.in.bits.threadgroup4.matrix_a := tg4a
    ot.io.in.bits.threadgroup4.matrix_b := tg4b
    ot.io.in.bits.threadgroup4.matrix_c := tg4c
    ot.io.in.bits.ctrl := ctrl
    ot.io.in.bits.decode := decode_in
    ot.io.out.ready := post_ready

    (ot.io.out.bits.threadgroup0_matrix_d, ot.io.out.bits.threadgroup4_matrix_d, ot.io.out.valid, ot.io.in.ready, ot.io.out.bits.decode)
  }
}

object Octet0 extends App {
  emitVerilog(new Octet(matsize), Array("--target-dir", "generated"))
}