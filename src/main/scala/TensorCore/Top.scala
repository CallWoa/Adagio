package TensorCore

import chisel3._
import chisel3.util._

//class RegFile(width: Int, num: Int) {
//  val rf = Mem(num, UInt(width.W))
//  def read(addr: UInt): UInt = Mux(addr === 0.U, 0.U, rf(addr))
//  def write(addr: UInt, data: UInt) = {
//    rf(addr) := data(width - 1, 0)
//  }
//}

class tcSrc (bit: Int) extends Bundle {
  val ot0_tg0_matrix_a = Input(UInt(bit.W))
  val ot0_tg0_matrix_b = Input(UInt(bit.W))
  val ot0_tg0_matrix_c = Input(UInt(bit.W))

  val ot0_tg4_matrix_a = Input(UInt(bit.W))
  val ot0_tg4_matrix_b = Input(UInt(bit.W))
  val ot0_tg4_matrix_c = Input(UInt(bit.W))

  val ot1_tg0_matrix_a = Input(UInt(bit.W))
  val ot1_tg0_matrix_b = Input(UInt(bit.W))
  val ot1_tg0_matrix_c = Input(UInt(bit.W))

  val ot1_tg4_matrix_a = Input(UInt(bit.W))
  val ot1_tg4_matrix_b = Input(UInt(bit.W))
  val ot1_tg4_matrix_c = Input(UInt(bit.W))
}

class topIn (bit: Int) extends Bundle {
  val tc0 = new tcSrc(bit)
  val tc1 = new tcSrc(bit)
  val ctrl = new octetCtrl()
}
class topOut (bit: Int) extends Bundle {
  val tc0 = new tensorCoreOut(bit)
  val tc1 = new tensorCoreOut(bit)
}

class Top (bit: Int) extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(new topIn(bit)))
    val out = Decoupled(new topOut(bit))
  })

  val rm = io.in.bits.ctrl.roundingMode
  val mixPc = io.in.bits.ctrl.mixPcMode
  val matBSel = io.in.bits.ctrl.matBSel

  val tc0 = io.in.bits.tc0
  val tc1 = io.in.bits.tc1
  val tensorCore = VecInit(tc0, tc1)

  val ot0_matrix_d = Wire(Vec(2, Vec(2, new Matrix(bit))))
  val ot1_matrix_d = Wire(Vec(2, Vec(2, new Matrix(bit))))
  val tc_valid = Wire(Vec(2, Bool()))
  val tc_ready = Wire(Vec(2, Bool()))
  for(i <- 0 to 1){
    val ot0_tg0_matrix_a = Matrix.fromUInt(tensorCore(i).ot0_tg0_matrix_a, true)
    val ot0_tg0_matrix_b = Matrix.fromUInt(tensorCore(i).ot0_tg0_matrix_b, false)
    val ot0_tg0_matrix_c = Matrix.fromUInt(tensorCore(i).ot0_tg0_matrix_c, true)

    val ot0_tg4_matrix_a = Matrix.fromUInt(tensorCore(i).ot0_tg4_matrix_a, true)
    val ot0_tg4_matrix_b = Matrix.fromUInt(tensorCore(i).ot0_tg4_matrix_b, false)
    val ot0_tg4_matrix_c = Matrix.fromUInt(tensorCore(i).ot0_tg4_matrix_c, true)

    val ot1_tg0_matrix_a = Matrix.fromUInt(tensorCore(i).ot1_tg0_matrix_a, true)
    val ot1_tg0_matrix_b = Matrix.fromUInt(tensorCore(i).ot1_tg0_matrix_b, false)
    val ot1_tg0_matrix_c = Matrix.fromUInt(tensorCore(i).ot1_tg0_matrix_c, true)

    val ot1_tg4_matrix_a = Matrix.fromUInt(tensorCore(i).ot1_tg4_matrix_a, true)
    val ot1_tg4_matrix_b = Matrix.fromUInt(tensorCore(i).ot1_tg4_matrix_b, false)
    val ot1_tg4_matrix_c = Matrix.fromUInt(tensorCore(i).ot1_tg4_matrix_c, true)

    val tc = TensorCore(bit,
      ot0_tg0_matrix_a, ot0_tg0_matrix_b, ot0_tg0_matrix_c,
      ot0_tg4_matrix_a, ot0_tg4_matrix_b, ot0_tg4_matrix_c,
      ot1_tg0_matrix_a, ot1_tg0_matrix_b, ot1_tg0_matrix_c,
      ot1_tg4_matrix_a, ot1_tg4_matrix_b, ot1_tg4_matrix_c,
      rm, mixPc, matBSel, io.in.valid, io.out.ready)
    ot0_matrix_d(i) := VecInit(tc._1.threadgroup0.matrix_d, tc._1.threadgroup4.matrix_d)
    ot1_matrix_d(i) := VecInit(tc._2.threadgroup0.matrix_d, tc._2.threadgroup4.matrix_d)
    tc_valid(i) := tc._3
    tc_ready(i) := tc._4
  }

  io.in.ready := tc_ready.reduce((_&&_))
  io.out.valid := tc_valid.reduce(_&&_)
  io.out.bits.tc0.octet0.threadgroup0.matrix_d := ot0_matrix_d(0)(0)
  io.out.bits.tc0.octet0.threadgroup4.matrix_d := ot0_matrix_d(0)(1)
  io.out.bits.tc1.octet0.threadgroup0.matrix_d := ot0_matrix_d(1)(0)
  io.out.bits.tc1.octet0.threadgroup4.matrix_d := ot0_matrix_d(1)(1)

  io.out.bits.tc0.octet1.threadgroup0.matrix_d := ot1_matrix_d(0)(0)
  io.out.bits.tc0.octet1.threadgroup4.matrix_d := ot1_matrix_d(0)(1)
  io.out.bits.tc1.octet1.threadgroup0.matrix_d := ot1_matrix_d(1)(0)
  io.out.bits.tc1.octet1.threadgroup4.matrix_d := ot1_matrix_d(1)(1)
}


object Top extends App {
  emitVerilog(new Top(matsize), Array("--target-dir", "generated"))
}