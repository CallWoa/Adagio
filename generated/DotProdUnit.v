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
  input  [15:0] io_in_bits_a, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 14:14]
  input  [15:0] io_in_bits_b, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 14:14]
  output [31:0] io_toFADD_bits // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 14:14]
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
  wire  hasZero = decode_a_isZero | decode_b_isZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 27:33]
  wire  resultSign = fp_a_sign ^ fp_b_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 28:30]
  wire [5:0] _expSum_T = {1'h0,raw_a_exp}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 29:19]
  wire [5:0] _expSum_T_1 = {1'h0,raw_b_exp}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 29:46]
  wire [5:0] expSum = _expSum_T + _expSum_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 29:41]
  wire [7:0] _expSumUpPc_T = {2'h0,expSum}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 32:23]
  wire [7:0] expSumUpPc = _expSumUpPc_T + 8'h61; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 32:71]
  wire [7:0] resultExpNoShift = hasZero ? 8'h0 : expSumUpPc; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [21:0] resultSigNoShift = raw_a_sig * raw_b_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 39:37]
  wire [3:0] lzcRaw = aLZC_lzc_io_out + bLZC_lzc_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 45:21]
  wire [21:0] ErrorDetectMask = 22'h200000 >> lzcRaw; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 46:68]
  wire [21:0] _lzcError_T = resultSigNoShift & ErrorDetectMask; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 47:37]
  wire  lzcError = ~(|_lzcError_T); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 47:18]
  wire [3:0] _lzc_T_1 = lzcRaw + 4'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 48:34]
  wire [3:0] lzc = lzcError ? _lzc_T_1 : lzcRaw; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 48:16]
  wire [7:0] _shiftLimit_T_1 = resultExpNoShift + 8'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 49:38]
  wire [7:0] _GEN_0 = {{4'd0}, lzc}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 49:45]
  wire  shiftLimit = _shiftLimit_T_1 <= _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 49:45]
  wire [7:0] _resultSigShifted_T = shiftLimit ? resultExpNoShift : {{4'd0}, lzc}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 51:50]
  wire [276:0] _GEN_1 = {{255'd0}, resultSigNoShift}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 51:44]
  wire [276:0] _resultSigShifted_T_1 = _GEN_1 << _resultSigShifted_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 51:44]
  wire [21:0] resultSigShifted = _resultSigShifted_T_1[21:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 51:86]
  wire [7:0] _resultExpShifted_T_1 = resultExpNoShift - _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 52:79]
  wire [7:0] _resultExpShifted_T_3 = _resultExpShifted_T_1 + 8'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 52:85]
  wire [7:0] resultExpShifted = shiftLimit ? 8'h0 : _resultExpShifted_T_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 52:29]
  wire  hasNaN = decode_a_isNaN | decode_b_isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 56:31]
  wire  hasInf = decode_a_isInf | decode_b_isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 57:31]
  wire  special_case_happen = hasZero | hasNaN | hasInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 58:47]
  wire  zero_mul_inf = hasZero & hasInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 60:30]
  wire  nan_result = hasNaN | zero_mul_inf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 61:27]
  wire [31:0] _special_result_T_2 = {resultSign,8'hff,23'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 65:10]
  wire [31:0] _special_result_T_3 = {resultSign,31'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 69:10]
  wire [31:0] _special_result_T_4 = hasInf ? _special_result_T_2 : _special_result_T_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 64:8]
  wire [31:0] special_result = nan_result ? 32'h7fc00000 : _special_result_T_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 62:27]
  wire [31:0] _io_toFADD_bits_T_1 = {resultSign,resultExpShifted,resultSigShifted[20:0],2'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 77:8]
  LZC aLZC_lzc ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
    .io_in(aLZC_lzc_io_in),
    .io_out(aLZC_lzc_io_out)
  );
  LZC bLZC_lzc ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
    .io_in(bLZC_lzc_io_in),
    .io_out(bLZC_lzc_io_out)
  );
  assign io_toFADD_bits = special_case_happen ? special_result : _io_toFADD_bits_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 75:24]
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
  input  [15:0] io_in_bits_in, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 156:14]
  output [31:0] io_out_bits_result // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 156:14]
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
  wire [7:0] _GEN_0 = {{3'd0}, fp_in_exp}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 168:45]
  wire [7:0] normal_exp = 8'h70 + _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 168:45]
  wire [24:0] _GEN_2 = {{15'd0}, fp_in_sig}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 174:20]
  wire [24:0] _subnormal_sig_T = _GEN_2 << subnormal_shamt_lzc_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 174:20]
  wire [7:0] _GEN_1 = {{4'd0}, subnormal_shamt_lzc_io_out}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 175:48]
  wire [7:0] subnormal_exp = 8'h70 - _GEN_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 175:48]
  wire  _result_T_1 = ~decode_in__isNaN & fp_in_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 180:22]
  wire  _result_T_4 = ~decode_in_expIsOnes & ~decode_in__expIsZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 186:30]
  wire [7:0] _result_T_6 = decode_in_expIsOnes ? 8'hff : 8'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [7:0] _result_T_8 = decode_in__isSubnormal ? subnormal_exp : 8'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [7:0] _result_T_9 = _result_T_4 ? normal_exp : 8'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [7:0] _result_T_11 = _result_T_6 | _result_T_8; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [7:0] _result_T_12 = _result_T_11 | _result_T_9; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [22:0] _result_T_16 = {decode_in_sigNotZero,22'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 202:12]
  wire [22:0] _result_T_17 = {_subnormal_sig_T[8:0],1'h0,13'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 203:12]
  wire [22:0] _result_T_18 = {fp_in_sig,13'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 204:12]
  wire [22:0] _result_T_19 = decode_in_expIsOnes ? _result_T_16 : 23'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [22:0] _result_T_20 = decode_in__expIsZero ? _result_T_17 : 23'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [22:0] _result_T_21 = _result_T_4 ? _result_T_18 : 23'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [22:0] _result_T_22 = _result_T_19 | _result_T_20; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [22:0] _result_T_23 = _result_T_22 | _result_T_21; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [8:0] result_hi = {_result_T_1,_result_T_12}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 179:19]
  LZC_8 subnormal_shamt_lzc ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
    .io_in(subnormal_shamt_lzc_io_in),
    .io_out(subnormal_shamt_lzc_io_out)
  );
  assign io_out_bits_result = {result_hi,_result_T_23}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 179:19]
  assign subnormal_shamt_lzc_io_in = io_in_bits_in[9:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 60:18]
endmodule
module PipelineReg(
  input         clock,
  input         reset,
  output        io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input         io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [31:0] io_in_bits_add_res_0, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [31:0] io_in_bits_add_res_1, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [31:0] io_in_bits_add_res_2, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [31:0] io_in_bits_add_res_3, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [31:0] io_in_bits_add_res_4, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input         io_in_bits_ctrl_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [1:0]  io_in_bits_ctrl_rowtag, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [4:0]  io_in_bits_ctrl_decode_src, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input         io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output        io_out_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [31:0] io_out_bits_add_res_0, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [31:0] io_out_bits_add_res_1, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [31:0] io_out_bits_add_res_2, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [31:0] io_out_bits_add_res_3, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [31:0] io_out_bits_add_res_4, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output        io_out_bits_ctrl_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [1:0]  io_out_bits_ctrl_rowtag, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [4:0]  io_out_bits_ctrl_decode_src, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input         io_flush // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
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
`endif // RANDOMIZE_REG_INIT
  reg  validReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 110:27]
  reg [31:0] dataReg_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg [31:0] dataReg_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg [31:0] dataReg_add_res_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg [31:0] dataReg_add_res_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg [31:0] dataReg_add_res_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg  dataReg_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg [1:0] dataReg_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg [4:0] dataReg_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  wire  _GEN_0 = io_out_ready ? 1'h0 : validReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 113:24 114:16 110:27]
  wire  _T = io_in_ready & io_in_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 52:35]
  wire  _GEN_1 = _T | _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22 117:16]
  assign io_in_ready = ~validReg | io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 123:30]
  assign io_out_valid = validReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 124:18]
  assign io_out_bits_add_res_0 = dataReg_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_add_res_1 = dataReg_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_add_res_2 = dataReg_add_res_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_add_res_3 = dataReg_add_res_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_add_res_4 = dataReg_add_res_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_ctrl_mixPc = dataReg_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_ctrl_rowtag = dataReg_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_ctrl_decode_src = dataReg_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  always @(posedge clock) begin
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 110:27]
      validReg <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 110:27]
    end else if (io_flush) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 120:19]
      validReg <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 121:16]
    end else begin
      validReg <= _GEN_1;
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_add_res_0 <= io_in_bits_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_add_res_1 <= io_in_bits_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_add_res_2 <= io_in_bits_add_res_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_add_res_3 <= io_in_bits_add_res_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_add_res_4 <= io_in_bits_add_res_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_ctrl_mixPc <= io_in_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_ctrl_rowtag <= io_in_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_ctrl_decode_src <= io_in_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
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
  validReg = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  dataReg_add_res_0 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  dataReg_add_res_1 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  dataReg_add_res_2 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  dataReg_add_res_3 = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  dataReg_add_res_4 = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  dataReg_ctrl_mixPc = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  dataReg_ctrl_rowtag = _RAND_7[1:0];
  _RAND_8 = {1{`RANDOM}};
  dataReg_ctrl_decode_src = _RAND_8[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
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
  wire  g = io_in[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 16:25]
  wire  r_up = io_roundIn & io_stickyIn | io_roundIn & ~io_stickyIn & g; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 17:23]
  wire [22:0] out_r_up = io_in + 23'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 18:24]
  assign io_out = r_up ? out_r_up : io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 19:16]
  assign io_cout = r_up & &io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 20:19]
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
  wire [22:0] far_path_rounder_io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 27:25]
  wire  far_path_rounder_io_roundIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 27:25]
  wire  far_path_rounder_io_stickyIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 27:25]
  wire [22:0] far_path_rounder_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 27:25]
  wire  far_path_rounder_io_cout; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 27:25]
  wire  aIsZero = ~(|io_in_a_exp); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 23:17]
  wire  bIsZero = ~(|io_in_b_exp); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 24:17]
  wire  bothZero = aIsZero & bIsZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 25:26]
  wire [27:0] pos_sigB = {1'h0,shiftRightJam_io_out,shiftRightJam_io_sticky}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 28:21]
  wire [26:0] _neg_sigB_T = {shiftRightJam_io_out,shiftRightJam_io_sticky}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 29:37]
  wire [26:0] _neg_sigB_T_1 = ~_neg_sigB_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 29:33]
  wire [26:0] _neg_sigB_T_3 = _neg_sigB_T_1 + 27'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 29:72]
  wire [27:0] neg_sigB = {1'h1,_neg_sigB_T_3}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 29:21]
  wire [27:0] adder_in_sigB = io_in_addSig ? pos_sigB : neg_sigB; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 30:26]
  wire [27:0] adder_in_sigA = {1'h0,io_in_a_sig,3'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 31:26]
  wire [27:0] resultSigInNormalCase = adder_in_sigA + adder_in_sigB; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 32:45]
  wire [27:0] result_sig_raw = bIsZero ? adder_in_sigA : resultSigInNormalCase; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 34:27]
  wire  cout = result_sig_raw[27]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 36:33]
  wire  keep = result_sig_raw[26]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 37:41]
  wire  _resultSigNoRound_T = keep | io_in_tinyAdd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 40:19]
  wire [26:0] _resultSigNoRound_T_4 = {result_sig_raw[27:2],|result_sig_raw[1:0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 42:44]
  wire [26:0] _resultSigNoRound_T_9 = {result_sig_raw[26:1],|result_sig_raw[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 43:52]
  wire [26:0] _resultSigNoRound_T_14 = {result_sig_raw[25:0],1'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 44:52]
  wire [26:0] _resultSigNoRound_T_15 = _resultSigNoRound_T ? _resultSigNoRound_T_9 : _resultSigNoRound_T_14; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [26:0] resultSigNoRound = cout ? _resultSigNoRound_T_4 : _resultSigNoRound_T_15; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [7:0] _resultExpNoRound_T_1 = io_in_a_exp + 8'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 50:28]
  wire  _resultExpNoRound_T_2 = keep | bothZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 51:13]
  wire [7:0] _resultExpNoRound_T_5 = io_in_a_exp - 8'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 52:43]
  wire [7:0] _resultExpNoRound_T_6 = _resultExpNoRound_T_2 ? io_in_a_exp : _resultExpNoRound_T_5; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [7:0] resultExpNoRound = cout ? _resultExpNoRound_T_1 : _resultExpNoRound_T_6; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire  far_path_may_of = &io_in_b_exp & io_in_addSig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 67:42]
  wire  far_path_of_before_round = resultExpNoRound == 8'hff; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 69:22]
  wire  _far_path_of_after_round_T = resultExpNoRound == 8'hfe; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 71:22]
  wire  far_path_of_after_round = far_path_rounder_io_cout & _far_path_of_after_round_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 70:58]
  wire [7:0] _GEN_0 = {{7'd0}, far_path_rounder_io_cout}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 75:55]
  wire [7:0] far_path_exp_rounded = _GEN_0 + resultExpNoRound; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 75:55]
  wire [8:0] io_out_result_hi = {io_in_a_sign,far_path_exp_rounded}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 79:8]
  ShiftRightJam shiftRightJam ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 27:31]
    .io_in(shiftRightJam_io_in),
    .io_shamt(shiftRightJam_io_shamt),
    .io_out(shiftRightJam_io_out),
    .io_sticky(shiftRightJam_io_sticky)
  );
  RoundingUnit far_path_rounder ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 27:25]
    .io_in(far_path_rounder_io_in),
    .io_roundIn(far_path_rounder_io_roundIn),
    .io_stickyIn(far_path_rounder_io_stickyIn),
    .io_out(far_path_rounder_io_out),
    .io_cout(far_path_rounder_io_cout)
  );
  assign io_out_result = {io_out_result_hi,far_path_rounder_io_out}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 79:8]
  assign io_out_far_path_of = far_path_of_before_round | far_path_of_after_round | far_path_may_of; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 73:77]
  assign shiftRightJam_io_in = {io_in_b_sig,2'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 27:53]
  assign shiftRightJam_io_shamt = io_in_shiftNum; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 29:28]
  assign far_path_rounder_io_in = resultSigNoRound[25:3]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 28:33]
  assign far_path_rounder_io_roundIn = resultSigNoRound[2]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 29:50]
  assign far_path_rounder_io_stickyIn = |resultSigNoRound[1:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 30:51]
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
  input         io_in_a_sign, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 84:14]
  input  [7:0]  io_in_a_exp, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 84:14]
  input  [23:0] io_in_a_sig, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 84:14]
  input  [7:0]  io_in_b_exp, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 84:14]
  input  [23:0] io_in_b_sig, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 84:14]
  input         io_in_needShift, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 84:14]
  output [31:0] io_out_result, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 84:14]
  output        io_out_close_path_of // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 84:14]
);
  wire [24:0] lza_io_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 107:19]
  wire [24:0] lza_io_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 107:19]
  wire [4:0] lza_io_lzc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 107:19]
  wire  lza_io_error; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 107:19]
  wire  lza_io_zero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 107:19]
  wire [22:0] near_path_rounder_io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 27:25]
  wire  near_path_rounder_io_roundIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 27:25]
  wire  near_path_rounder_io_stickyIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 27:25]
  wire [22:0] near_path_rounder_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 27:25]
  wire  near_path_rounder_io_cout; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 27:25]
  wire [24:0] _b_sig_T = {io_in_b_sig,1'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 96:19]
  wire [24:0] b_sig = _b_sig_T >> io_in_needShift; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 96:43]
  wire  bIsZero = ~(|io_in_b_exp); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 97:17]
  wire [25:0] _resultSigComplementForm_T = {1'h0,io_in_a_sig,1'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 99:8]
  wire [24:0] _resultSigComplementForm_T_2 = ~b_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 100:43]
  wire [24:0] _resultSigComplementForm_T_4 = _resultSigComplementForm_T_2 + 25'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 100:58]
  wire [25:0] _resultSigComplementForm_T_5 = {1'h1,_resultSigComplementForm_T_4}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 100:31]
  wire [25:0] _resultSigComplementForm_T_7 = _resultSigComplementForm_T + _resultSigComplementForm_T_5; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 100:26]
  wire [25:0] resultSigComplementForm = bIsZero ? _resultSigComplementForm_T : _resultSigComplementForm_T_7; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 98:36]
  wire  a_LessThan_b = resultSigComplementForm[25]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 101:50]
  wire [24:0] _resultSigNoRound_T_1 = ~resultSigComplementForm[24:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 103:6]
  wire [24:0] _resultSigNoRound_T_3 = _resultSigNoRound_T_1 + 25'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 103:47]
  wire [24:0] resultSigNoRound = a_LessThan_b ? _resultSigNoRound_T_3 : resultSigComplementForm[24:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 102:29]
  wire  result_sign = a_LessThan_b ? ~io_in_a_sign : io_in_a_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 105:24]
  wire [7:0] resultExpNoRound = lza_io_zero ? 8'h0 : io_in_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 117:29]
  wire  resultExpIsZero = resultExpNoRound == 8'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 118:42]
  wire [4:0] _GEN_0 = {{4'd0}, lza_io_error}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 120:45]
  wire [4:0] _shiftLimit_T_1 = lza_io_lzc + _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 120:45]
  wire [7:0] _GEN_1 = {{3'd0}, _shiftLimit_T_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 120:37]
  wire  shiftLimit = resultExpNoRound <= _GEN_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 120:37]
  wire [7:0] _GEN_2 = {{3'd0}, lza_io_lzc}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 121:33]
  wire [7:0] exp_s1 = resultExpNoRound - _GEN_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 121:33]
  wire [7:0] _GEN_3 = {{7'd0}, lza_io_error}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 122:23]
  wire [7:0] exp_s2 = exp_s1 - _GEN_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 122:23]
  wire [7:0] closePathResult_exp = shiftLimit ? 8'h0 : exp_s2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 123:29]
  wire [7:0] _sigShiftNum_T_1 = resultExpNoRound - 8'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 128:39]
  wire [7:0] _sigShiftNum_T_2 = shiftLimit ? _sigShiftNum_T_1 : {{3'd0}, lza_io_lzc}; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [7:0] sigShiftNum = resultExpIsZero ? 8'h0 : _sigShiftNum_T_2; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [279:0] _GEN_5 = {{255'd0}, resultSigNoRound}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 132:34]
  wire [279:0] _sig_s1_T = _GEN_5 << sigShiftNum; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 132:34]
  wire [24:0] sig_s1 = _sig_s1_T[24:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 132:49]
  wire [24:0] _sig_s2_T_1 = {sig_s1[23:0],1'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 133:33]
  wire [24:0] sig_s2 = lza_io_error ? _sig_s2_T_1 : sig_s1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 133:19]
  wire [24:0] _sig_s3_T = shiftLimit ? sig_s1 : sig_s2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 136:10]
  wire [26:0] sig_s3 = {_sig_s3_T,2'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 135:8]
  wire [26:0] close_path_sig = {sig_s3[26:1],|sig_s3[0]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 142:53]
  wire [7:0] _GEN_4 = {{7'd0}, near_path_rounder_io_cout}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 151:57]
  wire [7:0] near_path_exp_rounded = _GEN_4 + closePathResult_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 151:57]
  wire  _io_out_result_T_1 = result_sign & ~lza_io_zero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 155:26]
  wire [8:0] io_out_result_hi = {_io_out_result_T_1,near_path_exp_rounded}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 154:23]
  LZA lza ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 107:19]
    .io_a(lza_io_a),
    .io_b(lza_io_b),
    .io_lzc(lza_io_lzc),
    .io_error(lza_io_error),
    .io_zero(lza_io_zero)
  );
  RoundingUnit near_path_rounder ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 27:25]
    .io_in(near_path_rounder_io_in),
    .io_roundIn(near_path_rounder_io_roundIn),
    .io_stickyIn(near_path_rounder_io_stickyIn),
    .io_out(near_path_rounder_io_out),
    .io_cout(near_path_rounder_io_cout)
  );
  assign io_out_result = {io_out_result_hi,near_path_rounder_io_out}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 154:23]
  assign io_out_close_path_of = near_path_exp_rounded == 8'hff; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 153:49]
  assign lza_io_a = {io_in_a_sig,1'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 95:18]
  assign lza_io_b = _b_sig_T >> io_in_needShift; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 96:43]
  assign near_path_rounder_io_in = close_path_sig[25:3]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 28:33]
  assign near_path_rounder_io_roundIn = close_path_sig[2]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 29:50]
  assign near_path_rounder_io_stickyIn = |close_path_sig[1:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 30:51]
