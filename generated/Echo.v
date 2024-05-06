module Tx(
  input        clock,
  input        reset,
  output       io_txd, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 39:14]
  input  [7:0] io_channel_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 39:14]
  output       io_channel_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 39:14]
  input        io_channel_valid // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 39:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [10:0] shiftReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 44:25]
  reg [19:0] cntReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 45:23]
  reg [3:0] bitsReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 46:24]
  wire  _io_channel_ready_T = cntReg == 20'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 48:31]
  wire [9:0] shift = shiftReg[10:1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 54:28]
  wire [10:0] _shiftReg_T_1 = {1'h1,shift}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 55:22]
  wire [3:0] _bitsReg_T_1 = bitsReg - 4'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 56:26]
  wire [10:0] _shiftReg_T_3 = {2'h3,io_channel_data,1'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 60:24]
  wire [19:0] _cntReg_T_1 = cntReg - 20'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 67:22]
  assign io_txd = shiftReg[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 49:21]
  assign io_channel_ready = cntReg == 20'h0 & bitsReg == 4'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 48:40]
  always @(posedge clock) begin
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 44:25]
      shiftReg <= 11'h7ff; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 44:25]
    end else if (_io_channel_ready_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 51:25]
      if (bitsReg != 4'h0) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 53:28]
        shiftReg <= _shiftReg_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 55:16]
      end else if (io_channel_valid) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 58:31]
        shiftReg <= _shiftReg_T_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 60:18]
      end else begin
        shiftReg <= 11'h7ff; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 63:18]
      end
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 45:23]
      cntReg <= 20'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 45:23]
    end else if (_io_channel_ready_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 51:25]
      cntReg <= 20'h1b1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 52:12]
    end else begin
      cntReg <= _cntReg_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 67:12]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 46:24]
      bitsReg <= 4'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 46:24]
    end else if (_io_channel_ready_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 51:25]
      if (bitsReg != 4'h0) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 53:28]
        bitsReg <= _bitsReg_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 56:15]
      end else if (io_channel_valid) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 58:31]
        bitsReg <= 4'hb; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 61:17]
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
  input  [7:0] io_in_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 14:14]
  output       io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 14:14]
  input        io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 14:14]
  output [7:0] io_out_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 14:14]
  input        io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 14:14]
  output       io_out_valid // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 14:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg  stateReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 20:25]
  reg [7:0] dataReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 21:24]
  wire  _io_in_ready_T = ~stateReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 23:28]
  wire  _GEN_1 = io_in_valid | stateReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 27:24 29:16 20:25]
  assign io_in_ready = ~stateReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 23:28]
  assign io_out_data = dataReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 36:15]
  assign io_out_valid = stateReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 24:28]
  always @(posedge clock) begin
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 20:25]
      stateReg <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 20:25]
    end else if (_io_in_ready_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 26:29]
      stateReg <= _GEN_1;
    end else if (io_out_ready) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 32:25]
      stateReg <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 33:16]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 21:24]
      dataReg <= 8'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 21:24]
    end else if (_io_in_ready_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 26:29]
      if (io_in_valid) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 27:24]
        dataReg <= io_in_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 28:15]
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
  output       io_txd, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 72:14]
  input  [7:0] io_channel_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 72:14]
  output       io_channel_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 72:14]
  input        io_channel_valid // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 72:14]
);
  wire  tx_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 76:18]
  wire  tx_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 76:18]
  wire  tx_io_txd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 76:18]
  wire [7:0] tx_io_channel_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 76:18]
  wire  tx_io_channel_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 76:18]
  wire  tx_io_channel_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 76:18]
  wire  buf__clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 77:19]
  wire  buf__reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 77:19]
  wire [7:0] buf__io_in_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 77:19]
  wire  buf__io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 77:19]
  wire  buf__io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 77:19]
  wire [7:0] buf__io_out_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 77:19]
  wire  buf__io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 77:19]
  wire  buf__io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 77:19]
  Tx tx ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 76:18]
    .clock(tx_clock),
    .reset(tx_reset),
    .io_txd(tx_io_txd),
    .io_channel_data(tx_io_channel_data),
    .io_channel_ready(tx_io_channel_ready),
    .io_channel_valid(tx_io_channel_valid)
  );
  Buffer buf_ ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 77:19]
    .clock(buf__clock),
    .reset(buf__reset),
    .io_in_data(buf__io_in_data),
    .io_in_ready(buf__io_in_ready),
    .io_in_valid(buf__io_in_valid),
    .io_out_data(buf__io_out_data),
    .io_out_ready(buf__io_out_ready),
    .io_out_valid(buf__io_out_valid)
  );
  assign io_txd = tx_io_txd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 81:10]
  assign io_channel_ready = buf__io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 79:13]
  assign tx_clock = clock;
  assign tx_reset = reset;
  assign tx_io_channel_data = buf__io_out_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 80:17]
  assign tx_io_channel_valid = buf__io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 80:17]
  assign buf__clock = clock;
  assign buf__reset = reset;
  assign buf__io_in_data = io_channel_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 79:13]
  assign buf__io_in_valid = io_channel_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 79:13]
  assign buf__io_out_ready = tx_io_channel_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 80:17]
