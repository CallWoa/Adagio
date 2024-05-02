package TensorCore

import chisel3._
import chisel3.util._

class tgSrc (bit: Int) extends Bundle{
  val matrix_a = Output(new Matrix(bit))
  val matrix_b = Output(new Matrix(bit))
  val matrix_c = Output(new Matrix(bit))
}

class octetIn (bit: Int) extends Bundle {
  val threadgroup0 = new tgSrc(bit)
  val threadgroup4 = new tgSrc(bit)
  val matBSel = Output(Bool()) //false: choose tg0; true: choose tg4
  val mixPcMode = Output(Bool())
  val roundingMode = Output(UInt(3.W))
}

class octetOut (bit: Int) extends Bundle {
  val threadgroup0 = new threadgroupOut(bit)
  val threadgroup4 = new threadgroupOut(bit)
}

class Octet (bit: Int) extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(new octetIn(bit)))
    val out = Decoupled(new octetOut(bit))
  })

  val rm = io.in.bits.roundingMode
  val mixPc = io.in.bits.mixPcMode
  val matBSel = io.in.bits.matBSel

  val tg0_matrix_a = io.in.bits.threadgroup0.matrix_a
  val tg0_matrix_b = io.in.bits.threadgroup0.matrix_b
  val tg0_matrix_c = io.in.bits.threadgroup0.matrix_c
  val tg4_matrix_a = io.in.bits.threadgroup4.matrix_a
  val tg4_matrix_b = io.in.bits.threadgroup4.matrix_b
  val tg4_matrix_c = io.in.bits.threadgroup4.matrix_c
  val (tg0_matrix_d, tg0_valid, tg0_ready) = Threadgroup(bit,
    tg0_matrix_a, Mux(matBSel, tg4_matrix_b, tg0_matrix_b), tg0_matrix_c,
    rm, mixPc, io.in.valid, io.out.ready)
  val (tg4_matrix_d, tg4_valid, tg4_ready) = Threadgroup(bit,
    tg4_matrix_a, Mux(matBSel, tg4_matrix_b, tg0_matrix_b), tg4_matrix_c,
    rm, mixPc, io.in.valid, io.out.ready)
//  val (tg0_matrix_d, tg0_valid, tg0_ready) = Threadgroup(bit,
//    tg0_matrix_a, tg0_matrix_b, tg0_matrix_c,
//    rm, mixPc, io.in.valid, io.out.ready)
//  val (tg4_matrix_d, tg4_valid, tg4_ready) = Threadgroup(bit,
//    tg4_matrix_a, tg4_matrix_b, tg4_matrix_c,
//    rm, mixPc, io.in.valid, io.out.ready)

  io.in.ready := tg0_ready && tg4_ready
  io.out.valid := tg0_valid && tg4_valid
  io.out.bits.threadgroup0.matrix_d := tg0_matrix_d
  io.out.bits.threadgroup4.matrix_d := tg4_matrix_d
}

object Octet{
  def apply(bit: Int,
            tg0a: Matrix, tg0b: Matrix, tg0c: Matrix,
            tg4a: Matrix, tg4b: Matrix, tg4c: Matrix,
            rm: UInt, mixPc: Bool, matBSel: Bool,
            pre_valid: Bool, post_ready: Bool) = {
    val ot = Module(new Octet(bit))

//    val prehandshaked = pre_valid && ot.io.in.ready
//    val valid = RegInit(false.B)
//    when(ot.io.out.valid && post_ready) {
//      valid := false.B
//    }
//    when(prehandshaked) {
//      valid := true.B
//    }

    ot.io.in.valid := pre_valid
    ot.io.in.bits.threadgroup0.matrix_a := tg0a
    ot.io.in.bits.threadgroup0.matrix_b := tg0b
    ot.io.in.bits.threadgroup0.matrix_c := tg0c
    ot.io.in.bits.threadgroup4.matrix_a := tg4a
    ot.io.in.bits.threadgroup4.matrix_b := tg4b
    ot.io.in.bits.threadgroup4.matrix_c := tg4c
    ot.io.in.bits.matBSel := matBSel
    ot.io.in.bits.mixPcMode := mixPc
    ot.io.in.bits.roundingMode := rm
    ot.io.out.ready := post_ready

    (ot.io.out.bits.threadgroup0.matrix_d, ot.io.out.bits.threadgroup4.matrix_d, ot.io.out.valid, ot.io.in.ready)
  }
}

object Octet0 extends App {
  emitVerilog(new Octet(matsize), Array("--target-dir", "generated"))
}