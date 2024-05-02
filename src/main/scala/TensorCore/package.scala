import chisel3._
import chisel3.util._
import fpu._


package object TensorCore {
  def XLEN: Int = 64
  def NRReg: Int = 256 // 12288bits/16384bits(fp16/MixPc)

  case class FType(expWidth: Int, sigWidth: Int) {
    val len = expWidth + sigWidth
  }
  val fp16 = FType(5, 11)
  val fp32 = FType(8, 24)

  def srcType: FType = fp16
  def desType: FType = fp32
  def matsize: Int = 256

  def j_conf: Int = 4
  def k_conf: Int = matsize/(srcType.len * j_conf)

  class Matrix(val bit: Int) extends Bundle {
    val data = UInt(bit.W)
    def readsca(x_in: Int, y: Int, ftype: Option[FType] = None,
             nrow: Option[Int] = None): UInt = {
      val width = if(ftype.isDefined) ftype.get.len else fp16.len
      val i = if(nrow.isDefined) nrow.get else 4
      val j = bit / (i * width)
      val x = if(x_in >= i) 0 else x_in
      val msb = width*(i*j-(x*j+y)) - 1
      val lsb = msb - width + 1
      this.data(msb, lsb)
    }
    def readvec(x: Int, ftype: Option[FType] = None,
             nrow: Option[Int] = None): Vec[UInt] = {
      val width = if (ftype.isDefined) ftype.get.len else fp16.len
      val i = if (nrow.isDefined) nrow.get else 4
      val j = bit / (i * width)
      val vec = Wire(Vec(j, UInt(width.W)))
      for (n <- 0 until  j){
        val msb = width * (i * j - x * j) - 1 - width * n
        val lsb = width * (i * j - x * j) - 1 - width * n - (width - 1)
        vec(n) := this.data(msb, lsb)
      }
      vec
    }
  }

  object Matrix{
    def fromUInt(d: UInt, rowMajor: Boolean,
              nrow: Option[Int] = None): Matrix = {
      val bit = d.getWidth
      val rows = if (nrow.isDefined) nrow.get else 4
      val cols = j_conf
      val width = bit /(rows * cols)
      val nelem = bit / width
      val mat = Wire(new Matrix(bit))

      if (rowMajor) {
        mat.data := d
      } else {
        val matVType = Wire(Vec(rows, Vec(cols, UInt(width.W))))
        def transpose (mat: Vec[Vec[UInt]]) : Vec[UInt] = {
          val mat_T = Wire(Vec(nelem, UInt(width.W)))
          for (x <- 0 until rows){
            for(y <- 0 until cols){
              val n = nelem - 1 - (y * cols + x)
              mat_T(n) := mat(x)(y)
            }
          }
          mat_T
        }
        for (i <- 0 until rows){
          for (j <- 0 until cols){
            val n = nelem - 1 - (i * cols + j)
            matVType(i)(j) := d(width * (n + 1) - 1, width * n)
          }
        }
        mat.data := transpose(matVType).asUInt
      }
      mat
    }
  }

  def unbox(x: UInt): UInt = {
    Mux(x.head(16).andR,
      x.tail(16),
      FloatPoint.defaultNaNUInt(fp16.expWidth, fp16.sigWidth)
    )
  }

  def box(x: UInt): UInt = {
    Cat(~0.U(16.W), x(15, 0))
  }
  def box(x: Vec[UInt], len: Int) : Vec[UInt] = {
    val res_boxed = Wire(Vec(len, UInt(32.W)))
    for (i <- 0 until len){
      res_boxed(i) := Cat(~0.U(16.W), x(i)(15, 0))
    }
    res_boxed
  }
}

