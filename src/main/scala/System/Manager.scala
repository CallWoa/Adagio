package System

import TensorCore._
import chisel3._
import chisel3.util._

class RegFile() {
  val rf = Mem(NRReg, UInt(XLEN.W))
  def read(addr: UInt): UInt = Mux(addr === 0.U, 0.U, rf(addr))
  def write(addr: UInt, data: UInt) = {
    rf(addr) := data(XLEN - 1, 0)
  }
}

class tensor_m16n16k16() {
  val rf = new RegFile
  def coordTrans (x: Int, y: Int, matrixTag: Char, mixPc: Boolean): Int = {
    val index = matrixTag match {
      case 'A' => x * 4 + y / 4
      case 'B' => x * 4 + y / 4 + 64
      case 'C' => if(mixPc) x * 8 + y / 2 + 128 else x * 4 + y /4 + 128
    }
    index
  }

  def readMatrix(tgTag: Int, set: Int, step: Int, matrixTag: Char, mixPc: Boolean): UInt = {
    def MAX_STEP: Int = if(mixPc) 4 else 2
    val rows = matrixTag match {
      case 'A' | 'C' => if(mixPc) 2 else 4
      case 'B' => 4
    }
    val cols = matrixTag match {
      case 'A' | 'B' => 1
      case 'C' => if(mixPc) 2 else 1
    }
    val row_lo = matrixTag match {
      case 'A' | 'C' => tgTag match {
        case 0 | 2 => 0
        case 4 | 6 => 4
        case 1 | 3 => 8
        case 5 | 7 => 12
      }
      case 'B' => set match {
        case 1 => 0
        case 2 => 4
        case 3 => 8
        case 4 => 12
      }
    }
    val col_lo = matrixTag match {
      case 'A' => set match {
        case 1 => 0
        case 2 => 4
        case 3 => 8
        case 4 => 12
      }
      case 'B' => tgTag match {
        case 0 | 1 => 0
        case 4 | 5 => 4
        case 2 | 3 => 8
        case 6 | 7 => 12
      }
      case 'C' => tgTag match {
        case 0 | 1 | 4 | 5 => 0
        case 2 | 6 | 3 | 7 => 8
      }
    }

    val nelem = rows * cols
    val tile_v = Wire(Vec(nelem, UInt(XLEN.W)))
    for(i <- 0 until rows){
      for(j <- 0 until cols){
        val x = matrixTag match {
          case 'A' | 'C' => if (mixPc) row_lo + (step % 2) * 2 + i else row_lo + i
          case 'B' => row_lo + i
        }
        val y_bias = if (step < (MAX_STEP / 2)) 0 else 4
        val y = matrixTag match {
          case 'A' | 'B' => col_lo + j * 4
          case 'C' => col_lo + j * 2 + y_bias
        }
        val n = nelem - 1 - (i * cols + j)
        tile_v(n) := rf.read(coordTrans(x, y, matrixTag, mixPc).U)
      }
    }
    tile_v.asUInt
  }

  def writeMatrix (tgTag: Int, step: Int, mixPc: Boolean, data: UInt):Unit = {
    def MAX_STEP: Int = if(mixPc) 4 else 2
    val rows = if(mixPc) 2 else 4
    val cols = if(mixPc) 2 else 1
    val nelem = rows * cols
    val data_v = Wire(Vec(nelem, UInt(XLEN.W)))
    for(i <- 0 until nelem){
      val lsb = i * XLEN
      val msb = i * XLEN + (XLEN - 1)
      data_v(i) := data(msb, lsb)
    }
    val row_lo = tgTag match {
      case 0 | 2 => 0
      case 4 | 6 => 4
      case 1 | 3 => 8
      case 5 | 7 => 12
    }
    val col_lo = tgTag match {
      case 0 | 1 | 4 | 5 => 0
      case 2 | 6 | 3 | 7 => 8
    }

    for (i <- 0 until rows) {
      for (j <- 0 until cols) {
        val x = if (mixPc) row_lo + (step % 2) * 2 + i else row_lo + i
        val y_bias = if (step < (MAX_STEP / 2)) 0 else 4
        val y = col_lo + j * 2 + y_bias
        val addr = coordTrans(x, y, 'C', mixPc)
        val n = nelem - 1 - (i * cols + j)
        rf.write(addr.U, data_v(n))
      }
    }
  }
}

