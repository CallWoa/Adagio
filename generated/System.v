module Manager(
  input   clock,
  input   reset,
  input   io_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 135:14]
  input   io_uart_ctrl_tx_done, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 135:14]
  input   io_uart_ctrl_rx_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 135:14]
  output  io_uart_ctrl_tx_en, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 135:14]
  input   io_top_src_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 135:14]
  output  io_top_src_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 135:14]
  output  io_top_src_bits_ctrl_mixPcMode, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 135:14]
  output  io_top_wb_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 135:14]
  input   io_top_wb_valid // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 135:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
`endif // RANDOMIZE_REG_INIT
  wire [1:0] MAX_STEP = io_mixPc ? 2'h3 : 2'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 145:21]
  reg [1:0] set; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 146:20]
  reg [1:0] step; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 147:21]
  reg [1:0] out_set; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 148:24]
  reg [1:0] out_step; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 149:25]
  reg  exec_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 150:24]
  wire  _GEN_0 = io_uart_ctrl_rx_valid | exec_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 151:30 152:13 150:24]
  reg  tx_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 154:22]
  wire  _GEN_1 = io_uart_ctrl_tx_done ? 1'h0 : tx_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 155:29 156:11 154:22]
  wire [1:0] _in_valid_T_2 = set - 2'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 167:58]
  wire  in_valid = out_set == set | out_set == _in_valid_T_2 & out_step > step & exec_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 167:36]
  wire  handshaked = in_valid & io_top_src_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 168:29]
  reg  io_top_src_valid_r; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 169:32]
  reg  io_top_src_bits_ctrl_mixPcMode_r; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 173:46]
  wire [1:0] _set_T_1 = set + 2'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 387:18]
  wire [1:0] _step_T_1 = step + 2'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 389:20]
  wire  _T_162 = io_top_wb_ready & io_top_wb_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 52:35]
  wire  _GEN_15791 = out_set == 2'h3 | _GEN_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 461:40 462:15]
  wire [1:0] _out_set_T_1 = out_set + 2'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 464:26]
  wire [1:0] _out_step_T_1 = out_step + 2'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 466:28]
  assign io_uart_ctrl_tx_en = tx_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 469:22]
  assign io_top_src_valid = io_top_src_valid_r; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 169:20]
  assign io_top_src_bits_ctrl_mixPcMode = io_top_src_bits_ctrl_mixPcMode_r; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 173:34]
  assign io_top_wb_ready = 1'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 171:19]
  always @(posedge clock) begin
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 146:20]
      set <= 2'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 146:20]
    end else if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 208:20]
      if (step == MAX_STEP) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 382:29]
        set <= _set_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 387:11]
      end
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 147:21]
      step <= 2'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 147:21]
    end else if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 208:20]
      if (step == MAX_STEP) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 382:29]
        step <= 2'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 383:12]
      end else begin
        step <= _step_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 389:12]
      end
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 148:24]
      out_set <= 2'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 148:24]
    end else if (_T_162) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 393:24]
      if (out_step == MAX_STEP) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 459:33]
        out_set <= _out_set_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 464:15]
      end
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 149:25]
      out_step <= 2'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 149:25]
    end else if (_T_162) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 393:24]
      if (out_step == MAX_STEP) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 459:33]
        out_step <= 2'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 460:16]
      end else begin
        out_step <= _out_step_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 466:16]
      end
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 150:24]
      exec_en <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 150:24]
    end else if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 208:20]
      if (step == MAX_STEP) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 382:29]
        if (set == 2'h3) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 384:34]
          exec_en <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 385:17]
        end else begin
          exec_en <= _GEN_0;
        end
      end else begin
        exec_en <= _GEN_0;
      end
    end else begin
      exec_en <= _GEN_0;
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 154:22]
      tx_en <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 154:22]
    end else if (_T_162) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 393:24]
      if (out_step == MAX_STEP) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 459:33]
        tx_en <= _GEN_15791;
      end else begin
        tx_en <= _GEN_1;
      end
    end else begin
      tx_en <= _GEN_1;
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 169:32]
      io_top_src_valid_r <= in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 169:32]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 173:46]
      io_top_src_bits_ctrl_mixPcMode_r <= io_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Manager.scala 173:46]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  set = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  step = _RAND_1[1:0];
  _RAND_2 = {1{`RANDOM}};
  out_set = _RAND_2[1:0];
  _RAND_3 = {1{`RANDOM}};
  out_step = _RAND_3[1:0];
  _RAND_4 = {1{`RANDOM}};
  exec_en = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  tx_en = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  io_top_src_valid_r = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  io_top_src_bits_ctrl_mixPcMode_r = _RAND_7[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module FMULnoRound(
  output  io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 26:14]
  input   io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 26:14]
  input   io_toFADD_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 26:14]
  output  io_toFADD_valid // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 26:14]
);
  assign io_in_ready = io_toFADD_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 93:15]
  assign io_toFADD_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 94:19]
endmodule
module FPUpConverter(
  output  io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 246:14]
  input   io_out_ready // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 246:14]
);
  assign io_in_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 301:15]
endmodule
module FADD(
  output  io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
  input   io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
  input   io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
  output  io_out_valid // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
);
  assign io_in_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 329:15]
  assign io_out_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 330:16]
endmodule
module FPDownConverter(
  input   io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 77:14]
  output  io_out_valid // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 77:14]
);
  assign io_out_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 207:16]