endmodule
module Rx(
  input        clock,
  input        reset,
  input        io_rxd, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 103:14]
  output [7:0] io_channel_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 103:14]
  input        io_channel_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 103:14]
  output       io_channel_valid // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 103:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg  rxReg_REG; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 111:30]
  reg  rxReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 111:22]
  reg [7:0] shiftReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 112:25]
  reg [19:0] cntReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 113:23]
  reg [3:0] bitsReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 114:24]
  reg  valReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 115:23]
  wire [19:0] _cntReg_T_1 = cntReg - 20'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 118:22]
  wire [7:0] _shiftReg_T_1 = {rxReg,shiftReg[7:1]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 121:20]
  wire [3:0] _bitsReg_T_1 = bitsReg - 4'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 122:24]
  wire  _GEN_0 = bitsReg == 4'h1 | valReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 123:28 124:14 115:23]
  assign io_channel_data = shiftReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 136:19]
  assign io_channel_valid = valReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 137:20]
  always @(posedge clock) begin
    rxReg_REG <= reset | io_rxd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 111:{30,30,30}]
    rxReg <= reset | rxReg_REG; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 111:{22,22,22}]
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 112:25]
      shiftReg <= 8'h41; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 112:25]
    end else if (!(cntReg != 20'h0)) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 117:25]
      if (bitsReg != 4'h0) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 119:33]
        shiftReg <= _shiftReg_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 121:14]
      end
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 113:23]
      cntReg <= 20'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 113:23]
    end else if (cntReg != 20'h0) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 117:25]
      cntReg <= _cntReg_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 118:12]
    end else if (bitsReg != 4'h0) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 119:33]
      cntReg <= 20'h1b1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 120:12]
    end else if (~rxReg) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 127:31]
      cntReg <= 20'h28a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 128:12]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 114:24]
      bitsReg <= 4'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 114:24]
    end else if (!(cntReg != 20'h0)) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 117:25]
      if (bitsReg != 4'h0) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 119:33]
        bitsReg <= _bitsReg_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 122:13]
      end else if (~rxReg) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 127:31]
        bitsReg <= 4'h8; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 129:13]
      end
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 115:23]
      valReg <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 115:23]
    end else if (valReg & io_channel_ready) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 132:37]
      valReg <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 133:12]
    end else if (!(cntReg != 20'h0)) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 117:25]
      if (bitsReg != 4'h0) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 119:33]
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
module Echo(
  input   clock,
  input   reset,
  output  io_txd, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 141:14]
  input   io_rxd // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 141:14]
);
  wire  tx_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 146:18]
  wire  tx_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 146:18]
  wire  tx_io_txd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 146:18]
  wire [7:0] tx_io_channel_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 146:18]
  wire  tx_io_channel_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 146:18]
  wire  tx_io_channel_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 146:18]
  wire  rx_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 147:18]
  wire  rx_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 147:18]
  wire  rx_io_rxd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 147:18]
  wire [7:0] rx_io_channel_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 147:18]
  wire  rx_io_channel_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 147:18]
  wire  rx_io_channel_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 147:18]
  BufferTx tx ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 146:18]
    .clock(tx_clock),
    .reset(tx_reset),
    .io_txd(tx_io_txd),
    .io_channel_data(tx_io_channel_data),
    .io_channel_ready(tx_io_channel_ready),
    .io_channel_valid(tx_io_channel_valid)
  );
  Rx rx ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 147:18]
    .clock(rx_clock),
    .reset(rx_reset),
    .io_rxd(rx_io_rxd),
    .io_channel_data(rx_io_channel_data),
    .io_channel_ready(rx_io_channel_ready),
    .io_channel_valid(rx_io_channel_valid)
  );
  assign io_txd = tx_io_txd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 148:10]
  assign tx_clock = clock;
  assign tx_reset = reset;
  assign tx_io_channel_data = rx_io_channel_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 150:17]
  assign tx_io_channel_valid = rx_io_channel_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 150:17]
  assign rx_clock = clock;
  assign rx_reset = reset;
  assign rx_io_rxd = io_rxd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 149:13]
  assign rx_io_channel_ready = tx_io_channel_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 150:17]
endmodule