class rf_io extends Bundle{
  val w_en = Input(Bool())
  val r_addr = Input(UInt(8.W))
  val w_addr = Input(UInt(8.W))
  val r_data = Output(UInt(XLEN.W))
  val w_data = Input(UInt(XLEN.W))
}
/*------------------------------------------------------------------------
Manager
*------------------------------------------------------------------------*/
class Manager() extends Module{
  val io = IO(new Bundle() {
    val mixPc = Input(Bool())
    val uart_ctrl = new uartCtrl
    val uart_rf = new rf_io
    val top_src = Decoupled(new topIn(matsize))
    val top_wb = Flipped(Decoupled(new topOut(matsize)))
  })

  val tensor = new tensor_m16n16k16
  def MAX_SET: Int = 4
  val MAX_STEP = Mux(io.mixPc, 3.U, 1.U)
  val set = RegInit(0.U(2.W))
  val step = RegInit(0.U(2.W))
  val out_set = RegInit(0.U(2.W))
  val out_step = RegInit(0.U(2.W))
  val exec_en = RegInit(false.B)
  when(io.uart_ctrl.rx_valid){
    exec_en := true.B
  }
  val tx_en = RegInit(false.B)
  when(io.uart_ctrl.tx_done){
    tx_en := false.B
  }

  val matrix_a = Reg(Vec(8, UInt(matsize.W)))
  val matrix_b = Reg(Vec(8, UInt(matsize.W)))
  val matrix_c = Reg(Vec(8, UInt(matsize.W)))

  /*------------------------------------------------------------------------
  Top
  *------------------------------------------------------------------------*/

  val in_valid = (out_set === set) || ((out_set === (set - 1.U)) && (out_step > step)) && exec_en
  val handshaked = in_valid && io.top_src.ready
  io.top_src.valid := RegEnable(in_valid, handshaked)

  io.top_wb.ready := true.B
  io.top_src.bits.ctrl.roundingMode := RegEnable(0.U(3.W), handshaked)
  io.top_src.bits.ctrl.mixPcMode := RegEnable(io.mixPc, handshaked)
  io.top_src.bits.ctrl.matBSel := Mux(io.top_src.bits.ctrl.mixPcMode, step > 1.U, step > 0.U)

  io.top_src.bits.tc0.ot0_tg0_matrix_a := matrix_a(0)
  io.top_src.bits.tc0.ot0_tg0_matrix_b := matrix_b(0)
  io.top_src.bits.tc0.ot0_tg0_matrix_c := matrix_c(0)

  io.top_src.bits.tc0.ot0_tg4_matrix_a := matrix_a(4)
  io.top_src.bits.tc0.ot0_tg4_matrix_b := matrix_b(4)
  io.top_src.bits.tc0.ot0_tg4_matrix_c := matrix_c(4)

  io.top_src.bits.tc0.ot1_tg0_matrix_a := matrix_a(1)
  io.top_src.bits.tc0.ot1_tg0_matrix_b := matrix_b(1)
  io.top_src.bits.tc0.ot1_tg0_matrix_c := matrix_c(1)

  io.top_src.bits.tc0.ot1_tg4_matrix_a := matrix_a(5)
  io.top_src.bits.tc0.ot1_tg4_matrix_b := matrix_b(5)
  io.top_src.bits.tc0.ot1_tg4_matrix_c := matrix_c(5)

  io.top_src.bits.tc1.ot0_tg0_matrix_a := matrix_a(2)
  io.top_src.bits.tc1.ot0_tg0_matrix_b := matrix_b(2)
  io.top_src.bits.tc1.ot0_tg0_matrix_c := matrix_c(2)

  io.top_src.bits.tc1.ot0_tg4_matrix_a := matrix_a(6)
  io.top_src.bits.tc1.ot0_tg4_matrix_b := matrix_b(6)
  io.top_src.bits.tc1.ot0_tg4_matrix_c := matrix_c(6)

