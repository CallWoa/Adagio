module LZC(
  input  [10:0] io_in, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 11:14]
  output [3:0]  io_out // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 11:14]
);
  wire [3:0] _io_out_T_11 = io_in[1] ? 4'h9 : 4'ha; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _io_out_T_12 = io_in[2] ? 4'h8 : _io_out_T_11; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _io_out_T_13 = io_in[3] ? 4'h7 : _io_out_T_12; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _io_out_T_14 = io_in[4] ? 4'h6 : _io_out_T_13; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _io_out_T_15 = io_in[5] ? 4'h5 : _io_out_T_14; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _io_out_T_16 = io_in[6] ? 4'h4 : _io_out_T_15; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _io_out_T_17 = io_in[7] ? 4'h3 : _io_out_T_16; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _io_out_T_18 = io_in[8] ? 4'h2 : _io_out_T_17; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _io_out_T_19 = io_in[9] ? 4'h1 : _io_out_T_18; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  assign io_out = io_in[10] ? 4'h0 : _io_out_T_19; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
endmodule
module FMULnoRound(
  output        io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 26:14]
  input         io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 26:14]
  input  [15:0] io_in_bits_a, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 26:14]
  input  [15:0] io_in_bits_b, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 26:14]
  input         io_toFADD_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 26:14]
  output        io_toFADD_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 26:14]
  output [31:0] io_toFADD_bits_fp_prod, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 26:14]
  output        io_toFADD_bits_inter_flags_isNaN, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 26:14]
  output        io_toFADD_bits_inter_flags_isInf // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 26:14]
);
  wire [10:0] aLZC_lzc_io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
  wire [3:0] aLZC_lzc_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
  wire [10:0] bLZC_lzc_io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
  wire [3:0] bLZC_lzc_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
  wire  fp_a_sign = io_in_bits_a[15]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 58:19]
  wire [4:0] fp_a_exp = io_in_bits_a[14:10]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 59:18]
  wire [9:0] fp_a_sig = io_in_bits_a[9:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 60:18]
  wire  fp_b_sign = io_in_bits_b[15]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 58:19]
  wire [4:0] fp_b_exp = io_in_bits_b[14:10]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 59:18]
  wire [9:0] fp_b_sig = io_in_bits_b[9:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 60:18]
  wire  expNotZero = |fp_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 31:28]
  wire  expIsOnes = &fp_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 32:27]
  wire  sigNotZero = |fp_a_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 33:28]
  wire  decode_a_expIsZero = ~expNotZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 36:27]
  wire  decode_a_sigIsZero = ~sigNotZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 39:27]
  wire  decode_a_isInf = expIsOnes & decode_a_sigIsZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 41:40]
  wire  decode_a_isZero = decode_a_expIsZero & decode_a_sigIsZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 42:41]
  wire  decode_a_isNaN = expIsOnes & sigNotZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 43:40]
  wire  expNotZero_1 = |fp_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 31:28]
  wire  expIsOnes_1 = &fp_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 32:27]
  wire  sigNotZero_1 = |fp_b_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 33:28]
  wire  decode_b_expIsZero = ~expNotZero_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 36:27]
  wire  decode_b_sigIsZero = ~sigNotZero_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 39:27]
  wire  decode_b_isInf = expIsOnes_1 & decode_b_sigIsZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 41:40]
  wire  decode_b_isZero = decode_b_expIsZero & decode_b_sigIsZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 42:41]
  wire  decode_b_isNaN = expIsOnes_1 & sigNotZero_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 43:40]
  wire  raw_a_isSub = sigNotZero & decode_a_expIsZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 81:78]
  wire [4:0] _raw_a_inner_exp_T_1 = fp_a_exp + 5'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 83:38]
  wire [4:0] raw_a_exp = raw_a_isSub ? _raw_a_inner_exp_T_1 : fp_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 83:23]
  wire [10:0] raw_a_sig = {expNotZero,fp_a_sig}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 84:23]
  wire  raw_b_isSub = sigNotZero_1 & decode_b_expIsZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 81:78]
  wire [4:0] _raw_b_inner_exp_T_1 = fp_b_exp + 5'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 83:38]
  wire [4:0] raw_b_exp = raw_b_isSub ? _raw_b_inner_exp_T_1 : fp_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 83:23]
  wire [10:0] raw_b_sig = {expNotZero_1,fp_b_sig}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 84:23]
  wire  hasZero = decode_a_isZero | decode_b_isZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 39:33]
  wire  resultSign = fp_a_sign ^ fp_b_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 40:30]
  wire [5:0] _expSum_T = {1'h0,raw_a_exp}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 41:19]
  wire [5:0] _expSum_T_1 = {1'h0,raw_b_exp}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 41:46]
  wire [5:0] expSum = _expSum_T + _expSum_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 41:41]
  wire [7:0] _expSumUpPc_T = {2'h0,expSum}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 44:23]
  wire [7:0] expSumUpPc = _expSumUpPc_T + 8'h61; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 44:71]
  wire [7:0] resultExpNoShift = hasZero ? 8'h0 : expSumUpPc; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [21:0] resultSigNoShift = raw_a_sig * raw_b_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 51:37]
  wire [3:0] lzcRaw = aLZC_lzc_io_out + bLZC_lzc_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 57:21]
  wire [21:0] ErrorDetectMask = 22'h200000 >> lzcRaw; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 58:68]
  wire [21:0] _lzcError_T = resultSigNoShift & ErrorDetectMask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 59:37]
  wire  lzcError = ~(|_lzcError_T); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 59:18]
  wire [3:0] _lzc_T_1 = lzcRaw + 4'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 60:34]
  wire [3:0] lzc = lzcError ? _lzc_T_1 : lzcRaw; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 60:16]
  wire [7:0] _shiftLimit_T_1 = resultExpNoShift + 8'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 61:38]
  wire [7:0] _GEN_0 = {{4'd0}, lzc}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 61:45]
  wire  shiftLimit = _shiftLimit_T_1 <= _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 61:45]
  wire [7:0] _resultSigShifted_T = shiftLimit ? resultExpNoShift : {{4'd0}, lzc}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 63:50]
  wire [276:0] _GEN_1 = {{255'd0}, resultSigNoShift}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 63:44]
  wire [276:0] _resultSigShifted_T_1 = _GEN_1 << _resultSigShifted_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 63:44]
  wire [21:0] resultSigShifted = _resultSigShifted_T_1[21:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 63:86]
  wire [7:0] _resultExpShifted_T_1 = resultExpNoShift - _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 64:79]
  wire [7:0] _resultExpShifted_T_3 = _resultExpShifted_T_1 + 8'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 64:85]
  wire [7:0] resultExpShifted = shiftLimit ? 8'h0 : _resultExpShifted_T_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 64:29]
  wire  hasNaN = decode_a_isNaN | decode_b_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 68:31]
  wire  hasInf = decode_a_isInf | decode_b_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 70:31]
  wire  special_case_happen = hasZero | hasNaN | hasInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 71:47]
  wire  zero_mul_inf = hasZero & hasInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 73:30]
  wire  nan_result = hasNaN | zero_mul_inf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 74:27]
  wire [31:0] _special_result_T_2 = {resultSign,8'hff,23'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 79:10]
  wire [31:0] _special_result_T_3 = {resultSign,31'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 83:10]
  wire [31:0] _special_result_T_4 = hasInf ? _special_result_T_2 : _special_result_T_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 78:8]
  wire [31:0] special_result = nan_result ? 32'h7fc00000 : _special_result_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 76:27]
  wire [31:0] _io_toFADD_bits_fp_prod_T_1 = {resultSign,resultExpShifted,resultSigShifted[20:0],2'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 91:8]
  LZC aLZC_lzc ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
    .io_in(aLZC_lzc_io_in),
    .io_out(aLZC_lzc_io_out)
  );
  LZC bLZC_lzc ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
    .io_in(bLZC_lzc_io_in),
    .io_out(bLZC_lzc_io_out)
  );
  assign io_in_ready = io_toFADD_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 93:15]
  assign io_toFADD_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 94:19]
  assign io_toFADD_bits_fp_prod = special_case_happen ? special_result : _io_toFADD_bits_fp_prod_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 89:32]
  assign io_toFADD_bits_inter_flags_isNaN = hasNaN | zero_mul_inf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 74:27]
  assign io_toFADD_bits_inter_flags_isInf = decode_a_isInf | decode_b_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 70:31]
  assign aLZC_lzc_io_in = {expNotZero,fp_a_sig}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 84:23]
  assign bLZC_lzc_io_in = {expNotZero_1,fp_b_sig}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 84:23]
endmodule
module LZC_8(
  input  [9:0] io_in, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 11:14]
  output [3:0] io_out // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 11:14]
);
  wire [3:0] _io_out_T_10 = io_in[1] ? 4'h8 : 4'h9; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _io_out_T_11 = io_in[2] ? 4'h7 : _io_out_T_10; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _io_out_T_12 = io_in[3] ? 4'h6 : _io_out_T_11; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _io_out_T_13 = io_in[4] ? 4'h5 : _io_out_T_12; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _io_out_T_14 = io_in[5] ? 4'h4 : _io_out_T_13; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _io_out_T_15 = io_in[6] ? 4'h3 : _io_out_T_14; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _io_out_T_16 = io_in[7] ? 4'h2 : _io_out_T_15; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [3:0] _io_out_T_17 = io_in[8] ? 4'h1 : _io_out_T_16; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  assign io_out = io_in[9] ? 4'h0 : _io_out_T_17; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
endmodule
module FPUpConverter(
  output        io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 246:14]
  input  [15:0] io_in_bits_in, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 246:14]
  input         io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 246:14]
  output [31:0] io_out_bits_result // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 246:14]
);
  wire [9:0] subnormal_shamt_lzc_io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
  wire [3:0] subnormal_shamt_lzc_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
  wire  fp_in_sign = io_in_bits_in[15]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 58:19]
  wire [4:0] fp_in_exp = io_in_bits_in[14:10]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 59:18]
  wire [9:0] fp_in_sig = io_in_bits_in[9:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 60:18]
  wire  decode_in_expNotZero = |fp_in_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 31:28]
  wire  decode_in_expIsOnes = &fp_in_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 32:27]
  wire  decode_in_sigNotZero = |fp_in_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 33:28]
  wire  decode_in__expIsZero = ~decode_in_expNotZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 36:27]
  wire  decode_in__isSubnormal = decode_in__expIsZero & decode_in_sigNotZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 40:46]
  wire  decode_in__isNaN = decode_in_expIsOnes & decode_in_sigNotZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 43:40]
  wire [7:0] _GEN_0 = {{3'd0}, fp_in_exp}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 258:45]
  wire [7:0] normal_exp = 8'h70 + _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 258:45]
  wire [24:0] _GEN_2 = {{15'd0}, fp_in_sig}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 264:20]
  wire [24:0] _subnormal_sig_T = _GEN_2 << subnormal_shamt_lzc_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 264:20]
  wire [7:0] _GEN_1 = {{4'd0}, subnormal_shamt_lzc_io_out}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 265:48]
  wire [7:0] subnormal_exp = 8'h70 - _GEN_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 265:48]
  wire  _result_T_1 = ~decode_in__isNaN & fp_in_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 270:22]
  wire  _result_T_4 = ~decode_in_expIsOnes & ~decode_in__expIsZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 276:30]
  wire [7:0] _result_T_6 = decode_in_expIsOnes ? 8'hff : 8'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [7:0] _result_T_8 = decode_in__isSubnormal ? subnormal_exp : 8'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [7:0] _result_T_9 = _result_T_4 ? normal_exp : 8'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [7:0] _result_T_11 = _result_T_6 | _result_T_8; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [7:0] _result_T_12 = _result_T_11 | _result_T_9; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [22:0] _result_T_16 = {decode_in_sigNotZero,22'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 292:12]
  wire [22:0] _result_T_17 = {_subnormal_sig_T[8:0],1'h0,13'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 293:12]
  wire [22:0] _result_T_18 = {fp_in_sig,13'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 294:12]
  wire [22:0] _result_T_19 = decode_in_expIsOnes ? _result_T_16 : 23'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [22:0] _result_T_20 = decode_in__expIsZero ? _result_T_17 : 23'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [22:0] _result_T_21 = _result_T_4 ? _result_T_18 : 23'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [22:0] _result_T_22 = _result_T_19 | _result_T_20; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [22:0] _result_T_23 = _result_T_22 | _result_T_21; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [8:0] result_hi = {_result_T_1,_result_T_12}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 269:19]
  LZC_8 subnormal_shamt_lzc ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
    .io_in(subnormal_shamt_lzc_io_in),
    .io_out(subnormal_shamt_lzc_io_out)
  );
  assign io_in_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 301:15]
  assign io_out_bits_result = {result_hi,_result_T_23}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 269:19]
  assign subnormal_shamt_lzc_io_in = io_in_bits_in[9:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 60:18]
endmodule
module ShiftRightJam(
  input  [25:0] io_in, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 11:14]
  input  [4:0]  io_shamt, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 11:14]
  output [25:0] io_out, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 11:14]
  output        io_sticky // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 11:14]
);
  wire  exceed_max_shift = io_shamt > 5'h1a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 17:35]
  wire [31:0] _sticky_mask_T = 32'h1 << io_shamt; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 20:11]
  wire [31:0] _sticky_mask_T_2 = _sticky_mask_T - 32'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 20:28]
  wire [25:0] _sticky_mask_T_5 = exceed_max_shift ? 26'h3ffffff : 26'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 20:53]
  wire [25:0] sticky_mask = _sticky_mask_T_2[25:0] | _sticky_mask_T_5; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 20:47]
  wire [25:0] _io_out_T = io_in >> io_shamt; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 21:46]
  wire [25:0] _io_sticky_T = io_in & sticky_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 22:23]
  assign io_out = exceed_max_shift ? 26'h0 : _io_out_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 21:16]
  assign io_sticky = |_io_sticky_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 22:38]
endmodule
module RoundingUnit(
  input  [22:0] io_in, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 7:14]
  input         io_roundIn, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 7:14]
  input         io_stickyIn, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 7:14]
  output [22:0] io_out, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 7:14]
  output        io_cout // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 7:14]
);
  wire  g = io_in[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 19:25]
  wire  r_up = io_roundIn & io_stickyIn | io_roundIn & ~io_stickyIn & g; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 25:24]
  wire [22:0] out_r_up = io_in + 23'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 32:24]
  assign io_out = r_up ? out_r_up : io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 33:16]
  assign io_cout = r_up & &io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 36:19]
endmodule
module TininessRounder(
  input  [26:0] io_in_sig // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 60:14]
);
  wire [22:0] rounder_io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  rounder_io_roundIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  rounder_io_stickyIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire [22:0] rounder_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  rounder_io_cout; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
  RoundingUnit rounder ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
    .io_in(rounder_io_in),
    .io_roundIn(rounder_io_roundIn),
    .io_stickyIn(rounder_io_stickyIn),
    .io_out(rounder_io_out),
    .io_cout(rounder_io_cout)
  );
  assign rounder_io_in = io_in_sig[24:2]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 45:33]
  assign rounder_io_roundIn = io_in_sig[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 46:50]
  assign rounder_io_stickyIn = |io_in_sig[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 47:51]
endmodule
module FarPath(
  input         io_in_a_sign, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 9:14]
  input  [7:0]  io_in_a_exp, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 9:14]
  input  [23:0] io_in_a_sig, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 9:14]
  input  [7:0]  io_in_b_exp, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 9:14]
  input  [23:0] io_in_b_sig, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 9:14]
  input         io_in_addSig, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 9:14]
  input         io_in_tinyAdd, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 9:14]
  input  [4:0]  io_in_shiftNum, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 9:14]
  output [31:0] io_out_result, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 9:14]
  output        io_out_far_path_of // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 9:14]
);
  wire [25:0] shiftRightJam_io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire [4:0] shiftRightJam_io_shamt; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire [25:0] shiftRightJam_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire  shiftRightJam_io_sticky; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire [26:0] far_path_tininess_rounder_io_in_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 73:41]
  wire [22:0] far_path_rounder_io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  far_path_rounder_io_roundIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  far_path_rounder_io_stickyIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire [22:0] far_path_rounder_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  far_path_rounder_io_cout; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  aIsZero = ~(|io_in_a_exp); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 26:17]
  wire  bIsZero = ~(|io_in_b_exp); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 27:17]
  wire  bothZero = aIsZero & bIsZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 28:26]
  wire [27:0] pos_sigB = {1'h0,shiftRightJam_io_out,shiftRightJam_io_sticky}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 33:21]
  wire [26:0] _neg_sigB_T = {shiftRightJam_io_out,shiftRightJam_io_sticky}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 34:36]
  wire [26:0] _neg_sigB_T_1 = ~_neg_sigB_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 34:32]
  wire [26:0] _neg_sigB_T_3 = _neg_sigB_T_1 + 27'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 34:63]
  wire [27:0] neg_sigB = {1'h1,_neg_sigB_T_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 34:21]
  wire [27:0] adder_in_sigB = io_in_addSig ? pos_sigB : neg_sigB; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 35:26]
  wire [27:0] adder_in_sigA = {1'h0,io_in_a_sig,3'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 36:26]
  wire [27:0] resultSigInNormalCase = adder_in_sigA + adder_in_sigB; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 37:45]
  wire [27:0] result_sig_raw = bIsZero ? adder_in_sigA : resultSigInNormalCase; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 39:27]
  wire  cout = result_sig_raw[27]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 41:33]
  wire  keep = result_sig_raw[26]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 42:41]
  wire  _resultSigNoRound_T = keep | io_in_tinyAdd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 45:19]
  wire [26:0] _resultSigNoRound_T_4 = {result_sig_raw[27:2],|result_sig_raw[1:0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 47:44]
  wire [26:0] _resultSigNoRound_T_9 = {result_sig_raw[26:1],|result_sig_raw[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 48:52]
  wire [26:0] _resultSigNoRound_T_14 = {result_sig_raw[25:0],1'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 49:52]
  wire [26:0] _resultSigNoRound_T_15 = _resultSigNoRound_T ? _resultSigNoRound_T_9 : _resultSigNoRound_T_14; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [26:0] resultSigNoRound = cout ? _resultSigNoRound_T_4 : _resultSigNoRound_T_15; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [7:0] _resultExpNoRound_T_1 = io_in_a_exp + 8'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 55:28]
  wire  _resultExpNoRound_T_2 = keep | bothZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 56:13]
  wire [7:0] _resultExpNoRound_T_5 = io_in_a_exp - 8'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 57:43]
  wire [7:0] _resultExpNoRound_T_6 = _resultExpNoRound_T_2 ? io_in_a_exp : _resultExpNoRound_T_5; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [7:0] resultExpNoRound = cout ? _resultExpNoRound_T_1 : _resultExpNoRound_T_6; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [7:0] _GEN_0 = {{7'd0}, far_path_rounder_io_cout}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 85:55]
  wire [7:0] far_path_exp_rounded = _GEN_0 + resultExpNoRound; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 85:55]
  wire  far_path_may_of = &io_in_b_exp & io_in_addSig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 88:42]
  wire  far_path_of_before_round = resultExpNoRound == 8'hff; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 93:22]
  wire  _far_path_of_after_round_T = resultExpNoRound == 8'hfe; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 95:22]
  wire  far_path_of_after_round = far_path_rounder_io_cout & _far_path_of_after_round_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 94:58]
  wire [8:0] io_out_result_hi = {io_in_a_sign,far_path_exp_rounded}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 103:8]
  ShiftRightJam shiftRightJam ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 27:31]
    .io_in(shiftRightJam_io_in),
    .io_shamt(shiftRightJam_io_shamt),
    .io_out(shiftRightJam_io_out),
    .io_sticky(shiftRightJam_io_sticky)
  );
  TininessRounder far_path_tininess_rounder ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 73:41]
    .io_in_sig(far_path_tininess_rounder_io_in_sig)
  );
  RoundingUnit far_path_rounder ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
    .io_in(far_path_rounder_io_in),
    .io_roundIn(far_path_rounder_io_roundIn),
    .io_stickyIn(far_path_rounder_io_stickyIn),
    .io_out(far_path_rounder_io_out),
    .io_cout(far_path_rounder_io_cout)
  );
  assign io_out_result = {io_out_result_hi,far_path_rounder_io_out}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 103:8]
  assign io_out_far_path_of = far_path_of_before_round | far_path_of_after_round | far_path_may_of; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 98:57]
  assign shiftRightJam_io_in = {io_in_b_sig,2'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 30:53]
  assign shiftRightJam_io_shamt = io_in_shiftNum; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 29:28]
  assign far_path_tininess_rounder_io_in_sig = cout ? _resultSigNoRound_T_4 : _resultSigNoRound_T_15; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  assign far_path_rounder_io_in = resultSigNoRound[25:3]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 45:33]
  assign far_path_rounder_io_roundIn = resultSigNoRound[2]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 46:50]
  assign far_path_rounder_io_stickyIn = |resultSigNoRound[1:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 47:51]
