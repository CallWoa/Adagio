package test

import TensorCore.DotProdUnit
import chisel3._
import chisel3.util._
import chiseltest._
import chiseltest.RawTester.test
import org.scalatest.flatspec.AnyFlatSpec

class WaveformTest extends AnyFlatSpec with ChiselScalatestTester {
  "Waveform" should "pass" in {
    test(new DotProdUnit(4, 5, 11, 8, 24))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
        dut.io.in.bits.ctrl.rowtag.poke(0.U)
        dut.io.in.bits.ctrl.mixPc.poke(true.B)
        dut.io.in.valid.poke(true.B)
        dut.io.out.ready.poke(true.B)

        dut.io.in.bits.vec_a(0).poke("b1010101101101111".U)
        dut.io.in.bits.vec_a(1).poke("b0110000111010111".U)
        dut.io.in.bits.vec_a(2).poke("b0010110100011100".U)
        dut.io.in.bits.vec_a(3).poke("b1101100101001000".U)
        dut.io.in.bits.vec_b(0).poke("b0110111100101010".U)
        dut.io.in.bits.vec_b(1).poke("b0001101111001110".U)
        dut.io.in.bits.vec_b(2).poke("b1010011100000011".U)
        dut.io.in.bits.vec_b(3).poke("b1100000100000010".U)

        dut.io.in.bits.c.poke("h24BB919D".U)
        dut.clock.step(2)
        dut.io.in.bits.flush.poke(true.B)
        dut.clock.step(5)
        dut.io.in.bits.flush.poke(false.B)
        dut.clock.step(10)
      }
  }
}