endmodule
module DotProdUnit(
  input        clock,
  input        reset,
  output       io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  input        io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  input        io_in_bits_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  input  [1:0] io_in_bits_rowtag, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  output       io_out_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  output       io_out_bits_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  output [1:0] io_out_bits_rowtag // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
`endif // RANDOMIZE_REG_INIT
  wire  fmul_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_io_toFADD_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_io_toFADD_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_toFADD_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_toFADD_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_toFADD_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_toFADD_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_toFADD_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_toFADD_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fcvt_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 314:22]
  wire  fcvt_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 314:22]
  wire  faddModule_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  fcvt_1_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 220:22]
  wire  fcvt_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 220:22]
  wire  firstFaddReady_0 = faddModule_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 49:28 85:25]
  wire  firstFaddReady_1 = faddModule_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 49:28 85:25]
  wire  _T = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 51:134]
  wire  fmulReady_0 = fmul_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 46:34 54:18]
  wire  fmulReady_1 = fmul_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 46:34 54:18]
  wire  fmulReady_2 = fmul_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 46:34 54:18]
  wire  fmulReady_3 = fmul_3_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 46:34 54:18]
  wire  fmulValid_0 = fmul_io_toFADD_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 46:34 53:18]
  wire  fmulValid_1 = fmul_1_io_toFADD_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 46:34 53:18]
  wire  _s1_handshaked_s2_T = fmulValid_0 & fmulValid_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 66:44]
  wire  fmulValid_2 = fmul_2_io_toFADD_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 46:34 53:18]
  wire  fmulValid_3 = fmul_3_io_toFADD_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 46:34 53:18]
  wire  s1_handshaked_s2 = fmulValid_0 & fmulValid_1 & fmulValid_2 & fmulValid_3 & _T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 66:49]
  reg  mixPc_s2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 67:27]
  reg [1:0] rowtag_s2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 69:28]
  wire  prehandshaked = _s1_handshaked_s2_T & faddModule_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 354:35]
  reg  valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 355:24]
  wire  firstPostReady_0 = faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 117:23 72:28]
  wire  _GEN_3 = faddModule_io_out_valid & firstPostReady_0 ? 1'h0 : valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 356:49 357:13 355:24]
  wire  _GEN_4 = prehandshaked | _GEN_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 359:25 360:13]
  wire  prevalid_1 = fmulValid_2 & fmulValid_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 79:39]
  wire  prehandshaked_1 = prevalid_1 & faddModule_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 354:35]
  reg  valid_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 355:24]
  wire  _GEN_15 = faddModule_1_io_out_valid & firstPostReady_0 ? 1'h0 : valid_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 356:49 357:13 355:24]
  wire  _GEN_16 = prehandshaked_1 | _GEN_15; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 359:25 360:13]
  wire  firstFaddValid_0 = faddModule_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 71:28 84:25]
  wire  firstFaddValid_1 = faddModule_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 71:28 84:25]
  wire  _T_13 = firstFaddValid_0 & firstFaddValid_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 134:124]
  wire  prehandshaked_2 = _T_13 & firstPostReady_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 96:34]
  reg  mixPc_this; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 98:31]
  reg [1:0] rowtag_this; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 99:32]
  wire  prehandshaked_3 = _T_13 & faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 354:35]
  reg  valid_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 355:24]
  wire  postReady_0 = faddModule_3_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 109:27 128:22]
  wire  _GEN_31 = faddModule_2_io_out_valid & postReady_0 ? 1'h0 : valid_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 356:49 357:13 355:24]
  wire  _GEN_32 = prehandshaked_3 | _GEN_31; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 359:25 360:13]
  wire  postValid_0 = faddModule_2_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 108:27 116:24]
  wire  posthandshaked = postValid_0 & postReady_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 123:53]
  reg  mixPc_sx; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 125:36]
  reg [1:0] rowtag_sx; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 126:37]
  wire  prehandshaked_4 = postValid_0 & faddModule_3_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 354:35]
  reg  valid_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 355:24]
  wire  _T_15 = faddModule_3_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 356:34]
  wire  _GEN_39 = faddModule_3_io_out_valid ? 1'h0 : valid_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 356:49 357:13 355:24]
  wire  _GEN_40 = prehandshaked_4 | _GEN_39; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 359:25 360:13]
  reg  mixPc_es; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 141:27]
  reg [1:0] rowtag_es; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 142:28]
  reg  esValid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 146:24]
  wire  _GEN_48 = io_out_valid ? 1'h0 : esValid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 147:22 148:13 146:24]
  wire  _GEN_49 = _T_15 | _GEN_48; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 150:25 151:13]
  wire  prehandshaked_5 = faddModule_3_io_out_valid & ~mixPc_sx; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 154:110]
  reg  valid_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 223:24]
  wire  _GEN_50 = fcvt_1_io_out_valid ? 1'h0 : valid_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 224:43 225:13 223:24]
  wire  _GEN_51 = prehandshaked_5 | _GEN_50; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 227:25 228:13]
  FMULnoRound fmul ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
    .io_in_ready(fmul_io_in_ready),
    .io_in_valid(fmul_io_in_valid),
    .io_toFADD_ready(fmul_io_toFADD_ready),
    .io_toFADD_valid(fmul_io_toFADD_valid)
  );
  FMULnoRound fmul_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
    .io_in_ready(fmul_1_io_in_ready),
    .io_in_valid(fmul_1_io_in_valid),
    .io_toFADD_ready(fmul_1_io_toFADD_ready),
    .io_toFADD_valid(fmul_1_io_toFADD_valid)
  );
  FMULnoRound fmul_2 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
    .io_in_ready(fmul_2_io_in_ready),
    .io_in_valid(fmul_2_io_in_valid),
    .io_toFADD_ready(fmul_2_io_toFADD_ready),
    .io_toFADD_valid(fmul_2_io_toFADD_valid)
  );
  FMULnoRound fmul_3 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
    .io_in_ready(fmul_3_io_in_ready),
    .io_in_valid(fmul_3_io_in_valid),
    .io_toFADD_ready(fmul_3_io_toFADD_ready),
    .io_toFADD_valid(fmul_3_io_toFADD_valid)
  );
  FPUpConverter fcvt ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 314:22]
    .io_in_ready(fcvt_io_in_ready),
    .io_out_ready(fcvt_io_out_ready)
  );
  FADD faddModule ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
    .io_in_ready(faddModule_io_in_ready),
    .io_in_valid(faddModule_io_in_valid),
    .io_out_ready(faddModule_io_out_ready),
    .io_out_valid(faddModule_io_out_valid)
  );
  FADD faddModule_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
    .io_in_ready(faddModule_1_io_in_ready),
    .io_in_valid(faddModule_1_io_in_valid),
    .io_out_ready(faddModule_1_io_out_ready),
    .io_out_valid(faddModule_1_io_out_valid)
  );
  FADD faddModule_2 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
    .io_in_ready(faddModule_2_io_in_ready),
    .io_in_valid(faddModule_2_io_in_valid),
    .io_out_ready(faddModule_2_io_out_ready),
    .io_out_valid(faddModule_2_io_out_valid)
  );
  FADD faddModule_3 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
    .io_in_ready(faddModule_3_io_in_ready),
    .io_in_valid(faddModule_3_io_in_valid),
    .io_out_ready(faddModule_3_io_out_ready),
    .io_out_valid(faddModule_3_io_out_valid)
  );
  FPDownConverter fcvt_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 220:22]
    .io_in_valid(fcvt_1_io_in_valid),
    .io_out_valid(fcvt_1_io_out_valid)
  );
  assign io_in_ready = fmulReady_0 & fmulReady_1 & fmulReady_2 & fmulReady_3 & fcvt_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 62:41]
  assign io_out_valid = fcvt_1_io_out_valid | mixPc_es & esValid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 159:32]
  assign io_out_bits_mixPc = mixPc_es; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 157:21]
  assign io_out_bits_rowtag = rowtag_es; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 158:22]
  assign fmul_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 117:22]
  assign fmul_io_toFADD_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 51:134]
  assign fmul_1_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 117:22]
  assign fmul_1_io_toFADD_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 51:134]
  assign fmul_2_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 117:22]
  assign fmul_2_io_toFADD_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 51:134]
  assign fmul_3_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 117:22]
  assign fmul_3_io_toFADD_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 51:134]
  assign fcvt_io_out_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 57:124]
  assign faddModule_io_in_valid = valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 368:28]
  assign faddModule_io_out_ready = faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 117:23 72:28]
  assign faddModule_1_io_in_valid = valid_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 368:28]
  assign faddModule_1_io_out_ready = faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 117:23 72:28]
  assign faddModule_2_io_in_valid = valid_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 368:28]
  assign faddModule_2_io_out_ready = faddModule_3_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 109:27 128:22]
  assign faddModule_3_io_in_valid = valid_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 368:28]
  assign faddModule_3_io_out_ready = 1'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 377:29]
  assign fcvt_1_io_in_valid = valid_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 231:22]
  always @(posedge clock) begin
    if (s1_handshaked_s2) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 67:27]
      mixPc_s2 <= io_in_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 67:27]
    end
    if (s1_handshaked_s2) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 69:28]
      rowtag_s2 <= io_in_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 69:28]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 355:24]
      valid <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 355:24]
    end else begin
      valid <= _GEN_4;
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 355:24]
      valid_1 <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 355:24]
    end else begin
      valid_1 <= _GEN_16;
    end
    if (prehandshaked_2) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 98:31]
      mixPc_this <= mixPc_s2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 98:31]
    end
    if (prehandshaked_2) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 99:32]
      rowtag_this <= rowtag_s2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 99:32]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 355:24]
      valid_2 <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 355:24]
    end else begin
      valid_2 <= _GEN_32;
    end
    if (posthandshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 125:36]
      mixPc_sx <= mixPc_this; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 125:36]
    end
    if (posthandshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 126:37]
      rowtag_sx <= rowtag_this; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 126:37]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 355:24]
      valid_3 <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 355:24]
    end else begin
      valid_3 <= _GEN_40;
    end
    if (_T_15) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 141:27]
      mixPc_es <= mixPc_sx; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 141:27]
    end
    if (_T_15) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 142:28]
      rowtag_es <= rowtag_sx; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 142:28]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 146:24]
      esValid <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 146:24]
    end else begin
      esValid <= _GEN_49;
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 223:24]
      valid_4 <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 223:24]
    end else begin
      valid_4 <= _GEN_51;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  mixPc_s2 = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  rowtag_s2 = _RAND_1[1:0];
  _RAND_2 = {1{`RANDOM}};
  valid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  valid_1 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  mixPc_this = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  rowtag_this = _RAND_5[1:0];
  _RAND_6 = {1{`RANDOM}};
  valid_2 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  mixPc_sx = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  rowtag_sx = _RAND_8[1:0];
  _RAND_9 = {1{`RANDOM}};
  valid_3 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  mixPc_es = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  rowtag_es = _RAND_11[1:0];
  _RAND_12 = {1{`RANDOM}};
  esValid = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  valid_4 = _RAND_13[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Threadgroup(
  input   clock,
  input   reset,
  output  io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 20:14]
  input   io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 20:14]
  input   io_in_bits_mixPcMode, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 20:14]
  output  io_out_valid // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 20:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire  dp_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_io_in_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [1:0] dp_io_in_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_io_out_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [1:0] dp_io_out_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_1_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_1_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_1_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_1_io_in_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [1:0] dp_1_io_in_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_1_io_out_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [1:0] dp_1_io_out_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_2_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_2_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_2_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_2_io_in_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [1:0] dp_2_io_in_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_2_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_2_io_out_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [1:0] dp_2_io_out_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_3_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_3_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_3_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_3_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_3_io_in_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [1:0] dp_3_io_in_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_3_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_3_io_out_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [1:0] dp_3_io_out_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  prehandshaked = io_in_valid & io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 25:35]
  reg  outValid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 38:25]
  wire  _GEN_0 = io_out_valid ? 1'h0 : outValid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 39:21 40:14 38:25]
  reg [2:0] state; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 44:22]
  reg  dp_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 45:28]
  wire [2:0] _GEN_4 = io_in_valid ? 3'h1 : 3'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 65:33 66:17 68:17]
  wire  _GEN_5 = io_in_valid & dp_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 45:28 65:33 69:23]
  wire [2:0] _GEN_6 = ~io_in_bits_mixPcMode ? 3'h3 : _GEN_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 63:22 64:17]
  wire  _GEN_7 = ~io_in_bits_mixPcMode ? dp_in_valid : _GEN_5; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 63:22 45:28]
  wire [2:0] _GEN_13 = 3'h4 == state ? _GEN_4 : state; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17 44:22]
  wire  _GEN_14 = 3'h4 == state ? _GEN_5 : dp_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17 45:28]
  wire [2:0] _GEN_15 = 3'h3 == state ? 3'h4 : _GEN_13; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17]
  wire  _GEN_16 = 3'h3 == state ? dp_in_valid : _GEN_14; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17 45:28]
  wire  _dpIn_va_T = state == 3'h2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 93:16]
  wire  _dpIn_va_T_1 = state == 3'h3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 94:16]
  wire  _dpIn_va_T_2 = state == 3'h4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 95:16]
  wire [1:0] _rowtag_in_T_5 = _dpIn_va_T_1 ? 2'h2 : 2'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _rowtag_in_T_6 = _dpIn_va_T_2 ? 2'h3 : 2'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _GEN_48 = {{1'd0}, _dpIn_va_T}; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _rowtag_in_T_8 = _GEN_48 | _rowtag_in_T_5; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire  dpValid_0 = dp_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 122:16 34:21]
  wire  dpValid_1 = dp_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 122:16 34:21]
  wire  dpValid_2 = dp_2_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 122:16 34:21]
  wire  dpValid_3 = dp_3_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 122:16 34:21]
  wire [1:0] rowtag_out = dp_3_io_out_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 124:16 36:24]
  wire  outMixPc = dp_3_io_out_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 125:14 37:22]
  wire  _GEN_27 = outMixPc | _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 143:24 146:20]
  wire  _GEN_30 = 2'h3 == rowtag_out | _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 133:24 156:18]
  wire  _GEN_33 = 2'h2 == rowtag_out ? _GEN_0 : _GEN_30; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 133:24]
  wire  dpReady_0 = dp_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 123:16 35:21]
  wire  dpReady_1 = dp_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 123:16 35:21]
  wire  dpReady_2 = dp_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 123:16 35:21]
  wire  dpReady_3 = dp_3_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 123:16 35:21]
  DotProdUnit dp ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
    .clock(dp_clock),
    .reset(dp_reset),
    .io_in_ready(dp_io_in_ready),
    .io_in_valid(dp_io_in_valid),
    .io_in_bits_mixPc(dp_io_in_bits_mixPc),
    .io_in_bits_rowtag(dp_io_in_bits_rowtag),
    .io_out_valid(dp_io_out_valid),
    .io_out_bits_mixPc(dp_io_out_bits_mixPc),
    .io_out_bits_rowtag(dp_io_out_bits_rowtag)
  );
  DotProdUnit dp_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
    .clock(dp_1_clock),
    .reset(dp_1_reset),
    .io_in_ready(dp_1_io_in_ready),
    .io_in_valid(dp_1_io_in_valid),
    .io_in_bits_mixPc(dp_1_io_in_bits_mixPc),
    .io_in_bits_rowtag(dp_1_io_in_bits_rowtag),
    .io_out_valid(dp_1_io_out_valid),
    .io_out_bits_mixPc(dp_1_io_out_bits_mixPc),
    .io_out_bits_rowtag(dp_1_io_out_bits_rowtag)
  );
  DotProdUnit dp_2 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
    .clock(dp_2_clock),
    .reset(dp_2_reset),
    .io_in_ready(dp_2_io_in_ready),
    .io_in_valid(dp_2_io_in_valid),
    .io_in_bits_mixPc(dp_2_io_in_bits_mixPc),
    .io_in_bits_rowtag(dp_2_io_in_bits_rowtag),
    .io_out_valid(dp_2_io_out_valid),
    .io_out_bits_mixPc(dp_2_io_out_bits_mixPc),
    .io_out_bits_rowtag(dp_2_io_out_bits_rowtag)
  );
  DotProdUnit dp_3 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
    .clock(dp_3_clock),
    .reset(dp_3_reset),
    .io_in_ready(dp_3_io_in_ready),
    .io_in_valid(dp_3_io_in_valid),
    .io_in_bits_mixPc(dp_3_io_in_bits_mixPc),
    .io_in_bits_rowtag(dp_3_io_in_bits_rowtag),
    .io_out_valid(dp_3_io_out_valid),
    .io_out_bits_mixPc(dp_3_io_out_bits_mixPc),
    .io_out_bits_rowtag(dp_3_io_out_bits_rowtag)
  );
  assign io_in_ready = dpReady_0 & dpReady_1 & dpReady_2 & dpReady_3 & (state == 3'h0 | _dpIn_va_T &
    io_in_bits_mixPcMode | _dpIn_va_T_2); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 164:41]
  assign io_out_valid = outValid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 163:16]
  assign dp_clock = clock;
  assign dp_reset = reset;
  assign dp_io_in_valid = dp_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 178:20]
  assign dp_io_in_bits_mixPc = io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 182:25]
  assign dp_io_in_bits_rowtag = _rowtag_in_T_8 | _rowtag_in_T_6; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_1_clock = clock;
  assign dp_1_reset = reset;
  assign dp_1_io_in_valid = dp_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 178:20]
  assign dp_1_io_in_bits_mixPc = io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 182:25]
  assign dp_1_io_in_bits_rowtag = _rowtag_in_T_8 | _rowtag_in_T_6; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_2_clock = clock;
  assign dp_2_reset = reset;
  assign dp_2_io_in_valid = dp_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 178:20]
  assign dp_2_io_in_bits_mixPc = io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 182:25]
  assign dp_2_io_in_bits_rowtag = _rowtag_in_T_8 | _rowtag_in_T_6; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_3_clock = clock;
  assign dp_3_reset = reset;
  assign dp_3_io_in_valid = dp_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 178:20]
  assign dp_3_io_in_bits_mixPc = io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 182:25]
  assign dp_3_io_in_bits_rowtag = _rowtag_in_T_8 | _rowtag_in_T_6; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  always @(posedge clock) begin
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 38:25]
      outValid <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 38:25]
    end else if (dpValid_0 & dpValid_1 & dpValid_2 & dpValid_3) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 132:31]
      if (2'h0 == rowtag_out) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 133:24]
        outValid <= _GEN_0;
      end else if (2'h1 == rowtag_out) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 133:24]
        outValid <= _GEN_27;
      end else begin
        outValid <= _GEN_33;
      end
    end else begin
      outValid <= _GEN_0;
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 44:22]
      state <= 3'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 44:22]
    end else if (3'h0 == state) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17]
      if (prehandshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 49:27]
        state <= 3'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 50:15]
      end
    end else if (3'h1 == state) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17]
      state <= 3'h2;
    end else if (3'h2 == state) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17]
      state <= _GEN_6;
    end else begin
      state <= _GEN_15;
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 45:28]
      dp_in_valid <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 45:28]
    end else if (3'h0 == state) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17]
      dp_in_valid <= prehandshaked;
    end else if (!(3'h1 == state)) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17]
      if (3'h2 == state) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17]
        dp_in_valid <= _GEN_7;
      end else begin
        dp_in_valid <= _GEN_16;
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  outValid = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  state = _RAND_1[2:0];
  _RAND_2 = {1{`RANDOM}};
  dp_in_valid = _RAND_2[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Octet(
  input   clock,
  input   reset,
  output  io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
  input   io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
  input   io_in_bits_mixPcMode, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
  output  io_out_valid // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
);
  wire  tg_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_1_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_1_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_1_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_1_io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  Threadgroup tg ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
    .clock(tg_clock),
    .reset(tg_reset),
    .io_in_ready(tg_io_in_ready),
    .io_in_valid(tg_io_in_valid),
    .io_in_bits_mixPcMode(tg_io_in_bits_mixPcMode),
    .io_out_valid(tg_io_out_valid)
  );
  Threadgroup tg_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
    .clock(tg_1_clock),
    .reset(tg_1_reset),
    .io_in_ready(tg_1_io_in_ready),
    .io_in_valid(tg_1_io_in_valid),
    .io_in_bits_mixPcMode(tg_1_io_in_bits_mixPcMode),
    .io_out_valid(tg_1_io_out_valid)
  );
  assign io_in_ready = tg_io_in_ready & tg_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 54:28]
  assign io_out_valid = tg_io_out_valid & tg_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 55:29]
  assign tg_clock = clock;
  assign tg_reset = reset;
  assign tg_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 174:20]
  assign tg_io_in_bits_mixPcMode = io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 178:29]
  assign tg_1_clock = clock;
  assign tg_1_reset = reset;
  assign tg_1_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 174:20]
  assign tg_1_io_in_bits_mixPcMode = io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 178:29]