endmodule
module PreEncoder(
  input  [24:0] io_g, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 11:14]
  input  [24:0] io_s, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 11:14]
  input  [24:0] io_e, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 11:14]
  output [24:0] io_f // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 11:14]
);
  wire  _f_0_T_6 = ~io_e[1] & io_s[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 17:25]
  wire  _f_0_T_7 = io_e[1] & io_g[0] | _f_0_T_6; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 16:33]
  wire  _f_0_T_10 = io_e[1] & io_s[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 18:25]
  wire  _f_0_T_11 = _f_0_T_7 | _f_0_T_10; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 17:33]
  wire  f_0 = _f_0_T_11 | io_e[1] & io_s[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 18:33]
  wire  _f_1_T_4 = ~io_s[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_1_T_7 = ~io_e[2]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_1_T_12 = ~io_e[2] & io_s[1] & _f_1_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_1_T_13 = io_e[2] & io_g[1] & ~io_s[0] | _f_1_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_1_T_18 = ~io_g[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_1_T_19 = io_e[2] & io_s[1] & ~io_g[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_1_T_20 = _f_1_T_13 | _f_1_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_1_T_27 = _f_1_T_7 & io_g[1] & _f_1_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_1 = _f_1_T_20 | _f_1_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_2_T_4 = ~io_s[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_2_T_7 = ~io_e[3]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_2_T_12 = ~io_e[3] & io_s[2] & _f_2_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_2_T_13 = io_e[3] & io_g[2] & ~io_s[1] | _f_2_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_2_T_18 = ~io_g[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_2_T_19 = io_e[3] & io_s[2] & ~io_g[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_2_T_20 = _f_2_T_13 | _f_2_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_2_T_27 = _f_2_T_7 & io_g[2] & _f_2_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_2 = _f_2_T_20 | _f_2_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_3_T_4 = ~io_s[2]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_3_T_7 = ~io_e[4]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_3_T_12 = ~io_e[4] & io_s[3] & _f_3_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_3_T_13 = io_e[4] & io_g[3] & ~io_s[2] | _f_3_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_3_T_18 = ~io_g[2]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_3_T_19 = io_e[4] & io_s[3] & ~io_g[2]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_3_T_20 = _f_3_T_13 | _f_3_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_3_T_27 = _f_3_T_7 & io_g[3] & _f_3_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_3 = _f_3_T_20 | _f_3_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_4_T_4 = ~io_s[3]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_4_T_7 = ~io_e[5]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_4_T_12 = ~io_e[5] & io_s[4] & _f_4_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_4_T_13 = io_e[5] & io_g[4] & ~io_s[3] | _f_4_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_4_T_18 = ~io_g[3]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_4_T_19 = io_e[5] & io_s[4] & ~io_g[3]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_4_T_20 = _f_4_T_13 | _f_4_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_4_T_27 = _f_4_T_7 & io_g[4] & _f_4_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_4 = _f_4_T_20 | _f_4_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_5_T_4 = ~io_s[4]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_5_T_7 = ~io_e[6]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_5_T_12 = ~io_e[6] & io_s[5] & _f_5_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_5_T_13 = io_e[6] & io_g[5] & ~io_s[4] | _f_5_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_5_T_18 = ~io_g[4]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_5_T_19 = io_e[6] & io_s[5] & ~io_g[4]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_5_T_20 = _f_5_T_13 | _f_5_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_5_T_27 = _f_5_T_7 & io_g[5] & _f_5_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_5 = _f_5_T_20 | _f_5_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_6_T_4 = ~io_s[5]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_6_T_7 = ~io_e[7]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_6_T_12 = ~io_e[7] & io_s[6] & _f_6_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_6_T_13 = io_e[7] & io_g[6] & ~io_s[5] | _f_6_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_6_T_18 = ~io_g[5]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_6_T_19 = io_e[7] & io_s[6] & ~io_g[5]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_6_T_20 = _f_6_T_13 | _f_6_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_6_T_27 = _f_6_T_7 & io_g[6] & _f_6_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_6 = _f_6_T_20 | _f_6_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_7_T_4 = ~io_s[6]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_7_T_7 = ~io_e[8]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_7_T_12 = ~io_e[8] & io_s[7] & _f_7_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_7_T_13 = io_e[8] & io_g[7] & ~io_s[6] | _f_7_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_7_T_18 = ~io_g[6]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_7_T_19 = io_e[8] & io_s[7] & ~io_g[6]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_7_T_20 = _f_7_T_13 | _f_7_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_7_T_27 = _f_7_T_7 & io_g[7] & _f_7_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_7 = _f_7_T_20 | _f_7_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_8_T_4 = ~io_s[7]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_8_T_7 = ~io_e[9]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_8_T_12 = ~io_e[9] & io_s[8] & _f_8_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_8_T_13 = io_e[9] & io_g[8] & ~io_s[7] | _f_8_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_8_T_18 = ~io_g[7]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_8_T_19 = io_e[9] & io_s[8] & ~io_g[7]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_8_T_20 = _f_8_T_13 | _f_8_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_8_T_27 = _f_8_T_7 & io_g[8] & _f_8_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_8 = _f_8_T_20 | _f_8_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_9_T_4 = ~io_s[8]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_9_T_7 = ~io_e[10]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_9_T_12 = ~io_e[10] & io_s[9] & _f_9_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_9_T_13 = io_e[10] & io_g[9] & ~io_s[8] | _f_9_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_9_T_18 = ~io_g[8]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_9_T_19 = io_e[10] & io_s[9] & ~io_g[8]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_9_T_20 = _f_9_T_13 | _f_9_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_9_T_27 = _f_9_T_7 & io_g[9] & _f_9_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_9 = _f_9_T_20 | _f_9_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_10_T_4 = ~io_s[9]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_10_T_7 = ~io_e[11]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_10_T_12 = ~io_e[11] & io_s[10] & _f_10_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_10_T_13 = io_e[11] & io_g[10] & ~io_s[9] | _f_10_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_10_T_18 = ~io_g[9]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_10_T_19 = io_e[11] & io_s[10] & ~io_g[9]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_10_T_20 = _f_10_T_13 | _f_10_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_10_T_27 = _f_10_T_7 & io_g[10] & _f_10_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_10 = _f_10_T_20 | _f_10_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_11_T_4 = ~io_s[10]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_11_T_7 = ~io_e[12]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_11_T_12 = ~io_e[12] & io_s[11] & _f_11_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_11_T_13 = io_e[12] & io_g[11] & ~io_s[10] | _f_11_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_11_T_18 = ~io_g[10]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_11_T_19 = io_e[12] & io_s[11] & ~io_g[10]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_11_T_20 = _f_11_T_13 | _f_11_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_11_T_27 = _f_11_T_7 & io_g[11] & _f_11_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_11 = _f_11_T_20 | _f_11_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_12_T_4 = ~io_s[11]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_12_T_7 = ~io_e[13]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_12_T_12 = ~io_e[13] & io_s[12] & _f_12_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_12_T_13 = io_e[13] & io_g[12] & ~io_s[11] | _f_12_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_12_T_18 = ~io_g[11]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_12_T_19 = io_e[13] & io_s[12] & ~io_g[11]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_12_T_20 = _f_12_T_13 | _f_12_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_12_T_27 = _f_12_T_7 & io_g[12] & _f_12_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_12 = _f_12_T_20 | _f_12_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_13_T_4 = ~io_s[12]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_13_T_7 = ~io_e[14]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_13_T_12 = ~io_e[14] & io_s[13] & _f_13_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_13_T_13 = io_e[14] & io_g[13] & ~io_s[12] | _f_13_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_13_T_18 = ~io_g[12]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_13_T_19 = io_e[14] & io_s[13] & ~io_g[12]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_13_T_20 = _f_13_T_13 | _f_13_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_13_T_27 = _f_13_T_7 & io_g[13] & _f_13_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_13 = _f_13_T_20 | _f_13_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_14_T_4 = ~io_s[13]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_14_T_7 = ~io_e[15]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_14_T_12 = ~io_e[15] & io_s[14] & _f_14_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_14_T_13 = io_e[15] & io_g[14] & ~io_s[13] | _f_14_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_14_T_18 = ~io_g[13]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_14_T_19 = io_e[15] & io_s[14] & ~io_g[13]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_14_T_20 = _f_14_T_13 | _f_14_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_14_T_27 = _f_14_T_7 & io_g[14] & _f_14_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_14 = _f_14_T_20 | _f_14_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_15_T_4 = ~io_s[14]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_15_T_7 = ~io_e[16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_15_T_12 = ~io_e[16] & io_s[15] & _f_15_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_15_T_13 = io_e[16] & io_g[15] & ~io_s[14] | _f_15_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_15_T_18 = ~io_g[14]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_15_T_19 = io_e[16] & io_s[15] & ~io_g[14]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_15_T_20 = _f_15_T_13 | _f_15_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_15_T_27 = _f_15_T_7 & io_g[15] & _f_15_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_15 = _f_15_T_20 | _f_15_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_16_T_4 = ~io_s[15]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_16_T_7 = ~io_e[17]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_16_T_12 = ~io_e[17] & io_s[16] & _f_16_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_16_T_13 = io_e[17] & io_g[16] & ~io_s[15] | _f_16_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_16_T_18 = ~io_g[15]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_16_T_19 = io_e[17] & io_s[16] & ~io_g[15]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_16_T_20 = _f_16_T_13 | _f_16_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_16_T_27 = _f_16_T_7 & io_g[16] & _f_16_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_16 = _f_16_T_20 | _f_16_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_17_T_4 = ~io_s[16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_17_T_7 = ~io_e[18]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_17_T_12 = ~io_e[18] & io_s[17] & _f_17_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_17_T_13 = io_e[18] & io_g[17] & ~io_s[16] | _f_17_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_17_T_18 = ~io_g[16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_17_T_19 = io_e[18] & io_s[17] & ~io_g[16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_17_T_20 = _f_17_T_13 | _f_17_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_17_T_27 = _f_17_T_7 & io_g[17] & _f_17_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_17 = _f_17_T_20 | _f_17_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_18_T_4 = ~io_s[17]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_18_T_7 = ~io_e[19]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_18_T_12 = ~io_e[19] & io_s[18] & _f_18_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_18_T_13 = io_e[19] & io_g[18] & ~io_s[17] | _f_18_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_18_T_18 = ~io_g[17]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_18_T_19 = io_e[19] & io_s[18] & ~io_g[17]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_18_T_20 = _f_18_T_13 | _f_18_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_18_T_27 = _f_18_T_7 & io_g[18] & _f_18_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_18 = _f_18_T_20 | _f_18_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_19_T_4 = ~io_s[18]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_19_T_7 = ~io_e[20]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_19_T_12 = ~io_e[20] & io_s[19] & _f_19_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_19_T_13 = io_e[20] & io_g[19] & ~io_s[18] | _f_19_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_19_T_18 = ~io_g[18]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_19_T_19 = io_e[20] & io_s[19] & ~io_g[18]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_19_T_20 = _f_19_T_13 | _f_19_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_19_T_27 = _f_19_T_7 & io_g[19] & _f_19_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_19 = _f_19_T_20 | _f_19_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_20_T_4 = ~io_s[19]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_20_T_7 = ~io_e[21]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_20_T_12 = ~io_e[21] & io_s[20] & _f_20_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_20_T_13 = io_e[21] & io_g[20] & ~io_s[19] | _f_20_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_20_T_18 = ~io_g[19]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_20_T_19 = io_e[21] & io_s[20] & ~io_g[19]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_20_T_20 = _f_20_T_13 | _f_20_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_20_T_27 = _f_20_T_7 & io_g[20] & _f_20_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_20 = _f_20_T_20 | _f_20_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_21_T_4 = ~io_s[20]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_21_T_7 = ~io_e[22]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_21_T_12 = ~io_e[22] & io_s[21] & _f_21_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_21_T_13 = io_e[22] & io_g[21] & ~io_s[20] | _f_21_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_21_T_18 = ~io_g[20]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_21_T_19 = io_e[22] & io_s[21] & ~io_g[20]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_21_T_20 = _f_21_T_13 | _f_21_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_21_T_27 = _f_21_T_7 & io_g[21] & _f_21_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_21 = _f_21_T_20 | _f_21_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_22_T_4 = ~io_s[21]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_22_T_7 = ~io_e[23]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_22_T_12 = ~io_e[23] & io_s[22] & _f_22_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_22_T_13 = io_e[23] & io_g[22] & ~io_s[21] | _f_22_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_22_T_18 = ~io_g[21]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_22_T_19 = io_e[23] & io_s[22] & ~io_g[21]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_22_T_20 = _f_22_T_13 | _f_22_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_22_T_27 = _f_22_T_7 & io_g[22] & _f_22_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_22 = _f_22_T_20 | _f_22_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_23_T_4 = ~io_s[22]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_23_T_7 = ~io_e[24]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_23_T_12 = ~io_e[24] & io_s[23] & _f_23_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_23_T_13 = io_e[24] & io_g[23] & ~io_s[22] | _f_23_T_12; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_23_T_18 = ~io_g[22]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_23_T_19 = io_e[24] & io_s[23] & ~io_g[22]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_23_T_20 = _f_23_T_13 | _f_23_T_19; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_23_T_27 = _f_23_T_7 & io_g[23] & _f_23_T_18; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_23 = _f_23_T_20 | _f_23_T_27; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  f_24 = io_g[24] & ~io_s[23] | io_s[24] & ~io_g[23]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 21:36]
  wire [5:0] io_f_lo_lo = {f_5,f_4,f_3,f_2,f_1,f_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 29:14]
  wire [11:0] io_f_lo = {f_11,f_10,f_9,f_8,f_7,f_6,io_f_lo_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 29:14]
  wire [5:0] io_f_hi_lo = {f_17,f_16,f_15,f_14,f_13,f_12}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 29:14]
  wire [12:0] io_f_hi = {f_24,f_23,f_22,f_21,f_20,f_19,f_18,io_f_hi_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 29:14]
  assign io_f = {io_f_hi,io_f_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/PreEncoder.scala 29:14]
endmodule
module node(
  input  [2:0] io_in_0, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/node.scala 7:14]
  input  [2:0] io_in_2, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/node.scala 7:14]
  output [1:0] io_out_0, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/node.scala 7:14]
  output [1:0] io_out_2 // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/node.scala 7:14]
);
  wire  pout_0 = io_in_0[0] | io_in_2[0] & io_in_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/node.scala 16:19]
  wire  _pout_1_T_7 = io_in_2[0] | io_in_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/node.scala 17:47]
  wire  pout_1 = ~io_in_2[0] & io_in_0[1] | io_in_0[2] & (io_in_2[0] | io_in_2[1]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/node.scala 17:31]
  wire  zout_0 = io_in_2[0] & io_in_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/node.scala 18:19]
  wire  zout_1 = io_in_2[2] & _pout_1_T_7; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/node.scala 19:19]
  assign io_out_0 = {pout_1,pout_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/node.scala 22:19]
  assign io_out_2 = {zout_1,zout_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/node.scala 24:19]
endmodule
module ErrorDetector(
  input  [24:0] io_g, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 12:14]
  input  [24:0] io_s, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 12:14]
  input  [24:0] io_e, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 12:14]
  output        io_y // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 12:14]
);
  wire [2:0] y_node0_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_1_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_1_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_1_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_1_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_2_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_2_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_2_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_2_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_3_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_3_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_3_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_3_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_4_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_4_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_4_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_4_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_5_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_5_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_5_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_5_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_6_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_6_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_6_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_6_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node0_1_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_1_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_1_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_1_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node_7_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_7_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_7_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_7_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_8_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_8_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_8_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_8_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_9_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_9_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_9_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_9_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_10_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_10_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_10_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_10_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node0_2_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_2_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_2_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_2_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node_11_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_11_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_11_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_11_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_12_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_12_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_12_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_12_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_13_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_13_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_13_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_13_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node0_3_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_3_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_3_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_3_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node_14_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_14_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_14_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_14_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node0_4_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_4_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_4_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_4_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node_15_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_15_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_15_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_15_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node0_5_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_5_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_5_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_5_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_6_io_in_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_6_io_in_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_6_io_out_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_6_io_out_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire  _p_0_T_6 = ~io_e[2]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_0 = (io_e[1] | io_e[2] & io_g[1] | ~io_e[2] & io_s[1]) & io_g[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_0 = (io_e[1] | io_e[2] & io_s[1] | _p_0_T_6 & io_g[1]) & io_s[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_0 = ~(p_0 | n_0); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_1_T_6 = ~io_e[3]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_1 = (io_e[2] | io_e[3] & io_g[2] | ~io_e[3] & io_s[2]) & io_g[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_1 = (io_e[2] | io_e[3] & io_s[2] | _p_1_T_6 & io_g[2]) & io_s[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_1 = ~(p_1 | n_1); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_2_T_6 = ~io_e[4]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_2 = (io_e[3] | io_e[4] & io_g[3] | ~io_e[4] & io_s[3]) & io_g[2]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_2 = (io_e[3] | io_e[4] & io_s[3] | _p_2_T_6 & io_g[3]) & io_s[2]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_2 = ~(p_2 | n_2); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_3_T_6 = ~io_e[5]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_3 = (io_e[4] | io_e[5] & io_g[4] | ~io_e[5] & io_s[4]) & io_g[3]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_3 = (io_e[4] | io_e[5] & io_s[4] | _p_3_T_6 & io_g[4]) & io_s[3]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_3 = ~(p_3 | n_3); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_4_T_6 = ~io_e[6]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_4 = (io_e[5] | io_e[6] & io_g[5] | ~io_e[6] & io_s[5]) & io_g[4]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_4 = (io_e[5] | io_e[6] & io_s[5] | _p_4_T_6 & io_g[5]) & io_s[4]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_4 = ~(p_4 | n_4); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_5_T_6 = ~io_e[7]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_5 = (io_e[6] | io_e[7] & io_g[6] | ~io_e[7] & io_s[6]) & io_g[5]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_5 = (io_e[6] | io_e[7] & io_s[6] | _p_5_T_6 & io_g[6]) & io_s[5]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_5 = ~(p_5 | n_5); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_6_T_6 = ~io_e[8]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_6 = (io_e[7] | io_e[8] & io_g[7] | ~io_e[8] & io_s[7]) & io_g[6]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_6 = (io_e[7] | io_e[8] & io_s[7] | _p_6_T_6 & io_g[7]) & io_s[6]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_6 = ~(p_6 | n_6); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_7_T_6 = ~io_e[9]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_7 = (io_e[8] | io_e[9] & io_g[8] | ~io_e[9] & io_s[8]) & io_g[7]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_7 = (io_e[8] | io_e[9] & io_s[8] | _p_7_T_6 & io_g[8]) & io_s[7]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_7 = ~(p_7 | n_7); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_8_T_6 = ~io_e[10]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_8 = (io_e[9] | io_e[10] & io_g[9] | ~io_e[10] & io_s[9]) & io_g[8]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_8 = (io_e[9] | io_e[10] & io_s[9] | _p_8_T_6 & io_g[9]) & io_s[8]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_8 = ~(p_8 | n_8); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_9_T_6 = ~io_e[11]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_9 = (io_e[10] | io_e[11] & io_g[10] | ~io_e[11] & io_s[10]) & io_g[9]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_9 = (io_e[10] | io_e[11] & io_s[10] | _p_9_T_6 & io_g[10]) & io_s[9]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_9 = ~(p_9 | n_9); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_10_T_6 = ~io_e[12]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_10 = (io_e[11] | io_e[12] & io_g[11] | ~io_e[12] & io_s[11]) & io_g[10]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_10 = (io_e[11] | io_e[12] & io_s[11] | _p_10_T_6 & io_g[11]) & io_s[10]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_10 = ~(p_10 | n_10); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_11_T_6 = ~io_e[13]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_11 = (io_e[12] | io_e[13] & io_g[12] | ~io_e[13] & io_s[12]) & io_g[11]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_11 = (io_e[12] | io_e[13] & io_s[12] | _p_11_T_6 & io_g[12]) & io_s[11]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_11 = ~(p_11 | n_11); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_12_T_6 = ~io_e[14]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_12 = (io_e[13] | io_e[14] & io_g[13] | ~io_e[14] & io_s[13]) & io_g[12]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_12 = (io_e[13] | io_e[14] & io_s[13] | _p_12_T_6 & io_g[13]) & io_s[12]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_12 = ~(p_12 | n_12); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_13_T_6 = ~io_e[15]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_13 = (io_e[14] | io_e[15] & io_g[14] | ~io_e[15] & io_s[14]) & io_g[13]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_13 = (io_e[14] | io_e[15] & io_s[14] | _p_13_T_6 & io_g[14]) & io_s[13]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_13 = ~(p_13 | n_13); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_14_T_6 = ~io_e[16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_14 = (io_e[15] | io_e[16] & io_g[15] | ~io_e[16] & io_s[15]) & io_g[14]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_14 = (io_e[15] | io_e[16] & io_s[15] | _p_14_T_6 & io_g[15]) & io_s[14]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_14 = ~(p_14 | n_14); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_15_T_6 = ~io_e[17]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_15 = (io_e[16] | io_e[17] & io_g[16] | ~io_e[17] & io_s[16]) & io_g[15]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_15 = (io_e[16] | io_e[17] & io_s[16] | _p_15_T_6 & io_g[16]) & io_s[15]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_15 = ~(p_15 | n_15); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_16_T_6 = ~io_e[18]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_16 = (io_e[17] | io_e[18] & io_g[17] | ~io_e[18] & io_s[17]) & io_g[16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_16 = (io_e[17] | io_e[18] & io_s[17] | _p_16_T_6 & io_g[17]) & io_s[16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_16 = ~(p_16 | n_16); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_17_T_6 = ~io_e[19]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_17 = (io_e[18] | io_e[19] & io_g[18] | ~io_e[19] & io_s[18]) & io_g[17]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_17 = (io_e[18] | io_e[19] & io_s[18] | _p_17_T_6 & io_g[18]) & io_s[17]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_17 = ~(p_17 | n_17); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_18_T_6 = ~io_e[20]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_18 = (io_e[19] | io_e[20] & io_g[19] | ~io_e[20] & io_s[19]) & io_g[18]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_18 = (io_e[19] | io_e[20] & io_s[19] | _p_18_T_6 & io_g[19]) & io_s[18]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_18 = ~(p_18 | n_18); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_19_T_6 = ~io_e[21]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_19 = (io_e[20] | io_e[21] & io_g[20] | ~io_e[21] & io_s[20]) & io_g[19]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_19 = (io_e[20] | io_e[21] & io_s[20] | _p_19_T_6 & io_g[20]) & io_s[19]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_19 = ~(p_19 | n_19); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_20_T_6 = ~io_e[22]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_20 = (io_e[21] | io_e[22] & io_g[21] | ~io_e[22] & io_s[21]) & io_g[20]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_20 = (io_e[21] | io_e[22] & io_s[21] | _p_20_T_6 & io_g[21]) & io_s[20]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_20 = ~(p_20 | n_20); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_21_T_6 = ~io_e[23]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_21 = (io_e[22] | io_e[23] & io_g[22] | ~io_e[23] & io_s[22]) & io_g[21]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_21 = (io_e[22] | io_e[23] & io_s[22] | _p_21_T_6 & io_g[22]) & io_s[21]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_21 = ~(p_21 | n_21); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_22_T_6 = ~io_e[24]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_22 = (io_e[23] | io_e[24] & io_g[23] | ~io_e[24] & io_s[23]) & io_g[22]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_22 = (io_e[23] | io_e[24] & io_s[23] | _p_22_T_6 & io_g[23]) & io_s[22]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_22 = ~(p_22 | n_22); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  p_23 = (io_e[24] | io_g[24]) & io_g[23]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 20:33]
  wire  n_23 = (io_e[24] | io_s[24]) & io_s[23]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 21:33]
  wire  z_23 = ~(p_23 | n_23); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  z_24 = ~(io_g[24] | io_s[24]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire [5:0] y_lo_lo = {p_19,p_20,p_21,p_22,p_23,io_g[24]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 63:28]
  wire [11:0] y_lo = {p_13,p_14,p_15,p_16,p_17,p_18,y_lo_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 63:28]
  wire [5:0] y_hi_lo = {p_7,p_8,p_9,p_10,p_11,p_12}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 63:28]
  wire [24:0] _y_T = {p_0,p_1,p_2,p_3,p_4,p_5,p_6,y_hi_lo,y_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 63:28]
  wire [5:0] y_lo_lo_2 = {z_19,z_20,z_21,z_22,z_23,z_24}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 63:44]
  wire [11:0] y_lo_2 = {z_13,z_14,z_15,z_16,z_17,z_18,y_lo_lo_2}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 63:44]
  wire [5:0] y_hi_lo_2 = {z_7,z_8,z_9,z_10,z_11,z_12}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 63:44]
  wire [24:0] _y_T_2 = {z_0,z_1,z_2,z_3,z_4,z_5,z_6,y_hi_lo_2,y_lo_2}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 63:44]
  wire [1:0] y_node0_io_in_0_hi = {_y_T[2],_y_T[1]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi = {_y_T_2[2],_y_T_2[1]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0 = y_node0_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1 = y_node0_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0 = y_node0_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1 = y_node0_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire [1:0] y_node_io_in_0_hi = {_y_T[5],_y_T[4]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi = {_y_T_2[5],_y_T_2[4]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0 = y_node_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1 = y_node_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0 = y_node_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1 = y_node_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_1 = {_y_T[8],_y_T[7]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_1 = {_y_T_2[8],_y_T_2[7]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_1 = y_node_1_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_1 = y_node_1_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_1 = y_node_1_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_1 = y_node_1_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_2 = {_y_T[11],_y_T[10]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_2 = {_y_T_2[11],_y_T_2[10]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_2 = y_node_2_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_2 = y_node_2_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_2 = y_node_2_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_2 = y_node_2_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_3 = {_y_T[14],_y_T[13]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_3 = {_y_T_2[14],_y_T_2[13]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_3 = y_node_3_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_3 = y_node_3_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_3 = y_node_3_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_3 = y_node_3_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_4 = {_y_T[17],_y_T[16]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_4 = {_y_T_2[17],_y_T_2[16]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_4 = y_node_4_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_4 = y_node_4_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_4 = y_node_4_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_4 = y_node_4_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_5 = {_y_T[20],_y_T[19]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_5 = {_y_T_2[20],_y_T_2[19]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_5 = y_node_5_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_5 = y_node_5_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_5 = y_node_5_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_5 = y_node_5_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_6 = {_y_T[23],_y_T[22]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_6 = {_y_T_2[23],_y_T_2[22]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_6 = y_node_6_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_6 = y_node_6_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_6 = y_node_6_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_6 = y_node_6_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [7:0] y_lo_3 = {y_pout_1_2,y_pout_0_2,y_pout_1_1,y_pout_0_1,y_pout_1,y_pout_0,y_nextColumn_p_1,y_nextColumn_p_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:33]
  wire [16:0] _y_T_9 = {_y_T[24],y_pout_1_6,y_pout_0_6,y_pout_1_5,y_pout_0_5,y_pout_1_4,y_pout_0_4,y_pout_1_3,y_pout_0_3
    ,y_lo_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:33]
  wire [7:0] y_lo_5 = {y_zout_1_2,y_zout_0_2,y_zout_1_1,y_zout_0_1,y_zout_1,y_zout_0,y_nextColumn_z_1,y_nextColumn_z_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:87]
  wire [16:0] _y_T_11 = {_y_T_2[24],y_zout_1_6,y_zout_0_6,y_zout_1_5,y_zout_0_5,y_zout_1_4,y_zout_0_4,y_zout_1_3,
    y_zout_0_3,y_lo_5}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_1 = {_y_T_9[2],_y_T_9[1]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_1 = {_y_T_11[2],_y_T_11[1]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_1 = y_node0_1_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_1 = y_node0_1_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_1 = y_node0_1_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_1 = y_node0_1_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire [1:0] y_node_io_in_0_hi_7 = {_y_T_9[5],_y_T_9[4]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_7 = {_y_T_11[5],_y_T_11[4]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_7 = y_node_7_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_7 = y_node_7_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_7 = y_node_7_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_7 = y_node_7_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_8 = {_y_T_9[8],_y_T_9[7]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_8 = {_y_T_11[8],_y_T_11[7]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_8 = y_node_8_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_8 = y_node_8_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_8 = y_node_8_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_8 = y_node_8_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_9 = {_y_T_9[11],_y_T_9[10]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_9 = {_y_T_11[11],_y_T_11[10]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_9 = y_node_9_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_9 = y_node_9_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_9 = y_node_9_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_9 = y_node_9_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_10 = {_y_T_9[14],_y_T_9[13]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_10 = {_y_T_11[14],_y_T_11[13]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_10 = y_node_10_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_10 = y_node_10_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_10 = y_node_10_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_10 = y_node_10_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [5:0] y_lo_6 = {y_pout_1_8,y_pout_0_8,y_pout_1_7,y_pout_0_7,y_nextColumn_p_1_1,y_nextColumn_p_0_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:33]
  wire [11:0] _y_T_24 = {_y_T_9[16],_y_T_9[15],y_pout_1_10,y_pout_0_10,y_pout_1_9,y_pout_0_9,y_lo_6}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:33]
  wire [5:0] y_lo_8 = {y_zout_1_8,y_zout_0_8,y_zout_1_7,y_zout_0_7,y_nextColumn_z_1_1,y_nextColumn_z_0_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:87]
  wire [11:0] _y_T_26 = {_y_T_11[16],_y_T_11[15],y_zout_1_10,y_zout_0_10,y_zout_1_9,y_zout_0_9,y_lo_8}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_2 = {_y_T_24[2],_y_T_24[1]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_2 = {_y_T_26[2],_y_T_26[1]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_2 = y_node0_2_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_2 = y_node0_2_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_2 = y_node0_2_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_2 = y_node0_2_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire [1:0] y_node_io_in_0_hi_11 = {_y_T_24[5],_y_T_24[4]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_11 = {_y_T_26[5],_y_T_26[4]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_11 = y_node_11_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_11 = y_node_11_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_11 = y_node_11_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_11 = y_node_11_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_12 = {_y_T_24[8],_y_T_24[7]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_12 = {_y_T_26[8],_y_T_26[7]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_12 = y_node_12_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_12 = y_node_12_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_12 = y_node_12_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_12 = y_node_12_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_13 = {_y_T_24[11],_y_T_24[10]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_13 = {_y_T_26[11],_y_T_26[10]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_13 = y_node_13_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_13 = y_node_13_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_13 = y_node_13_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_13 = y_node_13_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [7:0] _y_T_27 = {y_pout_1_13,y_pout_0_13,y_pout_1_12,y_pout_0_12,y_pout_1_11,y_pout_0_11,y_nextColumn_p_1_2,
    y_nextColumn_p_0_2}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:33]
  wire [7:0] _y_T_29 = {y_zout_1_13,y_zout_0_13,y_zout_1_12,y_zout_0_12,y_zout_1_11,y_zout_0_11,y_nextColumn_z_1_2,
    y_nextColumn_z_0_2}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_3 = {_y_T_27[2],_y_T_27[1]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_3 = {_y_T_29[2],_y_T_29[1]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_3 = y_node0_3_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_3 = y_node0_3_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_3 = y_node0_3_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_3 = y_node0_3_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire [1:0] y_node_io_in_0_hi_14 = {_y_T_27[5],_y_T_27[4]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_14 = {_y_T_29[5],_y_T_29[4]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_14 = y_node_14_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_14 = y_node_14_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_14 = y_node_14_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_14 = y_node_14_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [5:0] _y_T_42 = {_y_T_27[7],_y_T_27[6],y_pout_1_14,y_pout_0_14,y_nextColumn_p_1_3,y_nextColumn_p_0_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:33]
  wire [5:0] _y_T_44 = {_y_T_29[7],_y_T_29[6],y_zout_1_14,y_zout_0_14,y_nextColumn_z_1_3,y_nextColumn_z_0_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_4 = {_y_T_42[2],_y_T_42[1]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_4 = {_y_T_44[2],_y_T_44[1]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_4 = y_node0_4_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_4 = y_node0_4_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_4 = y_node0_4_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_4 = y_node0_4_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire [1:0] y_node_io_in_0_hi_15 = {_y_T_42[5],_y_T_42[4]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_15 = {_y_T_44[5],_y_T_44[4]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_15 = y_node_15_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_15 = y_node_15_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_15 = y_node_15_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_15 = y_node_15_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [3:0] _y_T_45 = {y_pout_1_15,y_pout_0_15,y_nextColumn_p_1_4,y_nextColumn_p_0_4}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:33]
  wire [3:0] _y_T_47 = {y_zout_1_15,y_zout_0_15,y_nextColumn_z_1_4,y_nextColumn_z_0_4}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_5 = {_y_T_45[2],_y_T_45[1]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_5 = {_y_T_47[2],_y_T_47[1]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_5 = y_node0_5_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_5 = y_node0_5_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_5 = y_node0_5_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_5 = y_node0_5_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire [2:0] _y_T_54 = {_y_T_45[3],y_nextColumn_p_1_5,y_nextColumn_p_0_5}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:33]
  wire [2:0] _y_T_56 = {_y_T_47[3],y_nextColumn_z_1_5,y_nextColumn_z_0_5}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_6 = {_y_T_54[2],_y_T_54[1]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_6 = {_y_T_56[2],_y_T_56[1]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_6 = y_node0_6_io_out_0[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_6 = y_node0_6_io_out_0[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_6 = y_node0_6_io_out_2[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_6 = y_node0_6_io_out_2[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  node y_node0 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_io_in_0),
    .io_in_2(y_node0_io_in_2),
    .io_out_0(y_node0_io_out_0),
    .io_out_2(y_node0_io_out_2)
  );
  node y_node ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_io_in_0),
    .io_in_2(y_node_io_in_2),
    .io_out_0(y_node_io_out_0),
    .io_out_2(y_node_io_out_2)
  );
  node y_node_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_1_io_in_0),
    .io_in_2(y_node_1_io_in_2),
    .io_out_0(y_node_1_io_out_0),
    .io_out_2(y_node_1_io_out_2)
  );
  node y_node_2 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_2_io_in_0),
    .io_in_2(y_node_2_io_in_2),
    .io_out_0(y_node_2_io_out_0),
    .io_out_2(y_node_2_io_out_2)
  );
  node y_node_3 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_3_io_in_0),
    .io_in_2(y_node_3_io_in_2),
    .io_out_0(y_node_3_io_out_0),
    .io_out_2(y_node_3_io_out_2)
  );
  node y_node_4 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_4_io_in_0),
    .io_in_2(y_node_4_io_in_2),
    .io_out_0(y_node_4_io_out_0),
    .io_out_2(y_node_4_io_out_2)
  );
  node y_node_5 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_5_io_in_0),
    .io_in_2(y_node_5_io_in_2),
    .io_out_0(y_node_5_io_out_0),
    .io_out_2(y_node_5_io_out_2)
  );
  node y_node_6 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_6_io_in_0),
    .io_in_2(y_node_6_io_in_2),
    .io_out_0(y_node_6_io_out_0),
    .io_out_2(y_node_6_io_out_2)
  );
  node y_node0_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_1_io_in_0),
    .io_in_2(y_node0_1_io_in_2),
    .io_out_0(y_node0_1_io_out_0),
    .io_out_2(y_node0_1_io_out_2)
  );
  node y_node_7 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_7_io_in_0),
    .io_in_2(y_node_7_io_in_2),
    .io_out_0(y_node_7_io_out_0),
    .io_out_2(y_node_7_io_out_2)
  );
  node y_node_8 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_8_io_in_0),
    .io_in_2(y_node_8_io_in_2),
    .io_out_0(y_node_8_io_out_0),
    .io_out_2(y_node_8_io_out_2)
  );
  node y_node_9 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_9_io_in_0),
    .io_in_2(y_node_9_io_in_2),
    .io_out_0(y_node_9_io_out_0),
    .io_out_2(y_node_9_io_out_2)
  );
  node y_node_10 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_10_io_in_0),
    .io_in_2(y_node_10_io_in_2),
    .io_out_0(y_node_10_io_out_0),
    .io_out_2(y_node_10_io_out_2)
  );
  node y_node0_2 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_2_io_in_0),
    .io_in_2(y_node0_2_io_in_2),
    .io_out_0(y_node0_2_io_out_0),
    .io_out_2(y_node0_2_io_out_2)
  );
  node y_node_11 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_11_io_in_0),
    .io_in_2(y_node_11_io_in_2),
    .io_out_0(y_node_11_io_out_0),
    .io_out_2(y_node_11_io_out_2)
  );
  node y_node_12 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_12_io_in_0),
    .io_in_2(y_node_12_io_in_2),
    .io_out_0(y_node_12_io_out_0),
    .io_out_2(y_node_12_io_out_2)
  );
  node y_node_13 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_13_io_in_0),
    .io_in_2(y_node_13_io_in_2),
    .io_out_0(y_node_13_io_out_0),
    .io_out_2(y_node_13_io_out_2)
  );
  node y_node0_3 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_3_io_in_0),
    .io_in_2(y_node0_3_io_in_2),
    .io_out_0(y_node0_3_io_out_0),
    .io_out_2(y_node0_3_io_out_2)
  );
  node y_node_14 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_14_io_in_0),
    .io_in_2(y_node_14_io_in_2),
    .io_out_0(y_node_14_io_out_0),
    .io_out_2(y_node_14_io_out_2)
  );
  node y_node0_4 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_4_io_in_0),
    .io_in_2(y_node0_4_io_in_2),
    .io_out_0(y_node0_4_io_out_0),
    .io_out_2(y_node0_4_io_out_2)
  );
  node y_node_15 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_15_io_in_0),
    .io_in_2(y_node_15_io_in_2),
    .io_out_0(y_node_15_io_out_0),
    .io_out_2(y_node_15_io_out_2)
  );
  node y_node0_5 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_5_io_in_0),
    .io_in_2(y_node0_5_io_in_2),
    .io_out_0(y_node0_5_io_out_0),
    .io_out_2(y_node0_5_io_out_2)
  );
  node y_node0_6 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_6_io_in_0),
    .io_in_2(y_node0_6_io_in_2),
    .io_out_0(y_node0_6_io_out_0),
    .io_out_2(y_node0_6_io_out_2)
  );
  assign io_y = (y_nextColumn_p_0_6 ^ y_nextColumn_p_1_6) & ~y_nextColumn_z_0_6 & ~y_nextColumn_z_1_6; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 60:81]
  assign y_node0_io_in_0 = {y_node0_io_in_0_hi,_y_T[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_io_in_2 = {y_node0_io_in_2_hi,_y_T_2[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  assign y_node_io_in_0 = {y_node_io_in_0_hi,_y_T[3]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_io_in_2 = {y_node_io_in_2_hi,_y_T_2[3]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_1_io_in_0 = {y_node_io_in_0_hi_1,_y_T[6]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_1_io_in_2 = {y_node_io_in_2_hi_1,_y_T_2[6]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_2_io_in_0 = {y_node_io_in_0_hi_2,_y_T[9]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_2_io_in_2 = {y_node_io_in_2_hi_2,_y_T_2[9]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_3_io_in_0 = {y_node_io_in_0_hi_3,_y_T[12]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_3_io_in_2 = {y_node_io_in_2_hi_3,_y_T_2[12]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_4_io_in_0 = {y_node_io_in_0_hi_4,_y_T[15]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_4_io_in_2 = {y_node_io_in_2_hi_4,_y_T_2[15]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_5_io_in_0 = {y_node_io_in_0_hi_5,_y_T[18]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_5_io_in_2 = {y_node_io_in_2_hi_5,_y_T_2[18]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_6_io_in_0 = {y_node_io_in_0_hi_6,_y_T[21]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_6_io_in_2 = {y_node_io_in_2_hi_6,_y_T_2[21]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node0_1_io_in_0 = {y_node0_io_in_0_hi_1,_y_T_9[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_1_io_in_2 = {y_node0_io_in_2_hi_1,_y_T_11[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  assign y_node_7_io_in_0 = {y_node_io_in_0_hi_7,_y_T_9[3]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_7_io_in_2 = {y_node_io_in_2_hi_7,_y_T_11[3]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_8_io_in_0 = {y_node_io_in_0_hi_8,_y_T_9[6]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_8_io_in_2 = {y_node_io_in_2_hi_8,_y_T_11[6]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_9_io_in_0 = {y_node_io_in_0_hi_9,_y_T_9[9]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_9_io_in_2 = {y_node_io_in_2_hi_9,_y_T_11[9]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_10_io_in_0 = {y_node_io_in_0_hi_10,_y_T_9[12]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_10_io_in_2 = {y_node_io_in_2_hi_10,_y_T_11[12]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node0_2_io_in_0 = {y_node0_io_in_0_hi_2,_y_T_24[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_2_io_in_2 = {y_node0_io_in_2_hi_2,_y_T_26[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  assign y_node_11_io_in_0 = {y_node_io_in_0_hi_11,_y_T_24[3]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_11_io_in_2 = {y_node_io_in_2_hi_11,_y_T_26[3]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_12_io_in_0 = {y_node_io_in_0_hi_12,_y_T_24[6]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_12_io_in_2 = {y_node_io_in_2_hi_12,_y_T_26[6]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_13_io_in_0 = {y_node_io_in_0_hi_13,_y_T_24[9]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_13_io_in_2 = {y_node_io_in_2_hi_13,_y_T_26[9]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node0_3_io_in_0 = {y_node0_io_in_0_hi_3,_y_T_27[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_3_io_in_2 = {y_node0_io_in_2_hi_3,_y_T_29[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  assign y_node_14_io_in_0 = {y_node_io_in_0_hi_14,_y_T_27[3]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_14_io_in_2 = {y_node_io_in_2_hi_14,_y_T_29[3]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node0_4_io_in_0 = {y_node0_io_in_0_hi_4,_y_T_42[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_4_io_in_2 = {y_node0_io_in_2_hi_4,_y_T_44[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  assign y_node_15_io_in_0 = {y_node_io_in_0_hi_15,_y_T_42[3]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_15_io_in_2 = {y_node_io_in_2_hi_15,_y_T_44[3]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node0_5_io_in_0 = {y_node0_io_in_0_hi_5,_y_T_45[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_5_io_in_2 = {y_node0_io_in_2_hi_5,_y_T_47[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  assign y_node0_6_io_in_0 = {y_node0_io_in_0_hi_6,_y_T_54[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_6_io_in_2 = {y_node0_io_in_2_hi_6,_y_T_56[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
endmodule
module LZC_9(
  input  [24:0] io_in, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 11:14]
  output [4:0]  io_out // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 11:14]
);
  wire [4:0] _io_out_T_25 = io_in[1] ? 5'h17 : 5'h18; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_26 = io_in[2] ? 5'h16 : _io_out_T_25; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_27 = io_in[3] ? 5'h15 : _io_out_T_26; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_28 = io_in[4] ? 5'h14 : _io_out_T_27; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_29 = io_in[5] ? 5'h13 : _io_out_T_28; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_30 = io_in[6] ? 5'h12 : _io_out_T_29; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_31 = io_in[7] ? 5'h11 : _io_out_T_30; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_32 = io_in[8] ? 5'h10 : _io_out_T_31; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_33 = io_in[9] ? 5'hf : _io_out_T_32; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_34 = io_in[10] ? 5'he : _io_out_T_33; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_35 = io_in[11] ? 5'hd : _io_out_T_34; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_36 = io_in[12] ? 5'hc : _io_out_T_35; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_37 = io_in[13] ? 5'hb : _io_out_T_36; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_38 = io_in[14] ? 5'ha : _io_out_T_37; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_39 = io_in[15] ? 5'h9 : _io_out_T_38; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_40 = io_in[16] ? 5'h8 : _io_out_T_39; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_41 = io_in[17] ? 5'h7 : _io_out_T_40; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_42 = io_in[18] ? 5'h6 : _io_out_T_41; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_43 = io_in[19] ? 5'h5 : _io_out_T_42; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_44 = io_in[20] ? 5'h4 : _io_out_T_43; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_45 = io_in[21] ? 5'h3 : _io_out_T_44; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_46 = io_in[22] ? 5'h2 : _io_out_T_45; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [4:0] _io_out_T_47 = io_in[23] ? 5'h1 : _io_out_T_46; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  assign io_out = io_in[24] ? 5'h0 : _io_out_T_47; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
endmodule
module LZA(
  input  [24:0] io_a, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 15:14]
  input  [24:0] io_b, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 15:14]
  output [4:0]  io_lzc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 15:14]
  output        io_error, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 15:14]
  output        io_zero // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 15:14]
);
  wire [24:0] preEncoder_io_g; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 24:26]
  wire [24:0] preEncoder_io_s; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 24:26]
  wire [24:0] preEncoder_io_e; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 24:26]
  wire [24:0] preEncoder_io_f; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 24:26]
  wire [24:0] errorDetector_io_g; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 30:29]
  wire [24:0] errorDetector_io_s; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 30:29]
  wire [24:0] errorDetector_io_e; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 30:29]
  wire  errorDetector_io_y; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 30:29]
  wire [24:0] io_lzc_lzc_io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
  wire [4:0] io_lzc_lzc_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
  wire  g_0 = io_a[0] & ~io_b[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_0 = ~io_a[0] & io_b[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_0 = ~(io_a[0] ^ io_b[0]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_1 = io_a[1] & ~io_b[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_1 = ~io_a[1] & io_b[1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_1 = ~(io_a[1] ^ io_b[1]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_2 = io_a[2] & ~io_b[2]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_2 = ~io_a[2] & io_b[2]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_2 = ~(io_a[2] ^ io_b[2]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_3 = io_a[3] & ~io_b[3]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_3 = ~io_a[3] & io_b[3]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_3 = ~(io_a[3] ^ io_b[3]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_4 = io_a[4] & ~io_b[4]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_4 = ~io_a[4] & io_b[4]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_4 = ~(io_a[4] ^ io_b[4]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_5 = io_a[5] & ~io_b[5]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_5 = ~io_a[5] & io_b[5]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_5 = ~(io_a[5] ^ io_b[5]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_6 = io_a[6] & ~io_b[6]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_6 = ~io_a[6] & io_b[6]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_6 = ~(io_a[6] ^ io_b[6]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_7 = io_a[7] & ~io_b[7]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_7 = ~io_a[7] & io_b[7]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_7 = ~(io_a[7] ^ io_b[7]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_8 = io_a[8] & ~io_b[8]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_8 = ~io_a[8] & io_b[8]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_8 = ~(io_a[8] ^ io_b[8]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_9 = io_a[9] & ~io_b[9]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_9 = ~io_a[9] & io_b[9]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_9 = ~(io_a[9] ^ io_b[9]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_10 = io_a[10] & ~io_b[10]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_10 = ~io_a[10] & io_b[10]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_10 = ~(io_a[10] ^ io_b[10]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_11 = io_a[11] & ~io_b[11]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_11 = ~io_a[11] & io_b[11]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_11 = ~(io_a[11] ^ io_b[11]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_12 = io_a[12] & ~io_b[12]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_12 = ~io_a[12] & io_b[12]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_12 = ~(io_a[12] ^ io_b[12]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_13 = io_a[13] & ~io_b[13]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_13 = ~io_a[13] & io_b[13]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_13 = ~(io_a[13] ^ io_b[13]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_14 = io_a[14] & ~io_b[14]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_14 = ~io_a[14] & io_b[14]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_14 = ~(io_a[14] ^ io_b[14]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_15 = io_a[15] & ~io_b[15]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_15 = ~io_a[15] & io_b[15]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_15 = ~(io_a[15] ^ io_b[15]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_16 = io_a[16] & ~io_b[16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_16 = ~io_a[16] & io_b[16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_16 = ~(io_a[16] ^ io_b[16]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_17 = io_a[17] & ~io_b[17]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_17 = ~io_a[17] & io_b[17]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_17 = ~(io_a[17] ^ io_b[17]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_18 = io_a[18] & ~io_b[18]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_18 = ~io_a[18] & io_b[18]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_18 = ~(io_a[18] ^ io_b[18]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_19 = io_a[19] & ~io_b[19]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_19 = ~io_a[19] & io_b[19]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_19 = ~(io_a[19] ^ io_b[19]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_20 = io_a[20] & ~io_b[20]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_20 = ~io_a[20] & io_b[20]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_20 = ~(io_a[20] ^ io_b[20]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_21 = io_a[21] & ~io_b[21]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_21 = ~io_a[21] & io_b[21]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_21 = ~(io_a[21] ^ io_b[21]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_22 = io_a[22] & ~io_b[22]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_22 = ~io_a[22] & io_b[22]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_22 = ~(io_a[22] ^ io_b[22]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_23 = io_a[23] & ~io_b[23]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_23 = ~io_a[23] & io_b[23]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_23 = ~(io_a[23] ^ io_b[23]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_24 = io_a[24] & ~io_b[24]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_24 = ~io_a[24] & io_b[24]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_24 = ~(io_a[24] ^ io_b[24]); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 21:13]
  wire [5:0] preEncoder_io_g_lo_lo = {g_5,g_4,g_3,g_2,g_1,g_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 25:25]
  wire [11:0] preEncoder_io_g_lo = {g_11,g_10,g_9,g_8,g_7,g_6,preEncoder_io_g_lo_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 25:25]
  wire [5:0] preEncoder_io_g_hi_lo = {g_17,g_16,g_15,g_14,g_13,g_12}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 25:25]
  wire [12:0] preEncoder_io_g_hi = {g_24,g_23,g_22,g_21,g_20,g_19,g_18,preEncoder_io_g_hi_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 25:25]
  wire [5:0] preEncoder_io_s_lo_lo = {s_5,s_4,s_3,s_2,s_1,s_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 26:25]
  wire [11:0] preEncoder_io_s_lo = {s_11,s_10,s_9,s_8,s_7,s_6,preEncoder_io_s_lo_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 26:25]
  wire [5:0] preEncoder_io_s_hi_lo = {s_17,s_16,s_15,s_14,s_13,s_12}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 26:25]
  wire [12:0] preEncoder_io_s_hi = {s_24,s_23,s_22,s_21,s_20,s_19,s_18,preEncoder_io_s_hi_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 26:25]
  wire [5:0] preEncoder_io_e_lo_lo = {e_5,e_4,e_3,e_2,e_1,e_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 27:25]
  wire [11:0] preEncoder_io_e_lo = {e_11,e_10,e_9,e_8,e_7,e_6,preEncoder_io_e_lo_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 27:25]
  wire [5:0] preEncoder_io_e_hi_lo = {e_17,e_16,e_15,e_14,e_13,e_12}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 27:25]
  wire [12:0] preEncoder_io_e_hi = {e_24,e_23,e_22,e_21,e_20,e_19,e_18,preEncoder_io_e_hi_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 27:25]
  PreEncoder preEncoder ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 24:26]
    .io_g(preEncoder_io_g),
    .io_s(preEncoder_io_s),
    .io_e(preEncoder_io_e),
    .io_f(preEncoder_io_f)
  );
  ErrorDetector errorDetector ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 30:29]
    .io_g(errorDetector_io_g),
    .io_s(errorDetector_io_s),
    .io_e(errorDetector_io_e),
    .io_y(errorDetector_io_y)
  );
  LZC_9 io_lzc_lzc ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
    .io_in(io_lzc_lzc_io_in),
    .io_out(io_lzc_lzc_io_out)
  );
  assign io_lzc = io_lzc_lzc_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 36:10]
  assign io_error = errorDetector_io_y; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 35:12]
  assign io_zero = ~(|preEncoder_io_f); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 37:14]
  assign preEncoder_io_g = {preEncoder_io_g_hi,preEncoder_io_g_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 25:25]
  assign preEncoder_io_s = {preEncoder_io_s_hi,preEncoder_io_s_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 26:25]
  assign preEncoder_io_e = {preEncoder_io_e_hi,preEncoder_io_e_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 27:25]
  assign errorDetector_io_g = {preEncoder_io_g_hi,preEncoder_io_g_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 31:27]
  assign errorDetector_io_s = {preEncoder_io_s_hi,preEncoder_io_s_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 32:27]
  assign errorDetector_io_e = {preEncoder_io_e_hi,preEncoder_io_e_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/LZA.scala 33:27]
  assign io_lzc_lzc_io_in = preEncoder_io_f; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 22:15]
endmodule
module ClosePath(
  input         io_in_a_sign, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 108:14]
  input  [7:0]  io_in_a_exp, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 108:14]
  input  [23:0] io_in_a_sig, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 108:14]
  input  [7:0]  io_in_b_exp, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 108:14]
  input  [23:0] io_in_b_sig, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 108:14]
  input         io_in_needShift, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 108:14]
  output [31:0] io_out_result, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 108:14]
  output        io_out_near_path_of // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 108:14]
);
  wire [24:0] lza_io_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 134:19]
  wire [24:0] lza_io_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 134:19]
  wire [4:0] lza_io_lzc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 134:19]
  wire  lza_io_error; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 134:19]
  wire  lza_io_zero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 134:19]
  wire [26:0] near_path_tininess_rounder_io_in_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 174:42]
  wire [22:0] near_path_rounder_io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  near_path_rounder_io_roundIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  near_path_rounder_io_stickyIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire [22:0] near_path_rounder_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  near_path_rounder_io_cout; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire [24:0] _b_sig_T = {io_in_b_sig,1'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 123:19]
  wire [24:0] b_sig = _b_sig_T >> io_in_needShift; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 123:43]
  wire  bIsZero = ~(|io_in_b_exp); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 124:17]
  wire [25:0] _resultSigComplementForm_T = {1'h0,io_in_a_sig,1'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 126:8]
  wire [24:0] _resultSigComplementForm_T_2 = ~b_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 127:42]
  wire [24:0] _resultSigComplementForm_T_4 = _resultSigComplementForm_T_2 + 25'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 127:49]
  wire [25:0] _resultSigComplementForm_T_5 = {1'h1,_resultSigComplementForm_T_4}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 127:31]
  wire [25:0] _resultSigComplementForm_T_7 = _resultSigComplementForm_T + _resultSigComplementForm_T_5; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 127:26]
  wire [25:0] resultSigComplementForm = bIsZero ? _resultSigComplementForm_T : _resultSigComplementForm_T_7; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 125:36]
  wire  a_LessThan_b = resultSigComplementForm[25]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 128:50]
  wire [24:0] _resultSigNoRound_T_1 = ~resultSigComplementForm[24:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 130:5]
  wire [24:0] _resultSigNoRound_T_3 = _resultSigNoRound_T_1 + 25'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 130:38]
  wire [24:0] resultSigNoRound = a_LessThan_b ? _resultSigNoRound_T_3 : resultSigComplementForm[24:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 129:29]
  wire  result_sign = a_LessThan_b ? ~io_in_a_sign : io_in_a_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 132:24]
  wire [7:0] resultExpNoRound = lza_io_zero ? 8'h0 : io_in_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 146:29]
  wire  resultExpIsZero = resultExpNoRound == 8'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 147:42]
  wire [4:0] _GEN_0 = {{4'd0}, lza_io_error}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 149:45]
  wire [4:0] _shiftLimit_T_1 = lza_io_lzc + _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 149:45]
  wire [7:0] _GEN_1 = {{3'd0}, _shiftLimit_T_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 149:37]
  wire  shiftLimit = resultExpNoRound <= _GEN_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 149:37]
  wire [7:0] _GEN_2 = {{3'd0}, lza_io_lzc}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 150:33]
  wire [7:0] exp_s1 = resultExpNoRound - _GEN_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 150:33]
  wire [7:0] _GEN_3 = {{7'd0}, lza_io_error}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 151:23]
  wire [7:0] exp_s2 = exp_s1 - _GEN_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 151:23]
  wire [7:0] closePathResult_exp = shiftLimit ? 8'h0 : exp_s2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 152:29]
  wire [7:0] _sigShiftNum_T_1 = resultExpNoRound - 8'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 157:39]
  wire [7:0] _sigShiftNum_T_2 = shiftLimit ? _sigShiftNum_T_1 : {{3'd0}, lza_io_lzc}; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [7:0] sigShiftNum = resultExpIsZero ? 8'h0 : _sigShiftNum_T_2; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [279:0] _GEN_5 = {{255'd0}, resultSigNoRound}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 161:34]
  wire [279:0] _sig_s1_T = _GEN_5 << sigShiftNum; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 161:34]
  wire [24:0] sig_s1 = _sig_s1_T[24:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 161:49]
  wire [24:0] _sig_s2_T_1 = {sig_s1[23:0],1'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 162:33]
  wire [24:0] sig_s2 = lza_io_error ? _sig_s2_T_1 : sig_s1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 162:19]
  wire [24:0] _sig_s3_T = shiftLimit ? sig_s1 : sig_s2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 165:10]
  wire [26:0] sig_s3 = {_sig_s3_T,2'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 164:8]
  wire [26:0] close_path_sig = {sig_s3[26:1],|sig_s3[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 171:53]
  wire [7:0] _GEN_4 = {{7'd0}, near_path_rounder_io_cout}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 186:57]
  wire [7:0] near_path_exp_rounded = _GEN_4 + closePathResult_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 186:57]
  wire  _io_out_result_T_1 = result_sign & ~lza_io_zero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 190:27]
  wire [8:0] io_out_result_hi = {_io_out_result_T_1,near_path_exp_rounded}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 189:23]
  LZA lza ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 134:19]
    .io_a(lza_io_a),
    .io_b(lza_io_b),
    .io_lzc(lza_io_lzc),
    .io_error(lza_io_error),
    .io_zero(lza_io_zero)
  );
  TininessRounder near_path_tininess_rounder ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 174:42]
    .io_in_sig(near_path_tininess_rounder_io_in_sig)
  );
  RoundingUnit near_path_rounder ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 44:25]
    .io_in(near_path_rounder_io_in),
    .io_roundIn(near_path_rounder_io_roundIn),
    .io_stickyIn(near_path_rounder_io_stickyIn),
    .io_out(near_path_rounder_io_out),
    .io_cout(near_path_rounder_io_cout)
  );
  assign io_out_result = {io_out_result_hi,near_path_rounder_io_out}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 189:23]
  assign io_out_near_path_of = near_path_exp_rounded == 8'hff; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 195:48]
  assign lza_io_a = {io_in_a_sig,1'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 122:18]
  assign lza_io_b = _b_sig_T >> io_in_needShift; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 123:43]
  assign near_path_tininess_rounder_io_in_sig = {sig_s3[26:1],|sig_s3[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 171:53]
  assign near_path_rounder_io_in = close_path_sig[25:3]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 45:33]
  assign near_path_rounder_io_roundIn = close_path_sig[2]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 46:50]
  assign near_path_rounder_io_stickyIn = |close_path_sig[1:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 47:51]
endmodule
module FADD(
  output        io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
  input         io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
  input  [31:0] io_in_bits_a, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
  input  [31:0] io_in_bits_b, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
  input         io_in_bits_a_inter_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
  input         io_in_bits_b_inter_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
  input         io_in_bits_a_inter_flags_isNaN, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
  input         io_in_bits_a_inter_flags_isInf, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
  input         io_in_bits_b_inter_flags_isNaN, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
  input         io_in_bits_b_inter_flags_isInf, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
  input         io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
  output        io_out_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
  output [31:0] io_out_bits_result // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 221:14]
);
  wire  farPath_io_in_a_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 247:23]
  wire [7:0] farPath_io_in_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 247:23]
  wire [23:0] farPath_io_in_a_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 247:23]
  wire [7:0] farPath_io_in_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 247:23]
  wire [23:0] farPath_io_in_b_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 247:23]
  wire  farPath_io_in_addSig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 247:23]
  wire  farPath_io_in_tinyAdd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 247:23]
  wire [4:0] farPath_io_in_shiftNum; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 247:23]
  wire [31:0] farPath_io_out_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 247:23]
  wire  farPath_io_out_far_path_of; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 247:23]
  wire  closePath_io_in_a_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 261:25]
  wire [7:0] closePath_io_in_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 261:25]
  wire [23:0] closePath_io_in_a_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 261:25]
  wire [7:0] closePath_io_in_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 261:25]
  wire [23:0] closePath_io_in_b_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 261:25]
  wire  closePath_io_in_needShift; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 261:25]
  wire [31:0] closePath_io_out_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 261:25]
  wire  closePath_io_out_near_path_of; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 261:25]
  wire  fp_a_sign = io_in_bits_a[31]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 58:19]
  wire [7:0] fp_a_exp = io_in_bits_a[30:23]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 59:18]
  wire [22:0] fp_a_sig = io_in_bits_a[22:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 60:18]
  wire  fp_b_sign = io_in_bits_b[31]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 58:19]
  wire [7:0] fp_b_exp = io_in_bits_b[30:23]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 59:18]
  wire [22:0] fp_b_sig = io_in_bits_b[22:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 60:18]
  wire  decode_a_expNotZero = |fp_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 31:28]
  wire  decode_a_expIsOnes = &fp_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 32:27]
  wire  decode_a_sigNotZero = |fp_a_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 33:28]
  wire  decode_a__expIsZero = ~decode_a_expNotZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 36:27]
  wire  decode_a__sigIsZero = ~decode_a_sigNotZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 39:27]
  wire  decode_a__isSubnormal = decode_a__expIsZero & decode_a_sigNotZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 40:46]
  wire  decode_a__isInf = decode_a_expIsOnes & decode_a__sigIsZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 41:40]
  wire  decode_a__isNaN = decode_a_expIsOnes & decode_a_sigNotZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 43:40]
  wire  decode_b_expNotZero = |fp_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 31:28]
  wire  decode_b_expIsOnes = &fp_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 32:27]
  wire  decode_b_sigNotZero = |fp_b_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 33:28]
  wire  decode_b__expIsZero = ~decode_b_expNotZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 36:27]
  wire  decode_b__sigIsZero = ~decode_b_sigNotZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 39:27]
  wire  decode_b__isSubnormal = decode_b__expIsZero & decode_b_sigNotZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 40:46]
  wire  decode_b__isInf = decode_b_expIsOnes & decode_b__sigIsZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 41:40]
  wire  decode_b__isNaN = decode_b_expIsOnes & decode_b_sigNotZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 43:40]
  wire [7:0] _raw_a_inner_exp_T_1 = fp_a_exp + 8'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 83:38]
  wire [7:0] raw_a_exp = decode_a__isSubnormal ? _raw_a_inner_exp_T_1 : fp_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 83:23]
  wire [23:0] raw_a_sig = {decode_a_expNotZero,fp_a_sig}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 84:23]
  wire [7:0] _raw_b_inner_exp_T_1 = fp_b_exp + 8'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 83:38]
  wire [7:0] raw_b_exp = decode_b__isSubnormal ? _raw_b_inner_exp_T_1 : fp_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 83:23]
  wire [23:0] raw_b_sig = {decode_b_expNotZero,fp_b_sig}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 84:23]
  wire  addSig = fp_a_sign == fp_b_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 235:26]
  wire  needSwap = raw_a_exp < raw_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 236:28]
  wire [7:0] _diffExp_T_1 = raw_b_exp - raw_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 237:41]
  wire [7:0] _diffExp_T_3 = raw_a_exp - raw_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 237:64]
  wire [7:0] diffExp = needSwap ? _diffExp_T_1 : _diffExp_T_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 237:20]
  wire [4:0] initShiftNum = diffExp[4:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 240:29]
  wire  isMaxAlign = diffExp > 8'h1a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 241:28]
  wire  _closePathSel_T = ~addSig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 243:22]
  wire  closePathSel = ~addSig & ~isMaxAlign & initShiftNum <= 5'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 243:45]
  wire  a_isNaN = io_in_bits_a_inter_valid ? io_in_bits_a_inter_flags_isNaN : decode_a__isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 275:20]
  wire  a_isInf = io_in_bits_a_inter_valid ? io_in_bits_a_inter_flags_isInf : decode_a__isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 277:20]
  wire  b_isNaN = io_in_bits_b_inter_valid ? io_in_bits_b_inter_flags_isNaN : decode_b__isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 281:20]
  wire  b_isInf = io_in_bits_b_inter_valid ? io_in_bits_b_inter_flags_isInf : decode_b__isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 283:20]
  wire  special_path_hasNaN = a_isNaN | b_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 285:37]
  wire  special_path_hasInf = a_isInf | b_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 287:37]
  wire  special_path_inf_iv = a_isInf & b_isInf & _closePathSel_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 288:48]
  wire  special_case_happen = special_path_hasNaN | special_path_hasInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 289:49]
  wire  _special_path_result_T = special_path_hasNaN | special_path_inf_iv; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 293:25]
  wire  _special_path_result_T_3 = a_isInf ? fp_a_sign : fp_b_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 296:10]
  wire [31:0] _special_path_result_T_5 = {_special_path_result_T_3,8'hff,23'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 295:8]
  wire [31:0] special_path_result = _special_path_result_T ? 32'h7fc00000 : _special_path_result_T_5; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 292:32]
  wire  common_overflow_sign = closePathSel ? closePath_io_out_result[31] : farPath_io_out_result[31]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 306:8]
  wire  common_overflow = ~closePathSel & farPath_io_out_far_path_of | closePathSel & closePath_io_out_near_path_of; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 316:34]
  wire [31:0] _io_out_bits_result_T = {common_overflow_sign,8'hff,23'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 336:10]
  wire [31:0] _io_out_bits_result_T_1 = closePathSel ? closePath_io_out_result : farPath_io_out_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 337:10]
  wire [31:0] _io_out_bits_result_T_2 = common_overflow ? _io_out_bits_result_T : _io_out_bits_result_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 334:8]
  FarPath farPath ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 247:23]
    .io_in_a_sign(farPath_io_in_a_sign),
    .io_in_a_exp(farPath_io_in_a_exp),
    .io_in_a_sig(farPath_io_in_a_sig),
    .io_in_b_exp(farPath_io_in_b_exp),
    .io_in_b_sig(farPath_io_in_b_sig),
    .io_in_addSig(farPath_io_in_addSig),
    .io_in_tinyAdd(farPath_io_in_tinyAdd),
    .io_in_shiftNum(farPath_io_in_shiftNum),
    .io_out_result(farPath_io_out_result),
    .io_out_far_path_of(farPath_io_out_far_path_of)
  );
  ClosePath closePath ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 261:25]
    .io_in_a_sign(closePath_io_in_a_sign),
    .io_in_a_exp(closePath_io_in_a_exp),
    .io_in_a_sig(closePath_io_in_a_sig),
    .io_in_b_exp(closePath_io_in_b_exp),
    .io_in_b_sig(closePath_io_in_b_sig),
    .io_in_needShift(closePath_io_in_needShift),
    .io_out_result(closePath_io_out_result),
    .io_out_near_path_of(closePath_io_out_near_path_of)
  );
  assign io_in_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 329:15]
  assign io_out_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 330:16]
  assign io_out_bits_result = special_case_happen ? special_path_result : _io_out_bits_result_T_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 331:28]
  assign farPath_io_in_a_sign = needSwap ? fp_b_sign : fp_a_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 248:25]
  assign farPath_io_in_a_exp = needSwap ? raw_b_exp : raw_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 248:25]
  assign farPath_io_in_a_sig = needSwap ? raw_b_sig : raw_a_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 248:25]
  assign farPath_io_in_b_exp = needSwap ? raw_a_exp : raw_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 249:25]
  assign farPath_io_in_b_sig = needSwap ? raw_a_sig : raw_b_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 249:25]
  assign farPath_io_in_addSig = fp_a_sign == fp_b_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 235:26]
  assign farPath_io_in_tinyAdd = decode_a__expIsZero & decode_b__expIsZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 251:47]
  assign farPath_io_in_shiftNum = isMaxAlign ? 5'h1a : initShiftNum; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 242:21]
  assign closePath_io_in_a_sign = needSwap ? fp_b_sign : fp_a_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 262:27]
  assign closePath_io_in_a_exp = needSwap ? raw_b_exp : raw_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 262:27]
  assign closePath_io_in_a_sig = needSwap ? raw_b_sig : raw_a_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 262:27]
  assign closePath_io_in_b_exp = needSwap ? raw_a_exp : raw_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 263:27]
  assign closePath_io_in_b_sig = needSwap ? raw_a_sig : raw_b_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 263:27]
  assign closePath_io_in_needShift = initShiftNum == 5'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 264:45]
