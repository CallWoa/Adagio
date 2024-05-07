package System

import chisel3._
import chisel3.util._

class Channel extends Bundle {
  val data = Input(Bits(8.W))
  val ready = Output(Bool())
  val valid = Input(Bool())
}

//Single Bye Buffer
class Buffer extends Module {
  val io = IO(new Bundle {
    val in = new Channel()
    val out = Flipped(new Channel())
  })

  val empty :: full :: Nil = Enum(2)
  val stateReg = RegInit(empty)
  val dataReg = RegInit(0.U(8.W))

  io.in.ready  := stateReg === empty
  io.out.valid := stateReg === full

  when (stateReg === empty) {
    when (io.in.valid) {
      dataReg := io.in.data
      stateReg := full
    }
  } .otherwise {
    when (io.out.ready) {
      stateReg := empty
    }
  }
  io.out.data := dataReg
}
class Tx(sysclk: Int, baudRate: Int) extends Module {
  val io = IO(new Bundle {
    val txd = Output(Bits(1.W))
    val channel = new Channel()
  })
//  val BIT_CNT = ((sysclk + baudRate/2)/baudRate -1).asUInt
  val BIT_CNT = (sysclk/baudRate -1).asUInt
  val shiftReg = RegInit(0x7ff.U)
  val cntReg = RegInit(0.U(20.W))
  val bitsReg = RegInit(0.U(4.W))

  io.channel.ready := (cntReg === 0.U) && (bitsReg === 0.U)
  io.txd := shiftReg(0)

  when (cntReg === 0.U) {
    cntReg := BIT_CNT
    when (bitsReg =/= 0.U) {
      val shift = shiftReg >> 1
      shiftReg := Cat(1.U, shift(9,0))
      bitsReg := bitsReg - 1.U
    } .otherwise {
      when (io.channel.valid) {
        //2 Stop Bits , Data , Start
        shiftReg := Cat(Cat(3.U, io.channel.data), 0.U)
        bitsReg := 11.U
      } .otherwise {
        shiftReg := 0x7ff.U
      }
    }
  } .otherwise {
    cntReg := cntReg - 1.U
  }
}

class BufferTx(sysclk: Int, baudRate: Int) extends Module {
  val io = IO(new Bundle {
    val txd = Output(Bits(1.W))
    val channel = new Channel()
  })
  val tx = Module(new Tx(sysclk, baudRate))
  val buf = Module(new Buffer())

  buf.io.in <> io.channel
  tx.io.channel <> buf.io.out
  io.txd <> tx.io.txd
}

class Sender(sysclk: Int, baudRate: Int) extends Module {
  val io = IO(new Bundle {
    val txd = Output(Bits(1.W))
  })
  val tx = Module(new BufferTx(sysclk, baudRate))
  io.txd := tx.io.txd

  val msg = "Hello World"
  val text = VecInit(msg.map(_.U))
  val len = msg.length.U
  val cntReg = RegInit(0.U(8.W))

  tx.io.channel.data := text(cntReg)
  tx.io.channel.valid := cntReg =/= len
  when (tx.io.channel.ready && cntReg =/= len) {
    cntReg := cntReg + 1.U
  }
}
class Rx(sysclk: Int, baudRate: Int) extends Module {
  val io = IO(new Bundle {
    val rxd = Input(Bits(1.W))
    val channel = Flipped(new Channel())
  })
//  val BIT_CNT = ((sysclk + baudRate/2)/baudRate -1).asUInt
//  val START_CNT = ((3*sysclk/2 + baudRate/2)/baudRate - 1).asUInt
  val BIT_CNT = (sysclk / baudRate - 1).asUInt
  val START_CNT = (3 * sysclk / 2 / baudRate - 1).asUInt
  //Sync the Input rxd
  val rxReg = RegNext(RegNext(io.rxd, 1.U), 1.U)
  val shiftReg = RegInit('A'.U(8.W))
  val cntReg = RegInit(0.U(20.W))
  val bitsReg = RegInit(0.U(4.W))
  val valReg = RegInit(false.B)

  when (cntReg =/= 0.U) {
    cntReg := cntReg - 1.U
  } .elsewhen (bitsReg =/= 0.U) {
    cntReg := BIT_CNT
    shiftReg := Cat(rxReg, shiftReg >> 1)
    bitsReg := bitsReg - 1.U
    when (bitsReg === 1.U) {
      valReg := true.B
    }
    //Start Wait
  } .elsewhen( rxReg === 0.U) {
    cntReg := START_CNT
    bitsReg := 8.U
  }

  when (valReg && io.channel.ready) {
    valReg := false.B
  }

  io.channel.data := shiftReg
  io.channel.valid := valReg
}

class Echo(sysclk: Int, baudRate: Int) extends Module {
  val io = IO(new Bundle {
    val txd = Output(Bits(1.W))
    val rxd = Input(Bits(1.W))
  })

  val tx = Module(new BufferTx(sysclk, baudRate))
  val rx = Module(new Rx(sysclk, baudRate))
  io.txd := tx.io.txd
  rx.io.rxd := io.rxd
  tx.io.channel <> rx.io.channel
}

object Echo_t extends App {
  emitVerilog(new Echo(50000000, 115200), Array("--target-dir", "generated"))
}