endmodule
module TensorCore(
  input   clock,
  input   reset,
  output  io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input   io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input   io_in_bits_ctrl_mixPcMode, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  output  io_out_valid // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
);
  wire  ot_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_1_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_1_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_1_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_1_io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_ready_0 = ot_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 41:22 48:17]
  wire  ot_ready_1 = ot_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 41:22 48:17]
  wire  ot_valid_0 = ot_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 40:22 47:17]
  wire  ot_valid_1 = ot_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 40:22 47:17]
  Octet ot ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
    .clock(ot_clock),
    .reset(ot_reset),
    .io_in_ready(ot_io_in_ready),
    .io_in_valid(ot_io_in_valid),
    .io_in_bits_mixPcMode(ot_io_in_bits_mixPcMode),
    .io_out_valid(ot_io_out_valid)
  );
  Octet ot_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
    .clock(ot_1_clock),
    .reset(ot_1_reset),
    .io_in_ready(ot_1_io_in_ready),
    .io_in_valid(ot_1_io_in_valid),
    .io_in_bits_mixPcMode(ot_1_io_in_bits_mixPcMode),
    .io_out_valid(ot_1_io_out_valid)
  );
  assign io_in_ready = ot_ready_0 & ot_ready_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 51:36]
  assign io_out_valid = ot_valid_0 & ot_valid_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 52:36]
  assign ot_clock = clock;
  assign ot_reset = reset;
  assign ot_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 77:20]
  assign ot_io_in_bits_mixPcMode = io_in_bits_ctrl_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 85:29]
  assign ot_1_clock = clock;
  assign ot_1_reset = reset;
  assign ot_1_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 77:20]
  assign ot_1_io_in_bits_mixPcMode = io_in_bits_ctrl_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 85:29]
