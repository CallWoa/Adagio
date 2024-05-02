package TensorCore

import chisel3._
import chisel3.util._

class octetSrc (bit: Int) extends Bundle {
  val threadgroup0 = new tgSrc(bit)
  val threadgroup4 = new tgSrc(bit)
}
class octetCtrl() extends Bundle {
  val matBSel = Output(Bool()) //false: choose tg0; true: choose tg4
  val mixPcMode = Output(Bool())
  val roundingMode = Output(UInt(3.W))
}
class tensorCoreIn (bit: Int) extends Bundle {
  val octet0 = new octetSrc(bit)
  val octet1 = new octetSrc(bit)
  val ctrl = new octetCtrl()
}
class tensorCoreOut (bit: Int) extends Bundle {
  val octet0 = new octetOut(bit)
  val octet1 = new octetOut(bit)
}

class TensorCore (bit: Int) extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(new tensorCoreIn(bit)))
    val out = Decoupled(new tensorCoreOut(bit))
  })

  val rm = io.in.bits.ctrl.roundingMode
  val mixPc = io.in.bits.ctrl.mixPcMode
  val matBSel = io.in.bits.ctrl.matBSel

  val octet0 = io.in.bits.octet0
  val octet1 = io.in.bits.octet1
  val octet = VecInit(octet0, octet1)

  val matrix_d = Wire(Vec(2, Vec(2, new Matrix(bit))))
  val ot_valid = Wire(Vec(2, Bool()))
  val ot_ready = Wire(Vec(2, Bool()))
  for(i <- 0 to 1){
    val ot = Octet(bit, octet(i).threadgroup0.matrix_a, octet(i).threadgroup0.matrix_b, octet(i).threadgroup0.matrix_c,
      octet(i).threadgroup4.matrix_a, octet(i).threadgroup4.matrix_b, octet(i).threadgroup4.matrix_c,
      rm, mixPc, matBSel, io.in.valid, io.out.ready)
    matrix_d(i) := VecInit(ot._1, ot._2)
    ot_valid(i) := ot._3
    ot_ready(i) := ot._4
  }

  io.in.ready := ot_ready.reduce((_&&_))
  io.out.valid := ot_valid.reduce(_&&_)
  io.out.bits.octet0.threadgroup0.matrix_d := matrix_d(0)(0)
  io.out.bits.octet0.threadgroup4.matrix_d := matrix_d(0)(1)
  io.out.bits.octet1.threadgroup0.matrix_d := matrix_d(1)(0)
  io.out.bits.octet1.threadgroup4.matrix_d := matrix_d(1)(1)
}

object TensorCore{
  def apply(bit: Int,
            ot0_tg0a: Matrix, ot0_tg0b: Matrix, ot0_tg0c: Matrix,
            ot0_tg4a: Matrix, ot0_tg4b: Matrix, ot0_tg4c: Matrix,
            ot1_tg0a: Matrix, ot1_tg0b: Matrix, ot1_tg0c: Matrix,
            ot1_tg4a: Matrix, ot1_tg4b: Matrix, ot1_tg4c: Matrix,
            rm: UInt, mixPc :Bool, matBSel: Bool,
            pre_valid: Bool, post_ready: Bool) = {
    val tc = Module(new TensorCore(bit))

//    val prehandshaked = pre_valid && tc.io.in.ready
//    val valid = RegInit(false.B)
//    when(tc.io.out.valid && post_ready) {
//      valid := false.B
//    }
//    when(prehandshaked) {
//      valid := true.B
//    }

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
    tc.io.in.bits.ctrl.matBSel := matBSel
    tc.io.in.bits.ctrl.mixPcMode := mixPc
    tc.io.in.bits.ctrl.roundingMode := rm
    tc.io.out.ready := post_ready

    (tc.io.out.bits.octet0, tc.io.out.bits.octet1, tc.io.out.valid, tc.io.in.ready)
  }
}

object TensorCore0 extends App {
  emitVerilog(new TensorCore(matsize), Array("--target-dir", "generated"))
}