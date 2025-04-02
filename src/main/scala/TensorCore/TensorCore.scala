package TensorCore

import chisel3._
import chisel3.util._

class octetSrc (bit: Int) extends Bundle {
  val threadgroup0 = new tgSrc(bit)
  val threadgroup4 = new tgSrc(bit)
}

class TensorCore (bit: Int) extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(new Bundle() {
      val octet0 = new octetSrc(bit)
      val octet1 = new octetSrc(bit)
      val ctrl = new tcCtrl()
      val decode = new Decode()
    }))
    val out = Decoupled(new Bundle() {
      val octet0 = new Bundle() {
        val threadgroup0_matrix_d = Output(new Matrix(bit))
        val threadgroup4_matrix_d = Output(new Matrix(bit))
      }
      val octet1 = new Bundle() {
        val threadgroup0_matrix_d = Output(new Matrix(bit))
        val threadgroup4_matrix_d = Output(new Matrix(bit))
      }
      val decode = new Decode()
    })
  })

  val ctrl = io.in.bits.ctrl
  val octet0 = io.in.bits.octet0
  val octet1 = io.in.bits.octet1
  val decode_in = io.in.bits.decode

  val matrix_d = Wire(Vec(2, Vec(2, new Matrix(bit))))

  val ot0 = Octet(bit,
    octet0.threadgroup0.matrix_a, octet0.threadgroup0.matrix_b, octet0.threadgroup0.matrix_c,
    octet0.threadgroup4.matrix_a, octet0.threadgroup4.matrix_b, octet0.threadgroup4.matrix_c,
    ctrl, io.in.valid, io.out.ready, Some(decode_in)
  )
  val ot1 = Octet(bit,
    octet1.threadgroup0.matrix_a, octet1.threadgroup0.matrix_b, octet1.threadgroup0.matrix_c,
    octet1.threadgroup4.matrix_a, octet1.threadgroup4.matrix_b, octet1.threadgroup4.matrix_c,
    ctrl, io.in.valid, io.out.ready
  )
  matrix_d(0) := VecInit(ot0._1, ot0._2)
  matrix_d(1) := VecInit(ot1._1, ot1._2)
  val ot_valid = ot0._3
  val ot_ready = ot0._4
  val decode_out = ot0._5

  io.in.ready := ot_ready(0)
  io.out.valid := ot_valid(0)
  io.out.bits.decode := decode_out
  io.out.bits.octet0.threadgroup0_matrix_d := matrix_d(0)(0)
  io.out.bits.octet0.threadgroup4_matrix_d := matrix_d(0)(1)
  io.out.bits.octet1.threadgroup0_matrix_d := matrix_d(1)(0)
  io.out.bits.octet1.threadgroup4_matrix_d := matrix_d(1)(1)
}

object TensorCore{
  def apply(bit: Int,
            ot0_tg0a: Matrix, ot0_tg0b: Matrix, ot0_tg0c: Matrix,
            ot0_tg4a: Matrix, ot0_tg4b: Matrix, ot0_tg4c: Matrix,
            ot1_tg0a: Matrix, ot1_tg0b: Matrix, ot1_tg0c: Matrix,
            ot1_tg4a: Matrix, ot1_tg4b: Matrix, ot1_tg4c: Matrix,
            ctrl: tcCtrl, pre_valid: Bool, post_ready: Bool,
            decode: Option[Decode] = None) = {
    val tc = Module(new TensorCore(bit))

    val decode_in = if(decode.isDefined) decode.get else DontCare

    tc.io.in.valid := pre_valid
    tc.io.in.bits.octet0.threadgroup0.matrix_a := ot0_tg0a
    tc.io.in.bits.octet0.threadgroup0.matrix_b := ot0_tg0b
    tc.io.in.bits.octet0.threadgroup0.matrix_c := ot0_tg0c

    tc.io.in.bits.octet0.threadgroup4.matrix_a := ot0_tg4a
    tc.io.in.bits.octet0.threadgroup4.matrix_b := ot0_tg4b
    tc.io.in.bits.octet0.threadgroup4.matrix_c := ot0_tg4c

    tc.io.in.bits.octet1.threadgroup0.matrix_a := ot1_tg0a
    tc.io.in.bits.octet1.threadgroup0.matrix_b := ot1_tg0b
    tc.io.in.bits.octet1.threadgroup0.matrix_c := ot1_tg0c

    tc.io.in.bits.octet1.threadgroup4.matrix_a := ot1_tg4a
    tc.io.in.bits.octet1.threadgroup4.matrix_b := ot1_tg4b
    tc.io.in.bits.octet1.threadgroup4.matrix_c := ot1_tg4c
    tc.io.in.bits.ctrl := ctrl
    tc.io.in.bits.decode := decode_in
    tc.io.out.ready := post_ready

    (tc.io.out.bits.octet0, tc.io.out.bits.octet1, tc.io.out.valid, tc.io.in.ready, tc.io.out.bits.decode)
  }
}

object TensorCore0 extends App {
  emitVerilog(new TensorCore(matsize), Array("--target-dir", "generated"))
}