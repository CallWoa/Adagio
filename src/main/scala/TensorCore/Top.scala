package TensorCore

import chisel3._
import chisel3.util._

class Decode extends Bundle{
  val src = UInt(5.W)
}
class tcCtrl extends Bundle {
  val flush = Output(Bool())
  val matASel = Output(Bool()) //false: low 128 bit; true: high 128 bit
  val matBSel = Output(Bool()) //false: choose tg0; true: choose tg4
  val mixPcMode = Output(Bool())
}

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
  val ctrl = new tcCtrl()
  val decode = Output(new Decode)
}
class topOut (bit: Int) extends Bundle {
  val tc0 = new Bundle() {
    val octet0 = new Bundle() {
      val threadgroup0_matrix_d = Output(new Matrix(bit))
      val threadgroup4_matrix_d = Output(new Matrix(bit))
    }
    val octet1 = new Bundle() {
      val threadgroup0_matrix_d = Output(new Matrix(bit))
      val threadgroup4_matrix_d = Output(new Matrix(bit))
    }
  }
  val tc1 = new Bundle() {
    val octet0 = new Bundle() {
      val threadgroup0_matrix_d = Output(new Matrix(bit))
      val threadgroup4_matrix_d = Output(new Matrix(bit))
    }
    val octet1 = new Bundle() {
      val threadgroup0_matrix_d = Output(new Matrix(bit))
      val threadgroup4_matrix_d = Output(new Matrix(bit))
    }
  }
  val decode = Output(new Decode)
}

class Top (bit: Int) extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(new topIn(bit)))
    val out = Decoupled(new topOut(bit))
  })

  val tc0 = io.in.bits.tc0
  val tc1 = io.in.bits.tc1
  val ctrl = io.in.bits.ctrl
  val decode_in = io.in.bits.decode
  val tensorCore = VecInit(tc0, tc1)

  val ot0_matrix_d = Wire(Vec(2, Vec(2, new Matrix(bit))))
  val ot1_matrix_d = Wire(Vec(2, Vec(2, new Matrix(bit))))
  val tc_valid = Wire(Bool())
  val tc_ready = Wire(Bool())
  val deocde_out = Wire(new Decode)

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

    if(i == 0){
      val tc = TensorCore(bit,
        ot0_tg0_matrix_a, ot0_tg0_matrix_b, ot0_tg0_matrix_c,
        ot0_tg4_matrix_a, ot0_tg4_matrix_b, ot0_tg4_matrix_c,
        ot1_tg0_matrix_a, ot1_tg0_matrix_b, ot1_tg0_matrix_c,
        ot1_tg4_matrix_a, ot1_tg4_matrix_b, ot1_tg4_matrix_c,
        ctrl, io.in.valid, io.out.ready, Some(decode_in)
      )
      ot0_matrix_d(i) := VecInit(tc._1.threadgroup0_matrix_d, tc._1.threadgroup4_matrix_d)
      ot1_matrix_d(i) := VecInit(tc._2.threadgroup0_matrix_d, tc._2.threadgroup4_matrix_d)
      tc_valid := tc._3
      tc_ready := tc._4
      deocde_out := tc._5
    }else{
      val tc = TensorCore(bit,
        ot0_tg0_matrix_a, ot0_tg0_matrix_b, ot0_tg0_matrix_c,
        ot0_tg4_matrix_a, ot0_tg4_matrix_b, ot0_tg4_matrix_c,
        ot1_tg0_matrix_a, ot1_tg0_matrix_b, ot1_tg0_matrix_c,
        ot1_tg4_matrix_a, ot1_tg4_matrix_b, ot1_tg4_matrix_c,
        ctrl, io.in.valid, io.out.ready
      )
      ot0_matrix_d(i) := VecInit(tc._1.threadgroup0_matrix_d, tc._1.threadgroup4_matrix_d)
      ot1_matrix_d(i) := VecInit(tc._2.threadgroup0_matrix_d, tc._2.threadgroup4_matrix_d)
    }
  }

  io.in.ready := tc_ready(0)
  io.out.valid := tc_valid(0)
  io.out.bits.decode := deocde_out
  io.out.bits.tc0.octet0.threadgroup0_matrix_d := ot0_matrix_d(0)(0)
  io.out.bits.tc0.octet0.threadgroup4_matrix_d := ot0_matrix_d(0)(1)
  io.out.bits.tc1.octet0.threadgroup0_matrix_d := ot0_matrix_d(1)(0)
  io.out.bits.tc1.octet0.threadgroup4_matrix_d := ot0_matrix_d(1)(1)

  io.out.bits.tc0.octet1.threadgroup0_matrix_d := ot1_matrix_d(0)(0)
  io.out.bits.tc0.octet1.threadgroup4_matrix_d := ot1_matrix_d(0)(1)
  io.out.bits.tc1.octet1.threadgroup0_matrix_d := ot1_matrix_d(1)(0)
  io.out.bits.tc1.octet1.threadgroup4_matrix_d := ot1_matrix_d(1)(1)
}


object Top extends App {
  emitVerilog(new Top(matsize), Array("--target-dir", "generated"))
}