endmodule
module RoundingUnit_16(
  input  [9:0] io_in, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 7:14]
  input        io_roundIn, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 7:14]
  input        io_stickyIn, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 7:14]
  output [9:0] io_out, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 7:14]
  output       io_cout // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 7:14]
);
  wire  g = io_in[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 19:25]
  wire  r_up = io_roundIn & io_stickyIn | io_roundIn & ~io_stickyIn & g; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 25:24]
  wire [9:0] out_r_up = io_in + 10'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 32:24]
  assign io_out = r_up ? out_r_up : io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 33:16]
  assign io_cout = r_up & &io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 36:19]
endmodule
module ShiftRightJam_4(
  input  [11:0] io_in, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 11:14]
  input  [7:0]  io_shamt, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 11:14]
  output [11:0] io_out, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 11:14]
  output        io_sticky // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 11:14]
);
  wire  exceed_max_shift = io_shamt > 8'hc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 17:35]
  wire [3:0] shamt = io_shamt[3:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 18:23]
  wire [15:0] _sticky_mask_T = 16'h1 << shamt; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 20:11]
  wire [15:0] _sticky_mask_T_2 = _sticky_mask_T - 16'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 20:28]
  wire [11:0] _sticky_mask_T_5 = exceed_max_shift ? 12'hfff : 12'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 20:53]
  wire [11:0] sticky_mask = _sticky_mask_T_2[11:0] | _sticky_mask_T_5; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 20:47]
  wire [11:0] _io_out_T = io_in >> io_shamt; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 21:46]
  wire [11:0] _io_sticky_T = io_in & sticky_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 22:23]
  assign io_out = exceed_max_shift ? 12'h0 : _io_out_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 21:16]
  assign io_sticky = |_io_sticky_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 22:38]
endmodule
module FPDownConverter(
  output        io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 77:14]
  input         io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 77:14]
  input  [31:0] io_in_bits_in, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 77:14]
  input         io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 77:14]
  output        io_out_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 77:14]
  output [15:0] io_out_bits_result // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 77:14]
);
  wire [9:0] normal_rounder_io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 99:30]
  wire  normal_rounder_io_roundIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 99:30]
  wire  normal_rounder_io_stickyIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 99:30]
  wire [9:0] normal_rounder_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 99:30]
  wire  normal_rounder_io_cout; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 99:30]
  wire [11:0] shiftRightJam_io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire [7:0] shiftRightJam_io_shamt; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire [11:0] shiftRightJam_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire  shiftRightJam_io_sticky; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire [9:0] subnormal_rounder_io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 125:33]
  wire  subnormal_rounder_io_roundIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 125:33]
  wire  subnormal_rounder_io_stickyIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 125:33]
  wire [9:0] subnormal_rounder_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 125:33]
  wire  subnormal_rounder_io_cout; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 125:33]
  wire  fp_in_sign = io_in_bits_in[31]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 58:19]
  wire [7:0] fp_in_exp = io_in_bits_in[30:23]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 59:18]
  wire [22:0] fp_in_sig = io_in_bits_in[22:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 60:18]
  wire  decode_expNotZero = |fp_in_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 31:28]
  wire  decode_expIsOnes = &fp_in_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 32:27]
  wire  decode_sigNotZero = |fp_in_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 33:28]
  wire  decode__isNaN = decode_expIsOnes & decode_sigNotZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 43:40]
  wire [8:0] _resultExpNoRound_T = {1'b0,$signed(fp_in_exp)}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 90:36]
  wire [8:0] resultExpNoRound = $signed(_resultExpNoRound_T) - 9'sh70; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 90:41]
  wire  normal_stickyBit = |fp_in_sig[11:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 97:54]
  wire [8:0] _normal_exp_rounded_T_2 = $signed(resultExpNoRound) + 9'sh1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 107:73]
  wire [8:0] normal_exp_rounded = normal_rounder_io_cout ? $signed(_normal_exp_rounded_T_2) : $signed(resultExpNoRound); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 107:31]
  wire  _expOverflow_T = $signed(resultExpNoRound) > 9'sh1d; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 110:22]
  wire  _expOverflow_T_1 = $signed(resultExpNoRound) > 9'sh1e; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 111:22]
  wire  expOverflow = normal_rounder_io_cout ? _expOverflow_T : _expOverflow_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 108:24]
  wire  _expUnderflow_T_1 = $signed(resultExpNoRound) < 9'sh1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 113:91]
  wire  subnormal_exp_rounded = subnormal_rounder_io_cout; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 132:34]
  wire  _common_exp_T = ~_expUnderflow_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 153:7]
  wire  _common_exp_T_1 = ~_expUnderflow_T_1 & expOverflow; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 153:23]
  wire  _common_exp_T_4 = _common_exp_T & ~expOverflow; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 154:23]
  wire [4:0] _common_exp_T_6 = _common_exp_T_1 ? 5'h1f : 5'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] _common_exp_T_7 = _common_exp_T_4 ? normal_exp_rounded[4:0] : 5'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire  _common_exp_T_8 = _expUnderflow_T_1 & subnormal_exp_rounded; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] _common_exp_T_9 = _common_exp_T_6 | _common_exp_T_7; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] _GEN_0 = {{4'd0}, _common_exp_T_8}; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] common_exp = _common_exp_T_9 | _GEN_0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _common_sig_T_6 = _common_exp_T_4 ? normal_rounder_io_out : 10'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _common_sig_T_7 = _expUnderflow_T_1 ? subnormal_rounder_io_out : 10'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] common_sig = _common_sig_T_6 | _common_sig_T_7; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire  _of_T = ~decode_expIsOnes; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 182:12]
  wire  _result_T_1 = ~decode__isNaN & fp_in_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 192:19]
  wire [4:0] _result_T_4 = decode_expIsOnes ? 5'h1f : 5'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] _result_T_5 = _of_T ? common_exp : 5'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] _result_T_6 = _result_T_4 | _result_T_5; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _result_T_8 = {decode_sigNotZero,9'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 200:12]
  wire [9:0] _result_T_9 = decode_expIsOnes ? _result_T_8 : 10'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _result_T_10 = _of_T ? common_sig : 10'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _result_T_11 = _result_T_9 | _result_T_10; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [5:0] result_hi = {_result_T_1,_result_T_6}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 191:19]
  RoundingUnit_16 normal_rounder ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 99:30]
    .io_in(normal_rounder_io_in),
    .io_roundIn(normal_rounder_io_roundIn),
    .io_stickyIn(normal_rounder_io_stickyIn),
    .io_out(normal_rounder_io_out),
    .io_cout(normal_rounder_io_cout)
  );
  ShiftRightJam_4 shiftRightJam ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 27:31]
    .io_in(shiftRightJam_io_in),
    .io_shamt(shiftRightJam_io_shamt),
    .io_out(shiftRightJam_io_out),
    .io_sticky(shiftRightJam_io_sticky)
  );
  RoundingUnit_16 subnormal_rounder ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 125:33]
    .io_in(subnormal_rounder_io_in),
    .io_roundIn(subnormal_rounder_io_roundIn),
    .io_stickyIn(subnormal_rounder_io_stickyIn),
    .io_out(subnormal_rounder_io_out),
    .io_cout(subnormal_rounder_io_cout)
  );
  assign io_in_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 206:15]
  assign io_out_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 207:16]
  assign io_out_bits_result = {result_hi,_result_T_11}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 191:19]
  assign normal_rounder_io_in = fp_in_sig[22:13]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 95:34]
  assign normal_rounder_io_roundIn = fp_in_sig[12]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 96:61]
  assign normal_rounder_io_stickyIn = |fp_in_sig[11:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 97:54]
  assign shiftRightJam_io_in = {decode_expNotZero,fp_in_sig[22:12]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 121:8]
  assign shiftRightJam_io_shamt = 8'h71 - fp_in_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 119:45]
  assign subnormal_rounder_io_in = shiftRightJam_io_out[10:1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 126:56]
  assign subnormal_rounder_io_roundIn = shiftRightJam_io_out[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 127:48]
  assign subnormal_rounder_io_stickyIn = shiftRightJam_io_sticky | normal_stickyBit; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 124:42]