endmodule
module Top(
  input   clock,
  input   reset,
  output  io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input   io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input   io_in_bits_ctrl_mixPcMode, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  output  io_out_valid // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
);
  wire  tc_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_io_in_bits_ctrl_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_1_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_1_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_1_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_1_io_in_bits_ctrl_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_ready_0 = tc_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 59:22 86:17]
  wire  tc_ready_1 = tc_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 59:22 86:17]
  wire  tc_valid_0 = tc_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 58:22 85:17]
  wire  tc_valid_1 = tc_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 58:22 85:17]
  TensorCore tc ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
    .clock(tc_clock),
    .reset(tc_reset),
    .io_in_ready(tc_io_in_ready),
    .io_in_valid(tc_io_in_valid),
    .io_in_bits_ctrl_mixPcMode(tc_io_in_bits_ctrl_mixPcMode),
    .io_out_valid(tc_io_out_valid)
  );
  TensorCore tc_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
    .clock(tc_1_clock),
    .reset(tc_1_reset),
    .io_in_ready(tc_1_io_in_ready),
    .io_in_valid(tc_1_io_in_valid),
    .io_in_bits_ctrl_mixPcMode(tc_1_io_in_bits_ctrl_mixPcMode),
    .io_out_valid(tc_1_io_out_valid)
  );
  assign io_in_ready = tc_ready_0 & tc_ready_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 89:36]
  assign io_out_valid = tc_valid_0 & tc_valid_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 90:36]
  assign tc_clock = clock;
  assign tc_reset = reset;
  assign tc_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 78:20]
  assign tc_io_in_bits_ctrl_mixPcMode = io_in_bits_ctrl_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 95:34]
  assign tc_1_clock = clock;
  assign tc_1_reset = reset;
  assign tc_1_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 78:20]
  assign tc_1_io_in_bits_ctrl_mixPcMode = io_in_bits_ctrl_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 95:34]
