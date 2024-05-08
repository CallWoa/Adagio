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
  input         clock,
  input         reset,
  output        io_ctrl_tx_done, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
  output        io_ctrl_rx_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
  input         io_ctrl_tx_en, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
  input         io_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
  output        io_lane_txd, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
  input         io_lane_rxd, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
  output        io_rf_w_en, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
  output [7:0]  io_rf_r_addr, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
  output [7:0]  io_rf_w_addr, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
  input  [63:0] io_rf_r_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
  output [63:0] io_rf_w_data // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 167:14]
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
  assign io_rf_w_en = rx_byteCnt == 3'h7; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 209:19]
  assign io_rf_r_addr = tx_regCnt + 8'h80; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 246:29]
  assign io_rf_w_addr = rx_regCnt; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 247:16]
  assign io_rf_w_data = rx_byteReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/UART.scala 248:16]
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
