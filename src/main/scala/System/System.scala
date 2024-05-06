package System

import TensorCore._
import chisel3._
import chisel3.util._
import chisel3.util.experimental.{loadMemoryFromFile,loadMemoryFromFileInline}
//
//class RegFile() {
//  val rf = Mem(NRReg, UInt(XLEN.W))
//  loadMemoryFromFileInline(rf, "./src/matrix_src.txt")
//  def read(addr: UInt): UInt = Mux(addr === 0.U, 0.U, rf(addr))
//  def write(addr: UInt, data: UInt) = {
//    rf(addr) := data(XLEN - 1, 0)
//  }
//}
//
//
//class tensor_m16n16k16() {
//  val rf = new RegFile
//  def coordTrans (x: Int, y: Int, matrixTag: Char, mixPc: Boolean): Int = {
//    val index = matrixTag match {
//      case 'A' => x * 4 + y / 4
//      case 'B' => x * 4 + y / 4 + 64
//      case 'C' => if(mixPc) x * 8 + y / 2 + 128 else x * 4 + y /4 + 128
//    }
//    index
//  }
//
//  def readMatrix(tgTag: Int, set: Int, step: Int, matrixTag: Char, mixPc: Boolean): UInt = {
//    def MAX_STEP: Int = if(mixPc) 4 else 2
//    val rows = matrixTag match {
//      case 'A' | 'C' => if(mixPc) 2 else 4
//      case 'B' => 4
//    }
//    val cols = matrixTag match {
//      case 'A' | 'B' => 1
//      case 'C' => if(mixPc) 2 else 1
//    }
//    val row_lo = matrixTag match {
//      case 'A' | 'C' => tgTag match {
//        case 0 | 2 => 0
//        case 4 | 6 => 4
//        case 1 | 3 => 8
//        case 5 | 7 => 12
//      }
//      case 'B' => set match {
//        case 1 => 0
//        case 2 => 4
//        case 3 => 8
//        case 4 => 12
//      }
//    }
//    val col_lo = matrixTag match {
//      case 'A' => set match {
//        case 1 => 0
//        case 2 => 4
//        case 3 => 8
//        case 4 => 12
//      }
//      case 'B' => tgTag match {
//        case 0 | 1 => 0
//        case 4 | 5 => 4
//        case 2 | 3 => 8
//        case 6 | 7 => 12
//      }
//      case 'C' => tgTag match {
//        case 0 | 1 | 4 | 5 => 0
//        case 2 | 6 | 3 | 7 => 8
//      }
//    }
//
//    val nelem = rows * cols
//    val tile_v = Wire(Vec(nelem, UInt(XLEN.W)))
//    for(i <- 0 until rows){
//      for(j <- 0 until cols){
//        val x = matrixTag match {
//          case 'A' | 'C' => if (mixPc) row_lo + (step % 2) * 2 + i else row_lo + i
//          case 'B' => row_lo + i
//        }
//        val y_bias = if (step < (MAX_STEP / 2)) 0 else 4
//        val y = matrixTag match {
//          case 'A' | 'B' => col_lo + j * 4
//          case 'C' => col_lo + j * 2 + y_bias
//        }
//        val n = nelem - 1 - (i * cols + j)
//        tile_v(n) := rf.read(coordTrans(x, y, matrixTag, mixPc).U)
//      }
//    }
//    tile_v.asUInt
//  }
//
//  def writeMatrix (tgTag: Int, step: Int, mixPc: Boolean, data: UInt):Unit = {
//    def MAX_STEP: Int = if(mixPc) 4 else 2
//    val rows = if(mixPc) 2 else 4
//    val cols = if(mixPc) 2 else 1
//    val nelem = rows * cols
//    val data_v = Wire(Vec(nelem, UInt(XLEN.W)))
//    for(i <- 0 until nelem){
//      val lsb = i * XLEN
//      val msb = i * XLEN + (XLEN - 1)
//      data_v(i) := data(msb, lsb)
//    }
//    val row_lo = tgTag match {
//      case 0 | 2 => 0
//      case 4 | 6 => 4
//      case 1 | 3 => 8
//      case 5 | 7 => 12
//    }
//    val col_lo = tgTag match {
//      case 0 | 1 | 4 | 5 => 0
//      case 2 | 6 | 3 | 7 => 8
//    }
//
//    for (i <- 0 until rows) {
//      for (j <- 0 until cols) {
//        val x = if (mixPc) row_lo + (step % 2) * 2 + i else row_lo + i
//        val y_bias = if (step < (MAX_STEP / 2)) 0 else 4
//        val y = col_lo + j * 2 + y_bias
//        val addr = coordTrans(x, y, 'C', mixPc)
//        val n = nelem - 1 - (i * cols + j)
//        rf.write(addr.U, data_v(n))
//      }
//    }
//  }
//}
//
////class sysIn() extends Bundle {
////}
////class sysOut (bit: Int) extends Bundle {
////
////}
//
//class System () extends Module {
//    val io = IO(new Bundle {
//      val mixPc = Input(Bool())
//      val exec_en = Input(Bool())
//      val out = Decoupled(new topOut(matsize))
//    })
//  def MAX_SET: Int = 4
//
//  val mixPc = io.mixPc
//  val exec_en = io.exec_en
//
//  val MAX_STEP = Mux(mixPc, 3.U, 1.U)
//
//  val set = RegInit(0.U(2.W))
//  val step = RegInit(0.U(2.W))
//  val out_set = RegInit(0.U(2.W))
//  val out_step = RegInit(0.U(2.W))
//
//  val matrix_a = Reg(Vec(8, UInt(matsize.W)))
//  val matrix_b = Reg(Vec(8, UInt(matsize.W)))
//  val matrix_c = Reg(Vec(8, UInt(matsize.W)))
//  val matBsel = Reg(Bool())
//
//  val top = Module(new Top(matsize))
//  top.io.out.ready := io.out.ready
//  top.io.in.bits.ctrl.roundingMode := 0.U(3.W)
//  top.io.in.bits.ctrl.mixPcMode := mixPc
//  top.io.in.bits.ctrl.matBSel := matBsel
//
//  top.io.in.bits.tc0.ot0_tg0_matrix_a := matrix_a(0)
//  top.io.in.bits.tc0.ot0_tg0_matrix_b := matrix_b(0)
//  top.io.in.bits.tc0.ot0_tg0_matrix_c := matrix_c(0)
//
//  top.io.in.bits.tc0.ot0_tg4_matrix_a := matrix_a(4)
//  top.io.in.bits.tc0.ot0_tg4_matrix_b := matrix_b(4)
//  top.io.in.bits.tc0.ot0_tg4_matrix_c := matrix_c(4)
//
//  top.io.in.bits.tc0.ot1_tg0_matrix_a := matrix_a(1)
//  top.io.in.bits.tc0.ot1_tg0_matrix_b := matrix_b(1)
//  top.io.in.bits.tc0.ot1_tg0_matrix_c := matrix_c(1)
//
//  top.io.in.bits.tc0.ot1_tg4_matrix_a := matrix_a(5)
//  top.io.in.bits.tc0.ot1_tg4_matrix_b := matrix_b(5)
//  top.io.in.bits.tc0.ot1_tg4_matrix_c := matrix_c(5)
//
//  top.io.in.bits.tc1.ot0_tg0_matrix_a := matrix_a(2)
//  top.io.in.bits.tc1.ot0_tg0_matrix_b := matrix_b(2)
//  top.io.in.bits.tc1.ot0_tg0_matrix_c := matrix_c(2)
//
//  top.io.in.bits.tc1.ot0_tg4_matrix_a := matrix_a(6)
//  top.io.in.bits.tc1.ot0_tg4_matrix_b := matrix_b(6)
//  top.io.in.bits.tc1.ot0_tg4_matrix_c := matrix_c(6)
//
//  top.io.in.bits.tc1.ot1_tg0_matrix_a := matrix_a(3)
//  top.io.in.bits.tc1.ot1_tg0_matrix_b := matrix_b(3)
//  top.io.in.bits.tc1.ot1_tg0_matrix_c := matrix_c(3)
//
//  top.io.in.bits.tc1.ot1_tg4_matrix_a := matrix_a(7)
//  top.io.in.bits.tc1.ot1_tg4_matrix_b := matrix_b(7)
//  top.io.in.bits.tc1.ot1_tg4_matrix_c := matrix_c(7)
//
//  io.out.bits.tc0.octet0.threadgroup0.matrix_d.data := top.io.out.bits.tc0.octet0.threadgroup0.matrix_d.data
//  io.out.bits.tc0.octet0.threadgroup4.matrix_d.data := top.io.out.bits.tc0.octet0.threadgroup4.matrix_d.data
//  io.out.bits.tc0.octet1.threadgroup0.matrix_d.data := top.io.out.bits.tc0.octet1.threadgroup0.matrix_d.data
//  io.out.bits.tc0.octet1.threadgroup4.matrix_d.data := top.io.out.bits.tc0.octet1.threadgroup4.matrix_d.data
//  io.out.bits.tc1.octet0.threadgroup0.matrix_d.data := top.io.out.bits.tc1.octet0.threadgroup0.matrix_d.data
//  io.out.bits.tc1.octet0.threadgroup4.matrix_d.data := top.io.out.bits.tc1.octet0.threadgroup4.matrix_d.data
//  io.out.bits.tc1.octet1.threadgroup0.matrix_d.data := top.io.out.bits.tc1.octet1.threadgroup0.matrix_d.data
//  io.out.bits.tc1.octet1.threadgroup4.matrix_d.data := top.io.out.bits.tc1.octet1.threadgroup4.matrix_d.data
//
//  val tensor = new tensor_m16n16k16
//  val in_valid = (out_set === set) || ((out_set === (set - 1.U)) && (out_step > step)) && exec_en
//  top.io.in.valid := RegNext(in_valid)
//  val handshaked = in_valid && top.io.in.ready
//
//  when(handshaked){
//    when(mixPc){
//      matBsel := step > 1.U
//    }.otherwise{
//      matBsel := step > 0.U
//    }
//
//    for(i <- 0 until 8){
//      val a = tensor.readMatrix(i, set_int, step_int, 'A', mixPc_boolean)
//      matrix_a(i) := Mux(mixPc, Cat(a, 0.U((matsize / 2).W)), a)
//      matrix_b(i) := tensor.readMatrix(i, set_int, step_int, 'B', mixPc_boolean)
//      matrix_c(i) := tensor.readMatrix(i, set_int, step_int, 'C', mixPc_boolean)
//    }
//
//    when(step === MAX_STEP) {
//      set := set + 1.U
//    }
//    step := step + 1.U
//  }
//
//  when (top.io.out.valid && top.io.out.ready){
//    tensor.writeMatrix(0, out_step_int, mixPc_boolean, top.io.out.bits.tc0.octet0.threadgroup0.matrix_d.data)
//    tensor.writeMatrix(4, out_step_int, mixPc_boolean, top.io.out.bits.tc0.octet0.threadgroup4.matrix_d.data)
//    tensor.writeMatrix(1, out_step_int, mixPc_boolean, top.io.out.bits.tc0.octet1.threadgroup0.matrix_d.data)
//    tensor.writeMatrix(5, out_step_int, mixPc_boolean, top.io.out.bits.tc0.octet1.threadgroup4.matrix_d.data)
//    tensor.writeMatrix(2, out_step_int, mixPc_boolean, top.io.out.bits.tc1.octet0.threadgroup0.matrix_d.data)
//    tensor.writeMatrix(6, out_step_int, mixPc_boolean, top.io.out.bits.tc1.octet0.threadgroup4.matrix_d.data)
//    tensor.writeMatrix(3, out_step_int, mixPc_boolean, top.io.out.bits.tc1.octet1.threadgroup0.matrix_d.data)
//    tensor.writeMatrix(7, out_step_int, mixPc_boolean, top.io.out.bits.tc1.octet1.threadgroup4.matrix_d.data)
//
//    when(out_step === MAX_STEP) {
//      out_set := out_set + 1.U
//    }
//    out_step := out_step + 1.U
//  }
//  when(top.io.out.valid && top.io.out.ready && (out_step === MAX_STEP) &&(out_set === (MAX_SET - 1).U)){
//    io.out.valid := true.B
//  }.otherwise{
//    io.out.valid := false.B
//  }
//
//}
//
//
//object System extends App {
//  emitVerilog(new System(), Array("--target-dir", "generated"))
//}

class uartio() extends Bundle{
  val tx = Output(Bits(1.W))
  val rx = Input(Bits(1.W))
}

class System() extends Module{
  val io = IO(new Bundle() {
    val uart = new uartio
  })
}