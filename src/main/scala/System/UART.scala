package System
import chisel3._
import chisel3.util._

class UART_rx (
                bitRate: Int = 115200,
                clkFreq: Int = 16000000,
                payloadBits: Int = 8
              ) extends Module {
  val io = IO(new Bundle() {
    val i_serial_data = Input(Bool())
    val o_rx_done = Output(Bool())
    val o_data = Output(UInt(payloadBits.W))
  })

  val clksPerBit = clkFreq / bitRate          // clocks per bit (CPB)
  val clkCnterBW = log2Ceil(clksPerBit) + 1   // bit width for clkCnterReg
  val bitCnterBW = log2Ceil(payloadBits) + 1  // bit width for bitCnterReg

  // fsm states
  val idle :: startBit :: dataBits :: stopBit :: Nil = Enum(4)

  val clkCnterReg = RegInit(0.U(clkCnterBW.W))  // counting clk edges
  val bitCnterReg = RegInit(0.U(bitCnterBW.W))  // counting bits transmitted

  val outDataReg = RegInit(VecInit(Seq.fill(payloadBits)(false.B))) // output data reg
  val outRxDoneReg = RegInit(false.B)              // output rx done reg
  val stateReg = RegInit(idle)                  // fsm state reg

  // input serial data synchronized to clk domain
  val serialDataReg = RegNext(RegNext(io.i_serial_data))

  io.o_data := Cat(outDataReg.reverse)
  io.o_rx_done := outRxDoneReg

  switch (stateReg) {
    is (idle) {
      outRxDoneReg := false.B
      // counters disabled
      clkCnterReg := 0.U(clkCnterBW.W)
      bitCnterReg := 0.U(bitCnterBW.W)
      // if serial input data low, go to startBit
      when (serialDataReg === false.B) {
        stateReg := startBit
      } .otherwise {
        stateReg := idle
      }
    }
    is (startBit) {
      when (clkCnterReg < (clksPerBit / 2).U) {
        clkCnterReg := clkCnterReg + 1.U
        stateReg := startBit
      } .otherwise {
        // we are at the middle of start bit
        clkCnterReg := 0.U(clkCnterBW.W)
        when (serialDataReg === false.B) {
          stateReg := dataBits
        } .otherwise {
          // treat as noise and go back to idle
          stateReg := idle
        }
      }
    }
    is (dataBits) {
      when (clkCnterReg < clksPerBit.U) {
        clkCnterReg := clkCnterReg + 1.U
      } .otherwise {
        clkCnterReg := 0.U(clkCnterBW.W)
        // we are at the middle of a data bit
        // grab data bit and update bitCnterReg
        outDataReg(bitCnterReg) := serialDataReg
        when (bitCnterReg < payloadBits.U) {
          bitCnterReg := bitCnterReg + 1.U
        } .otherwise {
          bitCnterReg := 0.U(bitCnterBW.W)
        }
      }
      when (bitCnterReg === payloadBits.U) {
        stateReg := stopBit
      } .otherwise {
        stateReg := dataBits
      }
    }
    is (stopBit) {
      when (clkCnterReg < clksPerBit.U) {
        clkCnterReg := clkCnterReg + 1.U
        stateReg := stopBit
      } .otherwise {
        clkCnterReg := 0.U(clkCnterBW.W)
        // we are at the middle of stop bit
        outRxDoneReg := true.B
        stateReg := idle
      }
    }
  }
}

class UART_tx (
                bitRate: Int = 115200,
                clkFreq: Int = 10000000,
                payloadBits: Int = 8
              ) extends Module {
  val io = IO(new Bundle() {
    val i_tx_trig = Input(Bool())
    val i_data = Input(UInt(payloadBits.W))
    val o_tx_busy = Output(Bool())
    val o_tx_done = Output(Bool())
    val o_serial_data = Output(Bool())
  })

  val clksPerBit = clkFreq / bitRate          // clocks per bit (CPB)
  val clkCnterBW = log2Ceil(clksPerBit) + 1   // bit width for clkCnterReg
  val bitCnterBW = log2Ceil(payloadBits) + 1  // bit width for bitCnterReg

  // fsm states
  val idle :: startBit :: dataBits :: stopBit :: Nil = Enum(4)

  val clkCnterReg = RegInit(0.U(clkCnterBW.W))  // counting clk edges
  val bitCnterReg = RegInit(0.U(bitCnterBW.W))  // counting bits transmitted

  val inDataReg = RegInit(0.U(payloadBits.W))   // input data reg
  val outDataReg = RegInit(true.B)             // output data reg
  val outTxBusyReg = RegInit(false.B)              // output tx busy reg
  val outTxDoneReg = RegInit(false.B)              // output tx done reg
  val stateReg = RegInit(idle)                  // fsm state reg

  io.o_serial_data := outDataReg
  io.o_tx_busy := outTxBusyReg
  io.o_tx_done := outTxDoneReg
  outTxBusyReg := stateReg =/= idle

  switch (stateReg) {
    is (idle) {
      outTxDoneReg := false.B
      // counters disabled
      clkCnterReg := 0.U(clkCnterBW.W)
      bitCnterReg := 0.U(bitCnterBW.W)
      // if trigger signal high, transmit start bit and reg input data, go to startBit
      when (io.i_tx_trig === true.B) {
        outDataReg := false.B
        // register input data at the beginning of transmission
        inDataReg := io.i_data
        stateReg := startBit
      } .otherwise {
        stateReg := idle
      }
    }
    is (startBit) {
      when (clkCnterReg < clksPerBit.U) {
        clkCnterReg := clkCnterReg + 1.U
        stateReg := startBit
      } .otherwise {
        clkCnterReg := 0.U(clkCnterBW.W)
        bitCnterReg := bitCnterReg + 1.U
        // transmit first data bit
        outDataReg := inDataReg(bitCnterReg)
        stateReg := dataBits
      }
    }
    is (dataBits) {
      when (clkCnterReg < clksPerBit.U) {
        clkCnterReg := clkCnterReg + 1.U
        stateReg := dataBits
      } .otherwise {
        clkCnterReg := 0.U(clkCnterBW.W)
        when (bitCnterReg < payloadBits.U) {
          // transmit next data bit
          outDataReg := inDataReg(bitCnterReg)
          bitCnterReg := bitCnterReg + 1.U
          stateReg := dataBits
        } .otherwise {
          bitCnterReg := 0.U(bitCnterBW.W)
          // transmit stop bit
          outDataReg := true.B
          stateReg := stopBit
        }
      }
    }
    is (stopBit) {
      when (clkCnterReg < clksPerBit.U) {
        clkCnterReg := clkCnterReg + 1.U
        stateReg := stopBit
      } .otherwise {
        clkCnterReg := 0.U(clkCnterBW.W)
        outTxDoneReg := true.B
        stateReg := idle
      }
    }
  }
}