endmodule
module FADD(
  input  [31:0] io_in_bits_a, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 174:14]
  input  [31:0] io_in_bits_b, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 174:14]
  output [31:0] io_out_bits_result // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 174:14]
);
  wire  farPath_io_in_a_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 199:23]
  wire [7:0] farPath_io_in_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 199:23]
  wire [23:0] farPath_io_in_a_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 199:23]
  wire [7:0] farPath_io_in_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 199:23]
  wire [23:0] farPath_io_in_b_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 199:23]
  wire  farPath_io_in_addSig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 199:23]
  wire  farPath_io_in_tinyAdd; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 199:23]
  wire [4:0] farPath_io_in_shiftNum; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 199:23]
  wire [31:0] farPath_io_out_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 199:23]
  wire  farPath_io_out_far_path_of; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 199:23]
  wire  closePath_io_in_a_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 210:25]
  wire [7:0] closePath_io_in_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 210:25]
  wire [23:0] closePath_io_in_a_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 210:25]
  wire [7:0] closePath_io_in_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 210:25]
  wire [23:0] closePath_io_in_b_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 210:25]
  wire  closePath_io_in_needShift; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 210:25]
  wire [31:0] closePath_io_out_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 210:25]
  wire  closePath_io_out_close_path_of; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 210:25]
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
  wire  addSig = fp_a_sign == fp_b_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 187:26]
  wire  needSwap = raw_a_exp < raw_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 188:28]
  wire [7:0] _diffExp_T_1 = raw_b_exp - raw_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 189:41]
  wire [7:0] _diffExp_T_3 = raw_a_exp - raw_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 189:64]
  wire [7:0] diffExp = needSwap ? _diffExp_T_1 : _diffExp_T_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 189:20]
  wire [4:0] initShiftNum = diffExp[4:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 192:29]
  wire  isMaxAlign = diffExp > 8'h1a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 193:28]
  wire  _closePathSel_T = ~addSig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 195:22]
  wire  closePathSel = ~addSig & ~isMaxAlign & initShiftNum <= 5'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 195:45]
  wire  special_path_hasNaN = decode_a__isNaN | decode_b__isNaN; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 224:37]
  wire  special_path_hasInf = decode_a__isInf | decode_b__isInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 225:37]
  wire  special_path_inf_iv = decode_a__isInf & decode_b__isInf & _closePathSel_T; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 226:48]
  wire  special_case_happen = special_path_hasNaN | special_path_hasInf; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 227:49]
  wire  _special_path_result_T = special_path_hasNaN | special_path_inf_iv; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 230:25]
  wire  _special_path_result_T_3 = decode_a__isInf ? fp_a_sign : fp_b_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 233:10]
  wire [31:0] _special_path_result_T_5 = {_special_path_result_T_3,8'hff,23'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 232:8]
  wire [31:0] special_path_result = _special_path_result_T ? 32'h7fc00000 : _special_path_result_T_5; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 229:32]
  wire  common_overflow_sign = closePathSel ? closePath_io_out_result[31] : farPath_io_out_result[31]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 242:8]
  wire  common_overflow = ~closePathSel & farPath_io_out_far_path_of | closePathSel & closePath_io_out_close_path_of; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 246:54]
  wire [31:0] _io_out_bits_result_T = {common_overflow_sign,8'hff,23'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 255:10]
  wire [31:0] _io_out_bits_result_T_1 = closePathSel ? closePath_io_out_result : farPath_io_out_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 256:10]
  wire [31:0] _io_out_bits_result_T_2 = common_overflow ? _io_out_bits_result_T : _io_out_bits_result_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 253:8]
  FarPath farPath ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 199:23]
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
  ClosePath closePath ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 210:25]
    .io_in_a_sign(closePath_io_in_a_sign),
    .io_in_a_exp(closePath_io_in_a_exp),
    .io_in_a_sig(closePath_io_in_a_sig),
    .io_in_b_exp(closePath_io_in_b_exp),
    .io_in_b_sig(closePath_io_in_b_sig),
    .io_in_needShift(closePath_io_in_needShift),
    .io_out_result(closePath_io_out_result),
    .io_out_close_path_of(closePath_io_out_close_path_of)
  );
  assign io_out_bits_result = special_case_happen ? special_path_result : _io_out_bits_result_T_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 250:28]
  assign farPath_io_in_a_sign = needSwap ? fp_b_sign : fp_a_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 200:25]
  assign farPath_io_in_a_exp = needSwap ? raw_b_exp : raw_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 200:25]
  assign farPath_io_in_a_sig = needSwap ? raw_b_sig : raw_a_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 200:25]
  assign farPath_io_in_b_exp = needSwap ? raw_a_exp : raw_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 201:25]
  assign farPath_io_in_b_sig = needSwap ? raw_a_sig : raw_b_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 201:25]
  assign farPath_io_in_addSig = fp_a_sign == fp_b_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 187:26]
  assign farPath_io_in_tinyAdd = decode_a__expIsZero & decode_b__expIsZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 203:47]
  assign farPath_io_in_shiftNum = isMaxAlign ? 5'h1a : initShiftNum; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 194:21]
  assign closePath_io_in_a_sign = needSwap ? fp_b_sign : fp_a_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 211:27]
  assign closePath_io_in_a_exp = needSwap ? raw_b_exp : raw_a_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 211:27]
  assign closePath_io_in_a_sig = needSwap ? raw_b_sig : raw_a_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 211:27]
  assign closePath_io_in_b_exp = needSwap ? raw_a_exp : raw_b_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 212:27]
  assign closePath_io_in_b_sig = needSwap ? raw_a_sig : raw_b_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 212:27]
  assign closePath_io_in_needShift = initShiftNum == 5'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 213:45]