  io.top_src.bits.tc1.ot1_tg0_matrix_a := matrix_a(3)
  io.top_src.bits.tc1.ot1_tg0_matrix_b := matrix_b(3)
  io.top_src.bits.tc1.ot1_tg0_matrix_c := matrix_c(3)

  io.top_src.bits.tc1.ot1_tg4_matrix_a := matrix_a(7)
  io.top_src.bits.tc1.ot1_tg4_matrix_b := matrix_b(7)
  io.top_src.bits.tc1.ot1_tg4_matrix_c := matrix_c(7)

  when(handshaked) {
    for (i <- 0 until 8) {
      switch(set){
        is(0.U){
          switch(step){
            is(0.U){
              when(io.mixPc){
                val a = tensor.readMatrix(i, 1, 0, 'A', true)
                matrix_a(i) := Cat(a, 0.U((matsize / 2).W))
                matrix_b(i) := tensor.readMatrix(i, 1, 0, 'B', true)
                matrix_c(i) := tensor.readMatrix(i, 1, 0, 'C', true)
              }.otherwise{
                val a = tensor.readMatrix(i, 1, 0, 'A', false)
                matrix_a(i) := a
                matrix_b(i) := tensor.readMatrix(i, 1, 0, 'B', false)
                matrix_c(i) := tensor.readMatrix(i, 1, 0, 'C', false)
              }
            }
            is(1.U) {
              when(io.mixPc) {
                val a = tensor.readMatrix(i, 1, 1, 'A', true)
                matrix_a(i) := Cat(a, 0.U((matsize / 2).W))
                matrix_b(i) := tensor.readMatrix(i, 1, 1, 'B', true)
                matrix_c(i) := tensor.readMatrix(i, 1, 1, 'C', true)
              }.otherwise {
                val a = tensor.readMatrix(i, 1, 1, 'A', false)
                matrix_a(i) := a
                matrix_b(i) := tensor.readMatrix(i, 1, 1, 'B', false)
                matrix_c(i) := tensor.readMatrix(i, 1, 1, 'C', false)
              }
            }
            is(2.U) {
              val a = tensor.readMatrix(i, 1, 2, 'A', true)
              matrix_a(i) := Cat(a, 0.U((matsize / 2).W))
              matrix_b(i) := tensor.readMatrix(i, 1, 2, 'B', true)
              matrix_c(i) := tensor.readMatrix(i, 1, 2, 'C', true)
            }
            is(3.U) {
              val a = tensor.readMatrix(i, 1, 3, 'A', true)
              matrix_a(i) := Cat(a, 0.U((matsize / 2).W))
              matrix_b(i) := tensor.readMatrix(i, 1, 3, 'B', true)
              matrix_c(i) := tensor.readMatrix(i, 1, 3, 'C', true)
            }
          }
        }
        is(1.U) {
          switch(step) {
            is(0.U) {
              when(io.mixPc) {
                val a = tensor.readMatrix(i, 2, 0, 'A', true)
                matrix_a(i) := Cat(a, 0.U((matsize / 2).W))
                matrix_b(i) := tensor.readMatrix(i, 2, 0, 'B', true)
                matrix_c(i) := tensor.readMatrix(i, 2, 0, 'C', true)
              }.otherwise {
                val a = tensor.readMatrix(i, 2, 0, 'A', false)
                matrix_a(i) := a
                matrix_b(i) := tensor.readMatrix(i, 2, 0, 'B', false)
                matrix_c(i) := tensor.readMatrix(i, 2, 0, 'C', false)
              }
            }
            is(1.U) {
              when(io.mixPc) {
                val a = tensor.readMatrix(i, 2, 1, 'A', true)
                matrix_a(i) := Cat(a, 0.U((matsize / 2).W))
                matrix_b(i) := tensor.readMatrix(i, 2, 1, 'B', true)
                matrix_c(i) := tensor.readMatrix(i, 2, 1, 'C', true)
              }.otherwise {
                val a = tensor.readMatrix(i, 2, 1, 'A', false)
                matrix_a(i) := a
                matrix_b(i) := tensor.readMatrix(i, 2, 1, 'B', false)
                matrix_c(i) := tensor.readMatrix(i, 2, 1, 'C', false)
              }
            }
            is(2.U) {
              val a = tensor.readMatrix(i, 2, 2, 'A', true)
              matrix_a(i) := Cat(a, 0.U((matsize / 2).W))
              matrix_b(i) := tensor.readMatrix(i, 2, 2, 'B', true)
              matrix_c(i) := tensor.readMatrix(i, 2, 2, 'C', true)
            }
            is(3.U) {
              val a = tensor.readMatrix(i, 2, 3, 'A', true)
              matrix_a(i) := Cat(a, 0.U((matsize / 2).W))
              matrix_b(i) := tensor.readMatrix(i, 2, 3, 'B', true)
              matrix_c(i) := tensor.readMatrix(i, 2, 3, 'C', true)
            }
          }
        }
        is(2.U) {
          switch(step) {
            is(0.U) {
              when(io.mixPc) {
                val a = tensor.readMatrix(i, 3, 0, 'A', true)
                matrix_a(i) := Cat(a, 0.U((matsize / 2).W))
                matrix_b(i) := tensor.readMatrix(i, 3, 0, 'B', true)
                matrix_c(i) := tensor.readMatrix(i, 3, 0, 'C', true)
              }.otherwise {
                val a = tensor.readMatrix(i, 3, 0, 'A', false)
                matrix_a(i) := a
                matrix_b(i) := tensor.readMatrix(i, 3, 0, 'B', false)
                matrix_c(i) := tensor.readMatrix(i, 3, 0, 'C', false)
              }
            }
            is(1.U) {
              when(io.mixPc) {
                val a = tensor.readMatrix(i, 3, 1, 'A', true)
                matrix_a(i) := Cat(a, 0.U((matsize / 2).W))
                matrix_b(i) := tensor.readMatrix(i, 3, 1, 'B', true)
                matrix_c(i) := tensor.readMatrix(i, 3, 1, 'C', true)
              }.otherwise {
                val a = tensor.readMatrix(i, 3, 1, 'A', false)
                matrix_a(i) := a
                matrix_b(i) := tensor.readMatrix(i, 3, 1, 'B', false)
                matrix_c(i) := tensor.readMatrix(i, 3, 1, 'C', false)
              }
            }
            is(2.U) {
              val a = tensor.readMatrix(i, 3, 2, 'A', true)
              matrix_a(i) := Cat(a, 0.U((matsize / 2).W))
              matrix_b(i) := tensor.readMatrix(i, 3, 2, 'B', true)
              matrix_c(i) := tensor.readMatrix(i, 3, 2, 'C', true)
            }
            is(3.U) {
              val a = tensor.readMatrix(i, 3, 3, 'A', true)
              matrix_a(i) := Cat(a, 0.U((matsize / 2).W))
              matrix_b(i) := tensor.readMatrix(i, 3, 3, 'B', true)
              matrix_c(i) := tensor.readMatrix(i, 3, 3, 'C', true)
            }
          }
        }
        is(3.U) {
          switch(step) {
            is(0.U) {
              when(io.mixPc) {
                val a = tensor.readMatrix(i, 4, 0, 'A', true)
                matrix_a(i) := Cat(a, 0.U((matsize / 2).W))
                matrix_b(i) := tensor.readMatrix(i, 4, 0, 'B', true)
                matrix_c(i) := tensor.readMatrix(i, 4, 0, 'C', true)
              }.otherwise {
                val a = tensor.readMatrix(i, 4, 0, 'A', false)
                matrix_a(i) := a
                matrix_b(i) := tensor.readMatrix(i, 4, 0, 'B', false)
                matrix_c(i) := tensor.readMatrix(i, 4, 0, 'C', false)
              }
            }
            is(1.U) {
              when(io.mixPc) {
                val a = tensor.readMatrix(i, 4, 1, 'A', true)
                matrix_a(i) := Cat(a, 0.U((matsize / 2).W))
                matrix_b(i) := tensor.readMatrix(i, 4, 1, 'B', true)
                matrix_c(i) := tensor.readMatrix(i, 4, 1, 'C', true)
              }.otherwise {
                val a = tensor.readMatrix(i, 4, 1, 'A', false)
                matrix_a(i) := a
                matrix_b(i) := tensor.readMatrix(i, 4, 1, 'B', false)
                matrix_c(i) := tensor.readMatrix(i, 4, 1, 'C', false)
              }
            }
            is(2.U) {
              val a = tensor.readMatrix(i, 4, 2, 'A', true)
              matrix_a(i) := Cat(a, 0.U((matsize / 2).W))
              matrix_b(i) := tensor.readMatrix(i, 4, 2, 'B', true)
              matrix_c(i) := tensor.readMatrix(i, 4, 2, 'C', true)
            }
            is(3.U) {
              val a = tensor.readMatrix(i, 4, 3, 'A', true)
              matrix_a(i) := Cat(a, 0.U((matsize / 2).W))
              matrix_b(i) := tensor.readMatrix(i, 4, 3, 'B', true)
              matrix_c(i) := tensor.readMatrix(i, 4, 3, 'C', true)
            }
          }
        }
      }
    }

    when(step === MAX_STEP) {
      step := 0.U
      when(set === (MAX_SET-1).U){
        exec_en := false.B
      }
      set := set + 1.U
    }.otherwise{
      step := step + 1.U
    }
  }

