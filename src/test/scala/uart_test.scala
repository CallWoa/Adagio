import System.Echo

import chisel3._
import chisel3.util._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec

class WaveformTest extends AnyFlatSpec with ChiselScalatestTester {
  "Waveform" should "pass" in {
    test(new Echo(50000000,115200))
      .withAnnotations(Seq(WriteVcdAnnotation)) { dut =>
        dut.clock.setTimeout(0)

        dut.reset.poke(true.B)
        dut.io.rxd.poke(1.U)
        dut.clock.step(100)
        dut.reset.poke(false.B)
        dut.clock.step(100)

        dut.io.rxd.poke(0.U) //start
        dut.clock.step(434)

        dut.io.rxd.poke(0.U) //bit0
        dut.clock.step(434)

        dut.io.rxd.poke(0.U) //bit1
        dut.clock.step(434)

        dut.io.rxd.poke(0.U) //bit2
        dut.clock.step(434)

        dut.io.rxd.poke(0.U) //bit3
        dut.clock.step(434)

        dut.io.rxd.poke(1.U) //bit4
        dut.clock.step(434)

        dut.io.rxd.poke(1.U) //bit5
        dut.clock.step(434)

        dut.io.rxd.poke(1.U) //bit6
        dut.clock.step(434)

        dut.io.rxd.poke(1.U) //bit7
        dut.clock.step(434)

        dut.io.rxd.poke(1.U) //stop
        dut.clock.step(434)

        dut.clock.step(434 * 10)

      }
  }
}