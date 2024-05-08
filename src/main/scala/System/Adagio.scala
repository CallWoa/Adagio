package System

import TensorCore._
import chisel3._
import chisel3.util._

/*------------------------------------------------------------------------
Adagio
*------------------------------------------------------------------------*/
class Adagio() extends Module{
  val io = IO(new Bundle() {
    val mixPc = Input(Bool())
    val uart_ctrl = new uartCtrl
    val rf = new rf_io
  })
  val manager = Module(new Manager())
  val top = Module(new Top(matsize))
  top.io.in <> manager.io.top_src
  manager.io.top_wb <> top.io.out

  manager.io.uart_ctrl <> io.uart_ctrl
//  io.uart_ctrl.tx_en := manager.io.uart_ctrl.tx_en
//  manager.io.uart_ctrl.tx_done := io.uart_ctrl.tx_done
//  manager.io.uart_ctrl.rx_valid := io.uart_ctrl.rx_valid
  manager.io.uart_rf <> io.rf

  manager.io.mixPc := io.mixPc

}

object Adagio_v extends App {
  emitVerilog(new Adagio(), Array("--target-dir", "generated"))
}
