package fpu

import chisel3._
import chisel3.util._

class RoundingUnit(val width: Int) extends Module {
  val io = IO(new Bundle() {
    val in = Input(UInt(width.W))
    val roundIn = Input(Bool())
    val stickyIn = Input(Bool())
    val signIn = Input(Bool())
    val out = Output(UInt(width.W))
    val cout = Output(Bool())
  })

  val (g, r, s) = (io.in(0).asBool, io.roundIn, io.stickyIn)
  val r_up = (r && s) || (r && !s && g)
  val out_r_up = io.in + 1.U
  io.out := Mux(r_up, out_r_up, io.in)
  io.cout := r_up && io.in.andR
}

object RoundingUnit {
  def apply(in: UInt, sign: Bool, width: Int): RoundingUnit = {
    require(in.getWidth >= width)
    val in_pad = if(in.getWidth < width + 2) padd_tail(in, width + 2) else in
    val rounder = Module(new RoundingUnit(width))
    rounder.io.in := in_pad.head(width)
    rounder.io.roundIn := in_pad.tail(width).head(1).asBool
    rounder.io.stickyIn := in_pad.tail(width + 1).orR
    rounder.io.signIn := sign
    rounder
  }
  def padd_tail(x: UInt, w: Int): UInt = Cat(x, 0.U((w - x.getWidth).W))
}