endmodule
module Adagio(
  input   clock,
  input   reset,
  input   io_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 11:14]
  input   io_uart_ctrl_tx_done, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 11:14]
  input   io_uart_ctrl_rx_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 11:14]
  output  io_uart_ctrl_tx_en // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 11:14]
);
  wire  manager_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 16:23]
  wire  manager_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 16:23]
  wire  manager_io_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 16:23]
  wire  manager_io_uart_ctrl_tx_done; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 16:23]
  wire  manager_io_uart_ctrl_rx_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 16:23]
  wire  manager_io_uart_ctrl_tx_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 16:23]
  wire  manager_io_top_src_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 16:23]
  wire  manager_io_top_src_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 16:23]
  wire  manager_io_top_src_bits_ctrl_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 16:23]
  wire  manager_io_top_wb_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 16:23]
  wire  manager_io_top_wb_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 16:23]
  wire  top_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 17:19]
  wire  top_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 17:19]
  wire  top_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 17:19]
  wire  top_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 17:19]
  wire  top_io_in_bits_ctrl_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 17:19]
  wire  top_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 17:19]
  Manager manager ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 16:23]
    .clock(manager_clock),
    .reset(manager_reset),
    .io_mixPc(manager_io_mixPc),
    .io_uart_ctrl_tx_done(manager_io_uart_ctrl_tx_done),
    .io_uart_ctrl_rx_valid(manager_io_uart_ctrl_rx_valid),
    .io_uart_ctrl_tx_en(manager_io_uart_ctrl_tx_en),
    .io_top_src_ready(manager_io_top_src_ready),
    .io_top_src_valid(manager_io_top_src_valid),
    .io_top_src_bits_ctrl_mixPcMode(manager_io_top_src_bits_ctrl_mixPcMode),
    .io_top_wb_ready(manager_io_top_wb_ready),
    .io_top_wb_valid(manager_io_top_wb_valid)
  );
  Top top ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 17:19]
    .clock(top_clock),
    .reset(top_reset),
    .io_in_ready(top_io_in_ready),
    .io_in_valid(top_io_in_valid),
    .io_in_bits_ctrl_mixPcMode(top_io_in_bits_ctrl_mixPcMode),
    .io_out_valid(top_io_out_valid)
  );
  assign io_uart_ctrl_tx_en = manager_io_uart_ctrl_tx_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 21:24]
  assign manager_clock = clock;
  assign manager_reset = reset;
  assign manager_io_mixPc = io_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 27:20]
  assign manager_io_uart_ctrl_tx_done = io_uart_ctrl_tx_done; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 21:24]
  assign manager_io_uart_ctrl_rx_valid = io_uart_ctrl_rx_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 21:24]
  assign manager_io_top_src_ready = top_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 18:13]
  assign manager_io_top_wb_valid = top_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 19:21]
  assign top_clock = clock;
  assign top_reset = reset;
  assign top_io_in_valid = manager_io_top_src_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 18:13]
  assign top_io_in_bits_ctrl_mixPcMode = manager_io_top_src_bits_ctrl_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/Adagio.scala 18:13]