  when (io.top_wb.fire){
    switch(out_step){
      is(0.U){
        when(io.mixPc){
          tensor.writeMatrix(0, 0, true, io.top_wb.bits.tc0.octet0.threadgroup0.matrix_d.data)
          tensor.writeMatrix(4, 0, true, io.top_wb.bits.tc0.octet0.threadgroup4.matrix_d.data)
          tensor.writeMatrix(1, 0, true, io.top_wb.bits.tc0.octet1.threadgroup0.matrix_d.data)
          tensor.writeMatrix(5, 0, true, io.top_wb.bits.tc0.octet1.threadgroup4.matrix_d.data)
          tensor.writeMatrix(2, 0, true, io.top_wb.bits.tc1.octet0.threadgroup0.matrix_d.data)
          tensor.writeMatrix(6, 0, true, io.top_wb.bits.tc1.octet0.threadgroup4.matrix_d.data)
          tensor.writeMatrix(3, 0, true, io.top_wb.bits.tc1.octet1.threadgroup0.matrix_d.data)
          tensor.writeMatrix(7, 0, true, io.top_wb.bits.tc1.octet1.threadgroup4.matrix_d.data)
        }.otherwise{
          tensor.writeMatrix(0, 0, false, io.top_wb.bits.tc0.octet0.threadgroup0.matrix_d.data)
          tensor.writeMatrix(4, 0, false, io.top_wb.bits.tc0.octet0.threadgroup4.matrix_d.data)
          tensor.writeMatrix(1, 0, false, io.top_wb.bits.tc0.octet1.threadgroup0.matrix_d.data)
          tensor.writeMatrix(5, 0, false, io.top_wb.bits.tc0.octet1.threadgroup4.matrix_d.data)
          tensor.writeMatrix(2, 0, false, io.top_wb.bits.tc1.octet0.threadgroup0.matrix_d.data)
          tensor.writeMatrix(6, 0, false, io.top_wb.bits.tc1.octet0.threadgroup4.matrix_d.data)
          tensor.writeMatrix(3, 0, false, io.top_wb.bits.tc1.octet1.threadgroup0.matrix_d.data)
          tensor.writeMatrix(7, 0, false, io.top_wb.bits.tc1.octet1.threadgroup4.matrix_d.data)
        }
      }
      is(1.U) {
        when(io.mixPc) {
          tensor.writeMatrix(0, 1, true, io.top_wb.bits.tc0.octet0.threadgroup0.matrix_d.data)
          tensor.writeMatrix(4, 1, true, io.top_wb.bits.tc0.octet0.threadgroup4.matrix_d.data)
          tensor.writeMatrix(1, 1, true, io.top_wb.bits.tc0.octet1.threadgroup0.matrix_d.data)
          tensor.writeMatrix(5, 1, true, io.top_wb.bits.tc0.octet1.threadgroup4.matrix_d.data)
          tensor.writeMatrix(2, 1, true, io.top_wb.bits.tc1.octet0.threadgroup0.matrix_d.data)
          tensor.writeMatrix(6, 1, true, io.top_wb.bits.tc1.octet0.threadgroup4.matrix_d.data)
          tensor.writeMatrix(3, 1, true, io.top_wb.bits.tc1.octet1.threadgroup0.matrix_d.data)
          tensor.writeMatrix(7, 1, true, io.top_wb.bits.tc1.octet1.threadgroup4.matrix_d.data)
        }.otherwise {
          tensor.writeMatrix(0, 1, false, io.top_wb.bits.tc0.octet0.threadgroup0.matrix_d.data)
          tensor.writeMatrix(4, 1, false, io.top_wb.bits.tc0.octet0.threadgroup4.matrix_d.data)
          tensor.writeMatrix(1, 1, false, io.top_wb.bits.tc0.octet1.threadgroup0.matrix_d.data)
          tensor.writeMatrix(5, 1, false, io.top_wb.bits.tc0.octet1.threadgroup4.matrix_d.data)
          tensor.writeMatrix(2, 1, false, io.top_wb.bits.tc1.octet0.threadgroup0.matrix_d.data)
          tensor.writeMatrix(6, 1, false, io.top_wb.bits.tc1.octet0.threadgroup4.matrix_d.data)
          tensor.writeMatrix(3, 1, false, io.top_wb.bits.tc1.octet1.threadgroup0.matrix_d.data)
          tensor.writeMatrix(7, 1, false, io.top_wb.bits.tc1.octet1.threadgroup4.matrix_d.data)
        }
      }
      is(2.U) {
        tensor.writeMatrix(0, 2, true, io.top_wb.bits.tc0.octet0.threadgroup0.matrix_d.data)
        tensor.writeMatrix(4, 2, true, io.top_wb.bits.tc0.octet0.threadgroup4.matrix_d.data)
        tensor.writeMatrix(1, 2, true, io.top_wb.bits.tc0.octet1.threadgroup0.matrix_d.data)
        tensor.writeMatrix(5, 2, true, io.top_wb.bits.tc0.octet1.threadgroup4.matrix_d.data)
        tensor.writeMatrix(2, 2, true, io.top_wb.bits.tc1.octet0.threadgroup0.matrix_d.data)
        tensor.writeMatrix(6, 2, true, io.top_wb.bits.tc1.octet0.threadgroup4.matrix_d.data)
        tensor.writeMatrix(3, 2, true, io.top_wb.bits.tc1.octet1.threadgroup0.matrix_d.data)
        tensor.writeMatrix(7, 2, true, io.top_wb.bits.tc1.octet1.threadgroup4.matrix_d.data)
      }
      is(3.U) {
        tensor.writeMatrix(0, 3, true, io.top_wb.bits.tc0.octet0.threadgroup0.matrix_d.data)
        tensor.writeMatrix(4, 3, true, io.top_wb.bits.tc0.octet0.threadgroup4.matrix_d.data)
        tensor.writeMatrix(1, 3, true, io.top_wb.bits.tc0.octet1.threadgroup0.matrix_d.data)
        tensor.writeMatrix(5, 3, true, io.top_wb.bits.tc0.octet1.threadgroup4.matrix_d.data)
        tensor.writeMatrix(2, 3, true, io.top_wb.bits.tc1.octet0.threadgroup0.matrix_d.data)
        tensor.writeMatrix(6, 3, true, io.top_wb.bits.tc1.octet0.threadgroup4.matrix_d.data)
        tensor.writeMatrix(3, 3, true, io.top_wb.bits.tc1.octet1.threadgroup0.matrix_d.data)
        tensor.writeMatrix(7, 3, true, io.top_wb.bits.tc1.octet1.threadgroup4.matrix_d.data)
      }
    }

    when(out_step === MAX_STEP) {
      out_step := 0.U
      when(out_set === (MAX_SET - 1).U){
        tx_en := true.B
      }
      out_set := out_set + 1.U
    }.otherwise{
      out_step := out_step + 1.U
    }
  }
  io.uart_ctrl.tx_en := tx_en

  io.uart_rf.r_data := tensor.rf.read(io.uart_rf.r_addr)
  when(io.uart_rf.w_en){
    tensor.rf.write(io.uart_rf.w_addr, io.uart_rf.w_data)
  }

}

object Manager_v extends App {
  emitVerilog(new Adagio(), Array("--target-dir", "generated"))
}
