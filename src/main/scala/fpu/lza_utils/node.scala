package fpu.lza_utils

import chisel3._
import chisel3.util._

abstract class NodeM2N(x: Int, y: Int) extends Module{
  val io = IO(new Bundle() {
    val in = Input(Vec(3, UInt(x.W)))
    val out = Output(Vec(3, UInt(y.W)))
  })
}

class node extends NodeM2N(3, 2){
  val (p, n, z) = (io.in(0), io.in(1), io.in(2))
  val pout, nout, zout = Wire(Vec(2,Bool()))
  pout(0) := p(0) | (z(0) & p(1))
  pout(1) := ((~z(0)) & p(1)) | (p(2) & (z(0) | z(1)))
  zout(0) := z(0) & z(1)
  zout(1) := z(2) & (z(0) | z(1))
  nout(0) := ~(p(0) | z(0))
  nout(1) := ~(p(1) | z(1))
  io.out(0) := Cat(pout.reverse)
  io.out(1) := Cat(nout.reverse)
  io.out(2) := Cat(zout.reverse)
}