endmodule
module Tx(
  input        clock,
  input        reset,
  output       io_txd, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 40:14]
  input  [7:0] io_channel_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 40:14]
  output       io_channel_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 40:14]
  input        io_channel_valid // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 40:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [10:0] shiftReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 46:25]
  reg [19:0] cntReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 47:23]
  reg [3:0] bitsReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 48:24]
  wire  _io_channel_ready_T = cntReg == 20'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 50:31]
  wire [9:0] shift = shiftReg[10:1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 56:28]
  wire [10:0] _shiftReg_T_1 = {1'h1,shift}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 57:22]
  wire [3:0] _bitsReg_T_1 = bitsReg - 4'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 58:26]
  wire [10:0] _shiftReg_T_3 = {2'h3,io_channel_data,1'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 62:24]
  wire [19:0] _cntReg_T_1 = cntReg - 20'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 69:22]
  assign io_txd = shiftReg[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 51:21]
  assign io_channel_ready = cntReg == 20'h0 & bitsReg == 4'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 50:40]
  always @(posedge clock) begin
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 46:25]
      shiftReg <= 11'h7ff; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 46:25]
    end else if (_io_channel_ready_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 53:25]
      if (bitsReg != 4'h0) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 55:28]
        shiftReg <= _shiftReg_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 57:16]
      end else if (io_channel_valid) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 60:31]
        shiftReg <= _shiftReg_T_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 62:18]
      end else begin
        shiftReg <= 11'h7ff; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 65:18]
      end
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 47:23]
      cntReg <= 20'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 47:23]
    end else if (_io_channel_ready_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 53:25]
      cntReg <= 20'h1b1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 54:12]
    end else begin
      cntReg <= _cntReg_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 69:12]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 48:24]
      bitsReg <= 4'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 48:24]
    end else if (_io_channel_ready_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 53:25]
      if (bitsReg != 4'h0) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 55:28]
        bitsReg <= _bitsReg_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 58:15]
      end else if (io_channel_valid) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 60:31]
        bitsReg <= 4'hb; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 63:17]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  shiftReg = _RAND_0[10:0];
  _RAND_1 = {1{`RANDOM}};
  cntReg = _RAND_1[19:0];
  _RAND_2 = {1{`RANDOM}};
  bitsReg = _RAND_2[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Buffer(
  input        clock,
  input        reset,
  input  [7:0] io_in_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 15:14]
  output       io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 15:14]
  input        io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 15:14]
  output [7:0] io_out_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 15:14]
  input        io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 15:14]
  output       io_out_valid // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 15:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg  stateReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 21:25]
  reg [7:0] dataReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 22:24]
  wire  _io_in_ready_T = ~stateReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 24:28]
  wire  _GEN_1 = io_in_valid | stateReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 28:24 30:16 21:25]
  assign io_in_ready = ~stateReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 24:28]
  assign io_out_data = dataReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 37:15]
  assign io_out_valid = stateReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 25:28]
  always @(posedge clock) begin
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 21:25]
      stateReg <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 21:25]
    end else if (_io_in_ready_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 27:29]
      stateReg <= _GEN_1;
    end else if (io_out_ready) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 33:25]
      stateReg <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 34:16]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 22:24]
      dataReg <= 8'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 22:24]
    end else if (_io_in_ready_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 27:29]
      if (io_in_valid) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 28:24]
        dataReg <= io_in_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 29:15]
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  stateReg = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  dataReg = _RAND_1[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module BufferTx(
  input        clock,
  input        reset,
  output       io_txd, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 74:14]
  input  [7:0] io_channel_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 74:14]
  output       io_channel_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 74:14]
  input        io_channel_valid // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 74:14]
);
  wire  tx_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 78:18]
  wire  tx_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 78:18]
  wire  tx_io_txd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 78:18]
  wire [7:0] tx_io_channel_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 78:18]
  wire  tx_io_channel_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 78:18]
  wire  tx_io_channel_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 78:18]
  wire  buf__clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 79:19]
  wire  buf__reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 79:19]
  wire [7:0] buf__io_in_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 79:19]
  wire  buf__io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 79:19]
  wire  buf__io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 79:19]
  wire [7:0] buf__io_out_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 79:19]
  wire  buf__io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 79:19]
  wire  buf__io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 79:19]
  Tx tx ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 78:18]
    .clock(tx_clock),
    .reset(tx_reset),
    .io_txd(tx_io_txd),
    .io_channel_data(tx_io_channel_data),
    .io_channel_ready(tx_io_channel_ready),
    .io_channel_valid(tx_io_channel_valid)
  );
  Buffer buf_ ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 79:19]
    .clock(buf__clock),
    .reset(buf__reset),
    .io_in_data(buf__io_in_data),
    .io_in_ready(buf__io_in_ready),
    .io_in_valid(buf__io_in_valid),
    .io_out_data(buf__io_out_data),
    .io_out_ready(buf__io_out_ready),
    .io_out_valid(buf__io_out_valid)
  );
  assign io_txd = tx_io_txd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 83:10]
  assign io_channel_ready = buf__io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 81:13]
  assign tx_clock = clock;
  assign tx_reset = reset;
  assign tx_io_channel_data = buf__io_out_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 82:17]
  assign tx_io_channel_valid = buf__io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 82:17]
  assign buf__clock = clock;
  assign buf__reset = reset;
  assign buf__io_in_data = io_channel_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 81:13]
  assign buf__io_in_valid = io_channel_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 81:13]
  assign buf__io_out_ready = tx_io_channel_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 82:17]