endmodule
module PipelineReg_1(
  input         clock,
  input         reset,
  output        io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input         io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [31:0] io_in_bits_add_res_0, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [31:0] io_in_bits_add_res_1, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [31:0] io_in_bits_add_res_2, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input         io_in_bits_ctrl_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [1:0]  io_in_bits_ctrl_rowtag, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [4:0]  io_in_bits_ctrl_decode_src, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input         io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output        io_out_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [31:0] io_out_bits_add_res_0, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [31:0] io_out_bits_add_res_1, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [31:0] io_out_bits_add_res_2, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output        io_out_bits_ctrl_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [1:0]  io_out_bits_ctrl_rowtag, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [4:0]  io_out_bits_ctrl_decode_src, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input         io_flush // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  reg  validReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 110:27]
  reg [31:0] dataReg_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg [31:0] dataReg_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg [31:0] dataReg_add_res_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg  dataReg_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg [1:0] dataReg_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg [4:0] dataReg_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  wire  _GEN_0 = io_out_ready ? 1'h0 : validReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 113:24 114:16 110:27]
  wire  _T = io_in_ready & io_in_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 52:35]
  wire  _GEN_1 = _T | _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22 117:16]
  assign io_in_ready = ~validReg | io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 123:30]
  assign io_out_valid = validReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 124:18]
  assign io_out_bits_add_res_0 = dataReg_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_add_res_1 = dataReg_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_add_res_2 = dataReg_add_res_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_ctrl_mixPc = dataReg_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_ctrl_rowtag = dataReg_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_ctrl_decode_src = dataReg_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  always @(posedge clock) begin
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 110:27]
      validReg <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 110:27]
    end else if (io_flush) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 120:19]
      validReg <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 121:16]
    end else begin
      validReg <= _GEN_1;
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_add_res_0 <= io_in_bits_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_add_res_1 <= io_in_bits_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_add_res_2 <= io_in_bits_add_res_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_ctrl_mixPc <= io_in_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_ctrl_rowtag <= io_in_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_ctrl_decode_src <= io_in_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
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
  validReg = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  dataReg_add_res_0 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  dataReg_add_res_1 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  dataReg_add_res_2 = _RAND_3[31:0];
  _RAND_4 = {1{`RANDOM}};
  dataReg_ctrl_mixPc = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  dataReg_ctrl_rowtag = _RAND_5[1:0];
  _RAND_6 = {1{`RANDOM}};
  dataReg_ctrl_decode_src = _RAND_6[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PipelineReg_2(
  input         clock,
  input         reset,
  output        io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input         io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [31:0] io_in_bits_add_res_0, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [31:0] io_in_bits_add_res_1, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input         io_in_bits_ctrl_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [1:0]  io_in_bits_ctrl_rowtag, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [4:0]  io_in_bits_ctrl_decode_src, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input         io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output        io_out_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [31:0] io_out_bits_add_res_0, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [31:0] io_out_bits_add_res_1, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output        io_out_bits_ctrl_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [1:0]  io_out_bits_ctrl_rowtag, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [4:0]  io_out_bits_ctrl_decode_src, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input         io_flush // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg  validReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 110:27]
  reg [31:0] dataReg_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg [31:0] dataReg_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg  dataReg_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg [1:0] dataReg_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg [4:0] dataReg_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  wire  _GEN_0 = io_out_ready ? 1'h0 : validReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 113:24 114:16 110:27]
  wire  _T = io_in_ready & io_in_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 52:35]
  wire  _GEN_1 = _T | _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22 117:16]
  assign io_in_ready = ~validReg | io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 123:30]
  assign io_out_valid = validReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 124:18]
  assign io_out_bits_add_res_0 = dataReg_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_add_res_1 = dataReg_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_ctrl_mixPc = dataReg_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_ctrl_rowtag = dataReg_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_ctrl_decode_src = dataReg_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  always @(posedge clock) begin
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 110:27]
      validReg <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 110:27]
    end else if (io_flush) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 120:19]
      validReg <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 121:16]
    end else begin
      validReg <= _GEN_1;
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_add_res_0 <= io_in_bits_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_add_res_1 <= io_in_bits_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_ctrl_mixPc <= io_in_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_ctrl_rowtag <= io_in_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_ctrl_decode_src <= io_in_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
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
  validReg = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  dataReg_add_res_0 = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  dataReg_add_res_1 = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  dataReg_ctrl_mixPc = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  dataReg_ctrl_rowtag = _RAND_4[1:0];
  _RAND_5 = {1{`RANDOM}};
  dataReg_ctrl_decode_src = _RAND_5[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module PipelineReg_3(
  input         clock,
  input         reset,
  output        io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input         io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [31:0] io_in_bits_res, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input         io_in_bits_ctrl_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [1:0]  io_in_bits_ctrl_rowtag, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input  [4:0]  io_in_bits_ctrl_decode_src, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input         io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output        io_out_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [31:0] io_out_bits_res, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output        io_out_bits_ctrl_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [1:0]  io_out_bits_ctrl_rowtag, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  output [4:0]  io_out_bits_ctrl_decode_src, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
  input         io_flush // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 105:16]
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  reg  validReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 110:27]
  reg [31:0] dataReg_res; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg  dataReg_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg [1:0] dataReg_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  reg [4:0] dataReg_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 111:23]
  wire  _GEN_0 = io_out_ready ? 1'h0 : validReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 113:24 114:16 110:27]
  wire  _T = io_in_ready & io_in_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 52:35]
  wire  _GEN_1 = _T | _GEN_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22 117:16]
  assign io_in_ready = ~validReg | io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 123:30]
  assign io_out_valid = validReg; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 124:18]
  assign io_out_bits_res = dataReg_res; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_ctrl_mixPc = dataReg_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_ctrl_rowtag = dataReg_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  assign io_out_bits_ctrl_decode_src = dataReg_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 125:18]
  always @(posedge clock) begin
    if (reset) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 110:27]
      validReg <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 110:27]
    end else if (io_flush) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 120:19]
      validReg <= 1'h0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 121:16]
    end else begin
      validReg <= _GEN_1;
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_res <= io_in_bits_res; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_ctrl_mixPc <= io_in_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_ctrl_rowtag <= io_in_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
    end
    if (_T) begin // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 116:22]
      dataReg_ctrl_decode_src <= io_in_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 118:16]
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
  validReg = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  dataReg_res = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  dataReg_ctrl_mixPc = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  dataReg_ctrl_rowtag = _RAND_3[1:0];
  _RAND_4 = {1{`RANDOM}};
  dataReg_ctrl_decode_src = _RAND_4[4:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module RoundingUnit_8(
  input  [9:0] io_in, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 7:14]
  input        io_roundIn, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 7:14]
  input        io_stickyIn, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 7:14]
  output [9:0] io_out, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 7:14]
  output       io_cout // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 7:14]
);
  wire  g = io_in[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 16:25]
  wire  r_up = io_roundIn & io_stickyIn | io_roundIn & ~io_stickyIn & g; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 17:23]
  wire [9:0] out_r_up = io_in + 10'h1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 18:24]
  assign io_out = r_up ? out_r_up : io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 19:16]
  assign io_cout = r_up & &io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/RoundingUnit.scala 20:19]
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
  input  [31:0] io_in_bits_in, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 27:14]
  output [15:0] io_out_bits_result // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 27:14]
);
  wire [9:0] normal_rounder_io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 48:30]
  wire  normal_rounder_io_roundIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 48:30]
  wire  normal_rounder_io_stickyIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 48:30]
  wire [9:0] normal_rounder_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 48:30]
  wire  normal_rounder_io_cout; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 48:30]
  wire [11:0] shiftRightJam_io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire [7:0] shiftRightJam_io_shamt; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire [11:0] shiftRightJam_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire  shiftRightJam_io_sticky; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire [9:0] subnormal_rounder_io_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 70:33]
  wire  subnormal_rounder_io_roundIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 70:33]
  wire  subnormal_rounder_io_stickyIn; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 70:33]
  wire [9:0] subnormal_rounder_io_out; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 70:33]
  wire  subnormal_rounder_io_cout; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 70:33]
  wire  fp_in_sign = io_in_bits_in[31]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 58:19]
  wire [7:0] fp_in_exp = io_in_bits_in[30:23]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 59:18]
  wire [22:0] fp_in_sig = io_in_bits_in[22:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 60:18]
  wire  decode_expNotZero = |fp_in_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 31:28]
  wire  decode_expIsOnes = &fp_in_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 32:27]
  wire  decode_sigNotZero = |fp_in_sig; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 33:28]
  wire  decode__isNaN = decode_expIsOnes & decode_sigNotZero; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/package.scala 43:40]
  wire [8:0] _resultExpNoRound_T = {1'b0,$signed(fp_in_exp)}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 39:36]
  wire [8:0] resultExpNoRound = $signed(_resultExpNoRound_T) - 9'sh70; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 39:41]
  wire  normal_stickyBit = |fp_in_sig[11:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 46:54]
  wire [8:0] _normal_exp_rounded_T_2 = $signed(resultExpNoRound) + 9'sh1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 55:73]
  wire [8:0] normal_exp_rounded = normal_rounder_io_cout ? $signed(_normal_exp_rounded_T_2) : $signed(resultExpNoRound); // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 55:31]
  wire  _expOverflow_T = $signed(resultExpNoRound) > 9'sh1d; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 58:22]
  wire  _expOverflow_T_1 = $signed(resultExpNoRound) > 9'sh1e; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 59:22]
  wire  expOverflow = normal_rounder_io_cout ? _expOverflow_T : _expOverflow_T_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 56:24]
  wire  subnormal_exp_rounded = subnormal_rounder_io_cout; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 76:34]
  wire  mayBeSubnormal = $signed(resultExpNoRound) < 9'sh1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 78:41]
  wire  _common_exp_T = ~mayBeSubnormal; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 86:7]
  wire  _common_exp_T_1 = ~mayBeSubnormal & expOverflow; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 86:23]
  wire  _common_exp_T_4 = _common_exp_T & ~expOverflow; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 87:23]
  wire [4:0] _common_exp_T_6 = _common_exp_T_1 ? 5'h1f : 5'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] _common_exp_T_7 = _common_exp_T_4 ? normal_exp_rounded[4:0] : 5'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire  _common_exp_T_8 = mayBeSubnormal & subnormal_exp_rounded; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] _common_exp_T_9 = _common_exp_T_6 | _common_exp_T_7; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] _GEN_0 = {{4'd0}, _common_exp_T_8}; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] common_exp = _common_exp_T_9 | _GEN_0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _common_sig_T_6 = _common_exp_T_4 ? normal_rounder_io_out : 10'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _common_sig_T_7 = mayBeSubnormal ? subnormal_rounder_io_out : 10'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] common_sig = _common_sig_T_6 | _common_sig_T_7; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire  _result_T_1 = ~decode__isNaN & fp_in_sign; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 114:19]
  wire  _result_T_2 = ~decode_expIsOnes; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 116:25]
  wire [4:0] _result_T_4 = decode_expIsOnes ? 5'h1f : 5'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] _result_T_5 = _result_T_2 ? common_exp : 5'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] _result_T_6 = _result_T_4 | _result_T_5; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _result_T_8 = {decode_sigNotZero,9'h0}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 122:12]
  wire [9:0] _result_T_9 = decode_expIsOnes ? _result_T_8 : 10'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _result_T_10 = _result_T_2 ? common_sig : 10'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _result_T_11 = _result_T_9 | _result_T_10; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [5:0] result_hi = {_result_T_1,_result_T_6}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 113:19]
  RoundingUnit_8 normal_rounder ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 48:30]
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
  RoundingUnit_8 subnormal_rounder ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 70:33]
    .io_in(subnormal_rounder_io_in),
    .io_roundIn(subnormal_rounder_io_roundIn),
    .io_stickyIn(subnormal_rounder_io_stickyIn),
    .io_out(subnormal_rounder_io_out),
    .io_cout(subnormal_rounder_io_cout)
  );
  assign io_out_bits_result = {result_hi,_result_T_11}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 113:19]
  assign normal_rounder_io_in = fp_in_sig[22:13]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 44:34]
  assign normal_rounder_io_roundIn = fp_in_sig[12]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 45:61]
  assign normal_rounder_io_stickyIn = |fp_in_sig[11:0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 46:54]
  assign shiftRightJam_io_in = {decode_expNotZero,fp_in_sig[22:12]}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 66:8]
  assign shiftRightJam_io_shamt = 8'h71 - fp_in_exp; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 64:45]
  assign subnormal_rounder_io_in = shiftRightJam_io_out[10:1]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 71:56]
  assign subnormal_rounder_io_roundIn = shiftRightJam_io_out[0]; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 72:48]
  assign subnormal_rounder_io_stickyIn = shiftRightJam_io_sticky | normal_stickyBit; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 69:42]