endmodule
module DotProdUnit(
  input         clock,
  input         reset,
  output        io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  input         io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  input  [15:0] io_in_bits_vec_a_0, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  input  [15:0] io_in_bits_vec_a_1, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  input  [15:0] io_in_bits_vec_a_2, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  input  [15:0] io_in_bits_vec_a_3, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  input  [15:0] io_in_bits_vec_b_0, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  input  [15:0] io_in_bits_vec_b_1, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  input  [15:0] io_in_bits_vec_b_2, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  input  [15:0] io_in_bits_vec_b_3, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  input  [31:0] io_in_bits_c, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  input         io_in_bits_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  input  [1:0]  io_in_bits_rowtag, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  input         io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  output        io_out_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  output [31:0] io_out_bits_result, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  output        io_out_bits_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
  output [1:0]  io_out_bits_rowtag // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 30:14]
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
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
`endif // RANDOMIZE_REG_INIT
  wire  fmul_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire [15:0] fmul_io_in_bits_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire [15:0] fmul_io_in_bits_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_io_toFADD_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_io_toFADD_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire [31:0] fmul_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire [15:0] fmul_1_io_in_bits_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire [15:0] fmul_1_io_in_bits_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_toFADD_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_toFADD_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire [31:0] fmul_1_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire [15:0] fmul_2_io_in_bits_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire [15:0] fmul_2_io_in_bits_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_toFADD_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_toFADD_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire [31:0] fmul_2_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire [15:0] fmul_3_io_in_bits_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire [15:0] fmul_3_io_in_bits_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_toFADD_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_toFADD_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire [31:0] fmul_3_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fcvt_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 314:22]
  wire [15:0] fcvt_io_in_bits_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 314:22]
  wire  fcvt_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 314:22]
  wire [31:0] fcvt_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 314:22]
  wire  faddModule_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_io_in_bits_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_io_in_bits_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_bits_a_inter_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_bits_b_inter_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_bits_a_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_bits_a_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_bits_b_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_bits_b_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_1_io_in_bits_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_1_io_in_bits_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_bits_a_inter_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_bits_b_inter_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_bits_a_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_bits_a_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_bits_b_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_bits_b_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_1_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_2_io_in_bits_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_2_io_in_bits_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_bits_a_inter_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_bits_b_inter_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_bits_a_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_bits_a_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_bits_b_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_bits_b_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_2_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_3_io_in_bits_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_3_io_in_bits_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_bits_a_inter_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_bits_b_inter_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_bits_a_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_bits_a_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_bits_b_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_bits_b_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_3_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
  wire  fcvt_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 220:22]
  wire  fcvt_1_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 220:22]
  wire [31:0] fcvt_1_io_in_bits_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 220:22]
  wire  fcvt_1_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 220:22]
  wire  fcvt_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 220:22]
  wire [15:0] fcvt_1_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 220:22]
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
  reg  a_flag_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 365:55]
  reg  a_flag_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 365:55]
  wire  fmulResult_0_inter_flags_isNaN = fmul_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 45:24 52:19]
  wire  fmulResult_0_inter_flags_isInf = fmul_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 45:24 52:19]
  reg  b_flag_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 366:55]
  reg  b_flag_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 366:55]
  wire  fmulResult_1_inter_flags_isNaN = fmul_1_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 45:24 52:19]
  wire  fmulResult_1_inter_flags_isInf = fmul_1_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 45:24 52:19]
  reg [31:0] faddModule_io_in_bits_a_r; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 370:41]
  wire [31:0] fmulResult_0_fp_prod = fmul_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 45:24 52:19]
  reg [31:0] faddModule_io_in_bits_b_r; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 371:41]
  wire [31:0] fmulResult_1_fp_prod = fmul_1_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 45:24 52:19]
  wire  prevalid_1 = fmulValid_2 & fmulValid_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 79:39]
  wire  prehandshaked_1 = prevalid_1 & faddModule_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 354:35]
  reg  valid_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 355:24]
  wire  _GEN_15 = faddModule_1_io_out_valid & firstPostReady_0 ? 1'h0 : valid_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 356:49 357:13 355:24]
  wire  _GEN_16 = prehandshaked_1 | _GEN_15; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 359:25 360:13]
  reg  a_flag_1_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 365:55]
  reg  a_flag_1_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 365:55]
  wire  fmulResult_2_inter_flags_isNaN = fmul_2_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 45:24 52:19]
  wire  fmulResult_2_inter_flags_isInf = fmul_2_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 45:24 52:19]
  reg  b_flag_1_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 366:55]
  reg  b_flag_1_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 366:55]
  wire  fmulResult_3_inter_flags_isNaN = fmul_3_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 45:24 52:19]
  wire  fmulResult_3_inter_flags_isInf = fmul_3_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 45:24 52:19]
  reg [31:0] faddModule_io_in_bits_a_r_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 370:41]
  wire [31:0] fmulResult_2_fp_prod = fmul_2_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 45:24 52:19]
  reg [31:0] faddModule_io_in_bits_b_r_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 371:41]
  wire [31:0] fmulResult_3_fp_prod = fmul_3_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 45:24 52:19]
  reg [31:0] firstAddResult_2_r; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 90:45]
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
  reg [31:0] faddModule_io_in_bits_a_r_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 370:41]
  wire [31:0] firstAddResult_0 = faddModule_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 70:28 83:25]
  reg [31:0] faddModule_io_in_bits_b_r_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 371:41]
  wire [31:0] firstAddResult_1 = faddModule_1_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 70:28 83:25]
  reg [31:0] addResult_1_r; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 119:36]
  wire  postValid_0 = faddModule_2_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 108:27 116:24]
  wire  posthandshaked = postValid_0 & postReady_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 123:53]
  reg  mixPc_sx; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 125:36]
  reg [1:0] rowtag_sx; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 126:37]
  wire  prehandshaked_4 = postValid_0 & faddModule_3_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 354:35]
  reg  valid_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 355:24]
  wire  _T_15 = faddModule_3_io_out_valid & io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 356:34]
  wire  _GEN_39 = faddModule_3_io_out_valid & io_out_ready ? 1'h0 : valid_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 356:49 357:13 355:24]
  wire  _GEN_40 = prehandshaked_4 | _GEN_39; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 359:25 360:13]
  reg [31:0] faddModule_io_in_bits_a_r_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 370:41]
  wire [31:0] addResult_0 = faddModule_2_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 107:27 115:24]
  reg [31:0] faddModule_io_in_bits_b_r_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 371:41]
  reg  mixPc_es; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 141:27]
  reg [1:0] rowtag_es; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 142:28]
  reg [31:0] atResult_es; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 143:30]
  reg  esValid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 146:24]
  wire  _T_16 = io_out_ready & io_out_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 52:35]
  wire  _GEN_48 = _T_16 ? 1'h0 : esValid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 147:22 148:13 146:24]
  wire  _GEN_49 = _T_15 | _GEN_48; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 150:25 151:13]
  wire  _T_18 = faddModule_3_io_out_valid & ~mixPc_sx; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 154:110]
  wire  prehandshaked_5 = _T_18 & fcvt_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 222:35]
  reg  valid_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 223:24]
  wire  _GEN_50 = fcvt_1_io_out_valid & io_out_ready ? 1'h0 : valid_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 224:43 225:13 223:24]
  wire  _GEN_51 = prehandshaked_5 | _GEN_50; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 227:25 228:13]
  reg [31:0] fcvt_io_in_bits_in_r; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 232:36]
  wire [15:0] _io_out_bits_result_T_1 = fcvt_1_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 94:22]
  wire [31:0] _io_out_bits_result_T_2 = {16'hffff,_io_out_bits_result_T_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 94:8]
  FMULnoRound fmul ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
    .io_in_ready(fmul_io_in_ready),
    .io_in_valid(fmul_io_in_valid),
    .io_in_bits_a(fmul_io_in_bits_a),
    .io_in_bits_b(fmul_io_in_bits_b),
    .io_toFADD_ready(fmul_io_toFADD_ready),
    .io_toFADD_valid(fmul_io_toFADD_valid),
    .io_toFADD_bits_fp_prod(fmul_io_toFADD_bits_fp_prod),
    .io_toFADD_bits_inter_flags_isNaN(fmul_io_toFADD_bits_inter_flags_isNaN),
    .io_toFADD_bits_inter_flags_isInf(fmul_io_toFADD_bits_inter_flags_isInf)
  );
  FMULnoRound fmul_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
    .io_in_ready(fmul_1_io_in_ready),
    .io_in_valid(fmul_1_io_in_valid),
    .io_in_bits_a(fmul_1_io_in_bits_a),
    .io_in_bits_b(fmul_1_io_in_bits_b),
    .io_toFADD_ready(fmul_1_io_toFADD_ready),
    .io_toFADD_valid(fmul_1_io_toFADD_valid),
    .io_toFADD_bits_fp_prod(fmul_1_io_toFADD_bits_fp_prod),
    .io_toFADD_bits_inter_flags_isNaN(fmul_1_io_toFADD_bits_inter_flags_isNaN),
    .io_toFADD_bits_inter_flags_isInf(fmul_1_io_toFADD_bits_inter_flags_isInf)
  );
  FMULnoRound fmul_2 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
    .io_in_ready(fmul_2_io_in_ready),
    .io_in_valid(fmul_2_io_in_valid),
    .io_in_bits_a(fmul_2_io_in_bits_a),
    .io_in_bits_b(fmul_2_io_in_bits_b),
    .io_toFADD_ready(fmul_2_io_toFADD_ready),
    .io_toFADD_valid(fmul_2_io_toFADD_valid),
    .io_toFADD_bits_fp_prod(fmul_2_io_toFADD_bits_fp_prod),
    .io_toFADD_bits_inter_flags_isNaN(fmul_2_io_toFADD_bits_inter_flags_isNaN),
    .io_toFADD_bits_inter_flags_isInf(fmul_2_io_toFADD_bits_inter_flags_isInf)
  );
  FMULnoRound fmul_3 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 106:22]
    .io_in_ready(fmul_3_io_in_ready),
    .io_in_valid(fmul_3_io_in_valid),
    .io_in_bits_a(fmul_3_io_in_bits_a),
    .io_in_bits_b(fmul_3_io_in_bits_b),
    .io_toFADD_ready(fmul_3_io_toFADD_ready),
    .io_toFADD_valid(fmul_3_io_toFADD_valid),
    .io_toFADD_bits_fp_prod(fmul_3_io_toFADD_bits_fp_prod),
    .io_toFADD_bits_inter_flags_isNaN(fmul_3_io_toFADD_bits_inter_flags_isNaN),
    .io_toFADD_bits_inter_flags_isInf(fmul_3_io_toFADD_bits_inter_flags_isInf)
  );
  FPUpConverter fcvt ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 314:22]
    .io_in_ready(fcvt_io_in_ready),
    .io_in_bits_in(fcvt_io_in_bits_in),
    .io_out_ready(fcvt_io_out_ready),
    .io_out_bits_result(fcvt_io_out_bits_result)
  );
  FADD faddModule ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
    .io_in_ready(faddModule_io_in_ready),
    .io_in_valid(faddModule_io_in_valid),
    .io_in_bits_a(faddModule_io_in_bits_a),
    .io_in_bits_b(faddModule_io_in_bits_b),
    .io_in_bits_a_inter_valid(faddModule_io_in_bits_a_inter_valid),
    .io_in_bits_b_inter_valid(faddModule_io_in_bits_b_inter_valid),
    .io_in_bits_a_inter_flags_isNaN(faddModule_io_in_bits_a_inter_flags_isNaN),
    .io_in_bits_a_inter_flags_isInf(faddModule_io_in_bits_a_inter_flags_isInf),
    .io_in_bits_b_inter_flags_isNaN(faddModule_io_in_bits_b_inter_flags_isNaN),
    .io_in_bits_b_inter_flags_isInf(faddModule_io_in_bits_b_inter_flags_isInf),
    .io_out_ready(faddModule_io_out_ready),
    .io_out_valid(faddModule_io_out_valid),
    .io_out_bits_result(faddModule_io_out_bits_result)
  );
  FADD faddModule_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
    .io_in_ready(faddModule_1_io_in_ready),
    .io_in_valid(faddModule_1_io_in_valid),
    .io_in_bits_a(faddModule_1_io_in_bits_a),
    .io_in_bits_b(faddModule_1_io_in_bits_b),
    .io_in_bits_a_inter_valid(faddModule_1_io_in_bits_a_inter_valid),
    .io_in_bits_b_inter_valid(faddModule_1_io_in_bits_b_inter_valid),
    .io_in_bits_a_inter_flags_isNaN(faddModule_1_io_in_bits_a_inter_flags_isNaN),
    .io_in_bits_a_inter_flags_isInf(faddModule_1_io_in_bits_a_inter_flags_isInf),
    .io_in_bits_b_inter_flags_isNaN(faddModule_1_io_in_bits_b_inter_flags_isNaN),
    .io_in_bits_b_inter_flags_isInf(faddModule_1_io_in_bits_b_inter_flags_isInf),
    .io_out_ready(faddModule_1_io_out_ready),
    .io_out_valid(faddModule_1_io_out_valid),
    .io_out_bits_result(faddModule_1_io_out_bits_result)
  );
  FADD faddModule_2 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
    .io_in_ready(faddModule_2_io_in_ready),
    .io_in_valid(faddModule_2_io_in_valid),
    .io_in_bits_a(faddModule_2_io_in_bits_a),
    .io_in_bits_b(faddModule_2_io_in_bits_b),
    .io_in_bits_a_inter_valid(faddModule_2_io_in_bits_a_inter_valid),
    .io_in_bits_b_inter_valid(faddModule_2_io_in_bits_b_inter_valid),
    .io_in_bits_a_inter_flags_isNaN(faddModule_2_io_in_bits_a_inter_flags_isNaN),
    .io_in_bits_a_inter_flags_isInf(faddModule_2_io_in_bits_a_inter_flags_isInf),
    .io_in_bits_b_inter_flags_isNaN(faddModule_2_io_in_bits_b_inter_flags_isNaN),
    .io_in_bits_b_inter_flags_isInf(faddModule_2_io_in_bits_b_inter_flags_isInf),
    .io_out_ready(faddModule_2_io_out_ready),
    .io_out_valid(faddModule_2_io_out_valid),
    .io_out_bits_result(faddModule_2_io_out_bits_result)
  );
  FADD faddModule_3 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 352:28]
    .io_in_ready(faddModule_3_io_in_ready),
    .io_in_valid(faddModule_3_io_in_valid),
    .io_in_bits_a(faddModule_3_io_in_bits_a),
    .io_in_bits_b(faddModule_3_io_in_bits_b),
    .io_in_bits_a_inter_valid(faddModule_3_io_in_bits_a_inter_valid),
    .io_in_bits_b_inter_valid(faddModule_3_io_in_bits_b_inter_valid),
    .io_in_bits_a_inter_flags_isNaN(faddModule_3_io_in_bits_a_inter_flags_isNaN),
    .io_in_bits_a_inter_flags_isInf(faddModule_3_io_in_bits_a_inter_flags_isInf),
    .io_in_bits_b_inter_flags_isNaN(faddModule_3_io_in_bits_b_inter_flags_isNaN),
    .io_in_bits_b_inter_flags_isInf(faddModule_3_io_in_bits_b_inter_flags_isInf),
    .io_out_ready(faddModule_3_io_out_ready),
    .io_out_valid(faddModule_3_io_out_valid),
    .io_out_bits_result(faddModule_3_io_out_bits_result)
  );
  FPDownConverter fcvt_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 220:22]
    .io_in_ready(fcvt_1_io_in_ready),
    .io_in_valid(fcvt_1_io_in_valid),
    .io_in_bits_in(fcvt_1_io_in_bits_in),
    .io_out_ready(fcvt_1_io_out_ready),
    .io_out_valid(fcvt_1_io_out_valid),
    .io_out_bits_result(fcvt_1_io_out_bits_result)
  );
  assign io_in_ready = fmulReady_0 & fmulReady_1 & fmulReady_2 & fmulReady_3 & fcvt_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 62:41]
  assign io_out_valid = fcvt_1_io_out_valid | mixPc_es & esValid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 159:32]
  assign io_out_bits_result = mixPc_es ? atResult_es : _io_out_bits_result_T_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 155:28]
  assign io_out_bits_mixPc = mixPc_es; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 157:21]
  assign io_out_bits_rowtag = rowtag_es; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 158:22]
  assign fmul_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 117:22]
  assign fmul_io_in_bits_a = io_in_bits_vec_a_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 120:23]
  assign fmul_io_in_bits_b = io_in_bits_vec_b_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 121:23]
  assign fmul_io_toFADD_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 51:134]
  assign fmul_1_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 117:22]
  assign fmul_1_io_in_bits_a = io_in_bits_vec_a_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 120:23]
  assign fmul_1_io_in_bits_b = io_in_bits_vec_b_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 121:23]
  assign fmul_1_io_toFADD_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 51:134]
  assign fmul_2_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 117:22]
  assign fmul_2_io_in_bits_a = io_in_bits_vec_a_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 120:23]
  assign fmul_2_io_in_bits_b = io_in_bits_vec_b_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 121:23]
  assign fmul_2_io_toFADD_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 51:134]
  assign fmul_3_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 117:22]
  assign fmul_3_io_in_bits_a = io_in_bits_vec_a_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 120:23]
  assign fmul_3_io_in_bits_b = io_in_bits_vec_b_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 121:23]
  assign fmul_3_io_toFADD_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 51:134]
  assign fcvt_io_in_bits_in = &io_in_bits_c[31:16] ? io_in_bits_c[15:0] : 16'h7e00; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 87:8]
  assign fcvt_io_out_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 57:124]
  assign faddModule_io_in_valid = valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 368:28]
  assign faddModule_io_in_bits_a = faddModule_io_in_bits_a_r; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 370:29]
  assign faddModule_io_in_bits_b = faddModule_io_in_bits_b_r; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 371:29]
  assign faddModule_io_in_bits_a_inter_valid = 1'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 373:41]
  assign faddModule_io_in_bits_b_inter_valid = 1'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 374:41]
  assign faddModule_io_in_bits_a_inter_flags_isNaN = a_flag_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 375:41]
  assign faddModule_io_in_bits_a_inter_flags_isInf = a_flag_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 375:41]
  assign faddModule_io_in_bits_b_inter_flags_isNaN = b_flag_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 376:41]
  assign faddModule_io_in_bits_b_inter_flags_isInf = b_flag_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 376:41]
  assign faddModule_io_out_ready = faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 117:23 72:28]
  assign faddModule_1_io_in_valid = valid_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 368:28]
  assign faddModule_1_io_in_bits_a = faddModule_io_in_bits_a_r_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 370:29]
  assign faddModule_1_io_in_bits_b = faddModule_io_in_bits_b_r_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 371:29]
  assign faddModule_1_io_in_bits_a_inter_valid = 1'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 373:41]
  assign faddModule_1_io_in_bits_b_inter_valid = 1'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 374:41]
  assign faddModule_1_io_in_bits_a_inter_flags_isNaN = a_flag_1_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 375:41]
  assign faddModule_1_io_in_bits_a_inter_flags_isInf = a_flag_1_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 375:41]
  assign faddModule_1_io_in_bits_b_inter_flags_isNaN = b_flag_1_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 376:41]
  assign faddModule_1_io_in_bits_b_inter_flags_isInf = b_flag_1_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 376:41]
  assign faddModule_1_io_out_ready = faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 117:23 72:28]
  assign faddModule_2_io_in_valid = valid_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 368:28]
  assign faddModule_2_io_in_bits_a = faddModule_io_in_bits_a_r_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 370:29]
  assign faddModule_2_io_in_bits_b = faddModule_io_in_bits_b_r_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 371:29]
  assign faddModule_2_io_in_bits_a_inter_valid = 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 373:41]
  assign faddModule_2_io_in_bits_b_inter_valid = 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 374:41]
  assign faddModule_2_io_in_bits_a_inter_flags_isNaN = 1'h0;
  assign faddModule_2_io_in_bits_a_inter_flags_isInf = 1'h0;
  assign faddModule_2_io_in_bits_b_inter_flags_isNaN = 1'h0;
  assign faddModule_2_io_in_bits_b_inter_flags_isInf = 1'h0;
  assign faddModule_2_io_out_ready = faddModule_3_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 109:27 128:22]
  assign faddModule_3_io_in_valid = valid_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 368:28]
  assign faddModule_3_io_in_bits_a = faddModule_io_in_bits_a_r_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 370:29]
  assign faddModule_3_io_in_bits_b = faddModule_io_in_bits_b_r_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 371:29]
  assign faddModule_3_io_in_bits_a_inter_valid = 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 373:41]
  assign faddModule_3_io_in_bits_b_inter_valid = 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 374:41]
  assign faddModule_3_io_in_bits_a_inter_flags_isNaN = 1'h0;
  assign faddModule_3_io_in_bits_a_inter_flags_isInf = 1'h0;
  assign faddModule_3_io_in_bits_b_inter_flags_isNaN = 1'h0;
  assign faddModule_3_io_in_bits_b_inter_flags_isInf = 1'h0;
  assign faddModule_3_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 377:29]
  assign fcvt_1_io_in_valid = valid_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 231:22]
  assign fcvt_1_io_in_bits_in = fcvt_io_in_bits_in_r; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 232:24]
  assign fcvt_1_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 234:23]
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
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 365:55]
      a_flag_isNaN <= fmulResult_0_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 365:55]
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 365:55]
      a_flag_isInf <= fmulResult_0_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 365:55]
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 366:55]
      b_flag_isNaN <= fmulResult_1_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 366:55]
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 366:55]
      b_flag_isInf <= fmulResult_1_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 366:55]
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 370:41]
      faddModule_io_in_bits_a_r <= fmulResult_0_fp_prod; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 370:41]
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 371:41]
      faddModule_io_in_bits_b_r <= fmulResult_1_fp_prod; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 371:41]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 355:24]
      valid_1 <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 355:24]
    end else begin
      valid_1 <= _GEN_16;
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 365:55]
      a_flag_1_isNaN <= fmulResult_2_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 365:55]
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 365:55]
      a_flag_1_isInf <= fmulResult_2_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 365:55]
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 366:55]
      b_flag_1_isNaN <= fmulResult_3_inter_flags_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 366:55]
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 366:55]
      b_flag_1_isInf <= fmulResult_3_inter_flags_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 366:55]
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 370:41]
      faddModule_io_in_bits_a_r_1 <= fmulResult_2_fp_prod; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 370:41]
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 371:41]
      faddModule_io_in_bits_b_r_1 <= fmulResult_3_fp_prod; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 371:41]
    end
    if (s1_handshaked_s2) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 90:45]
      if (io_in_bits_mixPc) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 58:19]
        firstAddResult_2_r <= io_in_bits_c;
      end else begin
        firstAddResult_2_r <= fcvt_io_out_bits_result;
      end
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
    if (prehandshaked_3) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 370:41]
      faddModule_io_in_bits_a_r_2 <= firstAddResult_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 370:41]
    end
    if (prehandshaked_3) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 371:41]
      faddModule_io_in_bits_b_r_2 <= firstAddResult_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 371:41]
    end
    if (prehandshaked_2) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 119:36]
      addResult_1_r <= firstAddResult_2_r; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 119:36]
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
    if (prehandshaked_4) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 370:41]
      faddModule_io_in_bits_a_r_3 <= addResult_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 370:41]
    end
    if (prehandshaked_4) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 371:41]
      faddModule_io_in_bits_b_r_3 <= addResult_1_r; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 371:41]
    end
    if (_T_15) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 141:27]
      mixPc_es <= mixPc_sx; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 141:27]
    end
    if (_T_15) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 142:28]
      rowtag_es <= rowtag_sx; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 142:28]
    end
    if (_T_15) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 143:30]
      atResult_es <= faddModule_3_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 143:30]
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
    if (prehandshaked_5) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 232:36]
      fcvt_io_in_bits_in_r <= faddModule_3_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 232:36]
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
  a_flag_isNaN = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  a_flag_isInf = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  b_flag_isNaN = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  b_flag_isInf = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  faddModule_io_in_bits_a_r = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  faddModule_io_in_bits_b_r = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  valid_1 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  a_flag_1_isNaN = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  a_flag_1_isInf = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  b_flag_1_isNaN = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  b_flag_1_isInf = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  faddModule_io_in_bits_a_r_1 = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  faddModule_io_in_bits_b_r_1 = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  firstAddResult_2_r = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  mixPc_this = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  rowtag_this = _RAND_18[1:0];
  _RAND_19 = {1{`RANDOM}};
  valid_2 = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  faddModule_io_in_bits_a_r_2 = _RAND_20[31:0];
  _RAND_21 = {1{`RANDOM}};
  faddModule_io_in_bits_b_r_2 = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  addResult_1_r = _RAND_22[31:0];
  _RAND_23 = {1{`RANDOM}};
  mixPc_sx = _RAND_23[0:0];
  _RAND_24 = {1{`RANDOM}};
  rowtag_sx = _RAND_24[1:0];
  _RAND_25 = {1{`RANDOM}};
  valid_3 = _RAND_25[0:0];
  _RAND_26 = {1{`RANDOM}};
  faddModule_io_in_bits_a_r_3 = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  faddModule_io_in_bits_b_r_3 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  mixPc_es = _RAND_28[0:0];
  _RAND_29 = {1{`RANDOM}};
  rowtag_es = _RAND_29[1:0];
  _RAND_30 = {1{`RANDOM}};
  atResult_es = _RAND_30[31:0];
  _RAND_31 = {1{`RANDOM}};
  esValid = _RAND_31[0:0];
  _RAND_32 = {1{`RANDOM}};
  valid_4 = _RAND_32[0:0];
  _RAND_33 = {1{`RANDOM}};
  fcvt_io_in_bits_in_r = _RAND_33[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Threadgroup(
  input          clock,
  input          reset,
  output         io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 20:14]
  input          io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 20:14]
  input  [255:0] io_in_bits_matrix_a_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 20:14]
  input  [255:0] io_in_bits_matrix_b_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 20:14]
  input  [255:0] io_in_bits_matrix_c_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 20:14]
  input          io_in_bits_mixPcMode, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 20:14]
  input          io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 20:14]
  output         io_out_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 20:14]
  output [255:0] io_out_bits_matrix_d_data // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 20:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  wire  dp_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_io_in_bits_vec_a_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_io_in_bits_vec_a_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_io_in_bits_vec_a_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_io_in_bits_vec_a_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_io_in_bits_vec_b_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_io_in_bits_vec_b_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_io_in_bits_vec_b_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_io_in_bits_vec_b_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [31:0] dp_io_in_bits_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_io_in_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [1:0] dp_io_in_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [31:0] dp_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_io_out_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [1:0] dp_io_out_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_1_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_1_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_1_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_1_io_in_bits_vec_a_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_1_io_in_bits_vec_a_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_1_io_in_bits_vec_a_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_1_io_in_bits_vec_a_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_1_io_in_bits_vec_b_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_1_io_in_bits_vec_b_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_1_io_in_bits_vec_b_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_1_io_in_bits_vec_b_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [31:0] dp_1_io_in_bits_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_1_io_in_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [1:0] dp_1_io_in_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_1_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [31:0] dp_1_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_1_io_out_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [1:0] dp_1_io_out_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_2_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_2_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_2_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_2_io_in_bits_vec_a_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_2_io_in_bits_vec_a_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_2_io_in_bits_vec_a_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_2_io_in_bits_vec_a_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_2_io_in_bits_vec_b_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_2_io_in_bits_vec_b_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_2_io_in_bits_vec_b_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_2_io_in_bits_vec_b_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [31:0] dp_2_io_in_bits_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_2_io_in_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [1:0] dp_2_io_in_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_2_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_2_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [31:0] dp_2_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_2_io_out_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [1:0] dp_2_io_out_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_3_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_3_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_3_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_3_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_3_io_in_bits_vec_a_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_3_io_in_bits_vec_a_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_3_io_in_bits_vec_a_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_3_io_in_bits_vec_a_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_3_io_in_bits_vec_b_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_3_io_in_bits_vec_b_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_3_io_in_bits_vec_b_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [15:0] dp_3_io_in_bits_vec_b_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [31:0] dp_3_io_in_bits_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_3_io_in_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [1:0] dp_3_io_in_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_3_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_3_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [31:0] dp_3_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  dp_3_io_out_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire [1:0] dp_3_io_out_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
  wire  prehandshaked = io_in_valid & io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 25:35]
  reg [63:0] matrix_d_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 32:21]
  reg [63:0] matrix_d_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 32:21]
  reg [63:0] matrix_d_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 32:21]
  reg [63:0] matrix_d_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 32:21]
  reg  outValid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 38:25]
  wire  _T = io_out_ready & io_out_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 52:35]
  wire  _GEN_0 = _T ? 1'h0 : outValid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 39:21 40:14 38:25]
  reg [2:0] state; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 44:22]
  reg  dp_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 45:28]
  wire [2:0] _GEN_4 = io_in_valid ? 3'h1 : 3'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 65:33 66:17 68:17]
  wire  _GEN_5 = io_in_valid & dp_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 45:28 65:33 69:23]
  wire [2:0] _GEN_6 = ~io_in_bits_mixPcMode ? 3'h3 : _GEN_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 63:22 64:17]
  wire  _GEN_7 = ~io_in_bits_mixPcMode ? dp_in_valid : _GEN_5; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 63:22 45:28]
  wire [2:0] _GEN_8 = io_out_ready ? _GEN_6 : state; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 44:22 62:26]
  wire  _GEN_9 = io_out_ready ? _GEN_7 : dp_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 62:26 45:28]
  wire [2:0] _GEN_10 = io_out_ready ? 3'h4 : state; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 74:26 75:15 44:22]
  wire [2:0] _GEN_11 = io_out_ready ? _GEN_4 : state; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 44:22 79:26]
  wire  _GEN_12 = io_out_ready ? _GEN_5 : dp_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 79:26 45:28]
  wire [2:0] _GEN_13 = 3'h4 == state ? _GEN_11 : state; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17 44:22]
  wire  _GEN_14 = 3'h4 == state ? _GEN_12 : dp_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17 45:28]
  wire [2:0] _GEN_15 = 3'h3 == state ? _GEN_10 : _GEN_13; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17]
  wire  _GEN_16 = 3'h3 == state ? dp_in_valid : _GEN_14; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17 45:28]
  wire  _dpIn_va_T = state == 3'h2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 93:16]
  wire [15:0] dpIn_va_vec__0 = io_in_bits_matrix_a_data[191:176]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_va_vec__1 = io_in_bits_matrix_a_data[175:160]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_va_vec__2 = io_in_bits_matrix_a_data[159:144]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_va_vec__3 = io_in_bits_matrix_a_data[143:128]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire  _dpIn_va_T_1 = state == 3'h3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 94:16]
  wire [15:0] dpIn_va_vec_1_0 = io_in_bits_matrix_a_data[127:112]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_va_vec_1_1 = io_in_bits_matrix_a_data[111:96]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_va_vec_1_2 = io_in_bits_matrix_a_data[95:80]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_va_vec_1_3 = io_in_bits_matrix_a_data[79:64]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire  _dpIn_va_T_2 = state == 3'h4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 95:16]
  wire [15:0] dpIn_va_vec_2_0 = io_in_bits_matrix_a_data[63:48]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_va_vec_2_1 = io_in_bits_matrix_a_data[47:32]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_va_vec_2_2 = io_in_bits_matrix_a_data[31:16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_va_vec_2_3 = io_in_bits_matrix_a_data[15:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire  _dpIn_va_T_3 = state == 3'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 96:16]
  wire [15:0] dpIn_va_vec_3_0 = io_in_bits_matrix_a_data[255:240]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_va_vec_3_1 = io_in_bits_matrix_a_data[239:224]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_va_vec_3_2 = io_in_bits_matrix_a_data[223:208]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_va_vec_3_3 = io_in_bits_matrix_a_data[207:192]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] _dpIn_va_T_4 = _dpIn_va_T ? dpIn_va_vec__0 : 16'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_5 = _dpIn_va_T_1 ? dpIn_va_vec_1_0 : 16'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_6 = _dpIn_va_T_2 ? dpIn_va_vec_2_0 : 16'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_7 = _dpIn_va_T_3 ? dpIn_va_vec_3_0 : 16'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_8 = _dpIn_va_T_4 | _dpIn_va_T_5; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_9 = _dpIn_va_T_8 | _dpIn_va_T_6; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_11 = _dpIn_va_T ? dpIn_va_vec__1 : 16'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_12 = _dpIn_va_T_1 ? dpIn_va_vec_1_1 : 16'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_13 = _dpIn_va_T_2 ? dpIn_va_vec_2_1 : 16'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_14 = _dpIn_va_T_3 ? dpIn_va_vec_3_1 : 16'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_15 = _dpIn_va_T_11 | _dpIn_va_T_12; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_16 = _dpIn_va_T_15 | _dpIn_va_T_13; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_18 = _dpIn_va_T ? dpIn_va_vec__2 : 16'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_19 = _dpIn_va_T_1 ? dpIn_va_vec_1_2 : 16'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_20 = _dpIn_va_T_2 ? dpIn_va_vec_2_2 : 16'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_21 = _dpIn_va_T_3 ? dpIn_va_vec_3_2 : 16'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_22 = _dpIn_va_T_18 | _dpIn_va_T_19; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_23 = _dpIn_va_T_22 | _dpIn_va_T_20; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_25 = _dpIn_va_T ? dpIn_va_vec__3 : 16'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_26 = _dpIn_va_T_1 ? dpIn_va_vec_1_3 : 16'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_27 = _dpIn_va_T_2 ? dpIn_va_vec_2_3 : 16'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_28 = _dpIn_va_T_3 ? dpIn_va_vec_3_3 : 16'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_29 = _dpIn_va_T_25 | _dpIn_va_T_26; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [15:0] _dpIn_va_T_30 = _dpIn_va_T_29 | _dpIn_va_T_27; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] dpIn_c_vec__0 = io_in_bits_matrix_c_data[127:96]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [31:0] dpIn_c_vec__1 = io_in_bits_matrix_c_data[95:64]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [31:0] dpIn_c_vec__2 = io_in_bits_matrix_c_data[63:32]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [31:0] dpIn_c_vec__3 = io_in_bits_matrix_c_data[31:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_c_vec_1_0 = io_in_bits_matrix_c_data[191:176]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_c_vec_1_1 = io_in_bits_matrix_c_data[175:160]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_c_vec_1_2 = io_in_bits_matrix_c_data[159:144]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_c_vec_1_3 = io_in_bits_matrix_c_data[143:128]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [31:0] dpIn_c_res_boxed__0 = {16'hffff,dpIn_c_vec_1_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 99:26]
  wire [31:0] dpIn_c_res_boxed__1 = {16'hffff,dpIn_c_vec_1_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 99:26]
  wire [31:0] dpIn_c_res_boxed__2 = {16'hffff,dpIn_c_vec_1_2}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 99:26]
  wire [31:0] dpIn_c_res_boxed__3 = {16'hffff,dpIn_c_vec_1_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 99:26]
  wire [31:0] _dpIn_c_T_1_0 = io_in_bits_mixPcMode ? dpIn_c_vec__0 : dpIn_c_res_boxed__0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 102:30]
  wire [31:0] _dpIn_c_T_1_1 = io_in_bits_mixPcMode ? dpIn_c_vec__1 : dpIn_c_res_boxed__1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 102:30]
  wire [31:0] _dpIn_c_T_1_2 = io_in_bits_mixPcMode ? dpIn_c_vec__2 : dpIn_c_res_boxed__2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 102:30]
  wire [31:0] _dpIn_c_T_1_3 = io_in_bits_mixPcMode ? dpIn_c_vec__3 : dpIn_c_res_boxed__3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 102:30]
  wire [15:0] dpIn_c_vec_2_0 = io_in_bits_matrix_c_data[127:112]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_c_vec_2_1 = io_in_bits_matrix_c_data[111:96]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_c_vec_2_2 = io_in_bits_matrix_c_data[95:80]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_c_vec_2_3 = io_in_bits_matrix_c_data[79:64]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [31:0] dpIn_c_res_boxed_1_0 = {16'hffff,dpIn_c_vec_2_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 99:26]
  wire [31:0] dpIn_c_res_boxed_1_1 = {16'hffff,dpIn_c_vec_2_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 99:26]
  wire [31:0] dpIn_c_res_boxed_1_2 = {16'hffff,dpIn_c_vec_2_2}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 99:26]
  wire [31:0] dpIn_c_res_boxed_1_3 = {16'hffff,dpIn_c_vec_2_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 99:26]
  wire [15:0] dpIn_c_vec_3_0 = io_in_bits_matrix_c_data[63:48]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_c_vec_3_1 = io_in_bits_matrix_c_data[47:32]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_c_vec_3_2 = io_in_bits_matrix_c_data[31:16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_c_vec_3_3 = io_in_bits_matrix_c_data[15:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [31:0] dpIn_c_res_boxed_2_0 = {16'hffff,dpIn_c_vec_3_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 99:26]
  wire [31:0] dpIn_c_res_boxed_2_1 = {16'hffff,dpIn_c_vec_3_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 99:26]
  wire [31:0] dpIn_c_res_boxed_2_2 = {16'hffff,dpIn_c_vec_3_2}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 99:26]
  wire [31:0] dpIn_c_res_boxed_2_3 = {16'hffff,dpIn_c_vec_3_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 99:26]
  wire [31:0] dpIn_c_vec_4_0 = io_in_bits_matrix_c_data[255:224]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [31:0] dpIn_c_vec_4_1 = io_in_bits_matrix_c_data[223:192]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [31:0] dpIn_c_vec_4_2 = io_in_bits_matrix_c_data[191:160]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [31:0] dpIn_c_vec_4_3 = io_in_bits_matrix_c_data[159:128]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_c_vec_5_0 = io_in_bits_matrix_c_data[255:240]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_c_vec_5_1 = io_in_bits_matrix_c_data[239:224]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_c_vec_5_2 = io_in_bits_matrix_c_data[223:208]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [15:0] dpIn_c_vec_5_3 = io_in_bits_matrix_c_data[207:192]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  wire [31:0] dpIn_c_res_boxed_3_0 = {16'hffff,dpIn_c_vec_5_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 99:26]
  wire [31:0] dpIn_c_res_boxed_3_1 = {16'hffff,dpIn_c_vec_5_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 99:26]
  wire [31:0] dpIn_c_res_boxed_3_2 = {16'hffff,dpIn_c_vec_5_2}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 99:26]
  wire [31:0] dpIn_c_res_boxed_3_3 = {16'hffff,dpIn_c_vec_5_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 99:26]
  wire [31:0] _dpIn_c_T_5_0 = io_in_bits_mixPcMode ? dpIn_c_vec_4_0 : dpIn_c_res_boxed_3_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 105:30]
  wire [31:0] _dpIn_c_T_5_1 = io_in_bits_mixPcMode ? dpIn_c_vec_4_1 : dpIn_c_res_boxed_3_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 105:30]
  wire [31:0] _dpIn_c_T_5_2 = io_in_bits_mixPcMode ? dpIn_c_vec_4_2 : dpIn_c_res_boxed_3_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 105:30]
  wire [31:0] _dpIn_c_T_5_3 = io_in_bits_mixPcMode ? dpIn_c_vec_4_3 : dpIn_c_res_boxed_3_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 105:30]
  wire [31:0] _dpIn_c_T_6 = _dpIn_va_T ? _dpIn_c_T_1_0 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_7 = _dpIn_va_T_1 ? dpIn_c_res_boxed_1_0 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_8 = _dpIn_va_T_2 ? dpIn_c_res_boxed_2_0 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_9 = _dpIn_va_T_3 ? _dpIn_c_T_5_0 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_10 = _dpIn_c_T_6 | _dpIn_c_T_7; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_11 = _dpIn_c_T_10 | _dpIn_c_T_8; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_13 = _dpIn_va_T ? _dpIn_c_T_1_1 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_14 = _dpIn_va_T_1 ? dpIn_c_res_boxed_1_1 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_15 = _dpIn_va_T_2 ? dpIn_c_res_boxed_2_1 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_16 = _dpIn_va_T_3 ? _dpIn_c_T_5_1 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_17 = _dpIn_c_T_13 | _dpIn_c_T_14; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_18 = _dpIn_c_T_17 | _dpIn_c_T_15; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_20 = _dpIn_va_T ? _dpIn_c_T_1_2 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_21 = _dpIn_va_T_1 ? dpIn_c_res_boxed_1_2 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_22 = _dpIn_va_T_2 ? dpIn_c_res_boxed_2_2 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_23 = _dpIn_va_T_3 ? _dpIn_c_T_5_2 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_24 = _dpIn_c_T_20 | _dpIn_c_T_21; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_25 = _dpIn_c_T_24 | _dpIn_c_T_22; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_27 = _dpIn_va_T ? _dpIn_c_T_1_3 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_28 = _dpIn_va_T_1 ? dpIn_c_res_boxed_1_3 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_29 = _dpIn_va_T_2 ? dpIn_c_res_boxed_2_3 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_30 = _dpIn_va_T_3 ? _dpIn_c_T_5_3 : 32'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_31 = _dpIn_c_T_27 | _dpIn_c_T_28; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] _dpIn_c_T_32 = _dpIn_c_T_31 | _dpIn_c_T_29; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _rowtag_in_T_5 = _dpIn_va_T_1 ? 2'h2 : 2'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _rowtag_in_T_6 = _dpIn_va_T_2 ? 2'h3 : 2'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _GEN_48 = {{1'd0}, _dpIn_va_T}; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [1:0] _rowtag_in_T_8 = _GEN_48 | _rowtag_in_T_5; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [31:0] dpResult_0 = dp_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 120:17 31:22]
  wire [31:0] dpResult_1 = dp_1_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 120:17 31:22]
  wire [31:0] dpResult_2 = dp_2_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 120:17 31:22]
  wire [31:0] dpResult_3 = dp_3_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 120:17 31:22]
  wire [63:0] result_fp16 = {dpResult_0[15:0],dpResult_1[15:0],dpResult_2[15:0],dpResult_3[15:0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 128:24]
  wire [63:0] result_fp32_hi = {dpResult_0,dpResult_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 129:27]
  wire [63:0] result_fp32_lo = {dpResult_2,dpResult_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 130:27]
  wire  dpValid_0 = dp_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 122:16 34:21]
  wire  dpValid_1 = dp_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 122:16 34:21]
  wire  dpValid_2 = dp_2_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 122:16 34:21]
  wire  dpValid_3 = dp_3_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 122:16 34:21]
  wire [1:0] rowtag_out = dp_3_io_out_bits_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 124:16 36:24]
  wire  outMixPc = dp_3_io_out_bits_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 125:14 37:22]
  wire  _GEN_27 = outMixPc | _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 143:24 146:20]
  wire [63:0] _GEN_29 = 2'h3 == rowtag_out ? result_fp16 : matrix_d_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 133:24 155:21 32:21]
  wire  _GEN_30 = 2'h3 == rowtag_out | _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 133:24 156:18]
  wire  _GEN_33 = 2'h2 == rowtag_out ? _GEN_0 : _GEN_30; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 133:24]
  wire [127:0] io_out_bits_matrix_d_data_lo = {matrix_d_2,matrix_d_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 161:35]
  wire [127:0] io_out_bits_matrix_d_data_hi = {matrix_d_0,matrix_d_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 161:35]
  wire  dpReady_0 = dp_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 123:16 35:21]
  wire  dpReady_1 = dp_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 123:16 35:21]
  wire  dpReady_2 = dp_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 123:16 35:21]
  wire  dpReady_3 = dp_3_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 123:16 35:21]
  DotProdUnit dp ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
    .clock(dp_clock),
    .reset(dp_reset),
    .io_in_ready(dp_io_in_ready),
    .io_in_valid(dp_io_in_valid),
    .io_in_bits_vec_a_0(dp_io_in_bits_vec_a_0),
    .io_in_bits_vec_a_1(dp_io_in_bits_vec_a_1),
    .io_in_bits_vec_a_2(dp_io_in_bits_vec_a_2),
    .io_in_bits_vec_a_3(dp_io_in_bits_vec_a_3),
    .io_in_bits_vec_b_0(dp_io_in_bits_vec_b_0),
    .io_in_bits_vec_b_1(dp_io_in_bits_vec_b_1),
    .io_in_bits_vec_b_2(dp_io_in_bits_vec_b_2),
    .io_in_bits_vec_b_3(dp_io_in_bits_vec_b_3),
    .io_in_bits_c(dp_io_in_bits_c),
    .io_in_bits_mixPc(dp_io_in_bits_mixPc),
    .io_in_bits_rowtag(dp_io_in_bits_rowtag),
    .io_out_ready(dp_io_out_ready),
    .io_out_valid(dp_io_out_valid),
    .io_out_bits_result(dp_io_out_bits_result),
    .io_out_bits_mixPc(dp_io_out_bits_mixPc),
    .io_out_bits_rowtag(dp_io_out_bits_rowtag)
  );
  DotProdUnit dp_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
    .clock(dp_1_clock),
    .reset(dp_1_reset),
    .io_in_ready(dp_1_io_in_ready),
    .io_in_valid(dp_1_io_in_valid),
    .io_in_bits_vec_a_0(dp_1_io_in_bits_vec_a_0),
    .io_in_bits_vec_a_1(dp_1_io_in_bits_vec_a_1),
    .io_in_bits_vec_a_2(dp_1_io_in_bits_vec_a_2),
    .io_in_bits_vec_a_3(dp_1_io_in_bits_vec_a_3),
    .io_in_bits_vec_b_0(dp_1_io_in_bits_vec_b_0),
    .io_in_bits_vec_b_1(dp_1_io_in_bits_vec_b_1),
    .io_in_bits_vec_b_2(dp_1_io_in_bits_vec_b_2),
    .io_in_bits_vec_b_3(dp_1_io_in_bits_vec_b_3),
    .io_in_bits_c(dp_1_io_in_bits_c),
    .io_in_bits_mixPc(dp_1_io_in_bits_mixPc),
    .io_in_bits_rowtag(dp_1_io_in_bits_rowtag),
    .io_out_ready(dp_1_io_out_ready),
    .io_out_valid(dp_1_io_out_valid),
    .io_out_bits_result(dp_1_io_out_bits_result),
    .io_out_bits_mixPc(dp_1_io_out_bits_mixPc),
    .io_out_bits_rowtag(dp_1_io_out_bits_rowtag)
  );
  DotProdUnit dp_2 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
    .clock(dp_2_clock),
    .reset(dp_2_reset),
    .io_in_ready(dp_2_io_in_ready),
    .io_in_valid(dp_2_io_in_valid),
    .io_in_bits_vec_a_0(dp_2_io_in_bits_vec_a_0),
    .io_in_bits_vec_a_1(dp_2_io_in_bits_vec_a_1),
    .io_in_bits_vec_a_2(dp_2_io_in_bits_vec_a_2),
    .io_in_bits_vec_a_3(dp_2_io_in_bits_vec_a_3),
    .io_in_bits_vec_b_0(dp_2_io_in_bits_vec_b_0),
    .io_in_bits_vec_b_1(dp_2_io_in_bits_vec_b_1),
    .io_in_bits_vec_b_2(dp_2_io_in_bits_vec_b_2),
    .io_in_bits_vec_b_3(dp_2_io_in_bits_vec_b_3),
    .io_in_bits_c(dp_2_io_in_bits_c),
    .io_in_bits_mixPc(dp_2_io_in_bits_mixPc),
    .io_in_bits_rowtag(dp_2_io_in_bits_rowtag),
    .io_out_ready(dp_2_io_out_ready),
    .io_out_valid(dp_2_io_out_valid),
    .io_out_bits_result(dp_2_io_out_bits_result),
    .io_out_bits_mixPc(dp_2_io_out_bits_mixPc),
    .io_out_bits_rowtag(dp_2_io_out_bits_rowtag)
  );
  DotProdUnit dp_3 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 167:20]
    .clock(dp_3_clock),
    .reset(dp_3_reset),
    .io_in_ready(dp_3_io_in_ready),
    .io_in_valid(dp_3_io_in_valid),
    .io_in_bits_vec_a_0(dp_3_io_in_bits_vec_a_0),
    .io_in_bits_vec_a_1(dp_3_io_in_bits_vec_a_1),
    .io_in_bits_vec_a_2(dp_3_io_in_bits_vec_a_2),
    .io_in_bits_vec_a_3(dp_3_io_in_bits_vec_a_3),
    .io_in_bits_vec_b_0(dp_3_io_in_bits_vec_b_0),
    .io_in_bits_vec_b_1(dp_3_io_in_bits_vec_b_1),
    .io_in_bits_vec_b_2(dp_3_io_in_bits_vec_b_2),
    .io_in_bits_vec_b_3(dp_3_io_in_bits_vec_b_3),
    .io_in_bits_c(dp_3_io_in_bits_c),
    .io_in_bits_mixPc(dp_3_io_in_bits_mixPc),
    .io_in_bits_rowtag(dp_3_io_in_bits_rowtag),
    .io_out_ready(dp_3_io_out_ready),
    .io_out_valid(dp_3_io_out_valid),
    .io_out_bits_result(dp_3_io_out_bits_result),
    .io_out_bits_mixPc(dp_3_io_out_bits_mixPc),
    .io_out_bits_rowtag(dp_3_io_out_bits_rowtag)
  );
  assign io_in_ready = dpReady_0 & dpReady_1 & dpReady_2 & dpReady_3 & (state == 3'h0 | _dpIn_va_T &
    io_in_bits_mixPcMode | _dpIn_va_T_2); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 164:41]
  assign io_out_valid = outValid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 163:16]
  assign io_out_bits_matrix_d_data = {io_out_bits_matrix_d_data_hi,io_out_bits_matrix_d_data_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 161:35]
  assign dp_clock = clock;
  assign dp_reset = reset;
  assign dp_io_in_valid = dp_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 178:20]
  assign dp_io_in_bits_vec_a_0 = _dpIn_va_T_9 | _dpIn_va_T_7; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_io_in_bits_vec_a_1 = _dpIn_va_T_16 | _dpIn_va_T_14; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_io_in_bits_vec_a_2 = _dpIn_va_T_23 | _dpIn_va_T_21; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_io_in_bits_vec_a_3 = _dpIn_va_T_30 | _dpIn_va_T_28; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_io_in_bits_vec_b_0 = io_in_bits_matrix_b_data[255:240]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  assign dp_io_in_bits_vec_b_1 = io_in_bits_matrix_b_data[239:224]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  assign dp_io_in_bits_vec_b_2 = io_in_bits_matrix_b_data[223:208]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  assign dp_io_in_bits_vec_b_3 = io_in_bits_matrix_b_data[207:192]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  assign dp_io_in_bits_c = _dpIn_c_T_11 | _dpIn_c_T_9; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_io_in_bits_mixPc = io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 182:25]
  assign dp_io_in_bits_rowtag = _rowtag_in_T_8 | _rowtag_in_T_6; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 185:21]
  assign dp_1_clock = clock;
  assign dp_1_reset = reset;
  assign dp_1_io_in_valid = dp_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 178:20]
  assign dp_1_io_in_bits_vec_a_0 = _dpIn_va_T_9 | _dpIn_va_T_7; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_1_io_in_bits_vec_a_1 = _dpIn_va_T_16 | _dpIn_va_T_14; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_1_io_in_bits_vec_a_2 = _dpIn_va_T_23 | _dpIn_va_T_21; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_1_io_in_bits_vec_a_3 = _dpIn_va_T_30 | _dpIn_va_T_28; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_1_io_in_bits_vec_b_0 = io_in_bits_matrix_b_data[191:176]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  assign dp_1_io_in_bits_vec_b_1 = io_in_bits_matrix_b_data[175:160]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  assign dp_1_io_in_bits_vec_b_2 = io_in_bits_matrix_b_data[159:144]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  assign dp_1_io_in_bits_vec_b_3 = io_in_bits_matrix_b_data[143:128]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  assign dp_1_io_in_bits_c = _dpIn_c_T_18 | _dpIn_c_T_16; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_1_io_in_bits_mixPc = io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 182:25]
  assign dp_1_io_in_bits_rowtag = _rowtag_in_T_8 | _rowtag_in_T_6; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_1_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 185:21]
  assign dp_2_clock = clock;
  assign dp_2_reset = reset;
  assign dp_2_io_in_valid = dp_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 178:20]
  assign dp_2_io_in_bits_vec_a_0 = _dpIn_va_T_9 | _dpIn_va_T_7; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_2_io_in_bits_vec_a_1 = _dpIn_va_T_16 | _dpIn_va_T_14; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_2_io_in_bits_vec_a_2 = _dpIn_va_T_23 | _dpIn_va_T_21; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_2_io_in_bits_vec_a_3 = _dpIn_va_T_30 | _dpIn_va_T_28; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_2_io_in_bits_vec_b_0 = io_in_bits_matrix_b_data[127:112]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  assign dp_2_io_in_bits_vec_b_1 = io_in_bits_matrix_b_data[111:96]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  assign dp_2_io_in_bits_vec_b_2 = io_in_bits_matrix_b_data[95:80]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  assign dp_2_io_in_bits_vec_b_3 = io_in_bits_matrix_b_data[79:64]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  assign dp_2_io_in_bits_c = _dpIn_c_T_25 | _dpIn_c_T_23; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_2_io_in_bits_mixPc = io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 182:25]
  assign dp_2_io_in_bits_rowtag = _rowtag_in_T_8 | _rowtag_in_T_6; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_2_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 185:21]
  assign dp_3_clock = clock;
  assign dp_3_reset = reset;
  assign dp_3_io_in_valid = dp_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 178:20]
  assign dp_3_io_in_bits_vec_a_0 = _dpIn_va_T_9 | _dpIn_va_T_7; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_3_io_in_bits_vec_a_1 = _dpIn_va_T_16 | _dpIn_va_T_14; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_3_io_in_bits_vec_a_2 = _dpIn_va_T_23 | _dpIn_va_T_21; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_3_io_in_bits_vec_a_3 = _dpIn_va_T_30 | _dpIn_va_T_28; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_3_io_in_bits_vec_b_0 = io_in_bits_matrix_b_data[63:48]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  assign dp_3_io_in_bits_vec_b_1 = io_in_bits_matrix_b_data[47:32]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  assign dp_3_io_in_bits_vec_b_2 = io_in_bits_matrix_b_data[31:16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  assign dp_3_io_in_bits_vec_b_3 = io_in_bits_matrix_b_data[15:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 44:28]
  assign dp_3_io_in_bits_c = _dpIn_c_T_32 | _dpIn_c_T_30; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_3_io_in_bits_mixPc = io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 182:25]
  assign dp_3_io_in_bits_rowtag = _rowtag_in_T_8 | _rowtag_in_T_6; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  assign dp_3_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 185:21]
  always @(posedge clock) begin
    if (dpValid_0 & dpValid_1 & dpValid_2 & dpValid_3) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 132:31]
      if (2'h0 == rowtag_out) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 133:24]
        if (outMixPc) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 135:24]
          matrix_d_0 <= result_fp32_hi; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 136:23]
        end else begin
          matrix_d_0 <= result_fp16; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 139:23]
        end
      end
    end
    if (dpValid_0 & dpValid_1 & dpValid_2 & dpValid_3) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 132:31]
      if (2'h0 == rowtag_out) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 133:24]
        if (outMixPc) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 135:24]
          matrix_d_1 <= result_fp32_lo; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 137:23]
        end
      end else if (2'h1 == rowtag_out) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 133:24]
        if (!(outMixPc)) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 143:24]
          matrix_d_1 <= result_fp16; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 148:23]
        end
      end
    end
    if (dpValid_0 & dpValid_1 & dpValid_2 & dpValid_3) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 132:31]
      if (!(2'h0 == rowtag_out)) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 133:24]
        if (2'h1 == rowtag_out) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 133:24]
          if (outMixPc) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 143:24]
            matrix_d_2 <= result_fp32_hi; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 144:23]
          end
        end else if (2'h2 == rowtag_out) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 133:24]
          matrix_d_2 <= result_fp16; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 152:21]
        end
      end
    end
    if (dpValid_0 & dpValid_1 & dpValid_2 & dpValid_3) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 132:31]
      if (!(2'h0 == rowtag_out)) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 133:24]
        if (2'h1 == rowtag_out) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 133:24]
          if (outMixPc) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 143:24]
            matrix_d_3 <= result_fp32_lo; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 145:23]
          end
        end else if (!(2'h2 == rowtag_out)) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 133:24]
          matrix_d_3 <= _GEN_29;
        end
      end
    end
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
      if (io_out_ready) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 57:26]
        state <= 3'h2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 58:15]
      end
    end else if (3'h2 == state) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17]
      state <= _GEN_8;
    end else begin
      state <= _GEN_15;
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 45:28]
      dp_in_valid <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 45:28]
    end else if (3'h0 == state) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17]
      dp_in_valid <= prehandshaked;
    end else if (!(3'h1 == state)) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17]
      if (3'h2 == state) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 47:17]
        dp_in_valid <= _GEN_9;
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
  _RAND_0 = {2{`RANDOM}};
  matrix_d_0 = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  matrix_d_1 = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  matrix_d_2 = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  matrix_d_3 = _RAND_3[63:0];
  _RAND_4 = {1{`RANDOM}};
  outValid = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  state = _RAND_5[2:0];
  _RAND_6 = {1{`RANDOM}};
  dp_in_valid = _RAND_6[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Octet(
  input          clock,
  input          reset,
  output         io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
  input          io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
  input  [255:0] io_in_bits_threadgroup0_matrix_a_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
  input  [255:0] io_in_bits_threadgroup0_matrix_b_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
  input  [255:0] io_in_bits_threadgroup0_matrix_c_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
  input  [255:0] io_in_bits_threadgroup4_matrix_a_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
  input  [255:0] io_in_bits_threadgroup4_matrix_b_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
  input  [255:0] io_in_bits_threadgroup4_matrix_c_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
  input          io_in_bits_matBSel, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
  input          io_in_bits_mixPcMode, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
  input          io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
  output         io_out_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
  output [255:0] io_out_bits_threadgroup0_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
  output [255:0] io_out_bits_threadgroup4_matrix_d_data // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 26:14]
);
`ifdef RANDOMIZE_REG_INIT
  reg [255:0] _RAND_0;
  reg [255:0] _RAND_1;
  reg [255:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [255:0] _RAND_4;
  reg [255:0] _RAND_5;
  reg [255:0] _RAND_6;
  reg [31:0] _RAND_7;
`endif // RANDOMIZE_REG_INIT
  wire  tg_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire [255:0] tg_io_in_bits_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire [255:0] tg_io_in_bits_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire [255:0] tg_io_in_bits_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire [255:0] tg_io_out_bits_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_1_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_1_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_1_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire [255:0] tg_1_io_in_bits_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire [255:0] tg_1_io_in_bits_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire [255:0] tg_1_io_in_bits_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_1_io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_1_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  tg_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire [255:0] tg_1_io_out_bits_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
  wire  prehandshaked = io_in_valid & tg_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 172:35]
  reg [255:0] tg_io_in_bits_matrix_a_r_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 175:40]
  reg [255:0] tg_io_in_bits_matrix_b_r_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 176:40]
  reg [255:0] tg_io_in_bits_matrix_c_r_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 177:40]
  reg  tg_io_in_bits_mixPcMode_r; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 178:41]
  wire  prehandshaked_1 = io_in_valid & tg_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 172:35]
  reg [255:0] tg_io_in_bits_matrix_a_r_1_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 175:40]
  reg [255:0] tg_io_in_bits_matrix_b_r_1_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 176:40]
  reg [255:0] tg_io_in_bits_matrix_c_r_1_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 177:40]
  reg  tg_io_in_bits_mixPcMode_r_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 178:41]
  Threadgroup tg ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
    .clock(tg_clock),
    .reset(tg_reset),
    .io_in_ready(tg_io_in_ready),
    .io_in_valid(tg_io_in_valid),
    .io_in_bits_matrix_a_data(tg_io_in_bits_matrix_a_data),
    .io_in_bits_matrix_b_data(tg_io_in_bits_matrix_b_data),
    .io_in_bits_matrix_c_data(tg_io_in_bits_matrix_c_data),
    .io_in_bits_mixPcMode(tg_io_in_bits_mixPcMode),
    .io_out_ready(tg_io_out_ready),
    .io_out_valid(tg_io_out_valid),
    .io_out_bits_matrix_d_data(tg_io_out_bits_matrix_d_data)
  );
  Threadgroup tg_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 170:20]
    .clock(tg_1_clock),
    .reset(tg_1_reset),
    .io_in_ready(tg_1_io_in_ready),
    .io_in_valid(tg_1_io_in_valid),
    .io_in_bits_matrix_a_data(tg_1_io_in_bits_matrix_a_data),
    .io_in_bits_matrix_b_data(tg_1_io_in_bits_matrix_b_data),
    .io_in_bits_matrix_c_data(tg_1_io_in_bits_matrix_c_data),
    .io_in_bits_mixPcMode(tg_1_io_in_bits_mixPcMode),
    .io_out_ready(tg_1_io_out_ready),
    .io_out_valid(tg_1_io_out_valid),
    .io_out_bits_matrix_d_data(tg_1_io_out_bits_matrix_d_data)
  );
  assign io_in_ready = tg_io_in_ready & tg_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 54:28]
  assign io_out_valid = tg_io_out_valid & tg_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 55:29]
  assign io_out_bits_threadgroup0_matrix_d_data = tg_io_out_bits_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 56:37]
  assign io_out_bits_threadgroup4_matrix_d_data = tg_1_io_out_bits_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 57:37]
  assign tg_clock = clock;
  assign tg_reset = reset;
  assign tg_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 174:20]
  assign tg_io_in_bits_matrix_a_data = tg_io_in_bits_matrix_a_r_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 175:28]
  assign tg_io_in_bits_matrix_b_data = tg_io_in_bits_matrix_b_r_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 176:28]
  assign tg_io_in_bits_matrix_c_data = tg_io_in_bits_matrix_c_r_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 177:28]
  assign tg_io_in_bits_mixPcMode = tg_io_in_bits_mixPcMode_r; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 178:29]
  assign tg_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 180:21]
  assign tg_1_clock = clock;
  assign tg_1_reset = reset;
  assign tg_1_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 174:20]
  assign tg_1_io_in_bits_matrix_a_data = tg_io_in_bits_matrix_a_r_1_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 175:28]
  assign tg_1_io_in_bits_matrix_b_data = tg_io_in_bits_matrix_b_r_1_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 176:28]
  assign tg_1_io_in_bits_matrix_c_data = tg_io_in_bits_matrix_c_r_1_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 177:28]
  assign tg_1_io_in_bits_mixPcMode = tg_io_in_bits_mixPcMode_r_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 178:29]
  assign tg_1_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 180:21]
  always @(posedge clock) begin
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 175:40]
      tg_io_in_bits_matrix_a_r_data <= io_in_bits_threadgroup0_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 175:40]
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 176:40]
      if (io_in_bits_matBSel) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 42:22]
        tg_io_in_bits_matrix_b_r_data <= io_in_bits_threadgroup4_matrix_b_data;
      end else begin
        tg_io_in_bits_matrix_b_r_data <= io_in_bits_threadgroup0_matrix_b_data;
      end
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 177:40]
      tg_io_in_bits_matrix_c_r_data <= io_in_bits_threadgroup0_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 177:40]
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 178:41]
      tg_io_in_bits_mixPcMode_r <= io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 178:41]
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 175:40]
      tg_io_in_bits_matrix_a_r_1_data <= io_in_bits_threadgroup4_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 175:40]
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 176:40]
      if (io_in_bits_matBSel) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 42:22]
        tg_io_in_bits_matrix_b_r_1_data <= io_in_bits_threadgroup4_matrix_b_data;
      end else begin
        tg_io_in_bits_matrix_b_r_1_data <= io_in_bits_threadgroup0_matrix_b_data;
      end
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 177:40]
      tg_io_in_bits_matrix_c_r_1_data <= io_in_bits_threadgroup4_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 177:40]
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 178:41]
      tg_io_in_bits_mixPcMode_r_1 <= io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Threadgroup.scala 178:41]
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
  _RAND_0 = {8{`RANDOM}};
  tg_io_in_bits_matrix_a_r_data = _RAND_0[255:0];
  _RAND_1 = {8{`RANDOM}};
  tg_io_in_bits_matrix_b_r_data = _RAND_1[255:0];
  _RAND_2 = {8{`RANDOM}};
  tg_io_in_bits_matrix_c_r_data = _RAND_2[255:0];
  _RAND_3 = {1{`RANDOM}};
  tg_io_in_bits_mixPcMode_r = _RAND_3[0:0];
  _RAND_4 = {8{`RANDOM}};
  tg_io_in_bits_matrix_a_r_1_data = _RAND_4[255:0];
  _RAND_5 = {8{`RANDOM}};
  tg_io_in_bits_matrix_b_r_1_data = _RAND_5[255:0];
  _RAND_6 = {8{`RANDOM}};
  tg_io_in_bits_matrix_c_r_1_data = _RAND_6[255:0];
  _RAND_7 = {1{`RANDOM}};
  tg_io_in_bits_mixPcMode_r_1 = _RAND_7[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module TensorCore(
  input          clock,
  input          reset,
  output         io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input          io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input  [255:0] io_in_bits_octet0_threadgroup0_matrix_a_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input  [255:0] io_in_bits_octet0_threadgroup0_matrix_b_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input  [255:0] io_in_bits_octet0_threadgroup0_matrix_c_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input  [255:0] io_in_bits_octet0_threadgroup4_matrix_a_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input  [255:0] io_in_bits_octet0_threadgroup4_matrix_b_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input  [255:0] io_in_bits_octet0_threadgroup4_matrix_c_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input  [255:0] io_in_bits_octet1_threadgroup0_matrix_a_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input  [255:0] io_in_bits_octet1_threadgroup0_matrix_b_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input  [255:0] io_in_bits_octet1_threadgroup0_matrix_c_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input  [255:0] io_in_bits_octet1_threadgroup4_matrix_a_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input  [255:0] io_in_bits_octet1_threadgroup4_matrix_b_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input  [255:0] io_in_bits_octet1_threadgroup4_matrix_c_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input          io_in_bits_ctrl_matBSel, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input          io_in_bits_ctrl_mixPcMode, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  input          io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  output         io_out_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  output [255:0] io_out_bits_octet0_threadgroup0_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  output [255:0] io_out_bits_octet0_threadgroup4_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  output [255:0] io_out_bits_octet1_threadgroup0_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
  output [255:0] io_out_bits_octet1_threadgroup4_matrix_d_data // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 26:14]
);
  wire  ot_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire [255:0] ot_io_in_bits_threadgroup0_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire [255:0] ot_io_in_bits_threadgroup0_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire [255:0] ot_io_in_bits_threadgroup0_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire [255:0] ot_io_in_bits_threadgroup4_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire [255:0] ot_io_in_bits_threadgroup4_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire [255:0] ot_io_in_bits_threadgroup4_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_io_in_bits_matBSel; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire [255:0] ot_io_out_bits_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire [255:0] ot_io_out_bits_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_1_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_1_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_1_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire [255:0] ot_1_io_in_bits_threadgroup0_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire [255:0] ot_1_io_in_bits_threadgroup0_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire [255:0] ot_1_io_in_bits_threadgroup0_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire [255:0] ot_1_io_in_bits_threadgroup4_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire [255:0] ot_1_io_in_bits_threadgroup4_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire [255:0] ot_1_io_in_bits_threadgroup4_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_1_io_in_bits_matBSel; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_1_io_in_bits_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_1_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire [255:0] ot_1_io_out_bits_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire [255:0] ot_1_io_out_bits_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
  wire  ot_ready_0 = ot_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 41:22 48:17]
  wire  ot_ready_1 = ot_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 41:22 48:17]
  wire  ot_valid_0 = ot_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 40:22 47:17]
  wire  ot_valid_1 = ot_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 40:22 47:17]
  Octet ot ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
    .clock(ot_clock),
    .reset(ot_reset),
    .io_in_ready(ot_io_in_ready),
    .io_in_valid(ot_io_in_valid),
    .io_in_bits_threadgroup0_matrix_a_data(ot_io_in_bits_threadgroup0_matrix_a_data),
    .io_in_bits_threadgroup0_matrix_b_data(ot_io_in_bits_threadgroup0_matrix_b_data),
    .io_in_bits_threadgroup0_matrix_c_data(ot_io_in_bits_threadgroup0_matrix_c_data),
    .io_in_bits_threadgroup4_matrix_a_data(ot_io_in_bits_threadgroup4_matrix_a_data),
    .io_in_bits_threadgroup4_matrix_b_data(ot_io_in_bits_threadgroup4_matrix_b_data),
    .io_in_bits_threadgroup4_matrix_c_data(ot_io_in_bits_threadgroup4_matrix_c_data),
    .io_in_bits_matBSel(ot_io_in_bits_matBSel),
    .io_in_bits_mixPcMode(ot_io_in_bits_mixPcMode),
    .io_out_ready(ot_io_out_ready),
    .io_out_valid(ot_io_out_valid),
    .io_out_bits_threadgroup0_matrix_d_data(ot_io_out_bits_threadgroup0_matrix_d_data),
    .io_out_bits_threadgroup4_matrix_d_data(ot_io_out_bits_threadgroup4_matrix_d_data)
  );
  Octet ot_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 66:20]
    .clock(ot_1_clock),
    .reset(ot_1_reset),
    .io_in_ready(ot_1_io_in_ready),
    .io_in_valid(ot_1_io_in_valid),
    .io_in_bits_threadgroup0_matrix_a_data(ot_1_io_in_bits_threadgroup0_matrix_a_data),
    .io_in_bits_threadgroup0_matrix_b_data(ot_1_io_in_bits_threadgroup0_matrix_b_data),
    .io_in_bits_threadgroup0_matrix_c_data(ot_1_io_in_bits_threadgroup0_matrix_c_data),
    .io_in_bits_threadgroup4_matrix_a_data(ot_1_io_in_bits_threadgroup4_matrix_a_data),
    .io_in_bits_threadgroup4_matrix_b_data(ot_1_io_in_bits_threadgroup4_matrix_b_data),
    .io_in_bits_threadgroup4_matrix_c_data(ot_1_io_in_bits_threadgroup4_matrix_c_data),
    .io_in_bits_matBSel(ot_1_io_in_bits_matBSel),
    .io_in_bits_mixPcMode(ot_1_io_in_bits_mixPcMode),
    .io_out_ready(ot_1_io_out_ready),
    .io_out_valid(ot_1_io_out_valid),
    .io_out_bits_threadgroup0_matrix_d_data(ot_1_io_out_bits_threadgroup0_matrix_d_data),
    .io_out_bits_threadgroup4_matrix_d_data(ot_1_io_out_bits_threadgroup4_matrix_d_data)
  );
  assign io_in_ready = ot_ready_0 & ot_ready_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 51:36]
  assign io_out_valid = ot_valid_0 & ot_valid_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 52:36]
  assign io_out_bits_octet0_threadgroup0_matrix_d_data = ot_io_out_bits_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 46:{27,27}]
  assign io_out_bits_octet0_threadgroup4_matrix_d_data = ot_io_out_bits_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 46:{27,27}]
  assign io_out_bits_octet1_threadgroup0_matrix_d_data = ot_1_io_out_bits_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 46:{27,27}]
  assign io_out_bits_octet1_threadgroup4_matrix_d_data = ot_1_io_out_bits_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 46:{27,27}]
  assign ot_clock = clock;
  assign ot_reset = reset;
  assign ot_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 77:20]
  assign ot_io_in_bits_threadgroup0_matrix_a_data = io_in_bits_octet0_threadgroup0_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 37:{22,22}]
  assign ot_io_in_bits_threadgroup0_matrix_b_data = io_in_bits_octet0_threadgroup0_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 37:{22,22}]
  assign ot_io_in_bits_threadgroup0_matrix_c_data = io_in_bits_octet0_threadgroup0_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 37:{22,22}]
  assign ot_io_in_bits_threadgroup4_matrix_a_data = io_in_bits_octet0_threadgroup4_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 37:{22,22}]
  assign ot_io_in_bits_threadgroup4_matrix_b_data = io_in_bits_octet0_threadgroup4_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 37:{22,22}]
  assign ot_io_in_bits_threadgroup4_matrix_c_data = io_in_bits_octet0_threadgroup4_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 37:{22,22}]
  assign ot_io_in_bits_matBSel = io_in_bits_ctrl_matBSel; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 84:27]
  assign ot_io_in_bits_mixPcMode = io_in_bits_ctrl_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 85:29]
  assign ot_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 87:21]
  assign ot_1_clock = clock;
  assign ot_1_reset = reset;
  assign ot_1_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 77:20]
  assign ot_1_io_in_bits_threadgroup0_matrix_a_data = io_in_bits_octet1_threadgroup0_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 37:{22,22}]
  assign ot_1_io_in_bits_threadgroup0_matrix_b_data = io_in_bits_octet1_threadgroup0_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 37:{22,22}]
  assign ot_1_io_in_bits_threadgroup0_matrix_c_data = io_in_bits_octet1_threadgroup0_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 37:{22,22}]
  assign ot_1_io_in_bits_threadgroup4_matrix_a_data = io_in_bits_octet1_threadgroup4_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 37:{22,22}]
  assign ot_1_io_in_bits_threadgroup4_matrix_b_data = io_in_bits_octet1_threadgroup4_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 37:{22,22}]
  assign ot_1_io_in_bits_threadgroup4_matrix_c_data = io_in_bits_octet1_threadgroup4_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 37:{22,22}]
  assign ot_1_io_in_bits_matBSel = io_in_bits_ctrl_matBSel; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 84:27]
  assign ot_1_io_in_bits_mixPcMode = io_in_bits_ctrl_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 85:29]
  assign ot_1_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Octet.scala 87:21]
endmodule
module Top(
  input          clock,
  input          reset,
  output         io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input          io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc0_ot0_tg0_matrix_a, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc0_ot0_tg0_matrix_b, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc0_ot0_tg0_matrix_c, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc0_ot0_tg4_matrix_a, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc0_ot0_tg4_matrix_b, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc0_ot0_tg4_matrix_c, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc0_ot1_tg0_matrix_a, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc0_ot1_tg0_matrix_b, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc0_ot1_tg0_matrix_c, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc0_ot1_tg4_matrix_a, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc0_ot1_tg4_matrix_b, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc0_ot1_tg4_matrix_c, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc1_ot0_tg0_matrix_a, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc1_ot0_tg0_matrix_b, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc1_ot0_tg0_matrix_c, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc1_ot0_tg4_matrix_a, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc1_ot0_tg4_matrix_b, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc1_ot0_tg4_matrix_c, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc1_ot1_tg0_matrix_a, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc1_ot1_tg0_matrix_b, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc1_ot1_tg0_matrix_c, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc1_ot1_tg4_matrix_a, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc1_ot1_tg4_matrix_b, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input  [255:0] io_in_bits_tc1_ot1_tg4_matrix_c, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input          io_in_bits_ctrl_matBSel, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input          io_in_bits_ctrl_mixPcMode, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  input          io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  output         io_out_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  output [255:0] io_out_bits_tc0_octet0_threadgroup0_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  output [255:0] io_out_bits_tc0_octet0_threadgroup4_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  output [255:0] io_out_bits_tc0_octet1_threadgroup0_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  output [255:0] io_out_bits_tc0_octet1_threadgroup4_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  output [255:0] io_out_bits_tc1_octet0_threadgroup0_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  output [255:0] io_out_bits_tc1_octet0_threadgroup4_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  output [255:0] io_out_bits_tc1_octet1_threadgroup0_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
  output [255:0] io_out_bits_tc1_octet1_threadgroup4_matrix_d_data // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 43:14]
);
  wire  tc_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_io_in_bits_octet0_threadgroup0_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_io_in_bits_octet0_threadgroup0_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_io_in_bits_octet0_threadgroup0_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_io_in_bits_octet0_threadgroup4_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_io_in_bits_octet0_threadgroup4_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_io_in_bits_octet0_threadgroup4_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_io_in_bits_octet1_threadgroup0_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_io_in_bits_octet1_threadgroup0_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_io_in_bits_octet1_threadgroup0_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_io_in_bits_octet1_threadgroup4_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_io_in_bits_octet1_threadgroup4_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_io_in_bits_octet1_threadgroup4_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_io_in_bits_ctrl_matBSel; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_io_in_bits_ctrl_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_io_out_bits_octet0_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_io_out_bits_octet0_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_io_out_bits_octet1_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_io_out_bits_octet1_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_1_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_1_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_1_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_1_io_in_bits_octet0_threadgroup0_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_1_io_in_bits_octet0_threadgroup0_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_1_io_in_bits_octet0_threadgroup0_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_1_io_in_bits_octet0_threadgroup4_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_1_io_in_bits_octet0_threadgroup4_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_1_io_in_bits_octet0_threadgroup4_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_1_io_in_bits_octet1_threadgroup0_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_1_io_in_bits_octet1_threadgroup0_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_1_io_in_bits_octet1_threadgroup0_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_1_io_in_bits_octet1_threadgroup4_matrix_a_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_1_io_in_bits_octet1_threadgroup4_matrix_b_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_1_io_in_bits_octet1_threadgroup4_matrix_c_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_1_io_in_bits_ctrl_matBSel; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_1_io_in_bits_ctrl_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_1_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire  tc_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_1_io_out_bits_octet0_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_1_io_out_bits_octet0_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_1_io_out_bits_octet1_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [255:0] tc_1_io_out_bits_octet1_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
  wire [15:0] ot0_tg0_matrix_b_matVType__0_0 = io_in_bits_tc0_ot0_tg0_matrix_b[255:240]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType__0_1 = io_in_bits_tc0_ot0_tg0_matrix_b[239:224]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType__0_2 = io_in_bits_tc0_ot0_tg0_matrix_b[223:208]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType__0_3 = io_in_bits_tc0_ot0_tg0_matrix_b[207:192]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType__1_0 = io_in_bits_tc0_ot0_tg0_matrix_b[191:176]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType__1_1 = io_in_bits_tc0_ot0_tg0_matrix_b[175:160]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType__1_2 = io_in_bits_tc0_ot0_tg0_matrix_b[159:144]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType__1_3 = io_in_bits_tc0_ot0_tg0_matrix_b[143:128]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType__2_0 = io_in_bits_tc0_ot0_tg0_matrix_b[127:112]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType__2_1 = io_in_bits_tc0_ot0_tg0_matrix_b[111:96]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType__2_2 = io_in_bits_tc0_ot0_tg0_matrix_b[95:80]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType__2_3 = io_in_bits_tc0_ot0_tg0_matrix_b[79:64]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType__3_0 = io_in_bits_tc0_ot0_tg0_matrix_b[63:48]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType__3_1 = io_in_bits_tc0_ot0_tg0_matrix_b[47:32]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType__3_2 = io_in_bits_tc0_ot0_tg0_matrix_b[31:16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType__3_3 = io_in_bits_tc0_ot0_tg0_matrix_b[15:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [127:0] ot0_tg0_matrix_b_mat_data_lo = {ot0_tg0_matrix_b_matVType__0_2,ot0_tg0_matrix_b_matVType__1_2,
    ot0_tg0_matrix_b_matVType__2_2,ot0_tg0_matrix_b_matVType__3_2,ot0_tg0_matrix_b_matVType__0_3,
    ot0_tg0_matrix_b_matVType__1_3,ot0_tg0_matrix_b_matVType__2_3,ot0_tg0_matrix_b_matVType__3_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  wire [127:0] ot0_tg0_matrix_b_mat_data_hi = {ot0_tg0_matrix_b_matVType__0_0,ot0_tg0_matrix_b_matVType__1_0,
    ot0_tg0_matrix_b_matVType__2_0,ot0_tg0_matrix_b_matVType__3_0,ot0_tg0_matrix_b_matVType__0_1,
    ot0_tg0_matrix_b_matVType__1_1,ot0_tg0_matrix_b_matVType__2_1,ot0_tg0_matrix_b_matVType__3_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  wire [15:0] ot0_tg4_matrix_b_matVType__0_0 = io_in_bits_tc0_ot0_tg4_matrix_b[255:240]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType__0_1 = io_in_bits_tc0_ot0_tg4_matrix_b[239:224]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType__0_2 = io_in_bits_tc0_ot0_tg4_matrix_b[223:208]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType__0_3 = io_in_bits_tc0_ot0_tg4_matrix_b[207:192]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType__1_0 = io_in_bits_tc0_ot0_tg4_matrix_b[191:176]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType__1_1 = io_in_bits_tc0_ot0_tg4_matrix_b[175:160]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType__1_2 = io_in_bits_tc0_ot0_tg4_matrix_b[159:144]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType__1_3 = io_in_bits_tc0_ot0_tg4_matrix_b[143:128]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType__2_0 = io_in_bits_tc0_ot0_tg4_matrix_b[127:112]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType__2_1 = io_in_bits_tc0_ot0_tg4_matrix_b[111:96]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType__2_2 = io_in_bits_tc0_ot0_tg4_matrix_b[95:80]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType__2_3 = io_in_bits_tc0_ot0_tg4_matrix_b[79:64]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType__3_0 = io_in_bits_tc0_ot0_tg4_matrix_b[63:48]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType__3_1 = io_in_bits_tc0_ot0_tg4_matrix_b[47:32]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType__3_2 = io_in_bits_tc0_ot0_tg4_matrix_b[31:16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType__3_3 = io_in_bits_tc0_ot0_tg4_matrix_b[15:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [127:0] ot0_tg4_matrix_b_mat_data_lo = {ot0_tg4_matrix_b_matVType__0_2,ot0_tg4_matrix_b_matVType__1_2,
    ot0_tg4_matrix_b_matVType__2_2,ot0_tg4_matrix_b_matVType__3_2,ot0_tg4_matrix_b_matVType__0_3,
    ot0_tg4_matrix_b_matVType__1_3,ot0_tg4_matrix_b_matVType__2_3,ot0_tg4_matrix_b_matVType__3_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  wire [127:0] ot0_tg4_matrix_b_mat_data_hi = {ot0_tg4_matrix_b_matVType__0_0,ot0_tg4_matrix_b_matVType__1_0,
    ot0_tg4_matrix_b_matVType__2_0,ot0_tg4_matrix_b_matVType__3_0,ot0_tg4_matrix_b_matVType__0_1,
    ot0_tg4_matrix_b_matVType__1_1,ot0_tg4_matrix_b_matVType__2_1,ot0_tg4_matrix_b_matVType__3_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  wire [15:0] ot1_tg0_matrix_b_matVType__0_0 = io_in_bits_tc0_ot1_tg0_matrix_b[255:240]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType__0_1 = io_in_bits_tc0_ot1_tg0_matrix_b[239:224]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType__0_2 = io_in_bits_tc0_ot1_tg0_matrix_b[223:208]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType__0_3 = io_in_bits_tc0_ot1_tg0_matrix_b[207:192]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType__1_0 = io_in_bits_tc0_ot1_tg0_matrix_b[191:176]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType__1_1 = io_in_bits_tc0_ot1_tg0_matrix_b[175:160]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType__1_2 = io_in_bits_tc0_ot1_tg0_matrix_b[159:144]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType__1_3 = io_in_bits_tc0_ot1_tg0_matrix_b[143:128]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType__2_0 = io_in_bits_tc0_ot1_tg0_matrix_b[127:112]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType__2_1 = io_in_bits_tc0_ot1_tg0_matrix_b[111:96]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType__2_2 = io_in_bits_tc0_ot1_tg0_matrix_b[95:80]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType__2_3 = io_in_bits_tc0_ot1_tg0_matrix_b[79:64]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType__3_0 = io_in_bits_tc0_ot1_tg0_matrix_b[63:48]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType__3_1 = io_in_bits_tc0_ot1_tg0_matrix_b[47:32]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType__3_2 = io_in_bits_tc0_ot1_tg0_matrix_b[31:16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType__3_3 = io_in_bits_tc0_ot1_tg0_matrix_b[15:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [127:0] ot1_tg0_matrix_b_mat_data_lo = {ot1_tg0_matrix_b_matVType__0_2,ot1_tg0_matrix_b_matVType__1_2,
    ot1_tg0_matrix_b_matVType__2_2,ot1_tg0_matrix_b_matVType__3_2,ot1_tg0_matrix_b_matVType__0_3,
    ot1_tg0_matrix_b_matVType__1_3,ot1_tg0_matrix_b_matVType__2_3,ot1_tg0_matrix_b_matVType__3_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  wire [127:0] ot1_tg0_matrix_b_mat_data_hi = {ot1_tg0_matrix_b_matVType__0_0,ot1_tg0_matrix_b_matVType__1_0,
    ot1_tg0_matrix_b_matVType__2_0,ot1_tg0_matrix_b_matVType__3_0,ot1_tg0_matrix_b_matVType__0_1,
    ot1_tg0_matrix_b_matVType__1_1,ot1_tg0_matrix_b_matVType__2_1,ot1_tg0_matrix_b_matVType__3_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  wire [15:0] ot1_tg4_matrix_b_matVType__0_0 = io_in_bits_tc0_ot1_tg4_matrix_b[255:240]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType__0_1 = io_in_bits_tc0_ot1_tg4_matrix_b[239:224]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType__0_2 = io_in_bits_tc0_ot1_tg4_matrix_b[223:208]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType__0_3 = io_in_bits_tc0_ot1_tg4_matrix_b[207:192]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType__1_0 = io_in_bits_tc0_ot1_tg4_matrix_b[191:176]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType__1_1 = io_in_bits_tc0_ot1_tg4_matrix_b[175:160]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType__1_2 = io_in_bits_tc0_ot1_tg4_matrix_b[159:144]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType__1_3 = io_in_bits_tc0_ot1_tg4_matrix_b[143:128]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType__2_0 = io_in_bits_tc0_ot1_tg4_matrix_b[127:112]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType__2_1 = io_in_bits_tc0_ot1_tg4_matrix_b[111:96]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType__2_2 = io_in_bits_tc0_ot1_tg4_matrix_b[95:80]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType__2_3 = io_in_bits_tc0_ot1_tg4_matrix_b[79:64]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType__3_0 = io_in_bits_tc0_ot1_tg4_matrix_b[63:48]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType__3_1 = io_in_bits_tc0_ot1_tg4_matrix_b[47:32]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType__3_2 = io_in_bits_tc0_ot1_tg4_matrix_b[31:16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType__3_3 = io_in_bits_tc0_ot1_tg4_matrix_b[15:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [127:0] ot1_tg4_matrix_b_mat_data_lo = {ot1_tg4_matrix_b_matVType__0_2,ot1_tg4_matrix_b_matVType__1_2,
    ot1_tg4_matrix_b_matVType__2_2,ot1_tg4_matrix_b_matVType__3_2,ot1_tg4_matrix_b_matVType__0_3,
    ot1_tg4_matrix_b_matVType__1_3,ot1_tg4_matrix_b_matVType__2_3,ot1_tg4_matrix_b_matVType__3_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  wire [127:0] ot1_tg4_matrix_b_mat_data_hi = {ot1_tg4_matrix_b_matVType__0_0,ot1_tg4_matrix_b_matVType__1_0,
    ot1_tg4_matrix_b_matVType__2_0,ot1_tg4_matrix_b_matVType__3_0,ot1_tg4_matrix_b_matVType__0_1,
    ot1_tg4_matrix_b_matVType__1_1,ot1_tg4_matrix_b_matVType__2_1,ot1_tg4_matrix_b_matVType__3_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  wire [15:0] ot0_tg0_matrix_b_matVType_1_0_0 = io_in_bits_tc1_ot0_tg0_matrix_b[255:240]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType_1_0_1 = io_in_bits_tc1_ot0_tg0_matrix_b[239:224]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType_1_0_2 = io_in_bits_tc1_ot0_tg0_matrix_b[223:208]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType_1_0_3 = io_in_bits_tc1_ot0_tg0_matrix_b[207:192]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType_1_1_0 = io_in_bits_tc1_ot0_tg0_matrix_b[191:176]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType_1_1_1 = io_in_bits_tc1_ot0_tg0_matrix_b[175:160]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType_1_1_2 = io_in_bits_tc1_ot0_tg0_matrix_b[159:144]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType_1_1_3 = io_in_bits_tc1_ot0_tg0_matrix_b[143:128]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType_1_2_0 = io_in_bits_tc1_ot0_tg0_matrix_b[127:112]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType_1_2_1 = io_in_bits_tc1_ot0_tg0_matrix_b[111:96]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType_1_2_2 = io_in_bits_tc1_ot0_tg0_matrix_b[95:80]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType_1_2_3 = io_in_bits_tc1_ot0_tg0_matrix_b[79:64]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType_1_3_0 = io_in_bits_tc1_ot0_tg0_matrix_b[63:48]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType_1_3_1 = io_in_bits_tc1_ot0_tg0_matrix_b[47:32]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType_1_3_2 = io_in_bits_tc1_ot0_tg0_matrix_b[31:16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg0_matrix_b_matVType_1_3_3 = io_in_bits_tc1_ot0_tg0_matrix_b[15:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [127:0] ot0_tg0_matrix_b_mat_data_lo_1 = {ot0_tg0_matrix_b_matVType_1_0_2,ot0_tg0_matrix_b_matVType_1_1_2,
    ot0_tg0_matrix_b_matVType_1_2_2,ot0_tg0_matrix_b_matVType_1_3_2,ot0_tg0_matrix_b_matVType_1_0_3,
    ot0_tg0_matrix_b_matVType_1_1_3,ot0_tg0_matrix_b_matVType_1_2_3,ot0_tg0_matrix_b_matVType_1_3_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  wire [127:0] ot0_tg0_matrix_b_mat_data_hi_1 = {ot0_tg0_matrix_b_matVType_1_0_0,ot0_tg0_matrix_b_matVType_1_1_0,
    ot0_tg0_matrix_b_matVType_1_2_0,ot0_tg0_matrix_b_matVType_1_3_0,ot0_tg0_matrix_b_matVType_1_0_1,
    ot0_tg0_matrix_b_matVType_1_1_1,ot0_tg0_matrix_b_matVType_1_2_1,ot0_tg0_matrix_b_matVType_1_3_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  wire [15:0] ot0_tg4_matrix_b_matVType_1_0_0 = io_in_bits_tc1_ot0_tg4_matrix_b[255:240]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType_1_0_1 = io_in_bits_tc1_ot0_tg4_matrix_b[239:224]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType_1_0_2 = io_in_bits_tc1_ot0_tg4_matrix_b[223:208]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType_1_0_3 = io_in_bits_tc1_ot0_tg4_matrix_b[207:192]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType_1_1_0 = io_in_bits_tc1_ot0_tg4_matrix_b[191:176]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType_1_1_1 = io_in_bits_tc1_ot0_tg4_matrix_b[175:160]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType_1_1_2 = io_in_bits_tc1_ot0_tg4_matrix_b[159:144]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType_1_1_3 = io_in_bits_tc1_ot0_tg4_matrix_b[143:128]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType_1_2_0 = io_in_bits_tc1_ot0_tg4_matrix_b[127:112]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType_1_2_1 = io_in_bits_tc1_ot0_tg4_matrix_b[111:96]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType_1_2_2 = io_in_bits_tc1_ot0_tg4_matrix_b[95:80]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType_1_2_3 = io_in_bits_tc1_ot0_tg4_matrix_b[79:64]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType_1_3_0 = io_in_bits_tc1_ot0_tg4_matrix_b[63:48]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType_1_3_1 = io_in_bits_tc1_ot0_tg4_matrix_b[47:32]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType_1_3_2 = io_in_bits_tc1_ot0_tg4_matrix_b[31:16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot0_tg4_matrix_b_matVType_1_3_3 = io_in_bits_tc1_ot0_tg4_matrix_b[15:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [127:0] ot0_tg4_matrix_b_mat_data_lo_1 = {ot0_tg4_matrix_b_matVType_1_0_2,ot0_tg4_matrix_b_matVType_1_1_2,
    ot0_tg4_matrix_b_matVType_1_2_2,ot0_tg4_matrix_b_matVType_1_3_2,ot0_tg4_matrix_b_matVType_1_0_3,
    ot0_tg4_matrix_b_matVType_1_1_3,ot0_tg4_matrix_b_matVType_1_2_3,ot0_tg4_matrix_b_matVType_1_3_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  wire [127:0] ot0_tg4_matrix_b_mat_data_hi_1 = {ot0_tg4_matrix_b_matVType_1_0_0,ot0_tg4_matrix_b_matVType_1_1_0,
    ot0_tg4_matrix_b_matVType_1_2_0,ot0_tg4_matrix_b_matVType_1_3_0,ot0_tg4_matrix_b_matVType_1_0_1,
    ot0_tg4_matrix_b_matVType_1_1_1,ot0_tg4_matrix_b_matVType_1_2_1,ot0_tg4_matrix_b_matVType_1_3_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  wire [15:0] ot1_tg0_matrix_b_matVType_1_0_0 = io_in_bits_tc1_ot1_tg0_matrix_b[255:240]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType_1_0_1 = io_in_bits_tc1_ot1_tg0_matrix_b[239:224]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType_1_0_2 = io_in_bits_tc1_ot1_tg0_matrix_b[223:208]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType_1_0_3 = io_in_bits_tc1_ot1_tg0_matrix_b[207:192]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType_1_1_0 = io_in_bits_tc1_ot1_tg0_matrix_b[191:176]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType_1_1_1 = io_in_bits_tc1_ot1_tg0_matrix_b[175:160]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType_1_1_2 = io_in_bits_tc1_ot1_tg0_matrix_b[159:144]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType_1_1_3 = io_in_bits_tc1_ot1_tg0_matrix_b[143:128]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType_1_2_0 = io_in_bits_tc1_ot1_tg0_matrix_b[127:112]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType_1_2_1 = io_in_bits_tc1_ot1_tg0_matrix_b[111:96]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType_1_2_2 = io_in_bits_tc1_ot1_tg0_matrix_b[95:80]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType_1_2_3 = io_in_bits_tc1_ot1_tg0_matrix_b[79:64]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType_1_3_0 = io_in_bits_tc1_ot1_tg0_matrix_b[63:48]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType_1_3_1 = io_in_bits_tc1_ot1_tg0_matrix_b[47:32]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType_1_3_2 = io_in_bits_tc1_ot1_tg0_matrix_b[31:16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg0_matrix_b_matVType_1_3_3 = io_in_bits_tc1_ot1_tg0_matrix_b[15:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [127:0] ot1_tg0_matrix_b_mat_data_lo_1 = {ot1_tg0_matrix_b_matVType_1_0_2,ot1_tg0_matrix_b_matVType_1_1_2,
    ot1_tg0_matrix_b_matVType_1_2_2,ot1_tg0_matrix_b_matVType_1_3_2,ot1_tg0_matrix_b_matVType_1_0_3,
    ot1_tg0_matrix_b_matVType_1_1_3,ot1_tg0_matrix_b_matVType_1_2_3,ot1_tg0_matrix_b_matVType_1_3_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  wire [127:0] ot1_tg0_matrix_b_mat_data_hi_1 = {ot1_tg0_matrix_b_matVType_1_0_0,ot1_tg0_matrix_b_matVType_1_1_0,
    ot1_tg0_matrix_b_matVType_1_2_0,ot1_tg0_matrix_b_matVType_1_3_0,ot1_tg0_matrix_b_matVType_1_0_1,
    ot1_tg0_matrix_b_matVType_1_1_1,ot1_tg0_matrix_b_matVType_1_2_1,ot1_tg0_matrix_b_matVType_1_3_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  wire [15:0] ot1_tg4_matrix_b_matVType_1_0_0 = io_in_bits_tc1_ot1_tg4_matrix_b[255:240]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType_1_0_1 = io_in_bits_tc1_ot1_tg4_matrix_b[239:224]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType_1_0_2 = io_in_bits_tc1_ot1_tg4_matrix_b[223:208]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType_1_0_3 = io_in_bits_tc1_ot1_tg4_matrix_b[207:192]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType_1_1_0 = io_in_bits_tc1_ot1_tg4_matrix_b[191:176]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType_1_1_1 = io_in_bits_tc1_ot1_tg4_matrix_b[175:160]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType_1_1_2 = io_in_bits_tc1_ot1_tg4_matrix_b[159:144]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType_1_1_3 = io_in_bits_tc1_ot1_tg4_matrix_b[143:128]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType_1_2_0 = io_in_bits_tc1_ot1_tg4_matrix_b[127:112]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType_1_2_1 = io_in_bits_tc1_ot1_tg4_matrix_b[111:96]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType_1_2_2 = io_in_bits_tc1_ot1_tg4_matrix_b[95:80]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType_1_2_3 = io_in_bits_tc1_ot1_tg4_matrix_b[79:64]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType_1_3_0 = io_in_bits_tc1_ot1_tg4_matrix_b[63:48]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType_1_3_1 = io_in_bits_tc1_ot1_tg4_matrix_b[47:32]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType_1_3_2 = io_in_bits_tc1_ot1_tg4_matrix_b[31:16]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [15:0] ot1_tg4_matrix_b_matVType_1_3_3 = io_in_bits_tc1_ot1_tg4_matrix_b[15:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 77:32]
  wire [127:0] ot1_tg4_matrix_b_mat_data_lo_1 = {ot1_tg4_matrix_b_matVType_1_0_2,ot1_tg4_matrix_b_matVType_1_1_2,
    ot1_tg4_matrix_b_matVType_1_2_2,ot1_tg4_matrix_b_matVType_1_3_2,ot1_tg4_matrix_b_matVType_1_0_3,
    ot1_tg4_matrix_b_matVType_1_1_3,ot1_tg4_matrix_b_matVType_1_2_3,ot1_tg4_matrix_b_matVType_1_3_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  wire [127:0] ot1_tg4_matrix_b_mat_data_hi_1 = {ot1_tg4_matrix_b_matVType_1_0_0,ot1_tg4_matrix_b_matVType_1_1_0,
    ot1_tg4_matrix_b_matVType_1_2_0,ot1_tg4_matrix_b_matVType_1_3_0,ot1_tg4_matrix_b_matVType_1_0_1,
    ot1_tg4_matrix_b_matVType_1_1_1,ot1_tg4_matrix_b_matVType_1_2_1,ot1_tg4_matrix_b_matVType_1_3_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  wire  tc_ready_0 = tc_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 59:22 86:17]
  wire  tc_ready_1 = tc_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 59:22 86:17]
  wire  tc_valid_0 = tc_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 58:22 85:17]
  wire  tc_valid_1 = tc_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 58:22 85:17]
  TensorCore tc ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
    .clock(tc_clock),
    .reset(tc_reset),
    .io_in_ready(tc_io_in_ready),
    .io_in_valid(tc_io_in_valid),
    .io_in_bits_octet0_threadgroup0_matrix_a_data(tc_io_in_bits_octet0_threadgroup0_matrix_a_data),
    .io_in_bits_octet0_threadgroup0_matrix_b_data(tc_io_in_bits_octet0_threadgroup0_matrix_b_data),
    .io_in_bits_octet0_threadgroup0_matrix_c_data(tc_io_in_bits_octet0_threadgroup0_matrix_c_data),
    .io_in_bits_octet0_threadgroup4_matrix_a_data(tc_io_in_bits_octet0_threadgroup4_matrix_a_data),
    .io_in_bits_octet0_threadgroup4_matrix_b_data(tc_io_in_bits_octet0_threadgroup4_matrix_b_data),
    .io_in_bits_octet0_threadgroup4_matrix_c_data(tc_io_in_bits_octet0_threadgroup4_matrix_c_data),
    .io_in_bits_octet1_threadgroup0_matrix_a_data(tc_io_in_bits_octet1_threadgroup0_matrix_a_data),
    .io_in_bits_octet1_threadgroup0_matrix_b_data(tc_io_in_bits_octet1_threadgroup0_matrix_b_data),
    .io_in_bits_octet1_threadgroup0_matrix_c_data(tc_io_in_bits_octet1_threadgroup0_matrix_c_data),
    .io_in_bits_octet1_threadgroup4_matrix_a_data(tc_io_in_bits_octet1_threadgroup4_matrix_a_data),
    .io_in_bits_octet1_threadgroup4_matrix_b_data(tc_io_in_bits_octet1_threadgroup4_matrix_b_data),
    .io_in_bits_octet1_threadgroup4_matrix_c_data(tc_io_in_bits_octet1_threadgroup4_matrix_c_data),
    .io_in_bits_ctrl_matBSel(tc_io_in_bits_ctrl_matBSel),
    .io_in_bits_ctrl_mixPcMode(tc_io_in_bits_ctrl_mixPcMode),
    .io_out_ready(tc_io_out_ready),
    .io_out_valid(tc_io_out_valid),
    .io_out_bits_octet0_threadgroup0_matrix_d_data(tc_io_out_bits_octet0_threadgroup0_matrix_d_data),
    .io_out_bits_octet0_threadgroup4_matrix_d_data(tc_io_out_bits_octet0_threadgroup4_matrix_d_data),
    .io_out_bits_octet1_threadgroup0_matrix_d_data(tc_io_out_bits_octet1_threadgroup0_matrix_d_data),
    .io_out_bits_octet1_threadgroup4_matrix_d_data(tc_io_out_bits_octet1_threadgroup4_matrix_d_data)
  );
  TensorCore tc_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 67:20]
    .clock(tc_1_clock),
    .reset(tc_1_reset),
    .io_in_ready(tc_1_io_in_ready),
    .io_in_valid(tc_1_io_in_valid),
    .io_in_bits_octet0_threadgroup0_matrix_a_data(tc_1_io_in_bits_octet0_threadgroup0_matrix_a_data),
    .io_in_bits_octet0_threadgroup0_matrix_b_data(tc_1_io_in_bits_octet0_threadgroup0_matrix_b_data),
    .io_in_bits_octet0_threadgroup0_matrix_c_data(tc_1_io_in_bits_octet0_threadgroup0_matrix_c_data),
    .io_in_bits_octet0_threadgroup4_matrix_a_data(tc_1_io_in_bits_octet0_threadgroup4_matrix_a_data),
    .io_in_bits_octet0_threadgroup4_matrix_b_data(tc_1_io_in_bits_octet0_threadgroup4_matrix_b_data),
    .io_in_bits_octet0_threadgroup4_matrix_c_data(tc_1_io_in_bits_octet0_threadgroup4_matrix_c_data),
    .io_in_bits_octet1_threadgroup0_matrix_a_data(tc_1_io_in_bits_octet1_threadgroup0_matrix_a_data),
    .io_in_bits_octet1_threadgroup0_matrix_b_data(tc_1_io_in_bits_octet1_threadgroup0_matrix_b_data),
    .io_in_bits_octet1_threadgroup0_matrix_c_data(tc_1_io_in_bits_octet1_threadgroup0_matrix_c_data),
    .io_in_bits_octet1_threadgroup4_matrix_a_data(tc_1_io_in_bits_octet1_threadgroup4_matrix_a_data),
    .io_in_bits_octet1_threadgroup4_matrix_b_data(tc_1_io_in_bits_octet1_threadgroup4_matrix_b_data),
    .io_in_bits_octet1_threadgroup4_matrix_c_data(tc_1_io_in_bits_octet1_threadgroup4_matrix_c_data),
    .io_in_bits_ctrl_matBSel(tc_1_io_in_bits_ctrl_matBSel),
    .io_in_bits_ctrl_mixPcMode(tc_1_io_in_bits_ctrl_mixPcMode),
    .io_out_ready(tc_1_io_out_ready),
    .io_out_valid(tc_1_io_out_valid),
    .io_out_bits_octet0_threadgroup0_matrix_d_data(tc_1_io_out_bits_octet0_threadgroup0_matrix_d_data),
    .io_out_bits_octet0_threadgroup4_matrix_d_data(tc_1_io_out_bits_octet0_threadgroup4_matrix_d_data),
    .io_out_bits_octet1_threadgroup0_matrix_d_data(tc_1_io_out_bits_octet1_threadgroup0_matrix_d_data),
    .io_out_bits_octet1_threadgroup4_matrix_d_data(tc_1_io_out_bits_octet1_threadgroup4_matrix_d_data)
  );
  assign io_in_ready = tc_ready_0 & tc_ready_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 89:36]
  assign io_out_valid = tc_valid_0 & tc_valid_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 90:36]
  assign io_out_bits_tc0_octet0_threadgroup0_matrix_d_data = tc_io_out_bits_octet0_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 83:{31,31}]
  assign io_out_bits_tc0_octet0_threadgroup4_matrix_d_data = tc_io_out_bits_octet0_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 83:{31,31}]
  assign io_out_bits_tc0_octet1_threadgroup0_matrix_d_data = tc_io_out_bits_octet1_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 84:{31,31}]
  assign io_out_bits_tc0_octet1_threadgroup4_matrix_d_data = tc_io_out_bits_octet1_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 84:{31,31}]
  assign io_out_bits_tc1_octet0_threadgroup0_matrix_d_data = tc_1_io_out_bits_octet0_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 83:{31,31}]
  assign io_out_bits_tc1_octet0_threadgroup4_matrix_d_data = tc_1_io_out_bits_octet0_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 83:{31,31}]
  assign io_out_bits_tc1_octet1_threadgroup0_matrix_d_data = tc_1_io_out_bits_octet1_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 84:{31,31}]
  assign io_out_bits_tc1_octet1_threadgroup4_matrix_d_data = tc_1_io_out_bits_octet1_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 84:{31,31}]
  assign tc_clock = clock;
  assign tc_reset = reset;
  assign tc_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 78:20]
  assign tc_io_in_bits_octet0_threadgroup0_matrix_a_data = io_in_bits_tc0_ot0_tg0_matrix_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 54:{27,27}]
  assign tc_io_in_bits_octet0_threadgroup0_matrix_b_data = {ot0_tg0_matrix_b_mat_data_hi,ot0_tg0_matrix_b_mat_data_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  assign tc_io_in_bits_octet0_threadgroup0_matrix_c_data = io_in_bits_tc0_ot0_tg0_matrix_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 54:{27,27}]
  assign tc_io_in_bits_octet0_threadgroup4_matrix_a_data = io_in_bits_tc0_ot0_tg4_matrix_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 54:{27,27}]
  assign tc_io_in_bits_octet0_threadgroup4_matrix_b_data = {ot0_tg4_matrix_b_mat_data_hi,ot0_tg4_matrix_b_mat_data_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  assign tc_io_in_bits_octet0_threadgroup4_matrix_c_data = io_in_bits_tc0_ot0_tg4_matrix_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 54:{27,27}]
  assign tc_io_in_bits_octet1_threadgroup0_matrix_a_data = io_in_bits_tc0_ot1_tg0_matrix_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 54:{27,27}]
  assign tc_io_in_bits_octet1_threadgroup0_matrix_b_data = {ot1_tg0_matrix_b_mat_data_hi,ot1_tg0_matrix_b_mat_data_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  assign tc_io_in_bits_octet1_threadgroup0_matrix_c_data = io_in_bits_tc0_ot1_tg0_matrix_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 54:{27,27}]
  assign tc_io_in_bits_octet1_threadgroup4_matrix_a_data = io_in_bits_tc0_ot1_tg4_matrix_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 54:{27,27}]
  assign tc_io_in_bits_octet1_threadgroup4_matrix_b_data = {ot1_tg4_matrix_b_mat_data_hi,ot1_tg4_matrix_b_mat_data_lo}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  assign tc_io_in_bits_octet1_threadgroup4_matrix_c_data = io_in_bits_tc0_ot1_tg4_matrix_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 54:{27,27}]
  assign tc_io_in_bits_ctrl_matBSel = io_in_bits_ctrl_matBSel; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 94:32]
  assign tc_io_in_bits_ctrl_mixPcMode = io_in_bits_ctrl_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 95:34]
  assign tc_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 97:21]
  assign tc_1_clock = clock;
  assign tc_1_reset = reset;
  assign tc_1_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 78:20]
  assign tc_1_io_in_bits_octet0_threadgroup0_matrix_a_data = io_in_bits_tc1_ot0_tg0_matrix_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 54:{27,27}]
  assign tc_1_io_in_bits_octet0_threadgroup0_matrix_b_data = {ot0_tg0_matrix_b_mat_data_hi_1,
    ot0_tg0_matrix_b_mat_data_lo_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  assign tc_1_io_in_bits_octet0_threadgroup0_matrix_c_data = io_in_bits_tc1_ot0_tg0_matrix_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 54:{27,27}]
  assign tc_1_io_in_bits_octet0_threadgroup4_matrix_a_data = io_in_bits_tc1_ot0_tg4_matrix_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 54:{27,27}]
  assign tc_1_io_in_bits_octet0_threadgroup4_matrix_b_data = {ot0_tg4_matrix_b_mat_data_hi_1,
    ot0_tg4_matrix_b_mat_data_lo_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  assign tc_1_io_in_bits_octet0_threadgroup4_matrix_c_data = io_in_bits_tc1_ot0_tg4_matrix_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 54:{27,27}]
  assign tc_1_io_in_bits_octet1_threadgroup0_matrix_a_data = io_in_bits_tc1_ot1_tg0_matrix_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 54:{27,27}]
  assign tc_1_io_in_bits_octet1_threadgroup0_matrix_b_data = {ot1_tg0_matrix_b_mat_data_hi_1,
    ot1_tg0_matrix_b_mat_data_lo_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  assign tc_1_io_in_bits_octet1_threadgroup0_matrix_c_data = io_in_bits_tc1_ot1_tg0_matrix_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 54:{27,27}]
  assign tc_1_io_in_bits_octet1_threadgroup4_matrix_a_data = io_in_bits_tc1_ot1_tg4_matrix_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 54:{27,27}]
  assign tc_1_io_in_bits_octet1_threadgroup4_matrix_b_data = {ot1_tg4_matrix_b_mat_data_hi_1,
    ot1_tg4_matrix_b_mat_data_lo_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 80:41]
  assign tc_1_io_in_bits_octet1_threadgroup4_matrix_c_data = io_in_bits_tc1_ot1_tg4_matrix_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/Top.scala 54:{27,27}]
  assign tc_1_io_in_bits_ctrl_matBSel = io_in_bits_ctrl_matBSel; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 94:32]
  assign tc_1_io_in_bits_ctrl_mixPcMode = io_in_bits_ctrl_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 95:34]
  assign tc_1_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/TensorCore.scala 97:21]
endmodule
module System(
  input          clock,
  input          reset,
  input          io_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 134:16]
  input          io_exec_en, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 134:16]
  input          io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 134:16]
  output         io_out_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 134:16]
  output [255:0] io_out_bits_tc0_octet0_threadgroup0_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 134:16]
  output [255:0] io_out_bits_tc0_octet0_threadgroup4_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 134:16]
  output [255:0] io_out_bits_tc0_octet1_threadgroup0_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 134:16]
  output [255:0] io_out_bits_tc0_octet1_threadgroup4_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 134:16]
  output [255:0] io_out_bits_tc1_octet0_threadgroup0_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 134:16]
  output [255:0] io_out_bits_tc1_octet0_threadgroup4_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 134:16]
  output [255:0] io_out_bits_tc1_octet1_threadgroup0_matrix_d_data, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 134:16]
  output [255:0] io_out_bits_tc1_octet1_threadgroup4_matrix_d_data // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 134:16]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [255:0] _RAND_4;
  reg [255:0] _RAND_5;
  reg [255:0] _RAND_6;
  reg [255:0] _RAND_7;
  reg [255:0] _RAND_8;
  reg [255:0] _RAND_9;
  reg [255:0] _RAND_10;
  reg [255:0] _RAND_11;
  reg [255:0] _RAND_12;
  reg [255:0] _RAND_13;
  reg [255:0] _RAND_14;
  reg [255:0] _RAND_15;
  reg [255:0] _RAND_16;
  reg [255:0] _RAND_17;
  reg [255:0] _RAND_18;
  reg [255:0] _RAND_19;
  reg [255:0] _RAND_20;
  reg [255:0] _RAND_21;
  reg [255:0] _RAND_22;
  reg [255:0] _RAND_23;
  reg [255:0] _RAND_24;
  reg [255:0] _RAND_25;
  reg [255:0] _RAND_26;
  reg [255:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
`endif // RANDOMIZE_REG_INIT
  wire  top_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire  top_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire  top_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire  top_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc0_ot0_tg0_matrix_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc0_ot0_tg0_matrix_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc0_ot0_tg0_matrix_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc0_ot0_tg4_matrix_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc0_ot0_tg4_matrix_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc0_ot0_tg4_matrix_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc0_ot1_tg0_matrix_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc0_ot1_tg0_matrix_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc0_ot1_tg0_matrix_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc0_ot1_tg4_matrix_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc0_ot1_tg4_matrix_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc0_ot1_tg4_matrix_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc1_ot0_tg0_matrix_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc1_ot0_tg0_matrix_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc1_ot0_tg0_matrix_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc1_ot0_tg4_matrix_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc1_ot0_tg4_matrix_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc1_ot0_tg4_matrix_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc1_ot1_tg0_matrix_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc1_ot1_tg0_matrix_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc1_ot1_tg0_matrix_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc1_ot1_tg4_matrix_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc1_ot1_tg4_matrix_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_in_bits_tc1_ot1_tg4_matrix_c; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire  top_io_in_bits_ctrl_matBSel; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire  top_io_in_bits_ctrl_mixPcMode; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire  top_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire  top_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_out_bits_tc0_octet0_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_out_bits_tc0_octet0_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_out_bits_tc0_octet1_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_out_bits_tc0_octet1_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_out_bits_tc1_octet0_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_out_bits_tc1_octet0_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_out_bits_tc1_octet1_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  wire [255:0] top_io_out_bits_tc1_octet1_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
  reg [63:0] rf [0:255]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_0_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_0_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_0_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_0_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_0_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_0_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_0_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_0_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_0_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_0_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_0_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_0_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_0_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_0_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_0_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_0_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_0_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_0_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_0_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_0_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_0_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_0_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_0_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_0_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_3_MPORT_1_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_3_MPORT_1_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_3_MPORT_1_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_2_MPORT_1_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_2_MPORT_1_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_2_MPORT_1_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_1_MPORT_1_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_1_MPORT_1_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_1_MPORT_1_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_0_MPORT_1_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_0_MPORT_1_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_0_MPORT_1_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_1_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_1_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_1_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_1_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_1_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_1_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_1_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_1_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_1_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_1_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_1_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_1_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_1_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_1_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_1_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_1_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_1_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_1_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_1_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_1_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_1_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_1_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_1_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_1_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_3_MPORT_2_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_3_MPORT_2_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_3_MPORT_2_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_2_MPORT_2_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_2_MPORT_2_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_2_MPORT_2_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_1_MPORT_2_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_1_MPORT_2_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_1_MPORT_2_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_0_MPORT_2_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_0_MPORT_2_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_0_MPORT_2_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_2_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_2_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_2_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_2_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_2_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_2_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_2_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_2_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_2_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_2_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_2_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_2_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_2_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_2_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_2_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_2_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_2_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_2_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_2_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_2_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_2_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_2_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_2_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_2_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_3_MPORT_3_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_3_MPORT_3_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_3_MPORT_3_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_2_MPORT_3_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_2_MPORT_3_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_2_MPORT_3_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_1_MPORT_3_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_1_MPORT_3_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_1_MPORT_3_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_0_MPORT_3_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_0_MPORT_3_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_0_MPORT_3_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_3_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_3_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_3_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_3_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_3_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_3_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_3_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_3_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_3_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_3_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_3_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_3_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_3_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_3_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_3_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_3_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_3_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_3_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_3_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_3_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_3_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_3_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_3_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_3_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_3_MPORT_4_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_3_MPORT_4_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_3_MPORT_4_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_2_MPORT_4_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_2_MPORT_4_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_2_MPORT_4_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_1_MPORT_4_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_1_MPORT_4_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_1_MPORT_4_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_0_MPORT_4_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_0_MPORT_4_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_0_MPORT_4_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_4_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_4_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_4_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_4_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_4_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_4_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_4_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_4_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_4_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_4_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_4_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_4_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_4_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_4_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_4_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_4_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_4_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_4_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_4_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_4_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_4_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_4_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_4_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_4_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_3_MPORT_5_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_3_MPORT_5_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_3_MPORT_5_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_2_MPORT_5_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_2_MPORT_5_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_2_MPORT_5_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_1_MPORT_5_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_1_MPORT_5_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_1_MPORT_5_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_0_MPORT_5_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_0_MPORT_5_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_0_MPORT_5_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_5_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_5_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_5_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_5_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_5_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_5_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_5_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_5_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_5_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_5_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_5_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_5_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_5_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_5_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_5_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_5_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_5_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_5_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_5_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_5_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_5_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_5_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_5_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_5_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_3_MPORT_6_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_3_MPORT_6_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_3_MPORT_6_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_2_MPORT_6_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_2_MPORT_6_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_2_MPORT_6_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_1_MPORT_6_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_1_MPORT_6_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_1_MPORT_6_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_0_MPORT_6_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_0_MPORT_6_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_0_MPORT_6_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_6_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_6_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_6_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_6_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_6_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_6_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_6_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_6_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_6_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_6_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_6_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_6_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_6_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_6_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_6_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_6_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_6_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_6_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_6_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_6_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_6_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_6_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_6_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_6_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_3_MPORT_7_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_3_MPORT_7_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_3_MPORT_7_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_2_MPORT_7_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_2_MPORT_7_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_2_MPORT_7_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_1_MPORT_7_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_1_MPORT_7_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_1_MPORT_7_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_a_tile_v_0_MPORT_7_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_a_tile_v_0_MPORT_7_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_a_tile_v_0_MPORT_7_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_7_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_7_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_7_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_7_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_7_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_7_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_7_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_7_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_7_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_b_7_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_b_7_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_b_7_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_7_tile_v_3_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_7_tile_v_3_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_7_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_7_tile_v_2_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_7_tile_v_2_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_7_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_7_tile_v_1_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_7_tile_v_1_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_7_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_matrix_c_7_tile_v_0_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_matrix_c_7_tile_v_0_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_matrix_c_7_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_1_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_1_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_1_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_1_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_2_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_2_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_2_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_2_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_3_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_3_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_3_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_3_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_4_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_4_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_4_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_4_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_5_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_5_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_5_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_5_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_6_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_6_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_6_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_6_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_7_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_7_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_7_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_7_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_8_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_8_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_8_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_8_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_9_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_9_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_9_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_9_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_10_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_10_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_10_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_10_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_11_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_11_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_11_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_11_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_12_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_12_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_12_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_12_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_13_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_13_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_13_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_13_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_14_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_14_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_14_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_14_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_15_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_15_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_15_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_15_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_16_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_16_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_16_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_16_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_17_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_17_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_17_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_17_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_18_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_18_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_18_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_18_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_19_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_19_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_19_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_19_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_20_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_20_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_20_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_20_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_21_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_21_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_21_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_21_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_22_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_22_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_22_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_22_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_23_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_23_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_23_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_23_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_24_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_24_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_24_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_24_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_25_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_25_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_25_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_25_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_26_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_26_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_26_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_26_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_27_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_27_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_27_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_27_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_28_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_28_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_28_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_28_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_29_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_29_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_29_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_29_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_30_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_30_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_30_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_30_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [63:0] rf_MPORT_31_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [7:0] rf_MPORT_31_addr; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_31_mask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire  rf_MPORT_31_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  wire [1:0] MAX_STEP = io_mixPc ? 2'h3 : 2'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 144:21]
  reg [1:0] set; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 146:20]
  reg [1:0] step; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 147:21]
  reg [1:0] out_set; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 148:24]
  reg [1:0] out_step; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 149:25]
  reg [255:0] matrix_a_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 205:21]
  reg [255:0] matrix_a_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 205:21]
  reg [255:0] matrix_a_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 205:21]
  reg [255:0] matrix_a_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 205:21]
  reg [255:0] matrix_a_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 205:21]
  reg [255:0] matrix_a_5; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 205:21]
  reg [255:0] matrix_a_6; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 205:21]
  reg [255:0] matrix_a_7; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 205:21]
  reg [255:0] matrix_b_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 206:21]
  reg [255:0] matrix_b_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 206:21]
  reg [255:0] matrix_b_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 206:21]
  reg [255:0] matrix_b_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 206:21]
  reg [255:0] matrix_b_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 206:21]
  reg [255:0] matrix_b_5; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 206:21]
  reg [255:0] matrix_b_6; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 206:21]
  reg [255:0] matrix_b_7; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 206:21]
  reg [255:0] matrix_c_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 207:21]
  reg [255:0] matrix_c_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 207:21]
  reg [255:0] matrix_c_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 207:21]
  reg [255:0] matrix_c_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 207:21]
  reg [255:0] matrix_c_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 207:21]
  reg [255:0] matrix_c_5; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 207:21]
  reg [255:0] matrix_c_6; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 207:21]
  reg [255:0] matrix_c_7; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 207:21]
  reg  matBsel; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 208:20]
  wire [1:0] _in_valid_T_2 = set - 2'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 258:58]
  wire  in_valid = out_set == set | out_set == _in_valid_T_2 & out_step > step & io_exec_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 258:36]
  reg  top_io_in_valid_REG; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 259:29]
  wire  handshaked = in_valid & top_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 260:29]
  wire [63:0] a_tile_v__3 = rf_a_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v__2 = rf_a_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v__1 = rf_a_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v__0 = rf_a_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] a = {a_tile_v__3,a_tile_v__2,a_tile_v__1,a_tile_v__0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [383:0] _matrix_a_0_T = {a_tile_v__3,a_tile_v__2,a_tile_v__1,a_tile_v__0,128'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 271:36]
  wire [383:0] _matrix_a_0_T_1 = io_mixPc ? _matrix_a_0_T : {{128'd0}, a}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 271:25]
  wire [63:0] matrix_b_0_tile_v_3 = rf_matrix_b_0_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_0_tile_v_2 = rf_matrix_b_0_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_0_tile_v_1 = rf_matrix_b_0_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_0_tile_v_0 = rf_matrix_b_0_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] _matrix_b_0_T = {matrix_b_0_tile_v_3,matrix_b_0_tile_v_2,matrix_b_0_tile_v_1,matrix_b_0_tile_v_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [63:0] matrix_c_0_tile_v_3 = rf_matrix_c_0_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_0_tile_v_2 = rf_matrix_c_0_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_0_tile_v_1 = rf_matrix_c_0_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_0_tile_v_0 = rf_matrix_c_0_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] _matrix_c_0_T = {matrix_c_0_tile_v_3,matrix_c_0_tile_v_2,matrix_c_0_tile_v_1,matrix_c_0_tile_v_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [63:0] a_tile_v_1_3 = rf_a_tile_v_3_MPORT_1_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_1_2 = rf_a_tile_v_2_MPORT_1_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_1_1 = rf_a_tile_v_1_MPORT_1_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_1_0 = rf_a_tile_v_0_MPORT_1_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] a_1 = {a_tile_v_1_3,a_tile_v_1_2,a_tile_v_1_1,a_tile_v_1_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [383:0] _matrix_a_1_T = {a_tile_v_1_3,a_tile_v_1_2,a_tile_v_1_1,a_tile_v_1_0,128'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 271:36]
  wire [383:0] _matrix_a_1_T_1 = io_mixPc ? _matrix_a_1_T : {{128'd0}, a_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 271:25]
  wire [63:0] matrix_b_1_tile_v_3 = rf_matrix_b_1_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_1_tile_v_2 = rf_matrix_b_1_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_1_tile_v_1 = rf_matrix_b_1_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_1_tile_v_0 = rf_matrix_b_1_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] _matrix_b_1_T = {matrix_b_1_tile_v_3,matrix_b_1_tile_v_2,matrix_b_1_tile_v_1,matrix_b_1_tile_v_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [63:0] matrix_c_1_tile_v_3 = rf_matrix_c_1_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_1_tile_v_2 = rf_matrix_c_1_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_1_tile_v_1 = rf_matrix_c_1_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_1_tile_v_0 = rf_matrix_c_1_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] _matrix_c_1_T = {matrix_c_1_tile_v_3,matrix_c_1_tile_v_2,matrix_c_1_tile_v_1,matrix_c_1_tile_v_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [63:0] a_tile_v_2_3 = rf_a_tile_v_3_MPORT_2_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_2_2 = rf_a_tile_v_2_MPORT_2_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_2_1 = rf_a_tile_v_1_MPORT_2_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_2_0 = rf_a_tile_v_0_MPORT_2_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] a_2 = {a_tile_v_2_3,a_tile_v_2_2,a_tile_v_2_1,a_tile_v_2_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [383:0] _matrix_a_2_T = {a_tile_v_2_3,a_tile_v_2_2,a_tile_v_2_1,a_tile_v_2_0,128'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 271:36]
  wire [383:0] _matrix_a_2_T_1 = io_mixPc ? _matrix_a_2_T : {{128'd0}, a_2}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 271:25]
  wire [63:0] matrix_b_2_tile_v_3 = rf_matrix_b_2_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_2_tile_v_2 = rf_matrix_b_2_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_2_tile_v_1 = rf_matrix_b_2_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_2_tile_v_0 = rf_matrix_b_2_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] _matrix_b_2_T = {matrix_b_2_tile_v_3,matrix_b_2_tile_v_2,matrix_b_2_tile_v_1,matrix_b_2_tile_v_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [63:0] matrix_c_2_tile_v_3 = rf_matrix_c_2_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_2_tile_v_2 = rf_matrix_c_2_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_2_tile_v_1 = rf_matrix_c_2_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_2_tile_v_0 = rf_matrix_c_2_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] _matrix_c_2_T = {matrix_c_2_tile_v_3,matrix_c_2_tile_v_2,matrix_c_2_tile_v_1,matrix_c_2_tile_v_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [63:0] a_tile_v_3_3 = rf_a_tile_v_3_MPORT_3_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_3_2 = rf_a_tile_v_2_MPORT_3_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_3_1 = rf_a_tile_v_1_MPORT_3_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_3_0 = rf_a_tile_v_0_MPORT_3_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] a_3 = {a_tile_v_3_3,a_tile_v_3_2,a_tile_v_3_1,a_tile_v_3_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [383:0] _matrix_a_3_T = {a_tile_v_3_3,a_tile_v_3_2,a_tile_v_3_1,a_tile_v_3_0,128'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 271:36]
  wire [383:0] _matrix_a_3_T_1 = io_mixPc ? _matrix_a_3_T : {{128'd0}, a_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 271:25]
  wire [63:0] matrix_b_3_tile_v_3 = rf_matrix_b_3_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_3_tile_v_2 = rf_matrix_b_3_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_3_tile_v_1 = rf_matrix_b_3_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_3_tile_v_0 = rf_matrix_b_3_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] _matrix_b_3_T = {matrix_b_3_tile_v_3,matrix_b_3_tile_v_2,matrix_b_3_tile_v_1,matrix_b_3_tile_v_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [63:0] matrix_c_3_tile_v_3 = rf_matrix_c_3_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_3_tile_v_2 = rf_matrix_c_3_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_3_tile_v_1 = rf_matrix_c_3_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_3_tile_v_0 = rf_matrix_c_3_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] _matrix_c_3_T = {matrix_c_3_tile_v_3,matrix_c_3_tile_v_2,matrix_c_3_tile_v_1,matrix_c_3_tile_v_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [63:0] a_tile_v_4_3 = rf_a_tile_v_3_MPORT_4_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_4_2 = rf_a_tile_v_2_MPORT_4_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_4_1 = rf_a_tile_v_1_MPORT_4_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_4_0 = rf_a_tile_v_0_MPORT_4_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] a_4 = {a_tile_v_4_3,a_tile_v_4_2,a_tile_v_4_1,a_tile_v_4_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [383:0] _matrix_a_4_T = {a_tile_v_4_3,a_tile_v_4_2,a_tile_v_4_1,a_tile_v_4_0,128'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 271:36]
  wire [383:0] _matrix_a_4_T_1 = io_mixPc ? _matrix_a_4_T : {{128'd0}, a_4}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 271:25]
  wire [63:0] matrix_b_4_tile_v_3 = rf_matrix_b_4_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_4_tile_v_2 = rf_matrix_b_4_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_4_tile_v_1 = rf_matrix_b_4_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_4_tile_v_0 = rf_matrix_b_4_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] _matrix_b_4_T = {matrix_b_4_tile_v_3,matrix_b_4_tile_v_2,matrix_b_4_tile_v_1,matrix_b_4_tile_v_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [63:0] matrix_c_4_tile_v_3 = rf_matrix_c_4_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_4_tile_v_2 = rf_matrix_c_4_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_4_tile_v_1 = rf_matrix_c_4_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_4_tile_v_0 = rf_matrix_c_4_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] _matrix_c_4_T = {matrix_c_4_tile_v_3,matrix_c_4_tile_v_2,matrix_c_4_tile_v_1,matrix_c_4_tile_v_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [63:0] a_tile_v_5_3 = rf_a_tile_v_3_MPORT_5_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_5_2 = rf_a_tile_v_2_MPORT_5_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_5_1 = rf_a_tile_v_1_MPORT_5_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_5_0 = rf_a_tile_v_0_MPORT_5_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] a_5 = {a_tile_v_5_3,a_tile_v_5_2,a_tile_v_5_1,a_tile_v_5_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [383:0] _matrix_a_5_T = {a_tile_v_5_3,a_tile_v_5_2,a_tile_v_5_1,a_tile_v_5_0,128'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 271:36]
  wire [383:0] _matrix_a_5_T_1 = io_mixPc ? _matrix_a_5_T : {{128'd0}, a_5}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 271:25]
  wire [63:0] matrix_b_5_tile_v_3 = rf_matrix_b_5_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_5_tile_v_2 = rf_matrix_b_5_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_5_tile_v_1 = rf_matrix_b_5_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_5_tile_v_0 = rf_matrix_b_5_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] _matrix_b_5_T = {matrix_b_5_tile_v_3,matrix_b_5_tile_v_2,matrix_b_5_tile_v_1,matrix_b_5_tile_v_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [63:0] matrix_c_5_tile_v_3 = rf_matrix_c_5_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_5_tile_v_2 = rf_matrix_c_5_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_5_tile_v_1 = rf_matrix_c_5_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_5_tile_v_0 = rf_matrix_c_5_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] _matrix_c_5_T = {matrix_c_5_tile_v_3,matrix_c_5_tile_v_2,matrix_c_5_tile_v_1,matrix_c_5_tile_v_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [63:0] a_tile_v_6_3 = rf_a_tile_v_3_MPORT_6_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_6_2 = rf_a_tile_v_2_MPORT_6_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_6_1 = rf_a_tile_v_1_MPORT_6_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_6_0 = rf_a_tile_v_0_MPORT_6_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] a_6 = {a_tile_v_6_3,a_tile_v_6_2,a_tile_v_6_1,a_tile_v_6_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [383:0] _matrix_a_6_T = {a_tile_v_6_3,a_tile_v_6_2,a_tile_v_6_1,a_tile_v_6_0,128'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 271:36]
  wire [383:0] _matrix_a_6_T_1 = io_mixPc ? _matrix_a_6_T : {{128'd0}, a_6}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 271:25]
  wire [63:0] matrix_b_6_tile_v_3 = rf_matrix_b_6_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_6_tile_v_2 = rf_matrix_b_6_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_6_tile_v_1 = rf_matrix_b_6_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_6_tile_v_0 = rf_matrix_b_6_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] _matrix_b_6_T = {matrix_b_6_tile_v_3,matrix_b_6_tile_v_2,matrix_b_6_tile_v_1,matrix_b_6_tile_v_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [63:0] matrix_c_6_tile_v_3 = rf_matrix_c_6_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_6_tile_v_2 = rf_matrix_c_6_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_6_tile_v_1 = rf_matrix_c_6_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_6_tile_v_0 = rf_matrix_c_6_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] _matrix_c_6_T = {matrix_c_6_tile_v_3,matrix_c_6_tile_v_2,matrix_c_6_tile_v_1,matrix_c_6_tile_v_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [63:0] a_tile_v_7_3 = rf_a_tile_v_3_MPORT_7_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_7_2 = rf_a_tile_v_2_MPORT_7_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_7_1 = rf_a_tile_v_1_MPORT_7_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] a_tile_v_7_0 = rf_a_tile_v_0_MPORT_7_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] a_7 = {a_tile_v_7_3,a_tile_v_7_2,a_tile_v_7_1,a_tile_v_7_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [383:0] _matrix_a_7_T = {a_tile_v_7_3,a_tile_v_7_2,a_tile_v_7_1,a_tile_v_7_0,128'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 271:36]
  wire [383:0] _matrix_a_7_T_1 = io_mixPc ? _matrix_a_7_T : {{128'd0}, a_7}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 271:25]
  wire [63:0] matrix_b_7_tile_v_3 = rf_matrix_b_7_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_7_tile_v_2 = rf_matrix_b_7_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_7_tile_v_1 = rf_matrix_b_7_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_b_7_tile_v_0 = rf_matrix_b_7_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] _matrix_b_7_T = {matrix_b_7_tile_v_3,matrix_b_7_tile_v_2,matrix_b_7_tile_v_1,matrix_b_7_tile_v_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [63:0] matrix_c_7_tile_v_3 = rf_matrix_c_7_tile_v_3_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_7_tile_v_2 = rf_matrix_c_7_tile_v_2_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_7_tile_v_1 = rf_matrix_c_7_tile_v_1_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [63:0] matrix_c_7_tile_v_0 = rf_matrix_c_7_tile_v_0_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 11:35]
  wire [255:0] _matrix_c_7_T = {matrix_c_7_tile_v_3,matrix_c_7_tile_v_2,matrix_c_7_tile_v_1,matrix_c_7_tile_v_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 89:12]
  wire [1:0] _set_T_1 = set + 2'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 277:18]
  wire [1:0] _step_T_1 = step + 2'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 279:18]
  wire [383:0] _GEN_9 = handshaked ? _matrix_a_0_T_1 : {{128'd0}, matrix_a_0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19 271:19 205:21]
  wire [383:0] _GEN_24 = handshaked ? _matrix_a_1_T_1 : {{128'd0}, matrix_a_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19 271:19 205:21]
  wire [383:0] _GEN_31 = handshaked ? _matrix_a_2_T_1 : {{128'd0}, matrix_a_2}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19 271:19 205:21]
  wire [383:0] _GEN_42 = handshaked ? _matrix_a_3_T_1 : {{128'd0}, matrix_a_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19 271:19 205:21]
  wire [383:0] _GEN_53 = handshaked ? _matrix_a_4_T_1 : {{128'd0}, matrix_a_4}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19 271:19 205:21]
  wire [383:0] _GEN_68 = handshaked ? _matrix_a_5_T_1 : {{128'd0}, matrix_a_5}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19 271:19 205:21]
  wire [383:0] _GEN_75 = handshaked ? _matrix_a_6_T_1 : {{128'd0}, matrix_a_6}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19 271:19 205:21]
  wire [383:0] _GEN_86 = handshaked ? _matrix_a_7_T_1 : {{128'd0}, matrix_a_7}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19 271:19 205:21]
  wire  _T_15 = top_io_out_valid & top_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 282:26]
  wire  _T_48 = out_step == MAX_STEP; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 292:19]
  wire [1:0] _out_set_T_1 = out_set + 2'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 293:26]
  wire [1:0] _out_step_T_1 = out_step + 2'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 295:26]
  Top top ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 210:19]
    .clock(top_clock),
    .reset(top_reset),
    .io_in_ready(top_io_in_ready),
    .io_in_valid(top_io_in_valid),
    .io_in_bits_tc0_ot0_tg0_matrix_a(top_io_in_bits_tc0_ot0_tg0_matrix_a),
    .io_in_bits_tc0_ot0_tg0_matrix_b(top_io_in_bits_tc0_ot0_tg0_matrix_b),
    .io_in_bits_tc0_ot0_tg0_matrix_c(top_io_in_bits_tc0_ot0_tg0_matrix_c),
    .io_in_bits_tc0_ot0_tg4_matrix_a(top_io_in_bits_tc0_ot0_tg4_matrix_a),
    .io_in_bits_tc0_ot0_tg4_matrix_b(top_io_in_bits_tc0_ot0_tg4_matrix_b),
    .io_in_bits_tc0_ot0_tg4_matrix_c(top_io_in_bits_tc0_ot0_tg4_matrix_c),
    .io_in_bits_tc0_ot1_tg0_matrix_a(top_io_in_bits_tc0_ot1_tg0_matrix_a),
    .io_in_bits_tc0_ot1_tg0_matrix_b(top_io_in_bits_tc0_ot1_tg0_matrix_b),
    .io_in_bits_tc0_ot1_tg0_matrix_c(top_io_in_bits_tc0_ot1_tg0_matrix_c),
    .io_in_bits_tc0_ot1_tg4_matrix_a(top_io_in_bits_tc0_ot1_tg4_matrix_a),
    .io_in_bits_tc0_ot1_tg4_matrix_b(top_io_in_bits_tc0_ot1_tg4_matrix_b),
    .io_in_bits_tc0_ot1_tg4_matrix_c(top_io_in_bits_tc0_ot1_tg4_matrix_c),
    .io_in_bits_tc1_ot0_tg0_matrix_a(top_io_in_bits_tc1_ot0_tg0_matrix_a),
    .io_in_bits_tc1_ot0_tg0_matrix_b(top_io_in_bits_tc1_ot0_tg0_matrix_b),
    .io_in_bits_tc1_ot0_tg0_matrix_c(top_io_in_bits_tc1_ot0_tg0_matrix_c),
    .io_in_bits_tc1_ot0_tg4_matrix_a(top_io_in_bits_tc1_ot0_tg4_matrix_a),
    .io_in_bits_tc1_ot0_tg4_matrix_b(top_io_in_bits_tc1_ot0_tg4_matrix_b),
    .io_in_bits_tc1_ot0_tg4_matrix_c(top_io_in_bits_tc1_ot0_tg4_matrix_c),
    .io_in_bits_tc1_ot1_tg0_matrix_a(top_io_in_bits_tc1_ot1_tg0_matrix_a),
    .io_in_bits_tc1_ot1_tg0_matrix_b(top_io_in_bits_tc1_ot1_tg0_matrix_b),
    .io_in_bits_tc1_ot1_tg0_matrix_c(top_io_in_bits_tc1_ot1_tg0_matrix_c),
    .io_in_bits_tc1_ot1_tg4_matrix_a(top_io_in_bits_tc1_ot1_tg4_matrix_a),
    .io_in_bits_tc1_ot1_tg4_matrix_b(top_io_in_bits_tc1_ot1_tg4_matrix_b),
    .io_in_bits_tc1_ot1_tg4_matrix_c(top_io_in_bits_tc1_ot1_tg4_matrix_c),
    .io_in_bits_ctrl_matBSel(top_io_in_bits_ctrl_matBSel),
    .io_in_bits_ctrl_mixPcMode(top_io_in_bits_ctrl_mixPcMode),
    .io_out_ready(top_io_out_ready),
    .io_out_valid(top_io_out_valid),
    .io_out_bits_tc0_octet0_threadgroup0_matrix_d_data(top_io_out_bits_tc0_octet0_threadgroup0_matrix_d_data),
    .io_out_bits_tc0_octet0_threadgroup4_matrix_d_data(top_io_out_bits_tc0_octet0_threadgroup4_matrix_d_data),
    .io_out_bits_tc0_octet1_threadgroup0_matrix_d_data(top_io_out_bits_tc0_octet1_threadgroup0_matrix_d_data),
    .io_out_bits_tc0_octet1_threadgroup4_matrix_d_data(top_io_out_bits_tc0_octet1_threadgroup4_matrix_d_data),
    .io_out_bits_tc1_octet0_threadgroup0_matrix_d_data(top_io_out_bits_tc1_octet0_threadgroup0_matrix_d_data),
    .io_out_bits_tc1_octet0_threadgroup4_matrix_d_data(top_io_out_bits_tc1_octet0_threadgroup4_matrix_d_data),
    .io_out_bits_tc1_octet1_threadgroup0_matrix_d_data(top_io_out_bits_tc1_octet1_threadgroup0_matrix_d_data),
    .io_out_bits_tc1_octet1_threadgroup4_matrix_d_data(top_io_out_bits_tc1_octet1_threadgroup4_matrix_d_data)
  );
  assign rf_a_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_3_MPORT_addr = 8'h3;
  assign rf_a_tile_v_3_MPORT_data = rf[rf_a_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_2_MPORT_addr = 8'h7;
  assign rf_a_tile_v_2_MPORT_data = rf[rf_a_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_1_MPORT_addr = 8'hb;
  assign rf_a_tile_v_1_MPORT_data = rf[rf_a_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_0_MPORT_addr = 8'hf;
  assign rf_a_tile_v_0_MPORT_data = rf[rf_a_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_0_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_0_tile_v_3_MPORT_addr = 8'h70;
  assign rf_matrix_b_0_tile_v_3_MPORT_data = rf[rf_matrix_b_0_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_0_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_0_tile_v_2_MPORT_addr = 8'h74;
  assign rf_matrix_b_0_tile_v_2_MPORT_data = rf[rf_matrix_b_0_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_0_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_0_tile_v_1_MPORT_addr = 8'h78;
  assign rf_matrix_b_0_tile_v_1_MPORT_data = rf[rf_matrix_b_0_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_0_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_0_tile_v_0_MPORT_addr = 8'h7c;
  assign rf_matrix_b_0_tile_v_0_MPORT_data = rf[rf_matrix_b_0_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_0_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_0_tile_v_3_MPORT_addr = 8'h81;
  assign rf_matrix_c_0_tile_v_3_MPORT_data = rf[rf_matrix_c_0_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_0_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_0_tile_v_2_MPORT_addr = 8'h85;
  assign rf_matrix_c_0_tile_v_2_MPORT_data = rf[rf_matrix_c_0_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_0_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_0_tile_v_1_MPORT_addr = 8'h89;
  assign rf_matrix_c_0_tile_v_1_MPORT_data = rf[rf_matrix_c_0_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_0_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_0_tile_v_0_MPORT_addr = 8'h8d;
  assign rf_matrix_c_0_tile_v_0_MPORT_data = rf[rf_matrix_c_0_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_3_MPORT_1_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_3_MPORT_1_addr = 8'h23;
  assign rf_a_tile_v_3_MPORT_1_data = rf[rf_a_tile_v_3_MPORT_1_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_2_MPORT_1_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_2_MPORT_1_addr = 8'h27;
  assign rf_a_tile_v_2_MPORT_1_data = rf[rf_a_tile_v_2_MPORT_1_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_1_MPORT_1_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_1_MPORT_1_addr = 8'h2b;
  assign rf_a_tile_v_1_MPORT_1_data = rf[rf_a_tile_v_1_MPORT_1_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_0_MPORT_1_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_0_MPORT_1_addr = 8'h2f;
  assign rf_a_tile_v_0_MPORT_1_data = rf[rf_a_tile_v_0_MPORT_1_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_1_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_1_tile_v_3_MPORT_addr = 8'h70;
  assign rf_matrix_b_1_tile_v_3_MPORT_data = rf[rf_matrix_b_1_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_1_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_1_tile_v_2_MPORT_addr = 8'h74;
  assign rf_matrix_b_1_tile_v_2_MPORT_data = rf[rf_matrix_b_1_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_1_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_1_tile_v_1_MPORT_addr = 8'h78;
  assign rf_matrix_b_1_tile_v_1_MPORT_data = rf[rf_matrix_b_1_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_1_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_1_tile_v_0_MPORT_addr = 8'h7c;
  assign rf_matrix_b_1_tile_v_0_MPORT_data = rf[rf_matrix_b_1_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_1_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_1_tile_v_3_MPORT_addr = 8'ha1;
  assign rf_matrix_c_1_tile_v_3_MPORT_data = rf[rf_matrix_c_1_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_1_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_1_tile_v_2_MPORT_addr = 8'ha5;
  assign rf_matrix_c_1_tile_v_2_MPORT_data = rf[rf_matrix_c_1_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_1_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_1_tile_v_1_MPORT_addr = 8'ha9;
  assign rf_matrix_c_1_tile_v_1_MPORT_data = rf[rf_matrix_c_1_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_1_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_1_tile_v_0_MPORT_addr = 8'had;
  assign rf_matrix_c_1_tile_v_0_MPORT_data = rf[rf_matrix_c_1_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_3_MPORT_2_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_3_MPORT_2_addr = 8'h3;
  assign rf_a_tile_v_3_MPORT_2_data = rf[rf_a_tile_v_3_MPORT_2_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_2_MPORT_2_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_2_MPORT_2_addr = 8'h7;
  assign rf_a_tile_v_2_MPORT_2_data = rf[rf_a_tile_v_2_MPORT_2_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_1_MPORT_2_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_1_MPORT_2_addr = 8'hb;
  assign rf_a_tile_v_1_MPORT_2_data = rf[rf_a_tile_v_1_MPORT_2_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_0_MPORT_2_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_0_MPORT_2_addr = 8'hf;
  assign rf_a_tile_v_0_MPORT_2_data = rf[rf_a_tile_v_0_MPORT_2_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_2_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_2_tile_v_3_MPORT_addr = 8'h72;
  assign rf_matrix_b_2_tile_v_3_MPORT_data = rf[rf_matrix_b_2_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_2_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_2_tile_v_2_MPORT_addr = 8'h76;
  assign rf_matrix_b_2_tile_v_2_MPORT_data = rf[rf_matrix_b_2_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_2_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_2_tile_v_1_MPORT_addr = 8'h7a;
  assign rf_matrix_b_2_tile_v_1_MPORT_data = rf[rf_matrix_b_2_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_2_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_2_tile_v_0_MPORT_addr = 8'h7e;
  assign rf_matrix_b_2_tile_v_0_MPORT_data = rf[rf_matrix_b_2_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_2_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_2_tile_v_3_MPORT_addr = 8'h83;
  assign rf_matrix_c_2_tile_v_3_MPORT_data = rf[rf_matrix_c_2_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_2_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_2_tile_v_2_MPORT_addr = 8'h87;
  assign rf_matrix_c_2_tile_v_2_MPORT_data = rf[rf_matrix_c_2_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_2_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_2_tile_v_1_MPORT_addr = 8'h8b;
  assign rf_matrix_c_2_tile_v_1_MPORT_data = rf[rf_matrix_c_2_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_2_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_2_tile_v_0_MPORT_addr = 8'h8f;
  assign rf_matrix_c_2_tile_v_0_MPORT_data = rf[rf_matrix_c_2_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_3_MPORT_3_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_3_MPORT_3_addr = 8'h23;
  assign rf_a_tile_v_3_MPORT_3_data = rf[rf_a_tile_v_3_MPORT_3_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_2_MPORT_3_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_2_MPORT_3_addr = 8'h27;
  assign rf_a_tile_v_2_MPORT_3_data = rf[rf_a_tile_v_2_MPORT_3_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_1_MPORT_3_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_1_MPORT_3_addr = 8'h2b;
  assign rf_a_tile_v_1_MPORT_3_data = rf[rf_a_tile_v_1_MPORT_3_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_0_MPORT_3_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_0_MPORT_3_addr = 8'h2f;
  assign rf_a_tile_v_0_MPORT_3_data = rf[rf_a_tile_v_0_MPORT_3_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_3_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_3_tile_v_3_MPORT_addr = 8'h72;
  assign rf_matrix_b_3_tile_v_3_MPORT_data = rf[rf_matrix_b_3_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_3_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_3_tile_v_2_MPORT_addr = 8'h76;
  assign rf_matrix_b_3_tile_v_2_MPORT_data = rf[rf_matrix_b_3_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_3_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_3_tile_v_1_MPORT_addr = 8'h7a;
  assign rf_matrix_b_3_tile_v_1_MPORT_data = rf[rf_matrix_b_3_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_3_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_3_tile_v_0_MPORT_addr = 8'h7e;
  assign rf_matrix_b_3_tile_v_0_MPORT_data = rf[rf_matrix_b_3_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_3_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_3_tile_v_3_MPORT_addr = 8'ha3;
  assign rf_matrix_c_3_tile_v_3_MPORT_data = rf[rf_matrix_c_3_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_3_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_3_tile_v_2_MPORT_addr = 8'ha7;
  assign rf_matrix_c_3_tile_v_2_MPORT_data = rf[rf_matrix_c_3_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_3_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_3_tile_v_1_MPORT_addr = 8'hab;
  assign rf_matrix_c_3_tile_v_1_MPORT_data = rf[rf_matrix_c_3_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_3_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_3_tile_v_0_MPORT_addr = 8'haf;
  assign rf_matrix_c_3_tile_v_0_MPORT_data = rf[rf_matrix_c_3_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_3_MPORT_4_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_3_MPORT_4_addr = 8'h13;
  assign rf_a_tile_v_3_MPORT_4_data = rf[rf_a_tile_v_3_MPORT_4_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_2_MPORT_4_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_2_MPORT_4_addr = 8'h17;
  assign rf_a_tile_v_2_MPORT_4_data = rf[rf_a_tile_v_2_MPORT_4_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_1_MPORT_4_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_1_MPORT_4_addr = 8'h1b;
  assign rf_a_tile_v_1_MPORT_4_data = rf[rf_a_tile_v_1_MPORT_4_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_0_MPORT_4_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_0_MPORT_4_addr = 8'h1f;
  assign rf_a_tile_v_0_MPORT_4_data = rf[rf_a_tile_v_0_MPORT_4_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_4_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_4_tile_v_3_MPORT_addr = 8'h71;
  assign rf_matrix_b_4_tile_v_3_MPORT_data = rf[rf_matrix_b_4_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_4_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_4_tile_v_2_MPORT_addr = 8'h75;
  assign rf_matrix_b_4_tile_v_2_MPORT_data = rf[rf_matrix_b_4_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_4_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_4_tile_v_1_MPORT_addr = 8'h79;
  assign rf_matrix_b_4_tile_v_1_MPORT_data = rf[rf_matrix_b_4_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_4_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_4_tile_v_0_MPORT_addr = 8'h7d;
  assign rf_matrix_b_4_tile_v_0_MPORT_data = rf[rf_matrix_b_4_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_4_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_4_tile_v_3_MPORT_addr = 8'h91;
  assign rf_matrix_c_4_tile_v_3_MPORT_data = rf[rf_matrix_c_4_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_4_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_4_tile_v_2_MPORT_addr = 8'h95;
  assign rf_matrix_c_4_tile_v_2_MPORT_data = rf[rf_matrix_c_4_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_4_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_4_tile_v_1_MPORT_addr = 8'h99;
  assign rf_matrix_c_4_tile_v_1_MPORT_data = rf[rf_matrix_c_4_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_4_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_4_tile_v_0_MPORT_addr = 8'h9d;
  assign rf_matrix_c_4_tile_v_0_MPORT_data = rf[rf_matrix_c_4_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_3_MPORT_5_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_3_MPORT_5_addr = 8'h33;
  assign rf_a_tile_v_3_MPORT_5_data = rf[rf_a_tile_v_3_MPORT_5_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_2_MPORT_5_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_2_MPORT_5_addr = 8'h37;
  assign rf_a_tile_v_2_MPORT_5_data = rf[rf_a_tile_v_2_MPORT_5_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_1_MPORT_5_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_1_MPORT_5_addr = 8'h3b;
  assign rf_a_tile_v_1_MPORT_5_data = rf[rf_a_tile_v_1_MPORT_5_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_0_MPORT_5_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_0_MPORT_5_addr = 8'h3f;
  assign rf_a_tile_v_0_MPORT_5_data = rf[rf_a_tile_v_0_MPORT_5_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_5_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_5_tile_v_3_MPORT_addr = 8'h71;
  assign rf_matrix_b_5_tile_v_3_MPORT_data = rf[rf_matrix_b_5_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_5_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_5_tile_v_2_MPORT_addr = 8'h75;
  assign rf_matrix_b_5_tile_v_2_MPORT_data = rf[rf_matrix_b_5_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_5_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_5_tile_v_1_MPORT_addr = 8'h79;
  assign rf_matrix_b_5_tile_v_1_MPORT_data = rf[rf_matrix_b_5_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_5_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_5_tile_v_0_MPORT_addr = 8'h7d;
  assign rf_matrix_b_5_tile_v_0_MPORT_data = rf[rf_matrix_b_5_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_5_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_5_tile_v_3_MPORT_addr = 8'hb1;
  assign rf_matrix_c_5_tile_v_3_MPORT_data = rf[rf_matrix_c_5_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_5_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_5_tile_v_2_MPORT_addr = 8'hb5;
  assign rf_matrix_c_5_tile_v_2_MPORT_data = rf[rf_matrix_c_5_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_5_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_5_tile_v_1_MPORT_addr = 8'hb9;
  assign rf_matrix_c_5_tile_v_1_MPORT_data = rf[rf_matrix_c_5_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_5_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_5_tile_v_0_MPORT_addr = 8'hbd;
  assign rf_matrix_c_5_tile_v_0_MPORT_data = rf[rf_matrix_c_5_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_3_MPORT_6_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_3_MPORT_6_addr = 8'h13;
  assign rf_a_tile_v_3_MPORT_6_data = rf[rf_a_tile_v_3_MPORT_6_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_2_MPORT_6_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_2_MPORT_6_addr = 8'h17;
  assign rf_a_tile_v_2_MPORT_6_data = rf[rf_a_tile_v_2_MPORT_6_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_1_MPORT_6_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_1_MPORT_6_addr = 8'h1b;
  assign rf_a_tile_v_1_MPORT_6_data = rf[rf_a_tile_v_1_MPORT_6_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_0_MPORT_6_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_0_MPORT_6_addr = 8'h1f;
  assign rf_a_tile_v_0_MPORT_6_data = rf[rf_a_tile_v_0_MPORT_6_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_6_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_6_tile_v_3_MPORT_addr = 8'h73;
  assign rf_matrix_b_6_tile_v_3_MPORT_data = rf[rf_matrix_b_6_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_6_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_6_tile_v_2_MPORT_addr = 8'h77;
  assign rf_matrix_b_6_tile_v_2_MPORT_data = rf[rf_matrix_b_6_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_6_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_6_tile_v_1_MPORT_addr = 8'h7b;
  assign rf_matrix_b_6_tile_v_1_MPORT_data = rf[rf_matrix_b_6_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_6_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_6_tile_v_0_MPORT_addr = 8'h7f;
  assign rf_matrix_b_6_tile_v_0_MPORT_data = rf[rf_matrix_b_6_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_6_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_6_tile_v_3_MPORT_addr = 8'h93;
  assign rf_matrix_c_6_tile_v_3_MPORT_data = rf[rf_matrix_c_6_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_6_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_6_tile_v_2_MPORT_addr = 8'h97;
  assign rf_matrix_c_6_tile_v_2_MPORT_data = rf[rf_matrix_c_6_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_6_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_6_tile_v_1_MPORT_addr = 8'h9b;
  assign rf_matrix_c_6_tile_v_1_MPORT_data = rf[rf_matrix_c_6_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_6_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_6_tile_v_0_MPORT_addr = 8'h9f;
  assign rf_matrix_c_6_tile_v_0_MPORT_data = rf[rf_matrix_c_6_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_3_MPORT_7_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_3_MPORT_7_addr = 8'h33;
  assign rf_a_tile_v_3_MPORT_7_data = rf[rf_a_tile_v_3_MPORT_7_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_2_MPORT_7_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_2_MPORT_7_addr = 8'h37;
  assign rf_a_tile_v_2_MPORT_7_data = rf[rf_a_tile_v_2_MPORT_7_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_1_MPORT_7_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_1_MPORT_7_addr = 8'h3b;
  assign rf_a_tile_v_1_MPORT_7_data = rf[rf_a_tile_v_1_MPORT_7_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_a_tile_v_0_MPORT_7_en = in_valid & top_io_in_ready;
  assign rf_a_tile_v_0_MPORT_7_addr = 8'h3f;
  assign rf_a_tile_v_0_MPORT_7_data = rf[rf_a_tile_v_0_MPORT_7_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_7_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_7_tile_v_3_MPORT_addr = 8'h73;
  assign rf_matrix_b_7_tile_v_3_MPORT_data = rf[rf_matrix_b_7_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_7_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_7_tile_v_2_MPORT_addr = 8'h77;
  assign rf_matrix_b_7_tile_v_2_MPORT_data = rf[rf_matrix_b_7_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_7_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_7_tile_v_1_MPORT_addr = 8'h7b;
  assign rf_matrix_b_7_tile_v_1_MPORT_data = rf[rf_matrix_b_7_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_b_7_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_b_7_tile_v_0_MPORT_addr = 8'h7f;
  assign rf_matrix_b_7_tile_v_0_MPORT_data = rf[rf_matrix_b_7_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_7_tile_v_3_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_7_tile_v_3_MPORT_addr = 8'hb3;
  assign rf_matrix_c_7_tile_v_3_MPORT_data = rf[rf_matrix_c_7_tile_v_3_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_7_tile_v_2_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_7_tile_v_2_MPORT_addr = 8'hb7;
  assign rf_matrix_c_7_tile_v_2_MPORT_data = rf[rf_matrix_c_7_tile_v_2_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_7_tile_v_1_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_7_tile_v_1_MPORT_addr = 8'hbb;
  assign rf_matrix_c_7_tile_v_1_MPORT_data = rf[rf_matrix_c_7_tile_v_1_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_matrix_c_7_tile_v_0_MPORT_en = in_valid & top_io_in_ready;
  assign rf_matrix_c_7_tile_v_0_MPORT_addr = 8'hbf;
  assign rf_matrix_c_7_tile_v_0_MPORT_data = rf[rf_matrix_c_7_tile_v_0_MPORT_addr]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
  assign rf_MPORT_data = top_io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[255:192];
  assign rf_MPORT_addr = 8'h81;
  assign rf_MPORT_mask = 1'h1;
  assign rf_MPORT_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_1_data = top_io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[191:128];
  assign rf_MPORT_1_addr = 8'h85;
  assign rf_MPORT_1_mask = 1'h1;
  assign rf_MPORT_1_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_2_data = top_io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[127:64];
  assign rf_MPORT_2_addr = 8'h89;
  assign rf_MPORT_2_mask = 1'h1;
  assign rf_MPORT_2_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_3_data = top_io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[63:0];
  assign rf_MPORT_3_addr = 8'h8d;
  assign rf_MPORT_3_mask = 1'h1;
  assign rf_MPORT_3_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_4_data = top_io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[255:192];
  assign rf_MPORT_4_addr = 8'h91;
  assign rf_MPORT_4_mask = 1'h1;
  assign rf_MPORT_4_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_5_data = top_io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[191:128];
  assign rf_MPORT_5_addr = 8'h95;
  assign rf_MPORT_5_mask = 1'h1;
  assign rf_MPORT_5_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_6_data = top_io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[127:64];
  assign rf_MPORT_6_addr = 8'h99;
  assign rf_MPORT_6_mask = 1'h1;
  assign rf_MPORT_6_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_7_data = top_io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[63:0];
  assign rf_MPORT_7_addr = 8'h9d;
  assign rf_MPORT_7_mask = 1'h1;
  assign rf_MPORT_7_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_8_data = top_io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[255:192];
  assign rf_MPORT_8_addr = 8'ha1;
  assign rf_MPORT_8_mask = 1'h1;
  assign rf_MPORT_8_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_9_data = top_io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[191:128];
  assign rf_MPORT_9_addr = 8'ha5;
  assign rf_MPORT_9_mask = 1'h1;
  assign rf_MPORT_9_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_10_data = top_io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[127:64];
  assign rf_MPORT_10_addr = 8'ha9;
  assign rf_MPORT_10_mask = 1'h1;
  assign rf_MPORT_10_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_11_data = top_io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[63:0];
  assign rf_MPORT_11_addr = 8'had;
  assign rf_MPORT_11_mask = 1'h1;
  assign rf_MPORT_11_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_12_data = top_io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[255:192];
  assign rf_MPORT_12_addr = 8'hb1;
  assign rf_MPORT_12_mask = 1'h1;
  assign rf_MPORT_12_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_13_data = top_io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[191:128];
  assign rf_MPORT_13_addr = 8'hb5;
  assign rf_MPORT_13_mask = 1'h1;
  assign rf_MPORT_13_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_14_data = top_io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[127:64];
  assign rf_MPORT_14_addr = 8'hb9;
  assign rf_MPORT_14_mask = 1'h1;
  assign rf_MPORT_14_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_15_data = top_io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[63:0];
  assign rf_MPORT_15_addr = 8'hbd;
  assign rf_MPORT_15_mask = 1'h1;
  assign rf_MPORT_15_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_16_data = top_io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[255:192];
  assign rf_MPORT_16_addr = 8'h83;
  assign rf_MPORT_16_mask = 1'h1;
  assign rf_MPORT_16_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_17_data = top_io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[191:128];
  assign rf_MPORT_17_addr = 8'h87;
  assign rf_MPORT_17_mask = 1'h1;
  assign rf_MPORT_17_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_18_data = top_io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[127:64];
  assign rf_MPORT_18_addr = 8'h8b;
  assign rf_MPORT_18_mask = 1'h1;
  assign rf_MPORT_18_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_19_data = top_io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[63:0];
  assign rf_MPORT_19_addr = 8'h8f;
  assign rf_MPORT_19_mask = 1'h1;
  assign rf_MPORT_19_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_20_data = top_io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[255:192];
  assign rf_MPORT_20_addr = 8'h93;
  assign rf_MPORT_20_mask = 1'h1;
  assign rf_MPORT_20_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_21_data = top_io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[191:128];
  assign rf_MPORT_21_addr = 8'h97;
  assign rf_MPORT_21_mask = 1'h1;
  assign rf_MPORT_21_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_22_data = top_io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[127:64];
  assign rf_MPORT_22_addr = 8'h9b;
  assign rf_MPORT_22_mask = 1'h1;
  assign rf_MPORT_22_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_23_data = top_io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[63:0];
  assign rf_MPORT_23_addr = 8'h9f;
  assign rf_MPORT_23_mask = 1'h1;
  assign rf_MPORT_23_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_24_data = top_io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[255:192];
  assign rf_MPORT_24_addr = 8'ha3;
  assign rf_MPORT_24_mask = 1'h1;
  assign rf_MPORT_24_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_25_data = top_io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[191:128];
  assign rf_MPORT_25_addr = 8'ha7;
  assign rf_MPORT_25_mask = 1'h1;
  assign rf_MPORT_25_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_26_data = top_io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[127:64];
  assign rf_MPORT_26_addr = 8'hab;
  assign rf_MPORT_26_mask = 1'h1;
  assign rf_MPORT_26_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_27_data = top_io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[63:0];
  assign rf_MPORT_27_addr = 8'haf;
  assign rf_MPORT_27_mask = 1'h1;
  assign rf_MPORT_27_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_28_data = top_io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[255:192];
  assign rf_MPORT_28_addr = 8'hb3;
  assign rf_MPORT_28_mask = 1'h1;
  assign rf_MPORT_28_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_29_data = top_io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[191:128];
  assign rf_MPORT_29_addr = 8'hb7;
  assign rf_MPORT_29_mask = 1'h1;
  assign rf_MPORT_29_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_30_data = top_io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[127:64];
  assign rf_MPORT_30_addr = 8'hbb;
  assign rf_MPORT_30_mask = 1'h1;
  assign rf_MPORT_30_en = top_io_out_valid & top_io_out_ready;
  assign rf_MPORT_31_data = top_io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[63:0];
  assign rf_MPORT_31_addr = 8'hbf;
  assign rf_MPORT_31_mask = 1'h1;
  assign rf_MPORT_31_en = top_io_out_valid & top_io_out_ready;
  assign io_out_valid = _T_15 & _T_48 & out_set == 2'h3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 297:72]
  assign io_out_bits_tc0_octet0_threadgroup0_matrix_d_data = top_io_out_bits_tc0_octet0_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 248:53]
  assign io_out_bits_tc0_octet0_threadgroup4_matrix_d_data = top_io_out_bits_tc0_octet0_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 249:53]
  assign io_out_bits_tc0_octet1_threadgroup0_matrix_d_data = top_io_out_bits_tc0_octet1_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 250:53]
  assign io_out_bits_tc0_octet1_threadgroup4_matrix_d_data = top_io_out_bits_tc0_octet1_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 251:53]
  assign io_out_bits_tc1_octet0_threadgroup0_matrix_d_data = top_io_out_bits_tc1_octet0_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 252:53]
  assign io_out_bits_tc1_octet0_threadgroup4_matrix_d_data = top_io_out_bits_tc1_octet0_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 253:53]
  assign io_out_bits_tc1_octet1_threadgroup0_matrix_d_data = top_io_out_bits_tc1_octet1_threadgroup0_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 254:53]
  assign io_out_bits_tc1_octet1_threadgroup4_matrix_d_data = top_io_out_bits_tc1_octet1_threadgroup4_matrix_d_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 255:53]
  assign top_clock = clock;
  assign top_reset = reset;
  assign top_io_in_valid = top_io_in_valid_REG; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 259:19]
  assign top_io_in_bits_tc0_ot0_tg0_matrix_a = matrix_a_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 216:39]
  assign top_io_in_bits_tc0_ot0_tg0_matrix_b = matrix_b_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 217:39]
  assign top_io_in_bits_tc0_ot0_tg0_matrix_c = matrix_c_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 218:39]
  assign top_io_in_bits_tc0_ot0_tg4_matrix_a = matrix_a_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 220:39]
  assign top_io_in_bits_tc0_ot0_tg4_matrix_b = matrix_b_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 221:39]
  assign top_io_in_bits_tc0_ot0_tg4_matrix_c = matrix_c_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 222:39]
  assign top_io_in_bits_tc0_ot1_tg0_matrix_a = matrix_a_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 224:39]
  assign top_io_in_bits_tc0_ot1_tg0_matrix_b = matrix_b_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 225:39]
  assign top_io_in_bits_tc0_ot1_tg0_matrix_c = matrix_c_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 226:39]
  assign top_io_in_bits_tc0_ot1_tg4_matrix_a = matrix_a_5; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 228:39]
  assign top_io_in_bits_tc0_ot1_tg4_matrix_b = matrix_b_5; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 229:39]
  assign top_io_in_bits_tc0_ot1_tg4_matrix_c = matrix_c_5; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 230:39]
  assign top_io_in_bits_tc1_ot0_tg0_matrix_a = matrix_a_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 232:39]
  assign top_io_in_bits_tc1_ot0_tg0_matrix_b = matrix_b_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 233:39]
  assign top_io_in_bits_tc1_ot0_tg0_matrix_c = matrix_c_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 234:39]
  assign top_io_in_bits_tc1_ot0_tg4_matrix_a = matrix_a_6; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 236:39]
  assign top_io_in_bits_tc1_ot0_tg4_matrix_b = matrix_b_6; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 237:39]
  assign top_io_in_bits_tc1_ot0_tg4_matrix_c = matrix_c_6; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 238:39]
  assign top_io_in_bits_tc1_ot1_tg0_matrix_a = matrix_a_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 240:39]
  assign top_io_in_bits_tc1_ot1_tg0_matrix_b = matrix_b_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 241:39]
  assign top_io_in_bits_tc1_ot1_tg0_matrix_c = matrix_c_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 242:39]
  assign top_io_in_bits_tc1_ot1_tg4_matrix_a = matrix_a_7; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 244:39]
  assign top_io_in_bits_tc1_ot1_tg4_matrix_b = matrix_b_7; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 245:39]
  assign top_io_in_bits_tc1_ot1_tg4_matrix_c = matrix_c_7; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 246:39]
  assign top_io_in_bits_ctrl_matBSel = matBsel; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 214:31]
  assign top_io_in_bits_ctrl_mixPcMode = io_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 213:33]
  assign top_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 211:20]
  always @(posedge clock) begin
    if (rf_MPORT_en & rf_MPORT_mask) begin
      rf[rf_MPORT_addr] <= rf_MPORT_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_1_en & rf_MPORT_1_mask) begin
      rf[rf_MPORT_1_addr] <= rf_MPORT_1_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_2_en & rf_MPORT_2_mask) begin
      rf[rf_MPORT_2_addr] <= rf_MPORT_2_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_3_en & rf_MPORT_3_mask) begin
      rf[rf_MPORT_3_addr] <= rf_MPORT_3_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_4_en & rf_MPORT_4_mask) begin
      rf[rf_MPORT_4_addr] <= rf_MPORT_4_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_5_en & rf_MPORT_5_mask) begin
      rf[rf_MPORT_5_addr] <= rf_MPORT_5_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_6_en & rf_MPORT_6_mask) begin
      rf[rf_MPORT_6_addr] <= rf_MPORT_6_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_7_en & rf_MPORT_7_mask) begin
      rf[rf_MPORT_7_addr] <= rf_MPORT_7_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_8_en & rf_MPORT_8_mask) begin
      rf[rf_MPORT_8_addr] <= rf_MPORT_8_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_9_en & rf_MPORT_9_mask) begin
      rf[rf_MPORT_9_addr] <= rf_MPORT_9_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_10_en & rf_MPORT_10_mask) begin
      rf[rf_MPORT_10_addr] <= rf_MPORT_10_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_11_en & rf_MPORT_11_mask) begin
      rf[rf_MPORT_11_addr] <= rf_MPORT_11_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_12_en & rf_MPORT_12_mask) begin
      rf[rf_MPORT_12_addr] <= rf_MPORT_12_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_13_en & rf_MPORT_13_mask) begin
      rf[rf_MPORT_13_addr] <= rf_MPORT_13_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_14_en & rf_MPORT_14_mask) begin
      rf[rf_MPORT_14_addr] <= rf_MPORT_14_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_15_en & rf_MPORT_15_mask) begin
      rf[rf_MPORT_15_addr] <= rf_MPORT_15_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_16_en & rf_MPORT_16_mask) begin
      rf[rf_MPORT_16_addr] <= rf_MPORT_16_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_17_en & rf_MPORT_17_mask) begin
      rf[rf_MPORT_17_addr] <= rf_MPORT_17_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_18_en & rf_MPORT_18_mask) begin
      rf[rf_MPORT_18_addr] <= rf_MPORT_18_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_19_en & rf_MPORT_19_mask) begin
      rf[rf_MPORT_19_addr] <= rf_MPORT_19_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_20_en & rf_MPORT_20_mask) begin
      rf[rf_MPORT_20_addr] <= rf_MPORT_20_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_21_en & rf_MPORT_21_mask) begin
      rf[rf_MPORT_21_addr] <= rf_MPORT_21_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_22_en & rf_MPORT_22_mask) begin
      rf[rf_MPORT_22_addr] <= rf_MPORT_22_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_23_en & rf_MPORT_23_mask) begin
      rf[rf_MPORT_23_addr] <= rf_MPORT_23_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_24_en & rf_MPORT_24_mask) begin
      rf[rf_MPORT_24_addr] <= rf_MPORT_24_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_25_en & rf_MPORT_25_mask) begin
      rf[rf_MPORT_25_addr] <= rf_MPORT_25_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_26_en & rf_MPORT_26_mask) begin
      rf[rf_MPORT_26_addr] <= rf_MPORT_26_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_27_en & rf_MPORT_27_mask) begin
      rf[rf_MPORT_27_addr] <= rf_MPORT_27_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_28_en & rf_MPORT_28_mask) begin
      rf[rf_MPORT_28_addr] <= rf_MPORT_28_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_29_en & rf_MPORT_29_mask) begin
      rf[rf_MPORT_29_addr] <= rf_MPORT_29_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_30_en & rf_MPORT_30_mask) begin
      rf[rf_MPORT_30_addr] <= rf_MPORT_30_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (rf_MPORT_31_en & rf_MPORT_31_mask) begin
      rf[rf_MPORT_31_addr] <= rf_MPORT_31_data; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 9:15]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 146:20]
      set <= 2'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 146:20]
    end else if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      if (step == MAX_STEP) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 276:29]
        set <= _set_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 277:11]
      end
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 147:21]
      step <= 2'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 147:21]
    end else if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      step <= _step_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 279:10]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 148:24]
      out_set <= 2'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 148:24]
    end else if (top_io_out_valid & top_io_out_ready) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 282:46]
      if (out_step == MAX_STEP) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 292:33]
        out_set <= _out_set_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 293:15]
      end
    end
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 149:25]
      out_step <= 2'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 149:25]
    end else if (top_io_out_valid & top_io_out_ready) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 282:46]
      out_step <= _out_step_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 295:14]
    end
    matrix_a_0 <= _GEN_9[255:0];
    matrix_a_1 <= _GEN_24[255:0];
    matrix_a_2 <= _GEN_31[255:0];
    matrix_a_3 <= _GEN_42[255:0];
    matrix_a_4 <= _GEN_53[255:0];
    matrix_a_5 <= _GEN_68[255:0];
    matrix_a_6 <= _GEN_75[255:0];
    matrix_a_7 <= _GEN_86[255:0];
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      matrix_b_0 <= _matrix_b_0_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 272:19]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      matrix_b_1 <= _matrix_b_1_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 272:19]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      matrix_b_2 <= _matrix_b_2_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 272:19]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      matrix_b_3 <= _matrix_b_3_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 272:19]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      matrix_b_4 <= _matrix_b_4_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 272:19]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      matrix_b_5 <= _matrix_b_5_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 272:19]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      matrix_b_6 <= _matrix_b_6_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 272:19]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      matrix_b_7 <= _matrix_b_7_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 272:19]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      matrix_c_0 <= _matrix_c_0_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 273:19]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      matrix_c_1 <= _matrix_c_1_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 273:19]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      matrix_c_2 <= _matrix_c_2_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 273:19]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      matrix_c_3 <= _matrix_c_3_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 273:19]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      matrix_c_4 <= _matrix_c_4_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 273:19]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      matrix_c_5 <= _matrix_c_5_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 273:19]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      matrix_c_6 <= _matrix_c_6_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 273:19]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      matrix_c_7 <= _matrix_c_7_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 273:19]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 262:19]
      if (io_mixPc) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 263:16]
        matBsel <= step > 2'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 264:15]
      end else begin
        matBsel <= step > 2'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 266:15]
      end
    end
    top_io_in_valid_REG <= out_set == set | out_set == _in_valid_T_2 & out_step > step & io_exec_en; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/System/System.scala 258:36]
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
  integer initvar;
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
  _RAND_4 = {8{`RANDOM}};
  matrix_a_0 = _RAND_4[255:0];
  _RAND_5 = {8{`RANDOM}};
  matrix_a_1 = _RAND_5[255:0];
  _RAND_6 = {8{`RANDOM}};
  matrix_a_2 = _RAND_6[255:0];
  _RAND_7 = {8{`RANDOM}};
  matrix_a_3 = _RAND_7[255:0];
  _RAND_8 = {8{`RANDOM}};
  matrix_a_4 = _RAND_8[255:0];
  _RAND_9 = {8{`RANDOM}};
  matrix_a_5 = _RAND_9[255:0];
  _RAND_10 = {8{`RANDOM}};
  matrix_a_6 = _RAND_10[255:0];
  _RAND_11 = {8{`RANDOM}};
  matrix_a_7 = _RAND_11[255:0];
  _RAND_12 = {8{`RANDOM}};
  matrix_b_0 = _RAND_12[255:0];
  _RAND_13 = {8{`RANDOM}};
  matrix_b_1 = _RAND_13[255:0];
  _RAND_14 = {8{`RANDOM}};
  matrix_b_2 = _RAND_14[255:0];
  _RAND_15 = {8{`RANDOM}};
  matrix_b_3 = _RAND_15[255:0];
  _RAND_16 = {8{`RANDOM}};
  matrix_b_4 = _RAND_16[255:0];
  _RAND_17 = {8{`RANDOM}};
  matrix_b_5 = _RAND_17[255:0];
  _RAND_18 = {8{`RANDOM}};
  matrix_b_6 = _RAND_18[255:0];
  _RAND_19 = {8{`RANDOM}};
  matrix_b_7 = _RAND_19[255:0];
  _RAND_20 = {8{`RANDOM}};
  matrix_c_0 = _RAND_20[255:0];
  _RAND_21 = {8{`RANDOM}};
  matrix_c_1 = _RAND_21[255:0];
  _RAND_22 = {8{`RANDOM}};
  matrix_c_2 = _RAND_22[255:0];
  _RAND_23 = {8{`RANDOM}};
  matrix_c_3 = _RAND_23[255:0];
  _RAND_24 = {8{`RANDOM}};
  matrix_c_4 = _RAND_24[255:0];
  _RAND_25 = {8{`RANDOM}};
  matrix_c_5 = _RAND_25[255:0];
  _RAND_26 = {8{`RANDOM}};
  matrix_c_6 = _RAND_26[255:0];
  _RAND_27 = {8{`RANDOM}};
  matrix_c_7 = _RAND_27[255:0];
  _RAND_28 = {1{`RANDOM}};
  matBsel = _RAND_28[0:0];
  _RAND_29 = {1{`RANDOM}};
  top_io_in_valid_REG = _RAND_29[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
  $readmemh("./src/matrix_src.txt", rf);
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
