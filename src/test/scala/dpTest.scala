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
        dut.io.out.ready.poke(true.B)
        dut.io.in.bits.rowtag.poke(0.U)
        dut.io.in.bits.mixPc.poke(true.B)
        dut.io.in.bits.roundingMode.poke(0.U)
        dut.io.in.valid.poke(true.B)
//        val a0 = "b1010101101101111".U
//        val a1 = "b0110000111010111".U
//        val a2 = "b0010110100011100".U
//        val a3 = "b1101100101001000".U
//
//        val b0 = "b0110111100101010".U
//        val b1 = "b0001101111001110".U
//        val b2 = "b1010011100000011".U
//        val b3 = "b1100000100000010".U
//
//        val va = VecInit(a0, a1, a2, a3)
//        val vb = VecInit(b0, b1, b2, b3)

          dut.io.in.bits.vec_a(0).poke("b1010101101101111".U)
          dut.io.in.bits.vec_a(1).poke("b0110000111010111".U)
          dut.io.in.bits.vec_a(2).poke("b0010110100011100".U)
          dut.io.in.bits.vec_a(3).poke("b1101100101001000".U)
          dut.io.in.bits.vec_b(0).poke("b0110111100101010".U)
          dut.io.in.bits.vec_b(1).poke("b0001101111001110".U)
          dut.io.in.bits.vec_b(2).poke("b1010011100000011".U)
          dut.io.in.bits.vec_b(3).poke("b1100000100000010".U)

        dut.io.in.bits.c.poke("h24BB919D".U)
        dut.clock.step(10)
      }
  }
}