endmodule
module DotProdUnit(
  input         clock,
  input         reset,
  output        io_in_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  input         io_in_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  input  [15:0] io_in_bits_vec_a_0, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  input  [15:0] io_in_bits_vec_a_1, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  input  [15:0] io_in_bits_vec_a_2, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  input  [15:0] io_in_bits_vec_a_3, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  input  [15:0] io_in_bits_vec_b_0, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  input  [15:0] io_in_bits_vec_b_1, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  input  [15:0] io_in_bits_vec_b_2, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  input  [15:0] io_in_bits_vec_b_3, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  input  [31:0] io_in_bits_c, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  input         io_in_bits_flush, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  input         io_in_bits_ctrl_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  input  [1:0]  io_in_bits_ctrl_rowtag, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  input  [4:0]  io_in_bits_ctrl_decode_src, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  input         io_out_ready, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  output        io_out_valid, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  output [31:0] io_out_bits_result, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  output        io_out_bits_ctrl_mixPc, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  output [1:0]  io_out_bits_ctrl_rowtag, // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
  output [4:0]  io_out_bits_ctrl_decode_src // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 20:14]
);
  wire [15:0] fmul_io_in_bits_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 88:22]
  wire [15:0] fmul_io_in_bits_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 88:22]
  wire [31:0] fmul_io_toFADD_bits; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 88:22]
  wire [15:0] fmul_1_io_in_bits_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 88:22]
  wire [15:0] fmul_1_io_in_bits_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 88:22]
  wire [31:0] fmul_1_io_toFADD_bits; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 88:22]
  wire [15:0] fmul_2_io_in_bits_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 88:22]
  wire [15:0] fmul_2_io_in_bits_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 88:22]
  wire [31:0] fmul_2_io_toFADD_bits; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 88:22]
  wire [15:0] fmul_3_io_in_bits_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 88:22]
  wire [15:0] fmul_3_io_in_bits_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 88:22]
  wire [31:0] fmul_3_io_toFADD_bits; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 88:22]
  wire [15:0] fcvt_io_in_bits_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 221:22]
  wire [31:0] fcvt_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 221:22]
  wire  pipeline_reg_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_io_in_bits_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_io_in_bits_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_io_in_bits_add_res_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_io_in_bits_add_res_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_io_in_bits_add_res_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_io_in_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [1:0] pipeline_reg_io_in_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [4:0] pipeline_reg_io_in_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_io_out_bits_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_io_out_bits_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_io_out_bits_add_res_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_io_out_bits_add_res_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_io_out_bits_add_res_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_io_out_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [1:0] pipeline_reg_io_out_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [4:0] pipeline_reg_io_out_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_io_flush; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] addResult_0_faddModule_io_in_bits_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 267:28]
  wire [31:0] addResult_0_faddModule_io_in_bits_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 267:28]
  wire [31:0] addResult_0_faddModule_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 267:28]
  wire [31:0] addResult_1_faddModule_io_in_bits_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 267:28]
  wire [31:0] addResult_1_faddModule_io_in_bits_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 267:28]
  wire [31:0] addResult_1_faddModule_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 267:28]
  wire  pipeline_reg_1_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_1_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_1_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_1_io_in_bits_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_1_io_in_bits_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_1_io_in_bits_add_res_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_1_io_in_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [1:0] pipeline_reg_1_io_in_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [4:0] pipeline_reg_1_io_in_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_1_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_1_io_out_bits_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_1_io_out_bits_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_1_io_out_bits_add_res_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_1_io_out_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [1:0] pipeline_reg_1_io_out_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [4:0] pipeline_reg_1_io_out_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_1_io_flush; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] addResult_0_faddModule_1_io_in_bits_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 267:28]
  wire [31:0] addResult_0_faddModule_1_io_in_bits_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 267:28]
  wire [31:0] addResult_0_faddModule_1_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 267:28]
  wire  pipeline_reg_2_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_2_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_2_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_2_io_in_bits_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_2_io_in_bits_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_2_io_in_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [1:0] pipeline_reg_2_io_in_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [4:0] pipeline_reg_2_io_in_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_2_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_2_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_2_io_out_bits_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_2_io_out_bits_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_2_io_out_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [1:0] pipeline_reg_2_io_out_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [4:0] pipeline_reg_2_io_out_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_2_io_flush; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] fadd_final_res_faddModule_io_in_bits_a; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 267:28]
  wire [31:0] fadd_final_res_faddModule_io_in_bits_b; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 267:28]
  wire [31:0] fadd_final_res_faddModule_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 267:28]
  wire  pipeline_reg_3_clock; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_3_reset; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_3_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_3_io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_3_io_in_bits_res; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_3_io_in_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [1:0] pipeline_reg_3_io_in_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [4:0] pipeline_reg_3_io_in_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_3_io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_3_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] pipeline_reg_3_io_out_bits_res; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_3_io_out_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [1:0] pipeline_reg_3_io_out_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [4:0] pipeline_reg_3_io_out_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire  pipeline_reg_3_io_flush; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
  wire [31:0] fcvt_1_io_in_bits_in; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 140:22]
  wire [15:0] fcvt_1_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 140:22]
  wire [15:0] _io_out_bits_result_T_1 = fcvt_1_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 94:22]
  wire [31:0] _io_out_bits_result_T_2 = {16'hffff,_io_out_bits_result_T_1}; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 94:8]
  FMULnoRound fmul ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 88:22]
    .io_in_bits_a(fmul_io_in_bits_a),
    .io_in_bits_b(fmul_io_in_bits_b),
    .io_toFADD_bits(fmul_io_toFADD_bits)
  );
  FMULnoRound fmul_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 88:22]
    .io_in_bits_a(fmul_1_io_in_bits_a),
    .io_in_bits_b(fmul_1_io_in_bits_b),
    .io_toFADD_bits(fmul_1_io_toFADD_bits)
  );
  FMULnoRound fmul_2 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 88:22]
    .io_in_bits_a(fmul_2_io_in_bits_a),
    .io_in_bits_b(fmul_2_io_in_bits_b),
    .io_toFADD_bits(fmul_2_io_toFADD_bits)
  );
  FMULnoRound fmul_3 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 88:22]
    .io_in_bits_a(fmul_3_io_in_bits_a),
    .io_in_bits_b(fmul_3_io_in_bits_b),
    .io_toFADD_bits(fmul_3_io_toFADD_bits)
  );
  FPUpConverter fcvt ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 221:22]
    .io_in_bits_in(fcvt_io_in_bits_in),
    .io_out_bits_result(fcvt_io_out_bits_result)
  );
  PipelineReg pipeline_reg ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
    .clock(pipeline_reg_clock),
    .reset(pipeline_reg_reset),
    .io_in_ready(pipeline_reg_io_in_ready),
    .io_in_valid(pipeline_reg_io_in_valid),
    .io_in_bits_add_res_0(pipeline_reg_io_in_bits_add_res_0),
    .io_in_bits_add_res_1(pipeline_reg_io_in_bits_add_res_1),
    .io_in_bits_add_res_2(pipeline_reg_io_in_bits_add_res_2),
    .io_in_bits_add_res_3(pipeline_reg_io_in_bits_add_res_3),
    .io_in_bits_add_res_4(pipeline_reg_io_in_bits_add_res_4),
    .io_in_bits_ctrl_mixPc(pipeline_reg_io_in_bits_ctrl_mixPc),
    .io_in_bits_ctrl_rowtag(pipeline_reg_io_in_bits_ctrl_rowtag),
    .io_in_bits_ctrl_decode_src(pipeline_reg_io_in_bits_ctrl_decode_src),
    .io_out_ready(pipeline_reg_io_out_ready),
    .io_out_valid(pipeline_reg_io_out_valid),
    .io_out_bits_add_res_0(pipeline_reg_io_out_bits_add_res_0),
    .io_out_bits_add_res_1(pipeline_reg_io_out_bits_add_res_1),
    .io_out_bits_add_res_2(pipeline_reg_io_out_bits_add_res_2),
    .io_out_bits_add_res_3(pipeline_reg_io_out_bits_add_res_3),
    .io_out_bits_add_res_4(pipeline_reg_io_out_bits_add_res_4),
    .io_out_bits_ctrl_mixPc(pipeline_reg_io_out_bits_ctrl_mixPc),
    .io_out_bits_ctrl_rowtag(pipeline_reg_io_out_bits_ctrl_rowtag),
    .io_out_bits_ctrl_decode_src(pipeline_reg_io_out_bits_ctrl_decode_src),
    .io_flush(pipeline_reg_io_flush)
  );
  FADD addResult_0_faddModule ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 267:28]
    .io_in_bits_a(addResult_0_faddModule_io_in_bits_a),
    .io_in_bits_b(addResult_0_faddModule_io_in_bits_b),
    .io_out_bits_result(addResult_0_faddModule_io_out_bits_result)
  );
  FADD addResult_1_faddModule ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 267:28]
    .io_in_bits_a(addResult_1_faddModule_io_in_bits_a),
    .io_in_bits_b(addResult_1_faddModule_io_in_bits_b),
    .io_out_bits_result(addResult_1_faddModule_io_out_bits_result)
  );
  PipelineReg_1 pipeline_reg_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
    .clock(pipeline_reg_1_clock),
    .reset(pipeline_reg_1_reset),
    .io_in_ready(pipeline_reg_1_io_in_ready),
    .io_in_valid(pipeline_reg_1_io_in_valid),
    .io_in_bits_add_res_0(pipeline_reg_1_io_in_bits_add_res_0),
    .io_in_bits_add_res_1(pipeline_reg_1_io_in_bits_add_res_1),
    .io_in_bits_add_res_2(pipeline_reg_1_io_in_bits_add_res_2),
    .io_in_bits_ctrl_mixPc(pipeline_reg_1_io_in_bits_ctrl_mixPc),
    .io_in_bits_ctrl_rowtag(pipeline_reg_1_io_in_bits_ctrl_rowtag),
    .io_in_bits_ctrl_decode_src(pipeline_reg_1_io_in_bits_ctrl_decode_src),
    .io_out_ready(pipeline_reg_1_io_out_ready),
    .io_out_valid(pipeline_reg_1_io_out_valid),
    .io_out_bits_add_res_0(pipeline_reg_1_io_out_bits_add_res_0),
    .io_out_bits_add_res_1(pipeline_reg_1_io_out_bits_add_res_1),
    .io_out_bits_add_res_2(pipeline_reg_1_io_out_bits_add_res_2),
    .io_out_bits_ctrl_mixPc(pipeline_reg_1_io_out_bits_ctrl_mixPc),
    .io_out_bits_ctrl_rowtag(pipeline_reg_1_io_out_bits_ctrl_rowtag),
    .io_out_bits_ctrl_decode_src(pipeline_reg_1_io_out_bits_ctrl_decode_src),
    .io_flush(pipeline_reg_1_io_flush)
  );
  FADD addResult_0_faddModule_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 267:28]
    .io_in_bits_a(addResult_0_faddModule_1_io_in_bits_a),
    .io_in_bits_b(addResult_0_faddModule_1_io_in_bits_b),
    .io_out_bits_result(addResult_0_faddModule_1_io_out_bits_result)
  );
  PipelineReg_2 pipeline_reg_2 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
    .clock(pipeline_reg_2_clock),
    .reset(pipeline_reg_2_reset),
    .io_in_ready(pipeline_reg_2_io_in_ready),
    .io_in_valid(pipeline_reg_2_io_in_valid),
    .io_in_bits_add_res_0(pipeline_reg_2_io_in_bits_add_res_0),
    .io_in_bits_add_res_1(pipeline_reg_2_io_in_bits_add_res_1),
    .io_in_bits_ctrl_mixPc(pipeline_reg_2_io_in_bits_ctrl_mixPc),
    .io_in_bits_ctrl_rowtag(pipeline_reg_2_io_in_bits_ctrl_rowtag),
    .io_in_bits_ctrl_decode_src(pipeline_reg_2_io_in_bits_ctrl_decode_src),
    .io_out_ready(pipeline_reg_2_io_out_ready),
    .io_out_valid(pipeline_reg_2_io_out_valid),
    .io_out_bits_add_res_0(pipeline_reg_2_io_out_bits_add_res_0),
    .io_out_bits_add_res_1(pipeline_reg_2_io_out_bits_add_res_1),
    .io_out_bits_ctrl_mixPc(pipeline_reg_2_io_out_bits_ctrl_mixPc),
    .io_out_bits_ctrl_rowtag(pipeline_reg_2_io_out_bits_ctrl_rowtag),
    .io_out_bits_ctrl_decode_src(pipeline_reg_2_io_out_bits_ctrl_decode_src),
    .io_flush(pipeline_reg_2_io_flush)
  );
  FADD fadd_final_res_faddModule ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 267:28]
    .io_in_bits_a(fadd_final_res_faddModule_io_in_bits_a),
    .io_in_bits_b(fadd_final_res_faddModule_io_in_bits_b),
    .io_out_bits_result(fadd_final_res_faddModule_io_out_bits_result)
  );
  PipelineReg_3 pipeline_reg_3 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 130:32]
    .clock(pipeline_reg_3_clock),
    .reset(pipeline_reg_3_reset),
    .io_in_ready(pipeline_reg_3_io_in_ready),
    .io_in_valid(pipeline_reg_3_io_in_valid),
    .io_in_bits_res(pipeline_reg_3_io_in_bits_res),
    .io_in_bits_ctrl_mixPc(pipeline_reg_3_io_in_bits_ctrl_mixPc),
    .io_in_bits_ctrl_rowtag(pipeline_reg_3_io_in_bits_ctrl_rowtag),
    .io_in_bits_ctrl_decode_src(pipeline_reg_3_io_in_bits_ctrl_decode_src),
    .io_out_ready(pipeline_reg_3_io_out_ready),
    .io_out_valid(pipeline_reg_3_io_out_valid),
    .io_out_bits_res(pipeline_reg_3_io_out_bits_res),
    .io_out_bits_ctrl_mixPc(pipeline_reg_3_io_out_bits_ctrl_mixPc),
    .io_out_bits_ctrl_rowtag(pipeline_reg_3_io_out_bits_ctrl_rowtag),
    .io_out_bits_ctrl_decode_src(pipeline_reg_3_io_out_bits_ctrl_decode_src),
    .io_flush(pipeline_reg_3_io_flush)
  );
  FPDownConverter fcvt_1 ( // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 140:22]
    .io_in_bits_in(fcvt_1_io_in_bits_in),
    .io_out_bits_result(fcvt_1_io_out_bits_result)
  );
  assign io_in_ready = pipeline_reg_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 44:22 70:14]
  assign io_out_valid = pipeline_reg_3_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 115:16]
  assign io_out_bits_result = pipeline_reg_3_io_out_bits_ctrl_mixPc ? pipeline_reg_3_io_out_bits_res :
    _io_out_bits_result_T_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 113:28]
  assign io_out_bits_ctrl_mixPc = pipeline_reg_3_io_out_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 114:20]
  assign io_out_bits_ctrl_rowtag = pipeline_reg_3_io_out_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 114:20]
  assign io_out_bits_ctrl_decode_src = pipeline_reg_3_io_out_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 114:20]
  assign fmul_io_in_bits_a = io_in_bits_vec_a_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 91:23]
  assign fmul_io_in_bits_b = io_in_bits_vec_b_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 92:23]
  assign fmul_1_io_in_bits_a = io_in_bits_vec_a_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 91:23]
  assign fmul_1_io_in_bits_b = io_in_bits_vec_b_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 92:23]
  assign fmul_2_io_in_bits_a = io_in_bits_vec_a_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 91:23]
  assign fmul_2_io_in_bits_b = io_in_bits_vec_b_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 92:23]
  assign fmul_3_io_in_bits_a = io_in_bits_vec_a_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 91:23]
  assign fmul_3_io_in_bits_b = io_in_bits_vec_b_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FMUL.scala 92:23]
  assign fcvt_io_in_bits_in = &io_in_bits_c[31:16] ? io_in_bits_c[15:0] : 16'h7e00; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 87:8]
  assign pipeline_reg_clock = clock;
  assign pipeline_reg_reset = reset;
  assign pipeline_reg_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 131:32]
  assign pipeline_reg_io_in_bits_add_res_0 = fmul_io_toFADD_bits; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 43:24 47:19]
  assign pipeline_reg_io_in_bits_add_res_1 = fmul_1_io_toFADD_bits; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 43:24 47:19]
  assign pipeline_reg_io_in_bits_add_res_2 = fmul_2_io_toFADD_bits; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 43:24 47:19]
  assign pipeline_reg_io_in_bits_add_res_3 = fmul_3_io_toFADD_bits; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 43:24 47:19]
  assign pipeline_reg_io_in_bits_add_res_4 = io_in_bits_ctrl_mixPc ? io_in_bits_c : fcvt_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 51:27]
  assign pipeline_reg_io_in_bits_ctrl_mixPc = io_in_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 63:25 65:20]
  assign pipeline_reg_io_in_bits_ctrl_rowtag = io_in_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 63:25 65:20]
  assign pipeline_reg_io_in_bits_ctrl_decode_src = io_in_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 63:25 65:20]
  assign pipeline_reg_io_out_ready = pipeline_reg_1_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 66:25 70:14]
  assign pipeline_reg_io_flush = io_in_bits_flush; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 134:29]
  assign addResult_0_faddModule_io_in_bits_a = pipeline_reg_io_out_bits_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 273:29]
  assign addResult_0_faddModule_io_in_bits_b = pipeline_reg_io_out_bits_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 274:29]
  assign addResult_1_faddModule_io_in_bits_a = pipeline_reg_io_out_bits_add_res_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 273:29]
  assign addResult_1_faddModule_io_in_bits_b = pipeline_reg_io_out_bits_add_res_3; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 274:29]
  assign pipeline_reg_1_clock = clock;
  assign pipeline_reg_1_reset = reset;
  assign pipeline_reg_1_io_in_valid = pipeline_reg_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 131:32]
  assign pipeline_reg_1_io_in_bits_add_res_0 = addResult_0_faddModule_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 80:27 85:24]
  assign pipeline_reg_1_io_in_bits_add_res_1 = addResult_1_faddModule_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 80:27 85:24]
  assign pipeline_reg_1_io_in_bits_add_res_2 = pipeline_reg_io_out_bits_add_res_4; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 80:27 87:24]
  assign pipeline_reg_1_io_in_bits_ctrl_mixPc = pipeline_reg_io_out_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 63:25 65:20]
  assign pipeline_reg_1_io_in_bits_ctrl_rowtag = pipeline_reg_io_out_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 63:25 65:20]
  assign pipeline_reg_1_io_in_bits_ctrl_decode_src = pipeline_reg_io_out_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 63:25 65:20]
  assign pipeline_reg_1_io_out_ready = pipeline_reg_2_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 66:25 70:14]
  assign pipeline_reg_1_io_flush = io_in_bits_flush; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 134:29]
  assign addResult_0_faddModule_1_io_in_bits_a = pipeline_reg_1_io_out_bits_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 273:29]
  assign addResult_0_faddModule_1_io_in_bits_b = pipeline_reg_1_io_out_bits_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 274:29]
  assign pipeline_reg_2_clock = clock;
  assign pipeline_reg_2_reset = reset;
  assign pipeline_reg_2_io_in_valid = pipeline_reg_1_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 131:32]
  assign pipeline_reg_2_io_in_bits_add_res_0 = addResult_0_faddModule_1_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 80:27 85:24]
  assign pipeline_reg_2_io_in_bits_add_res_1 = pipeline_reg_1_io_out_bits_add_res_2; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 80:27 87:24]
  assign pipeline_reg_2_io_in_bits_ctrl_mixPc = pipeline_reg_1_io_out_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 63:25 65:20]
  assign pipeline_reg_2_io_in_bits_ctrl_rowtag = pipeline_reg_1_io_out_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 63:25 65:20]
  assign pipeline_reg_2_io_in_bits_ctrl_decode_src = pipeline_reg_1_io_out_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 63:25 65:20]
  assign pipeline_reg_2_io_out_ready = pipeline_reg_3_io_in_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 109:12 56:22]
  assign pipeline_reg_2_io_flush = io_in_bits_flush; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 134:29]
  assign fadd_final_res_faddModule_io_in_bits_a = pipeline_reg_2_io_out_bits_add_res_0; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 273:29]
  assign fadd_final_res_faddModule_io_in_bits_b = pipeline_reg_2_io_out_bits_add_res_1; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FADD.scala 274:29]
  assign pipeline_reg_3_clock = clock;
  assign pipeline_reg_3_reset = reset;
  assign pipeline_reg_3_io_in_valid = pipeline_reg_2_io_out_valid; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 131:32]
  assign pipeline_reg_3_io_in_bits_res = fadd_final_res_faddModule_io_out_bits_result; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 102:21 103:15]
  assign pipeline_reg_3_io_in_bits_ctrl_mixPc = pipeline_reg_2_io_out_bits_ctrl_mixPc; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 102:21 104:16]
  assign pipeline_reg_3_io_in_bits_ctrl_rowtag = pipeline_reg_2_io_out_bits_ctrl_rowtag; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 102:21 104:16]
  assign pipeline_reg_3_io_in_bits_ctrl_decode_src = pipeline_reg_2_io_out_bits_ctrl_decode_src; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/DotProdUnit.scala 102:21 104:16]
  assign pipeline_reg_3_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 133:33]
  assign pipeline_reg_3_io_flush = io_in_bits_flush; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/TensorCore/package.scala 134:29]
  assign fcvt_1_io_in_bits_in = pipeline_reg_3_io_out_bits_res; // @[Users/liuyuxuan/proc/Adagio/src/main/scala/fpu/FPToFP.scala 143:24]
endmodule
