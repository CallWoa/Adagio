package TensorCore

import chisel3._
import chisel3.util._

class threadgroupIn (bit: Int) extends Bundle {
  val matrix_a = Output(new Matrix(bit))
  val matrix_b = Output(new Matrix(bit))
  val matrix_c = Output(new Matrix(bit))
  val mixPcMode = Output(Bool())
  val roundingMode = Output(UInt(3.W))
}

class threadgroupOut (bit: Int) extends Bundle {
//  val fflags = Output(UInt(5.W))
  val matrix_d = Output(new Matrix(bit))
}

class Threadgroup(bit: Int) extends Module {
  val io = IO(new Bundle {
    val in = Flipped(Decoupled(new threadgroupIn(bit)))
    val out = Decoupled(new threadgroupOut(bit))
  })

  val prehandshaked = io.in.valid && io.in.ready
  val rm = io.in.bits.roundingMode
  val mixPc = io.in.bits.mixPcMode
  val matrix_a = io.in.bits.matrix_a
  val matrix_b = io.in.bits.matrix_b
  val matrix_c = io.in.bits.matrix_c
  val dpResult = Wire(Vec(k_conf, UInt(fp32.len.W)))
  val matrix_d = Reg(Vec(4, UInt((k_conf * fp16.len).W)))
//  val fflags = Wire(Vec(k_conf, UInt(5.W)))
  val dpValid = Wire(Vec(k_conf, Bool()))
  val dpReady = Wire(Vec(k_conf, Bool()))
  val rowtag_out = Wire(UInt(2.W))
  val outMixPc = Wire(Bool())
  val outValid = RegInit(false.B)
  when(io.out.fire) {
    outValid := false.B
  }

  val s0 :: s1 :: s2 :: s3 :: s4 :: Nil = Enum(5)
  val state = RegInit(s0)
  val dp_in_valid = RegInit(false.B)

  switch(state) {
    is(s0) {
      when(prehandshaked) {
        state := s1
        dp_in_valid := true.B
      }.otherwise{
        dp_in_valid := false.B
      }
    }
    is(s1) {
      when(io.out.ready) {
        state := s2
      }
    }
    is(s2) {
      when(io.out.ready) {
        when(!mixPc) {
          state := s3
        }.elsewhen(io.in.valid) {
          state := s1
        }.otherwise {
          state := s0
          dp_in_valid := false.B
        }
      }
    }
    is(s3) {
      when(io.out.ready) {
        state := s4
      }
    }
    is(s4) {
      when(io.out.ready) {
        when(io.in.valid) {
          state := s1
        }.otherwise {
          state := s0
          dp_in_valid := false.B
        }
      }
    }
  }

  for (y <- 0 until k_conf) {
    val dpIn_va = Mux1H(
      Seq(
        (state === s2) -> matrix_a.readvec(1),
        (state === s3) -> matrix_a.readvec(2),
        (state === s4) -> matrix_a.readvec(3),
        (state === s1) -> matrix_a.readvec(0),
      )
    )
    val dpIn_vb = matrix_b.readvec(y)
    val dpIn_c = Mux1H(
      Seq(
        (state === s2) -> Mux(mixPc, matrix_c.readvec(1, Some(fp32), Some(2)), box(matrix_c.readvec(1), k_conf)),
        (state === s3) -> box(matrix_c.readvec(2), k_conf),
        (state === s4) -> box(matrix_c.readvec(3), k_conf),
        (state === s1) -> Mux(mixPc, matrix_c.readvec(0, Some(fp32), Some(2)), box(matrix_c.readvec(0), k_conf)),
      )
    )
    val rowtag_in = Mux1H(
      Seq(
        (state === s2) -> 1.U,
        (state === s3) -> 2.U,
        (state === s4) -> 3.U,
        (state === s1) -> 0.U
      )
    )

    val dp = DotProdUnit(dpIn_va, dpIn_vb, dpIn_c(y), mixPc, rm, rowtag_in,
      j_conf, srcType.expWidth, srcType.sigWidth, desType.expWidth, desType.sigWidth,
      dp_in_valid, io.out.ready)
    dpResult(y) := dp._1
//    fflags(y) := dp._2
    dpValid(y) := dp._3
    dpReady(y) := dp._4
    rowtag_out := dp._6
    outMixPc := dp._5
  }

  val result_fp16 = Cat((0 to 3).map(n => dpResult(n).tail(16)))
  val result_fp32_hi = Cat(dpResult(0), dpResult(1))
  val result_fp32_lo = Cat(dpResult(2), dpResult(3))

  when(dpValid.reduce(_ && _)){
    switch(rowtag_out) {
      is(0.U) {
        when(outMixPc) {
          matrix_d(0) := result_fp32_hi
          matrix_d(1) := result_fp32_lo
        }.otherwise {
          matrix_d(0) := result_fp16
        }
      }
      is(1.U) {
        when(outMixPc) {
          matrix_d(2) := result_fp32_hi
          matrix_d(3) := result_fp32_lo
          outValid := true.B
        }.otherwise {
          matrix_d(1) := result_fp16
        }
      }
      is(2.U) {
        matrix_d(2) := result_fp16
      }
      is(3.U) {
        matrix_d(3) := result_fp16
        outValid := true.B
      }
    }
  }

  io.out.bits.matrix_d.data := Cat(matrix_d)
//  io.out.bits.fflags := RegNext(Cat((4 to 0).map(m => fflags.map(n => n(m)).reduce(_ || _))))
  io.out.valid := outValid
  io.in.ready := dpReady.reduce(_ && _) && ((state === s0) || ((state === s2) && mixPc) || (state === s4))
}

object Threadgroup{
  def apply(bit: Int, a: Matrix, b: Matrix, c: Matrix, rm: UInt, mixPc :Bool,
            pre_valid: Bool, post_ready: Bool) = {
    val tg = Module(new Threadgroup(bit))

    val prehandshaked = pre_valid && tg.io.in.ready

    tg.io.in.valid := pre_valid
    tg.io.in.bits.matrix_a := RegEnable(a, prehandshaked)
    tg.io.in.bits.matrix_b := RegEnable(b, prehandshaked)
    tg.io.in.bits.matrix_c := RegEnable(c, prehandshaked)
    tg.io.in.bits.mixPcMode := RegEnable(mixPc, prehandshaked)
    tg.io.in.bits.roundingMode := RegEnable(rm, prehandshaked)
    tg.io.out.ready := post_ready

    (tg.io.out.bits.matrix_d, tg.io.out.valid, tg.io.in.ready)
  }
}

object threadgroup0 extends App {
  emitVerilog(new Threadgroup(matsize), Array("--target-dir", "generated"))
}