endmodule
module Rx(
  input        clock,
  input        reset,
  input        io_rxd, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 105:14]
  output [7:0] io_channel_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 105:14]
  input        io_channel_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 105:14]
  output       io_channel_valid // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 105:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg  rxReg_REG; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 114:30]
  reg  rxReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 114:22]
  reg [7:0] shiftReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 115:25]
  reg [19:0] cntReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 116:23]
  reg [3:0] bitsReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 117:24]
  reg  valReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 118:23]
  wire [19:0] _cntReg_T_1 = cntReg - 20'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 121:22]
  wire [7:0] _shiftReg_T_1 = {rxReg,shiftReg[7:1]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 124:20]
  wire [3:0] _bitsReg_T_1 = bitsReg - 4'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 125:24]
  wire  _GEN_0 = bitsReg == 4'h1 | valReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 126:28 127:14 118:23]
  assign io_channel_data = shiftReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 139:19]
  assign io_channel_valid = valReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 140:20]
  always @(posedge clock) begin
    rxReg_REG <= reset | io_rxd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 114:{30,30,30}]
    rxReg <= reset | rxReg_REG; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 114:{22,22,22}]
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 115:25]
      shiftReg <= 8'h41; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 115:25]
    end else if (!(cntReg != 20'h0)) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 120:25]
      if (bitsReg != 4'h0) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 122:33]
        shiftReg <= _shiftReg_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 124:14]
      end
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 116:23]
      cntReg <= 20'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 116:23]
    end else if (cntReg != 20'h0) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 120:25]
      cntReg <= _cntReg_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 121:12]
    end else if (bitsReg != 4'h0) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 122:33]
      cntReg <= 20'h1b1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 123:12]
    end else if (~rxReg) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 130:31]
      cntReg <= 20'h28a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 131:12]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 117:24]
      bitsReg <= 4'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 117:24]
    end else if (!(cntReg != 20'h0)) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 120:25]
      if (bitsReg != 4'h0) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 122:33]
        bitsReg <= _bitsReg_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 125:13]
      end else if (~rxReg) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 130:31]
        bitsReg <= 4'h8; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 132:13]
      end
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 118:23]
      valReg <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 118:23]
    end else if (valReg & io_channel_ready) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 135:37]
      valReg <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 136:12]
    end else if (!(cntReg != 20'h0)) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 120:25]
      if (bitsReg != 4'h0) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 122:33]
        valReg <= _GEN_0;
      end
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  rxReg_REG = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  rxReg = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  shiftReg = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  cntReg = _RAND_3[19:0];
  _RAND_4 = {1{`RANDOM}};
  bitsReg = _RAND_4[3:0];
  _RAND_5 = {1{`RANDOM}};
  valReg = _RAND_5[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module UART(
  input   clock,
  input   reset,
  output  io_ctrl_tx_done, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
  output  io_ctrl_rx_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
  input   io_ctrl_tx_en, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
  input   io_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
  output  io_lane_txd, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
  input   io_lane_rxd // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [63:0] _RAND_8;
`endif // RANDOMIZE_REG_INIT
  wire  tx_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 190:18]
  wire  tx_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 190:18]
  wire  tx_io_txd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 190:18]
  wire [7:0] tx_io_channel_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 190:18]
  wire  tx_io_channel_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 190:18]
  wire  tx_io_channel_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 190:18]
  wire  rx_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 196:18]
  wire  rx_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 196:18]
  wire  rx_io_rxd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 196:18]
  wire [7:0] rx_io_channel_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 196:18]
  wire  rx_io_channel_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 196:18]
  wire  rx_io_channel_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 196:18]
  wire [7:0] MAX_ADDR = io_mixPc ? 8'hff : 8'hbf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 176:21]
  reg [2:0] rx_byteCnt; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 178:27]
  reg [7:0] rx_regCnt; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 179:26]
  reg [63:0] rx_byteReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 180:27]
  reg  rx_done; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 181:24]
  reg [2:0] tx_byteCnt; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 183:27]
  reg [7:0] tx_regCnt; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 184:26]
  reg [7:0] tx_byteReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 185:27]
  reg  tx_done; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 186:24]
  wire [71:0] _rx_byteReg_T = {rx_byteReg, 8'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 205:31]
  wire [71:0] _GEN_15 = {{64'd0}, rx_io_channel_data}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 205:44]
  wire [71:0] _rx_byteReg_T_1 = _rx_byteReg_T | _GEN_15; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 205:44]
  wire [63:0] _rx_byteCnt_T_1 = rx_byteReg + 64'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 206:30]
  wire [71:0] _GEN_0 = rx_io_channel_valid & rx_io_channel_ready ? _rx_byteReg_T_1 : {{8'd0}, rx_byteReg}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 204:42 205:16 180:27]
  wire [63:0] _GEN_1 = rx_io_channel_valid & rx_io_channel_ready ? _rx_byteCnt_T_1 : {{61'd0}, rx_byteCnt}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 204:42 206:16 178:27]
  wire [7:0] _rx_regCnt_T_1 = rx_regCnt + 8'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 215:30]
  wire  _GEN_3 = rx_regCnt == MAX_ADDR | rx_done; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 211:34 213:15 181:24]
  reg [63:0] shift_reg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 223:26]
  wire [2:0] _tx_byteCnt_T_1 = tx_byteCnt + 3'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 229:30]
  wire [71:0] _shift_reg_T = {shift_reg, 8'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 230:28]
  wire [71:0] _GEN_8 = io_ctrl_tx_en & tx_io_channel_ready ? _shift_reg_T : {{8'd0}, shift_reg}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 224:35 230:15 223:26]
  wire  _GEN_12 = tx_regCnt == MAX_ADDR | tx_done; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 233:34 235:15 186:24]
  wire [63:0] _GEN_16 = reset ? 64'h0 : _GEN_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 178:{27,27}]
  wire [71:0] _GEN_17 = reset ? 72'h0 : _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 180:{27,27}]
  wire [71:0] _GEN_18 = reset ? 72'h0 : _GEN_8; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 223:{26,26}]
  BufferTx tx ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 190:18]
    .clock(tx_clock),
    .reset(tx_reset),
    .io_txd(tx_io_txd),
    .io_channel_data(tx_io_channel_data),
    .io_channel_ready(tx_io_channel_ready),
    .io_channel_valid(tx_io_channel_valid)
  );
  Rx rx ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 196:18]
    .clock(rx_clock),
    .reset(rx_reset),
    .io_rxd(rx_io_rxd),
    .io_channel_data(rx_io_channel_data),
    .io_channel_ready(rx_io_channel_ready),
    .io_channel_valid(rx_io_channel_valid)
  );
  assign io_ctrl_tx_done = tx_done; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 244:19]
  assign io_ctrl_rx_valid = rx_done; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 243:20]
  assign io_lane_txd = tx_io_txd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 191:15]
  assign tx_clock = clock;
  assign tx_reset = reset;
  assign tx_io_channel_data = tx_byteReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 193:22]
  assign tx_io_channel_valid = io_ctrl_tx_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 192:23]
  assign rx_clock = clock;
  assign rx_reset = reset;
  assign rx_io_rxd = io_lane_rxd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 197:13]
  assign rx_io_channel_ready = ~io_ctrl_tx_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 198:26]
  always @(posedge clock) begin
    rx_byteCnt <= _GEN_16[2:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 178:{27,27}]
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 179:26]
      rx_regCnt <= 8'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 179:26]
    end else if (rx_byteCnt == 3'h7) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 209:28]
      if (rx_regCnt == MAX_ADDR) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 211:34]
        rx_regCnt <= 8'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 212:17]
      end else begin
        rx_regCnt <= _rx_regCnt_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 215:17]
      end
    end
    rx_byteReg <= _GEN_17[63:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 180:{27,27}]
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 181:24]
      rx_done <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 181:24]
    end else if (rx_byteCnt == 3'h7) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 209:28]
      rx_done <= _GEN_3;
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 183:27]
      tx_byteCnt <= 3'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 183:27]
    end else if (io_ctrl_tx_en & tx_io_channel_ready) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 224:35]
      tx_byteCnt <= _tx_byteCnt_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 229:16]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 184:26]
      tx_regCnt <= 8'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 184:26]
    end else if (tx_byteCnt == 3'h7) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 232:28]
      if (tx_regCnt == MAX_ADDR) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 233:34]
        tx_regCnt <= 8'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 234:17]
      end else begin
        tx_regCnt <= _rx_regCnt_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 237:17]
      end
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 185:27]
      tx_byteReg <= 8'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 185:27]
    end else if (io_ctrl_tx_en & tx_io_channel_ready) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 224:35]
      tx_byteReg <= shift_reg[63:56]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 228:16]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 186:24]
      tx_done <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 186:24]
    end else if (tx_byteCnt == 3'h7) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 232:28]
      tx_done <= _GEN_12;
    end
    shift_reg <= _GEN_18[63:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 223:{26,26}]
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  rx_byteCnt = _RAND_0[2:0];
  _RAND_1 = {1{`RANDOM}};
  rx_regCnt = _RAND_1[7:0];
  _RAND_2 = {2{`RANDOM}};
  rx_byteReg = _RAND_2[63:0];
  _RAND_3 = {1{`RANDOM}};
  rx_done = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  tx_byteCnt = _RAND_4[2:0];
  _RAND_5 = {1{`RANDOM}};
  tx_regCnt = _RAND_5[7:0];
  _RAND_6 = {1{`RANDOM}};
  tx_byteReg = _RAND_6[7:0];
  _RAND_7 = {1{`RANDOM}};
  tx_done = _RAND_7[0:0];
  _RAND_8 = {2{`RANDOM}};
  shift_reg = _RAND_8[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module System(
  input   clock,
  input   reset,
  output  io_uart_txd, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:14]
  input   io_uart_rxd, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:14]
  input   io_mixPc // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:14]
);
  wire  adagio_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 18:22]
  wire  adagio_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 18:22]
  wire  adagio_io_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 18:22]
  wire  adagio_io_uart_ctrl_tx_done; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 18:22]
  wire  adagio_io_uart_ctrl_rx_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 18:22]
  wire  adagio_io_uart_ctrl_tx_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 18:22]
  wire  uart_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 19:20]
  wire  uart_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 19:20]
  wire  uart_io_ctrl_tx_done; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 19:20]
  wire  uart_io_ctrl_rx_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 19:20]
  wire  uart_io_ctrl_tx_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 19:20]
  wire  uart_io_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 19:20]
  wire  uart_io_lane_txd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 19:20]
  wire  uart_io_lane_rxd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 19:20]
  Adagio adagio ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 18:22]
    .clock(adagio_clock),
    .reset(adagio_reset),
    .io_mixPc(adagio_io_mixPc),
    .io_uart_ctrl_tx_done(adagio_io_uart_ctrl_tx_done),
    .io_uart_ctrl_rx_valid(adagio_io_uart_ctrl_rx_valid),
    .io_uart_ctrl_tx_en(adagio_io_uart_ctrl_tx_en)
  );
  UART uart ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 19:20]
    .clock(uart_clock),
    .reset(uart_reset),
    .io_ctrl_tx_done(uart_io_ctrl_tx_done),
    .io_ctrl_rx_valid(uart_io_ctrl_rx_valid),
    .io_ctrl_tx_en(uart_io_ctrl_tx_en),
    .io_mixPc(uart_io_mixPc),
    .io_lane_txd(uart_io_lane_txd),
    .io_lane_rxd(uart_io_lane_rxd)
  );
  assign io_uart_txd = uart_io_lane_txd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 23:11]
  assign adagio_clock = clock;
  assign adagio_reset = reset;
  assign adagio_io_mixPc = io_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 20:19]
  assign adagio_io_uart_ctrl_tx_done = uart_io_ctrl_tx_done; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 22:23]
  assign adagio_io_uart_ctrl_rx_valid = uart_io_ctrl_rx_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 22:23]
  assign uart_clock = clock;
  assign uart_reset = reset;
  assign uart_io_ctrl_tx_en = adagio_io_uart_ctrl_tx_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 22:23]
  assign uart_io_mixPc = io_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 21:17]
  assign uart_io_lane_rxd = io_uart_rxd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 23:11]
endmodule
