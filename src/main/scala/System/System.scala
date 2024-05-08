package System

import TensorCore._
import chisel3._
import chisel3.util._


class System() extends Module{
  val io = IO(new Bundle() {
    val uart = new uartio
    val mixPc = Input(Bool())
  })
  def sysclk: Int = 50000000 //50Mhz
  def baudRate: Int = 115200
  /*------------------------------------------------------------------------
  UART <> Adagio
  *------------------------------------------------------------------------*/
  val adagio = Module(new Adagio())
  val uart = Module(new UART(sysclk, baudRate))
  adagio.io.mixPc := io.mixPc
  uart.io.mixPc := io.mixPc
  adagio.io.uart_ctrl <> uart.io.ctrl
  io.uart <> uart.io.lane
  uart.io.rf <> adagio.io.rf
//  io.uart.txd := uart.io.lane.txd
//  uart.io.lane.rxd := io.uart.rxd
  uart.io.ctrl
}

object system_v extends App {
  emitVerilog(new System(), Array("--target-dir", "generated"))
}