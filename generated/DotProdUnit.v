module LZC(
  input  [10:0] io_in, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 11:14]
  output [3:0]  io_out // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 11:14]
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
  output        io_in_ready, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 26:14]
  input         io_in_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 26:14]
  input  [15:0] io_in_bits_a, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 26:14]
  input  [15:0] io_in_bits_b, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 26:14]
  input         io_toFADD_ready, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 26:14]
  output        io_toFADD_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 26:14]
  output [31:0] io_toFADD_bits_fp_prod, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 26:14]
  output        io_toFADD_bits_inter_flags_isNaN, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 26:14]
  output        io_toFADD_bits_inter_flags_isInf, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 26:14]
  output        io_toFADD_bits_inter_flags_isInv // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 26:14]
);
  wire [10:0] aLZC_lzc_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
  wire [3:0] aLZC_lzc_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
  wire [10:0] bLZC_lzc_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
  wire [3:0] bLZC_lzc_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
  wire  fp_a_sign = io_in_bits_a[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 58:19]
  wire [4:0] fp_a_exp = io_in_bits_a[14:10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 59:18]
  wire [9:0] fp_a_sig = io_in_bits_a[9:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 60:18]
  wire  fp_b_sign = io_in_bits_b[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 58:19]
  wire [4:0] fp_b_exp = io_in_bits_b[14:10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 59:18]
  wire [9:0] fp_b_sig = io_in_bits_b[9:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 60:18]
  wire  expNotZero = |fp_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 31:28]
  wire  expIsOnes = &fp_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 32:27]
  wire  sigNotZero = |fp_a_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 33:28]
  wire  decode_a_expIsZero = ~expNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 36:27]
  wire  decode_a_sigIsZero = ~sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 39:27]
  wire  decode_a_isInf = expIsOnes & decode_a_sigIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 41:40]
  wire  decode_a_isZero = decode_a_expIsZero & decode_a_sigIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 42:41]
  wire  decode_a_isNaN = expIsOnes & sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 43:40]
  wire  decode_a_isSNaN = decode_a_isNaN & ~fp_a_sig[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 44:37]
  wire  expNotZero_1 = |fp_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 31:28]
  wire  expIsOnes_1 = &fp_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 32:27]
  wire  sigNotZero_1 = |fp_b_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 33:28]
  wire  decode_b_expIsZero = ~expNotZero_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 36:27]
  wire  decode_b_sigIsZero = ~sigNotZero_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 39:27]
  wire  decode_b_isInf = expIsOnes_1 & decode_b_sigIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 41:40]
  wire  decode_b_isZero = decode_b_expIsZero & decode_b_sigIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 42:41]
  wire  decode_b_isNaN = expIsOnes_1 & sigNotZero_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 43:40]
  wire  decode_b_isSNaN = decode_b_isNaN & ~fp_b_sig[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 44:37]
  wire  raw_a_isSub = sigNotZero & decode_a_expIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 81:78]
  wire [4:0] _raw_a_inner_exp_T_1 = fp_a_exp + 5'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 83:38]
  wire [4:0] raw_a_exp = raw_a_isSub ? _raw_a_inner_exp_T_1 : fp_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 83:23]
  wire [10:0] raw_a_sig = {expNotZero,fp_a_sig}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 84:23]
  wire  raw_b_isSub = sigNotZero_1 & decode_b_expIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 81:78]
  wire [4:0] _raw_b_inner_exp_T_1 = fp_b_exp + 5'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 83:38]
  wire [4:0] raw_b_exp = raw_b_isSub ? _raw_b_inner_exp_T_1 : fp_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 83:23]
  wire [10:0] raw_b_sig = {expNotZero_1,fp_b_sig}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 84:23]
  wire  hasZero = decode_a_isZero | decode_b_isZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 39:33]
  wire  resultSign = fp_a_sign ^ fp_b_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 40:30]
  wire [5:0] _expSum_T = {1'h0,raw_a_exp}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 41:19]
  wire [5:0] _expSum_T_1 = {1'h0,raw_b_exp}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 41:46]
  wire [5:0] expSum = _expSum_T + _expSum_T_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 41:41]
  wire [7:0] _expSumUpPc_T = {2'h0,expSum}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 44:23]
  wire [7:0] expSumUpPc = _expSumUpPc_T + 8'h61; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 44:71]
  wire [7:0] resultExpNoShift = hasZero ? 8'h0 : expSumUpPc; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [21:0] resultSigNoShift = raw_a_sig * raw_b_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 51:37]
  wire [3:0] lzcRaw = aLZC_lzc_io_out + bLZC_lzc_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 57:21]
  wire [21:0] ErrorDetectMask = 22'h200000 >> lzcRaw; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 58:68]
  wire [21:0] _lzcError_T = resultSigNoShift & ErrorDetectMask; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 59:37]
  wire  lzcError = ~(|_lzcError_T); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 59:18]
  wire [3:0] _lzc_T_1 = lzcRaw + 4'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 60:34]
  wire [3:0] lzc = lzcError ? _lzc_T_1 : lzcRaw; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 60:16]
  wire [7:0] _shiftLimit_T_1 = resultExpNoShift + 8'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 61:38]
  wire [7:0] _GEN_0 = {{4'd0}, lzc}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 61:45]
  wire  shiftLimit = _shiftLimit_T_1 <= _GEN_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 61:45]
  wire [7:0] _resultSigShifted_T = shiftLimit ? resultExpNoShift : {{4'd0}, lzc}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 63:50]
  wire [276:0] _GEN_1 = {{255'd0}, resultSigNoShift}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 63:44]
  wire [276:0] _resultSigShifted_T_1 = _GEN_1 << _resultSigShifted_T; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 63:44]
  wire [21:0] resultSigShifted = _resultSigShifted_T_1[21:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 63:86]
  wire [7:0] _resultExpShifted_T_1 = resultExpNoShift - _GEN_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 64:79]
  wire [7:0] _resultExpShifted_T_3 = _resultExpShifted_T_1 + 8'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 64:85]
  wire [7:0] resultExpShifted = shiftLimit ? 8'h0 : _resultExpShifted_T_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 64:29]
  wire  hasNaN = decode_a_isNaN | decode_b_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 68:31]
  wire  hasSNaN = decode_a_isSNaN | decode_b_isSNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 69:33]
  wire  hasInf = decode_a_isInf | decode_b_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 70:31]
  wire  special_case_happen = hasZero | hasNaN | hasInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 71:47]
  wire  zero_mul_inf = hasZero & hasInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 73:30]
  wire  nan_result = hasNaN | zero_mul_inf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 74:27]
  wire [31:0] _special_result_T_2 = {resultSign,8'hff,23'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 79:10]
  wire [31:0] _special_result_T_3 = {resultSign,31'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 83:10]
  wire [31:0] _special_result_T_4 = hasInf ? _special_result_T_2 : _special_result_T_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 78:8]
  wire [31:0] special_result = nan_result ? 32'h7fc00000 : _special_result_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 76:27]
  wire [31:0] _io_toFADD_bits_fp_prod_T_1 = {resultSign,resultExpShifted,resultSigShifted[20:0],2'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 91:8]
  LZC aLZC_lzc ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
    .io_in(aLZC_lzc_io_in),
    .io_out(aLZC_lzc_io_out)
  );
  LZC bLZC_lzc ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
    .io_in(bLZC_lzc_io_in),
    .io_out(bLZC_lzc_io_out)
  );
  assign io_in_ready = io_toFADD_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 93:15]
  assign io_toFADD_valid = io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 94:19]
  assign io_toFADD_bits_fp_prod = special_case_happen ? special_result : _io_toFADD_bits_fp_prod_T_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 89:32]
  assign io_toFADD_bits_inter_flags_isNaN = hasNaN | zero_mul_inf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 74:27]
  assign io_toFADD_bits_inter_flags_isInf = decode_a_isInf | decode_b_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 70:31]
  assign io_toFADD_bits_inter_flags_isInv = hasSNaN | zero_mul_inf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 75:28]
  assign aLZC_lzc_io_in = {expNotZero,fp_a_sig}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 84:23]
  assign bLZC_lzc_io_in = {expNotZero_1,fp_b_sig}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 84:23]
endmodule
module LZC_8(
  input  [9:0] io_in, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 11:14]
  output [3:0] io_out // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 11:14]
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
  output        io_in_ready, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 246:14]
  input  [15:0] io_in_bits_in, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 246:14]
  input         io_out_ready, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 246:14]
  output [31:0] io_out_bits_result // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 246:14]
);
  wire [9:0] subnormal_shamt_lzc_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
  wire [3:0] subnormal_shamt_lzc_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
  wire  fp_in_sign = io_in_bits_in[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 58:19]
  wire [4:0] fp_in_exp = io_in_bits_in[14:10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 59:18]
  wire [9:0] fp_in_sig = io_in_bits_in[9:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 60:18]
  wire  decode_in_expNotZero = |fp_in_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 31:28]
  wire  decode_in_expIsOnes = &fp_in_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 32:27]
  wire  decode_in_sigNotZero = |fp_in_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 33:28]
  wire  decode_in__expIsZero = ~decode_in_expNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 36:27]
  wire  decode_in__isSubnormal = decode_in__expIsZero & decode_in_sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 40:46]
  wire  decode_in__isNaN = decode_in_expIsOnes & decode_in_sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 43:40]
  wire [7:0] _GEN_0 = {{3'd0}, fp_in_exp}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 258:45]
  wire [7:0] normal_exp = 8'h70 + _GEN_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 258:45]
  wire [24:0] _GEN_2 = {{15'd0}, fp_in_sig}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 264:20]
  wire [24:0] _subnormal_sig_T = _GEN_2 << subnormal_shamt_lzc_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 264:20]
  wire [7:0] _GEN_1 = {{4'd0}, subnormal_shamt_lzc_io_out}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 265:48]
  wire [7:0] subnormal_exp = 8'h70 - _GEN_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 265:48]
  wire  _result_T_1 = ~decode_in__isNaN & fp_in_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 270:22]
  wire  _result_T_4 = ~decode_in_expIsOnes & ~decode_in__expIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 276:30]
  wire [7:0] _result_T_6 = decode_in_expIsOnes ? 8'hff : 8'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [7:0] _result_T_8 = decode_in__isSubnormal ? subnormal_exp : 8'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [7:0] _result_T_9 = _result_T_4 ? normal_exp : 8'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [7:0] _result_T_11 = _result_T_6 | _result_T_8; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [7:0] _result_T_12 = _result_T_11 | _result_T_9; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [22:0] _result_T_16 = {decode_in_sigNotZero,22'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 292:12]
  wire [22:0] _result_T_17 = {_subnormal_sig_T[8:0],1'h0,13'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 293:12]
  wire [22:0] _result_T_18 = {fp_in_sig,13'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 294:12]
  wire [22:0] _result_T_19 = decode_in_expIsOnes ? _result_T_16 : 23'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [22:0] _result_T_20 = decode_in__expIsZero ? _result_T_17 : 23'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [22:0] _result_T_21 = _result_T_4 ? _result_T_18 : 23'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [22:0] _result_T_22 = _result_T_19 | _result_T_20; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [22:0] _result_T_23 = _result_T_22 | _result_T_21; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [8:0] result_hi = {_result_T_1,_result_T_12}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 269:19]
  LZC_8 subnormal_shamt_lzc ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
    .io_in(subnormal_shamt_lzc_io_in),
    .io_out(subnormal_shamt_lzc_io_out)
  );
  assign io_in_ready = io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 301:15]
  assign io_out_bits_result = {result_hi,_result_T_23}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 269:19]
  assign subnormal_shamt_lzc_io_in = io_in_bits_in[9:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 60:18]
endmodule
module ShiftRightJam(
  input  [25:0] io_in, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 11:14]
  input  [4:0]  io_shamt, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 11:14]
  output [25:0] io_out, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 11:14]
  output        io_sticky // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 11:14]
);
  wire  exceed_max_shift = io_shamt > 5'h1a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 17:35]
  wire [31:0] _sticky_mask_T = 32'h1 << io_shamt; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 20:11]
  wire [31:0] _sticky_mask_T_2 = _sticky_mask_T - 32'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 20:28]
  wire [25:0] _sticky_mask_T_5 = exceed_max_shift ? 26'h3ffffff : 26'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 20:53]
  wire [25:0] sticky_mask = _sticky_mask_T_2[25:0] | _sticky_mask_T_5; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 20:47]
  wire [25:0] _io_out_T = io_in >> io_shamt; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 21:46]
  wire [25:0] _io_sticky_T = io_in & sticky_mask; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 22:23]
  assign io_out = exceed_max_shift ? 26'h0 : _io_out_T; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 21:16]
  assign io_sticky = |_io_sticky_T; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 22:38]
endmodule
module RoundingUnit(
  input  [22:0] io_in, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 7:14]
  input         io_roundIn, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 7:14]
  input         io_stickyIn, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 7:14]
  input         io_signIn, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 7:14]
  input  [2:0]  io_rm, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 7:14]
  output [22:0] io_out, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 7:14]
  output        io_inexact, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 7:14]
  output        io_cout // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 7:14]
);
  wire  g = io_in[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 19:25]
  wire  inexact = io_roundIn | io_stickyIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 20:19]
  wire  _r_up_T_4 = io_roundIn & io_stickyIn | io_roundIn & ~io_stickyIn & g; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 25:24]
  wire  _r_up_T_6 = inexact & ~io_signIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 27:23]
  wire  _r_up_T_7 = inexact & io_signIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 28:23]
  wire  _r_up_T_11 = 3'h1 == io_rm ? 1'h0 : 3'h0 == io_rm & _r_up_T_4; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _r_up_T_13 = 3'h3 == io_rm ? _r_up_T_6 : _r_up_T_11; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _r_up_T_15 = 3'h2 == io_rm ? _r_up_T_7 : _r_up_T_13; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  r_up = 3'h4 == io_rm ? io_roundIn : _r_up_T_15; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [22:0] out_r_up = io_in + 23'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 32:24]
  assign io_out = r_up ? out_r_up : io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 33:16]
  assign io_inexact = io_roundIn | io_stickyIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 20:19]
  assign io_cout = r_up & &io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 36:19]
endmodule
module TininessRounder(
  input         io_in_sign, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 60:14]
  input  [26:0] io_in_sig, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 60:14]
  input  [2:0]  io_rm, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 60:14]
  output        io_tininess // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 60:14]
);
  wire [22:0] rounder_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  rounder_io_roundIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  rounder_io_stickyIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  rounder_io_signIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire [2:0] rounder_io_rm; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire [22:0] rounder_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  rounder_io_inexact; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  rounder_io_cout; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  _tininess_T_5 = io_in_sig[26:25] == 2'h1 & ~rounder_io_cout; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 74:41]
  RoundingUnit rounder ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
    .io_in(rounder_io_in),
    .io_roundIn(rounder_io_roundIn),
    .io_stickyIn(rounder_io_stickyIn),
    .io_signIn(rounder_io_signIn),
    .io_rm(rounder_io_rm),
    .io_out(rounder_io_out),
    .io_inexact(rounder_io_inexact),
    .io_cout(rounder_io_cout)
  );
  assign io_tininess = io_in_sig[26:25] == 2'h0 | _tininess_T_5; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 73:53]
  assign rounder_io_in = io_in_sig[24:2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 45:33]
  assign rounder_io_roundIn = io_in_sig[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 46:50]
  assign rounder_io_stickyIn = |io_in_sig[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 47:51]
  assign rounder_io_signIn = io_in_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 49:23]
  assign rounder_io_rm = io_rm; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 48:19]
endmodule
module FarPath(
  input         io_in_a_sign, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 9:14]
  input  [7:0]  io_in_a_exp, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 9:14]
  input  [23:0] io_in_a_sig, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 9:14]
  input  [7:0]  io_in_b_exp, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 9:14]
  input  [23:0] io_in_b_sig, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 9:14]
  input         io_in_addSig, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 9:14]
  input         io_in_tinyAdd, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 9:14]
  input  [4:0]  io_in_shiftNum, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 9:14]
  input  [2:0]  io_in_roundingMode, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 9:14]
  output [31:0] io_out_result, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 9:14]
  output        io_out_far_path_of, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 9:14]
  output        io_out_far_path_ix, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 9:14]
  output        io_out_far_path_uf // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 9:14]
);
  wire [25:0] shiftRightJam_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire [4:0] shiftRightJam_io_shamt; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire [25:0] shiftRightJam_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire  shiftRightJam_io_sticky; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire  far_path_tininess_rounder_io_in_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 73:41]
  wire [26:0] far_path_tininess_rounder_io_in_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 73:41]
  wire [2:0] far_path_tininess_rounder_io_rm; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 73:41]
  wire  far_path_tininess_rounder_io_tininess; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 73:41]
  wire [22:0] far_path_rounder_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  far_path_rounder_io_roundIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  far_path_rounder_io_stickyIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  far_path_rounder_io_signIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire [2:0] far_path_rounder_io_rm; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire [22:0] far_path_rounder_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  far_path_rounder_io_inexact; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  far_path_rounder_io_cout; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  aIsZero = ~(|io_in_a_exp); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 26:17]
  wire  bIsZero = ~(|io_in_b_exp); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 27:17]
  wire  bothZero = aIsZero & bIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 28:26]
  wire [27:0] pos_sigB = {1'h0,shiftRightJam_io_out,shiftRightJam_io_sticky}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 33:21]
  wire [26:0] _neg_sigB_T = {shiftRightJam_io_out,shiftRightJam_io_sticky}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 34:36]
  wire [26:0] _neg_sigB_T_1 = ~_neg_sigB_T; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 34:32]
  wire [26:0] _neg_sigB_T_3 = _neg_sigB_T_1 + 27'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 34:63]
  wire [27:0] neg_sigB = {1'h1,_neg_sigB_T_3}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 34:21]
  wire [27:0] adder_in_sigB = io_in_addSig ? pos_sigB : neg_sigB; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 35:26]
  wire [27:0] adder_in_sigA = {1'h0,io_in_a_sig,3'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 36:26]
  wire [27:0] resultSigInNormalCase = adder_in_sigA + adder_in_sigB; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 37:45]
  wire [27:0] result_sig_raw = bIsZero ? adder_in_sigA : resultSigInNormalCase; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 39:27]
  wire  cout = result_sig_raw[27]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 41:33]
  wire  keep = result_sig_raw[26]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 42:41]
  wire  _resultSigNoRound_T = keep | io_in_tinyAdd; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 45:19]
  wire [26:0] _resultSigNoRound_T_4 = {result_sig_raw[27:2],|result_sig_raw[1:0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 47:44]
  wire [26:0] _resultSigNoRound_T_9 = {result_sig_raw[26:1],|result_sig_raw[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 48:52]
  wire [26:0] _resultSigNoRound_T_14 = {result_sig_raw[25:0],1'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 49:52]
  wire [26:0] _resultSigNoRound_T_15 = _resultSigNoRound_T ? _resultSigNoRound_T_9 : _resultSigNoRound_T_14; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [26:0] resultSigNoRound = cout ? _resultSigNoRound_T_4 : _resultSigNoRound_T_15; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [7:0] _resultExpNoRound_T_1 = io_in_a_exp + 8'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 55:28]
  wire  _resultExpNoRound_T_2 = keep | bothZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 56:13]
  wire [7:0] _resultExpNoRound_T_5 = io_in_a_exp - 8'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 57:43]
  wire [7:0] _resultExpNoRound_T_6 = _resultExpNoRound_T_2 ? io_in_a_exp : _resultExpNoRound_T_5; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [7:0] resultExpNoRound = cout ? _resultExpNoRound_T_1 : _resultExpNoRound_T_6; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire  far_path_tininess = io_in_tinyAdd & far_path_tininess_rounder_io_tininess; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 76:35]
  wire [7:0] _GEN_0 = {{7'd0}, far_path_rounder_io_cout}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 85:55]
  wire [7:0] far_path_exp_rounded = _GEN_0 + resultExpNoRound; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 85:55]
  wire  far_path_may_of = &io_in_b_exp & io_in_addSig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 88:42]
  wire  far_path_may_uf = far_path_tininess & ~far_path_may_of; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 90:43]
  wire  far_path_of_before_round = resultExpNoRound == 8'hff; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 93:22]
  wire  _far_path_of_after_round_T = resultExpNoRound == 8'hfe; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 95:22]
  wire  far_path_of_after_round = far_path_rounder_io_cout & _far_path_of_after_round_T; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 94:58]
  wire [8:0] io_out_result_hi = {io_in_a_sign,far_path_exp_rounded}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 103:8]
  ShiftRightJam shiftRightJam ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 27:31]
    .io_in(shiftRightJam_io_in),
    .io_shamt(shiftRightJam_io_shamt),
    .io_out(shiftRightJam_io_out),
    .io_sticky(shiftRightJam_io_sticky)
  );
  TininessRounder far_path_tininess_rounder ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 73:41]
    .io_in_sign(far_path_tininess_rounder_io_in_sign),
    .io_in_sig(far_path_tininess_rounder_io_in_sig),
    .io_rm(far_path_tininess_rounder_io_rm),
    .io_tininess(far_path_tininess_rounder_io_tininess)
  );
  RoundingUnit far_path_rounder ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
    .io_in(far_path_rounder_io_in),
    .io_roundIn(far_path_rounder_io_roundIn),
    .io_stickyIn(far_path_rounder_io_stickyIn),
    .io_signIn(far_path_rounder_io_signIn),
    .io_rm(far_path_rounder_io_rm),
    .io_out(far_path_rounder_io_out),
    .io_inexact(far_path_rounder_io_inexact),
    .io_cout(far_path_rounder_io_cout)
  );
  assign io_out_result = {io_out_result_hi,far_path_rounder_io_out}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 103:8]
  assign io_out_far_path_of = far_path_of_before_round | far_path_of_after_round | far_path_may_of; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 98:57]
  assign io_out_far_path_ix = far_path_rounder_io_inexact | io_out_far_path_of; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 99:53]
  assign io_out_far_path_uf = far_path_may_uf & io_out_far_path_ix; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 100:41]
  assign shiftRightJam_io_in = {io_in_b_sig,2'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 30:53]
  assign shiftRightJam_io_shamt = io_in_shiftNum; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 29:28]
  assign far_path_tininess_rounder_io_in_sign = io_in_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 68:27 70:22]
  assign far_path_tininess_rounder_io_in_sig = cout ? _resultSigNoRound_T_4 : _resultSigNoRound_T_15; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  assign far_path_tininess_rounder_io_rm = io_in_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 75:35]
  assign far_path_rounder_io_in = resultSigNoRound[25:3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 45:33]
  assign far_path_rounder_io_roundIn = resultSigNoRound[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 46:50]
  assign far_path_rounder_io_stickyIn = |resultSigNoRound[1:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 47:51]
  assign far_path_rounder_io_signIn = io_in_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 49:23]
  assign far_path_rounder_io_rm = io_in_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 48:19]
endmodule
module PreEncoder(
  input  [24:0] io_g, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 11:14]
  input  [24:0] io_s, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 11:14]
  input  [24:0] io_e, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 11:14]
  output [24:0] io_f // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 11:14]
);
  wire  _f_0_T_6 = ~io_e[1] & io_s[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 17:25]
  wire  _f_0_T_7 = io_e[1] & io_g[0] | _f_0_T_6; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 16:33]
  wire  _f_0_T_10 = io_e[1] & io_s[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 18:25]
  wire  _f_0_T_11 = _f_0_T_7 | _f_0_T_10; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 17:33]
  wire  f_0 = _f_0_T_11 | io_e[1] & io_s[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 18:33]
  wire  _f_1_T_4 = ~io_s[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_1_T_7 = ~io_e[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_1_T_12 = ~io_e[2] & io_s[1] & _f_1_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_1_T_13 = io_e[2] & io_g[1] & ~io_s[0] | _f_1_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_1_T_18 = ~io_g[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_1_T_19 = io_e[2] & io_s[1] & ~io_g[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_1_T_20 = _f_1_T_13 | _f_1_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_1_T_27 = _f_1_T_7 & io_g[1] & _f_1_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_1 = _f_1_T_20 | _f_1_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_2_T_4 = ~io_s[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_2_T_7 = ~io_e[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_2_T_12 = ~io_e[3] & io_s[2] & _f_2_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_2_T_13 = io_e[3] & io_g[2] & ~io_s[1] | _f_2_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_2_T_18 = ~io_g[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_2_T_19 = io_e[3] & io_s[2] & ~io_g[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_2_T_20 = _f_2_T_13 | _f_2_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_2_T_27 = _f_2_T_7 & io_g[2] & _f_2_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_2 = _f_2_T_20 | _f_2_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_3_T_4 = ~io_s[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_3_T_7 = ~io_e[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_3_T_12 = ~io_e[4] & io_s[3] & _f_3_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_3_T_13 = io_e[4] & io_g[3] & ~io_s[2] | _f_3_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_3_T_18 = ~io_g[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_3_T_19 = io_e[4] & io_s[3] & ~io_g[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_3_T_20 = _f_3_T_13 | _f_3_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_3_T_27 = _f_3_T_7 & io_g[3] & _f_3_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_3 = _f_3_T_20 | _f_3_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_4_T_4 = ~io_s[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_4_T_7 = ~io_e[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_4_T_12 = ~io_e[5] & io_s[4] & _f_4_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_4_T_13 = io_e[5] & io_g[4] & ~io_s[3] | _f_4_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_4_T_18 = ~io_g[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_4_T_19 = io_e[5] & io_s[4] & ~io_g[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_4_T_20 = _f_4_T_13 | _f_4_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_4_T_27 = _f_4_T_7 & io_g[4] & _f_4_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_4 = _f_4_T_20 | _f_4_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_5_T_4 = ~io_s[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_5_T_7 = ~io_e[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_5_T_12 = ~io_e[6] & io_s[5] & _f_5_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_5_T_13 = io_e[6] & io_g[5] & ~io_s[4] | _f_5_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_5_T_18 = ~io_g[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_5_T_19 = io_e[6] & io_s[5] & ~io_g[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_5_T_20 = _f_5_T_13 | _f_5_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_5_T_27 = _f_5_T_7 & io_g[5] & _f_5_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_5 = _f_5_T_20 | _f_5_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_6_T_4 = ~io_s[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_6_T_7 = ~io_e[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_6_T_12 = ~io_e[7] & io_s[6] & _f_6_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_6_T_13 = io_e[7] & io_g[6] & ~io_s[5] | _f_6_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_6_T_18 = ~io_g[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_6_T_19 = io_e[7] & io_s[6] & ~io_g[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_6_T_20 = _f_6_T_13 | _f_6_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_6_T_27 = _f_6_T_7 & io_g[6] & _f_6_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_6 = _f_6_T_20 | _f_6_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_7_T_4 = ~io_s[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_7_T_7 = ~io_e[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_7_T_12 = ~io_e[8] & io_s[7] & _f_7_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_7_T_13 = io_e[8] & io_g[7] & ~io_s[6] | _f_7_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_7_T_18 = ~io_g[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_7_T_19 = io_e[8] & io_s[7] & ~io_g[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_7_T_20 = _f_7_T_13 | _f_7_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_7_T_27 = _f_7_T_7 & io_g[7] & _f_7_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_7 = _f_7_T_20 | _f_7_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_8_T_4 = ~io_s[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_8_T_7 = ~io_e[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_8_T_12 = ~io_e[9] & io_s[8] & _f_8_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_8_T_13 = io_e[9] & io_g[8] & ~io_s[7] | _f_8_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_8_T_18 = ~io_g[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_8_T_19 = io_e[9] & io_s[8] & ~io_g[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_8_T_20 = _f_8_T_13 | _f_8_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_8_T_27 = _f_8_T_7 & io_g[8] & _f_8_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_8 = _f_8_T_20 | _f_8_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_9_T_4 = ~io_s[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_9_T_7 = ~io_e[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_9_T_12 = ~io_e[10] & io_s[9] & _f_9_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_9_T_13 = io_e[10] & io_g[9] & ~io_s[8] | _f_9_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_9_T_18 = ~io_g[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_9_T_19 = io_e[10] & io_s[9] & ~io_g[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_9_T_20 = _f_9_T_13 | _f_9_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_9_T_27 = _f_9_T_7 & io_g[9] & _f_9_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_9 = _f_9_T_20 | _f_9_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_10_T_4 = ~io_s[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_10_T_7 = ~io_e[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_10_T_12 = ~io_e[11] & io_s[10] & _f_10_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_10_T_13 = io_e[11] & io_g[10] & ~io_s[9] | _f_10_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_10_T_18 = ~io_g[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_10_T_19 = io_e[11] & io_s[10] & ~io_g[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_10_T_20 = _f_10_T_13 | _f_10_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_10_T_27 = _f_10_T_7 & io_g[10] & _f_10_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_10 = _f_10_T_20 | _f_10_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_11_T_4 = ~io_s[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_11_T_7 = ~io_e[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_11_T_12 = ~io_e[12] & io_s[11] & _f_11_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_11_T_13 = io_e[12] & io_g[11] & ~io_s[10] | _f_11_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_11_T_18 = ~io_g[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_11_T_19 = io_e[12] & io_s[11] & ~io_g[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_11_T_20 = _f_11_T_13 | _f_11_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_11_T_27 = _f_11_T_7 & io_g[11] & _f_11_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_11 = _f_11_T_20 | _f_11_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_12_T_4 = ~io_s[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_12_T_7 = ~io_e[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_12_T_12 = ~io_e[13] & io_s[12] & _f_12_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_12_T_13 = io_e[13] & io_g[12] & ~io_s[11] | _f_12_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_12_T_18 = ~io_g[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_12_T_19 = io_e[13] & io_s[12] & ~io_g[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_12_T_20 = _f_12_T_13 | _f_12_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_12_T_27 = _f_12_T_7 & io_g[12] & _f_12_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_12 = _f_12_T_20 | _f_12_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_13_T_4 = ~io_s[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_13_T_7 = ~io_e[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_13_T_12 = ~io_e[14] & io_s[13] & _f_13_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_13_T_13 = io_e[14] & io_g[13] & ~io_s[12] | _f_13_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_13_T_18 = ~io_g[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_13_T_19 = io_e[14] & io_s[13] & ~io_g[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_13_T_20 = _f_13_T_13 | _f_13_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_13_T_27 = _f_13_T_7 & io_g[13] & _f_13_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_13 = _f_13_T_20 | _f_13_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_14_T_4 = ~io_s[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_14_T_7 = ~io_e[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_14_T_12 = ~io_e[15] & io_s[14] & _f_14_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_14_T_13 = io_e[15] & io_g[14] & ~io_s[13] | _f_14_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_14_T_18 = ~io_g[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_14_T_19 = io_e[15] & io_s[14] & ~io_g[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_14_T_20 = _f_14_T_13 | _f_14_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_14_T_27 = _f_14_T_7 & io_g[14] & _f_14_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_14 = _f_14_T_20 | _f_14_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_15_T_4 = ~io_s[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_15_T_7 = ~io_e[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_15_T_12 = ~io_e[16] & io_s[15] & _f_15_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_15_T_13 = io_e[16] & io_g[15] & ~io_s[14] | _f_15_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_15_T_18 = ~io_g[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_15_T_19 = io_e[16] & io_s[15] & ~io_g[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_15_T_20 = _f_15_T_13 | _f_15_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_15_T_27 = _f_15_T_7 & io_g[15] & _f_15_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_15 = _f_15_T_20 | _f_15_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_16_T_4 = ~io_s[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_16_T_7 = ~io_e[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_16_T_12 = ~io_e[17] & io_s[16] & _f_16_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_16_T_13 = io_e[17] & io_g[16] & ~io_s[15] | _f_16_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_16_T_18 = ~io_g[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_16_T_19 = io_e[17] & io_s[16] & ~io_g[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_16_T_20 = _f_16_T_13 | _f_16_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_16_T_27 = _f_16_T_7 & io_g[16] & _f_16_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_16 = _f_16_T_20 | _f_16_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_17_T_4 = ~io_s[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_17_T_7 = ~io_e[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_17_T_12 = ~io_e[18] & io_s[17] & _f_17_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_17_T_13 = io_e[18] & io_g[17] & ~io_s[16] | _f_17_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_17_T_18 = ~io_g[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_17_T_19 = io_e[18] & io_s[17] & ~io_g[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_17_T_20 = _f_17_T_13 | _f_17_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_17_T_27 = _f_17_T_7 & io_g[17] & _f_17_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_17 = _f_17_T_20 | _f_17_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_18_T_4 = ~io_s[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_18_T_7 = ~io_e[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_18_T_12 = ~io_e[19] & io_s[18] & _f_18_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_18_T_13 = io_e[19] & io_g[18] & ~io_s[17] | _f_18_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_18_T_18 = ~io_g[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_18_T_19 = io_e[19] & io_s[18] & ~io_g[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_18_T_20 = _f_18_T_13 | _f_18_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_18_T_27 = _f_18_T_7 & io_g[18] & _f_18_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_18 = _f_18_T_20 | _f_18_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_19_T_4 = ~io_s[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_19_T_7 = ~io_e[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_19_T_12 = ~io_e[20] & io_s[19] & _f_19_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_19_T_13 = io_e[20] & io_g[19] & ~io_s[18] | _f_19_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_19_T_18 = ~io_g[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_19_T_19 = io_e[20] & io_s[19] & ~io_g[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_19_T_20 = _f_19_T_13 | _f_19_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_19_T_27 = _f_19_T_7 & io_g[19] & _f_19_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_19 = _f_19_T_20 | _f_19_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_20_T_4 = ~io_s[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_20_T_7 = ~io_e[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_20_T_12 = ~io_e[21] & io_s[20] & _f_20_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_20_T_13 = io_e[21] & io_g[20] & ~io_s[19] | _f_20_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_20_T_18 = ~io_g[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_20_T_19 = io_e[21] & io_s[20] & ~io_g[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_20_T_20 = _f_20_T_13 | _f_20_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_20_T_27 = _f_20_T_7 & io_g[20] & _f_20_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_20 = _f_20_T_20 | _f_20_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_21_T_4 = ~io_s[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_21_T_7 = ~io_e[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_21_T_12 = ~io_e[22] & io_s[21] & _f_21_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_21_T_13 = io_e[22] & io_g[21] & ~io_s[20] | _f_21_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_21_T_18 = ~io_g[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_21_T_19 = io_e[22] & io_s[21] & ~io_g[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_21_T_20 = _f_21_T_13 | _f_21_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_21_T_27 = _f_21_T_7 & io_g[21] & _f_21_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_21 = _f_21_T_20 | _f_21_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_22_T_4 = ~io_s[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_22_T_7 = ~io_e[23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_22_T_12 = ~io_e[23] & io_s[22] & _f_22_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_22_T_13 = io_e[23] & io_g[22] & ~io_s[21] | _f_22_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_22_T_18 = ~io_g[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_22_T_19 = io_e[23] & io_s[22] & ~io_g[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_22_T_20 = _f_22_T_13 | _f_22_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_22_T_27 = _f_22_T_7 & io_g[22] & _f_22_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_22 = _f_22_T_20 | _f_22_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  _f_23_T_4 = ~io_s[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:33]
  wire  _f_23_T_7 = ~io_e[24]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:14]
  wire  _f_23_T_12 = ~io_e[24] & io_s[23] & _f_23_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:30]
  wire  _f_23_T_13 = io_e[24] & io_g[23] & ~io_s[22] | _f_23_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 23:43]
  wire  _f_23_T_18 = ~io_g[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:33]
  wire  _f_23_T_19 = io_e[24] & io_s[23] & ~io_g[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:30]
  wire  _f_23_T_20 = _f_23_T_13 | _f_23_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 24:43]
  wire  _f_23_T_27 = _f_23_T_7 & io_g[23] & _f_23_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 26:30]
  wire  f_23 = _f_23_T_20 | _f_23_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 25:43]
  wire  f_24 = io_g[24] & ~io_s[23] | io_s[24] & ~io_g[23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 21:36]
  wire [5:0] io_f_lo_lo = {f_5,f_4,f_3,f_2,f_1,f_0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 29:14]
  wire [11:0] io_f_lo = {f_11,f_10,f_9,f_8,f_7,f_6,io_f_lo_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 29:14]
  wire [5:0] io_f_hi_lo = {f_17,f_16,f_15,f_14,f_13,f_12}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 29:14]
  wire [12:0] io_f_hi = {f_24,f_23,f_22,f_21,f_20,f_19,f_18,io_f_hi_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 29:14]
  assign io_f = {io_f_hi,io_f_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/PreEncoder.scala 29:14]
endmodule
module node(
  input  [2:0] io_in_0, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/node.scala 7:14]
  input  [2:0] io_in_2, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/node.scala 7:14]
  output [1:0] io_out_0, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/node.scala 7:14]
  output [1:0] io_out_2 // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/node.scala 7:14]
);
  wire  pout_0 = io_in_0[0] | io_in_2[0] & io_in_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/node.scala 16:19]
  wire  _pout_1_T_7 = io_in_2[0] | io_in_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/node.scala 17:47]
  wire  pout_1 = ~io_in_2[0] & io_in_0[1] | io_in_0[2] & (io_in_2[0] | io_in_2[1]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/node.scala 17:31]
  wire  zout_0 = io_in_2[0] & io_in_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/node.scala 18:19]
  wire  zout_1 = io_in_2[2] & _pout_1_T_7; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/node.scala 19:19]
  assign io_out_0 = {pout_1,pout_0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/node.scala 22:19]
  assign io_out_2 = {zout_1,zout_0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/node.scala 24:19]
endmodule
module ErrorDetector(
  input  [24:0] io_g, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 12:14]
  input  [24:0] io_s, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 12:14]
  input  [24:0] io_e, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 12:14]
  output        io_y // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 12:14]
);
  wire [2:0] y_node0_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_1_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_1_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_1_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_1_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_2_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_2_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_2_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_2_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_3_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_3_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_3_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_3_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_4_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_4_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_4_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_4_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_5_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_5_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_5_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_5_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_6_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_6_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_6_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_6_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node0_1_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_1_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_1_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_1_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node_7_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_7_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_7_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_7_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_8_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_8_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_8_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_8_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_9_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_9_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_9_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_9_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_10_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_10_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_10_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_10_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node0_2_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_2_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_2_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_2_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node_11_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_11_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_11_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_11_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_12_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_12_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_12_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_12_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_13_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_13_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_13_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_13_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node0_3_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_3_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_3_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_3_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node_14_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_14_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_14_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_14_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node0_4_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_4_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_4_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_4_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node_15_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_15_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_15_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_15_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node0_5_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_5_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_5_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_5_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_6_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_6_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_6_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_6_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
  wire  _p_0_T_6 = ~io_e[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_0 = (io_e[1] | io_e[2] & io_g[1] | ~io_e[2] & io_s[1]) & io_g[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_0 = (io_e[1] | io_e[2] & io_s[1] | _p_0_T_6 & io_g[1]) & io_s[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_0 = ~(p_0 | n_0); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_1_T_6 = ~io_e[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_1 = (io_e[2] | io_e[3] & io_g[2] | ~io_e[3] & io_s[2]) & io_g[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_1 = (io_e[2] | io_e[3] & io_s[2] | _p_1_T_6 & io_g[2]) & io_s[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_1 = ~(p_1 | n_1); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_2_T_6 = ~io_e[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_2 = (io_e[3] | io_e[4] & io_g[3] | ~io_e[4] & io_s[3]) & io_g[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_2 = (io_e[3] | io_e[4] & io_s[3] | _p_2_T_6 & io_g[3]) & io_s[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_2 = ~(p_2 | n_2); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_3_T_6 = ~io_e[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_3 = (io_e[4] | io_e[5] & io_g[4] | ~io_e[5] & io_s[4]) & io_g[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_3 = (io_e[4] | io_e[5] & io_s[4] | _p_3_T_6 & io_g[4]) & io_s[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_3 = ~(p_3 | n_3); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_4_T_6 = ~io_e[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_4 = (io_e[5] | io_e[6] & io_g[5] | ~io_e[6] & io_s[5]) & io_g[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_4 = (io_e[5] | io_e[6] & io_s[5] | _p_4_T_6 & io_g[5]) & io_s[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_4 = ~(p_4 | n_4); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_5_T_6 = ~io_e[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_5 = (io_e[6] | io_e[7] & io_g[6] | ~io_e[7] & io_s[6]) & io_g[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_5 = (io_e[6] | io_e[7] & io_s[6] | _p_5_T_6 & io_g[6]) & io_s[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_5 = ~(p_5 | n_5); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_6_T_6 = ~io_e[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_6 = (io_e[7] | io_e[8] & io_g[7] | ~io_e[8] & io_s[7]) & io_g[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_6 = (io_e[7] | io_e[8] & io_s[7] | _p_6_T_6 & io_g[7]) & io_s[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_6 = ~(p_6 | n_6); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_7_T_6 = ~io_e[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_7 = (io_e[8] | io_e[9] & io_g[8] | ~io_e[9] & io_s[8]) & io_g[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_7 = (io_e[8] | io_e[9] & io_s[8] | _p_7_T_6 & io_g[8]) & io_s[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_7 = ~(p_7 | n_7); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_8_T_6 = ~io_e[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_8 = (io_e[9] | io_e[10] & io_g[9] | ~io_e[10] & io_s[9]) & io_g[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_8 = (io_e[9] | io_e[10] & io_s[9] | _p_8_T_6 & io_g[9]) & io_s[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_8 = ~(p_8 | n_8); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_9_T_6 = ~io_e[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_9 = (io_e[10] | io_e[11] & io_g[10] | ~io_e[11] & io_s[10]) & io_g[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_9 = (io_e[10] | io_e[11] & io_s[10] | _p_9_T_6 & io_g[10]) & io_s[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_9 = ~(p_9 | n_9); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_10_T_6 = ~io_e[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_10 = (io_e[11] | io_e[12] & io_g[11] | ~io_e[12] & io_s[11]) & io_g[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_10 = (io_e[11] | io_e[12] & io_s[11] | _p_10_T_6 & io_g[11]) & io_s[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_10 = ~(p_10 | n_10); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_11_T_6 = ~io_e[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_11 = (io_e[12] | io_e[13] & io_g[12] | ~io_e[13] & io_s[12]) & io_g[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_11 = (io_e[12] | io_e[13] & io_s[12] | _p_11_T_6 & io_g[12]) & io_s[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_11 = ~(p_11 | n_11); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_12_T_6 = ~io_e[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_12 = (io_e[13] | io_e[14] & io_g[13] | ~io_e[14] & io_s[13]) & io_g[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_12 = (io_e[13] | io_e[14] & io_s[13] | _p_12_T_6 & io_g[13]) & io_s[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_12 = ~(p_12 | n_12); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_13_T_6 = ~io_e[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_13 = (io_e[14] | io_e[15] & io_g[14] | ~io_e[15] & io_s[14]) & io_g[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_13 = (io_e[14] | io_e[15] & io_s[14] | _p_13_T_6 & io_g[14]) & io_s[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_13 = ~(p_13 | n_13); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_14_T_6 = ~io_e[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_14 = (io_e[15] | io_e[16] & io_g[15] | ~io_e[16] & io_s[15]) & io_g[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_14 = (io_e[15] | io_e[16] & io_s[15] | _p_14_T_6 & io_g[15]) & io_s[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_14 = ~(p_14 | n_14); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_15_T_6 = ~io_e[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_15 = (io_e[16] | io_e[17] & io_g[16] | ~io_e[17] & io_s[16]) & io_g[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_15 = (io_e[16] | io_e[17] & io_s[16] | _p_15_T_6 & io_g[16]) & io_s[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_15 = ~(p_15 | n_15); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_16_T_6 = ~io_e[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_16 = (io_e[17] | io_e[18] & io_g[17] | ~io_e[18] & io_s[17]) & io_g[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_16 = (io_e[17] | io_e[18] & io_s[17] | _p_16_T_6 & io_g[17]) & io_s[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_16 = ~(p_16 | n_16); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_17_T_6 = ~io_e[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_17 = (io_e[18] | io_e[19] & io_g[18] | ~io_e[19] & io_s[18]) & io_g[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_17 = (io_e[18] | io_e[19] & io_s[18] | _p_17_T_6 & io_g[18]) & io_s[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_17 = ~(p_17 | n_17); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_18_T_6 = ~io_e[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_18 = (io_e[19] | io_e[20] & io_g[19] | ~io_e[20] & io_s[19]) & io_g[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_18 = (io_e[19] | io_e[20] & io_s[19] | _p_18_T_6 & io_g[19]) & io_s[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_18 = ~(p_18 | n_18); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_19_T_6 = ~io_e[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_19 = (io_e[20] | io_e[21] & io_g[20] | ~io_e[21] & io_s[20]) & io_g[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_19 = (io_e[20] | io_e[21] & io_s[20] | _p_19_T_6 & io_g[20]) & io_s[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_19 = ~(p_19 | n_19); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_20_T_6 = ~io_e[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_20 = (io_e[21] | io_e[22] & io_g[21] | ~io_e[22] & io_s[21]) & io_g[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_20 = (io_e[21] | io_e[22] & io_s[21] | _p_20_T_6 & io_g[21]) & io_s[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_20 = ~(p_20 | n_20); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_21_T_6 = ~io_e[23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_21 = (io_e[22] | io_e[23] & io_g[22] | ~io_e[23] & io_s[22]) & io_g[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_21 = (io_e[22] | io_e[23] & io_s[22] | _p_21_T_6 & io_g[22]) & io_s[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_21 = ~(p_21 | n_21); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_22_T_6 = ~io_e[24]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:47]
  wire  p_22 = (io_e[23] | io_e[24] & io_g[23] | ~io_e[24] & io_s[23]) & io_g[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 23:67]
  wire  n_22 = (io_e[23] | io_e[24] & io_s[23] | _p_22_T_6 & io_g[23]) & io_s[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 24:67]
  wire  z_22 = ~(p_22 | n_22); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  p_23 = (io_e[24] | io_g[24]) & io_g[23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 20:33]
  wire  n_23 = (io_e[24] | io_s[24]) & io_s[23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 21:33]
  wire  z_23 = ~(p_23 | n_23); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire  z_24 = ~(io_g[24] | io_s[24]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 26:13]
  wire [5:0] y_lo_lo = {p_19,p_20,p_21,p_22,p_23,io_g[24]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 63:28]
  wire [11:0] y_lo = {p_13,p_14,p_15,p_16,p_17,p_18,y_lo_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 63:28]
  wire [5:0] y_hi_lo = {p_7,p_8,p_9,p_10,p_11,p_12}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 63:28]
  wire [24:0] _y_T = {p_0,p_1,p_2,p_3,p_4,p_5,p_6,y_hi_lo,y_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 63:28]
  wire [5:0] y_lo_lo_2 = {z_19,z_20,z_21,z_22,z_23,z_24}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 63:44]
  wire [11:0] y_lo_2 = {z_13,z_14,z_15,z_16,z_17,z_18,y_lo_lo_2}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 63:44]
  wire [5:0] y_hi_lo_2 = {z_7,z_8,z_9,z_10,z_11,z_12}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 63:44]
  wire [24:0] _y_T_2 = {z_0,z_1,z_2,z_3,z_4,z_5,z_6,y_hi_lo_2,y_lo_2}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 63:44]
  wire [1:0] y_node0_io_in_0_hi = {_y_T[2],_y_T[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi = {_y_T_2[2],_y_T_2[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0 = y_node0_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1 = y_node0_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0 = y_node0_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1 = y_node0_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire [1:0] y_node_io_in_0_hi = {_y_T[5],_y_T[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi = {_y_T_2[5],_y_T_2[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0 = y_node_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1 = y_node_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0 = y_node_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1 = y_node_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_1 = {_y_T[8],_y_T[7]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_1 = {_y_T_2[8],_y_T_2[7]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_1 = y_node_1_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_1 = y_node_1_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_1 = y_node_1_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_1 = y_node_1_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_2 = {_y_T[11],_y_T[10]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_2 = {_y_T_2[11],_y_T_2[10]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_2 = y_node_2_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_2 = y_node_2_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_2 = y_node_2_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_2 = y_node_2_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_3 = {_y_T[14],_y_T[13]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_3 = {_y_T_2[14],_y_T_2[13]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_3 = y_node_3_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_3 = y_node_3_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_3 = y_node_3_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_3 = y_node_3_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_4 = {_y_T[17],_y_T[16]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_4 = {_y_T_2[17],_y_T_2[16]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_4 = y_node_4_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_4 = y_node_4_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_4 = y_node_4_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_4 = y_node_4_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_5 = {_y_T[20],_y_T[19]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_5 = {_y_T_2[20],_y_T_2[19]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_5 = y_node_5_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_5 = y_node_5_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_5 = y_node_5_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_5 = y_node_5_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_6 = {_y_T[23],_y_T[22]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_6 = {_y_T_2[23],_y_T_2[22]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_6 = y_node_6_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_6 = y_node_6_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_6 = y_node_6_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_6 = y_node_6_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [7:0] y_lo_3 = {y_pout_1_2,y_pout_0_2,y_pout_1_1,y_pout_0_1,y_pout_1,y_pout_0,y_nextColumn_p_1,y_nextColumn_p_0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:33]
  wire [16:0] _y_T_9 = {_y_T[24],y_pout_1_6,y_pout_0_6,y_pout_1_5,y_pout_0_5,y_pout_1_4,y_pout_0_4,y_pout_1_3,y_pout_0_3
    ,y_lo_3}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:33]
  wire [7:0] y_lo_5 = {y_zout_1_2,y_zout_0_2,y_zout_1_1,y_zout_0_1,y_zout_1,y_zout_0,y_nextColumn_z_1,y_nextColumn_z_0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:87]
  wire [16:0] _y_T_11 = {_y_T_2[24],y_zout_1_6,y_zout_0_6,y_zout_1_5,y_zout_0_5,y_zout_1_4,y_zout_0_4,y_zout_1_3,
    y_zout_0_3,y_lo_5}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_1 = {_y_T_9[2],_y_T_9[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_1 = {_y_T_11[2],_y_T_11[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_1 = y_node0_1_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_1 = y_node0_1_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_1 = y_node0_1_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_1 = y_node0_1_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire [1:0] y_node_io_in_0_hi_7 = {_y_T_9[5],_y_T_9[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_7 = {_y_T_11[5],_y_T_11[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_7 = y_node_7_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_7 = y_node_7_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_7 = y_node_7_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_7 = y_node_7_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_8 = {_y_T_9[8],_y_T_9[7]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_8 = {_y_T_11[8],_y_T_11[7]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_8 = y_node_8_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_8 = y_node_8_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_8 = y_node_8_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_8 = y_node_8_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_9 = {_y_T_9[11],_y_T_9[10]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_9 = {_y_T_11[11],_y_T_11[10]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_9 = y_node_9_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_9 = y_node_9_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_9 = y_node_9_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_9 = y_node_9_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_10 = {_y_T_9[14],_y_T_9[13]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_10 = {_y_T_11[14],_y_T_11[13]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_10 = y_node_10_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_10 = y_node_10_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_10 = y_node_10_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_10 = y_node_10_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [5:0] y_lo_6 = {y_pout_1_8,y_pout_0_8,y_pout_1_7,y_pout_0_7,y_nextColumn_p_1_1,y_nextColumn_p_0_1}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:33]
  wire [11:0] _y_T_24 = {_y_T_9[16],_y_T_9[15],y_pout_1_10,y_pout_0_10,y_pout_1_9,y_pout_0_9,y_lo_6}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:33]
  wire [5:0] y_lo_8 = {y_zout_1_8,y_zout_0_8,y_zout_1_7,y_zout_0_7,y_nextColumn_z_1_1,y_nextColumn_z_0_1}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:87]
  wire [11:0] _y_T_26 = {_y_T_11[16],_y_T_9[15],y_zout_1_10,y_zout_0_10,y_zout_1_9,y_zout_0_9,y_lo_8}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_2 = {_y_T_24[2],_y_T_24[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_2 = {_y_T_26[2],_y_T_26[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_2 = y_node0_2_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_2 = y_node0_2_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_2 = y_node0_2_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_2 = y_node0_2_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire [1:0] y_node_io_in_0_hi_11 = {_y_T_24[5],_y_T_24[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_11 = {_y_T_26[5],_y_T_26[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_11 = y_node_11_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_11 = y_node_11_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_11 = y_node_11_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_11 = y_node_11_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_12 = {_y_T_24[8],_y_T_24[7]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_12 = {_y_T_26[8],_y_T_26[7]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_12 = y_node_12_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_12 = y_node_12_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_12 = y_node_12_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_12 = y_node_12_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_13 = {_y_T_24[11],_y_T_24[10]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_13 = {_y_T_26[11],_y_T_26[10]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_13 = y_node_13_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_13 = y_node_13_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_13 = y_node_13_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_13 = y_node_13_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [7:0] _y_T_27 = {y_pout_1_13,y_pout_0_13,y_pout_1_12,y_pout_0_12,y_pout_1_11,y_pout_0_11,y_nextColumn_p_1_2,
    y_nextColumn_p_0_2}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:33]
  wire [7:0] _y_T_29 = {y_zout_1_13,y_zout_0_13,y_zout_1_12,y_zout_0_12,y_zout_1_11,y_zout_0_11,y_nextColumn_z_1_2,
    y_nextColumn_z_0_2}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_3 = {_y_T_27[2],_y_T_27[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_3 = {_y_T_29[2],_y_T_29[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_3 = y_node0_3_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_3 = y_node0_3_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_3 = y_node0_3_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_3 = y_node0_3_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire [1:0] y_node_io_in_0_hi_14 = {_y_T_27[5],_y_T_27[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_14 = {_y_T_29[5],_y_T_29[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_14 = y_node_14_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_14 = y_node_14_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_14 = y_node_14_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_14 = y_node_14_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [5:0] _y_T_42 = {_y_T_27[7],_y_T_27[6],y_pout_1_14,y_pout_0_14,y_nextColumn_p_1_3,y_nextColumn_p_0_3}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:33]
  wire [5:0] _y_T_44 = {_y_T_29[7],_y_T_27[6],y_zout_1_14,y_zout_0_14,y_nextColumn_z_1_3,y_nextColumn_z_0_3}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_4 = {_y_T_42[2],_y_T_42[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_4 = {_y_T_44[2],_y_T_44[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_4 = y_node0_4_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_4 = y_node0_4_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_4 = y_node0_4_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_4 = y_node0_4_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire [1:0] y_node_io_in_0_hi_15 = {_y_T_42[5],_y_T_42[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_15 = {_y_T_44[5],_y_T_44[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_15 = y_node_15_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_15 = y_node_15_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_15 = y_node_15_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_15 = y_node_15_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 46:35]
  wire [3:0] _y_T_45 = {y_pout_1_15,y_pout_0_15,y_nextColumn_p_1_4,y_nextColumn_p_0_4}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:33]
  wire [3:0] _y_T_47 = {y_zout_1_15,y_zout_0_15,y_nextColumn_z_1_4,y_nextColumn_z_0_4}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_5 = {_y_T_45[2],_y_T_45[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_5 = {_y_T_47[2],_y_T_47[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_5 = y_node0_5_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_5 = y_node0_5_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_5 = y_node0_5_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_5 = y_node0_5_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire [2:0] _y_T_54 = {_y_T_45[3],y_nextColumn_p_1_5,y_nextColumn_p_0_5}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:33]
  wire [2:0] _y_T_56 = {_y_T_47[3],y_nextColumn_z_1_5,y_nextColumn_z_0_5}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_6 = {_y_T_54[2],_y_T_54[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_6 = {_y_T_56[2],_y_T_56[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_6 = y_node0_6_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_6 = y_node0_6_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_6 = y_node0_6_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_6 = y_node0_6_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 37:40]
  node y_node0 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_io_in_0),
    .io_in_2(y_node0_io_in_2),
    .io_out_0(y_node0_io_out_0),
    .io_out_2(y_node0_io_out_2)
  );
  node y_node ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_io_in_0),
    .io_in_2(y_node_io_in_2),
    .io_out_0(y_node_io_out_0),
    .io_out_2(y_node_io_out_2)
  );
  node y_node_1 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_1_io_in_0),
    .io_in_2(y_node_1_io_in_2),
    .io_out_0(y_node_1_io_out_0),
    .io_out_2(y_node_1_io_out_2)
  );
  node y_node_2 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_2_io_in_0),
    .io_in_2(y_node_2_io_in_2),
    .io_out_0(y_node_2_io_out_0),
    .io_out_2(y_node_2_io_out_2)
  );
  node y_node_3 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_3_io_in_0),
    .io_in_2(y_node_3_io_in_2),
    .io_out_0(y_node_3_io_out_0),
    .io_out_2(y_node_3_io_out_2)
  );
  node y_node_4 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_4_io_in_0),
    .io_in_2(y_node_4_io_in_2),
    .io_out_0(y_node_4_io_out_0),
    .io_out_2(y_node_4_io_out_2)
  );
  node y_node_5 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_5_io_in_0),
    .io_in_2(y_node_5_io_in_2),
    .io_out_0(y_node_5_io_out_0),
    .io_out_2(y_node_5_io_out_2)
  );
  node y_node_6 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_6_io_in_0),
    .io_in_2(y_node_6_io_in_2),
    .io_out_0(y_node_6_io_out_0),
    .io_out_2(y_node_6_io_out_2)
  );
  node y_node0_1 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_1_io_in_0),
    .io_in_2(y_node0_1_io_in_2),
    .io_out_0(y_node0_1_io_out_0),
    .io_out_2(y_node0_1_io_out_2)
  );
  node y_node_7 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_7_io_in_0),
    .io_in_2(y_node_7_io_in_2),
    .io_out_0(y_node_7_io_out_0),
    .io_out_2(y_node_7_io_out_2)
  );
  node y_node_8 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_8_io_in_0),
    .io_in_2(y_node_8_io_in_2),
    .io_out_0(y_node_8_io_out_0),
    .io_out_2(y_node_8_io_out_2)
  );
  node y_node_9 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_9_io_in_0),
    .io_in_2(y_node_9_io_in_2),
    .io_out_0(y_node_9_io_out_0),
    .io_out_2(y_node_9_io_out_2)
  );
  node y_node_10 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_10_io_in_0),
    .io_in_2(y_node_10_io_in_2),
    .io_out_0(y_node_10_io_out_0),
    .io_out_2(y_node_10_io_out_2)
  );
  node y_node0_2 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_2_io_in_0),
    .io_in_2(y_node0_2_io_in_2),
    .io_out_0(y_node0_2_io_out_0),
    .io_out_2(y_node0_2_io_out_2)
  );
  node y_node_11 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_11_io_in_0),
    .io_in_2(y_node_11_io_in_2),
    .io_out_0(y_node_11_io_out_0),
    .io_out_2(y_node_11_io_out_2)
  );
  node y_node_12 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_12_io_in_0),
    .io_in_2(y_node_12_io_in_2),
    .io_out_0(y_node_12_io_out_0),
    .io_out_2(y_node_12_io_out_2)
  );
  node y_node_13 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_13_io_in_0),
    .io_in_2(y_node_13_io_in_2),
    .io_out_0(y_node_13_io_out_0),
    .io_out_2(y_node_13_io_out_2)
  );
  node y_node0_3 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_3_io_in_0),
    .io_in_2(y_node0_3_io_in_2),
    .io_out_0(y_node0_3_io_out_0),
    .io_out_2(y_node0_3_io_out_2)
  );
  node y_node_14 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_14_io_in_0),
    .io_in_2(y_node_14_io_in_2),
    .io_out_0(y_node_14_io_out_0),
    .io_out_2(y_node_14_io_out_2)
  );
  node y_node0_4 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_4_io_in_0),
    .io_in_2(y_node0_4_io_in_2),
    .io_out_0(y_node0_4_io_out_0),
    .io_out_2(y_node0_4_io_out_2)
  );
  node y_node_15 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_15_io_in_0),
    .io_in_2(y_node_15_io_in_2),
    .io_out_0(y_node_15_io_out_0),
    .io_out_2(y_node_15_io_out_2)
  );
  node y_node0_5 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_5_io_in_0),
    .io_in_2(y_node0_5_io_in_2),
    .io_out_0(y_node0_5_io_out_0),
    .io_out_2(y_node0_5_io_out_2)
  );
  node y_node0_6 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_6_io_in_0),
    .io_in_2(y_node0_6_io_in_2),
    .io_out_0(y_node0_6_io_out_0),
    .io_out_2(y_node0_6_io_out_2)
  );
  assign io_y = (y_nextColumn_p_0_6 ^ y_nextColumn_p_1_6) & ~y_nextColumn_z_0_6 & ~y_nextColumn_z_1_6; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 60:81]
  assign y_node0_io_in_0 = {y_node0_io_in_0_hi,_y_T[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_io_in_2 = {y_node0_io_in_2_hi,_y_T_2[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  assign y_node_io_in_0 = {y_node_io_in_0_hi,_y_T[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_io_in_2 = {y_node_io_in_2_hi,_y_T_2[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_1_io_in_0 = {y_node_io_in_0_hi_1,_y_T[6]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_1_io_in_2 = {y_node_io_in_2_hi_1,_y_T_2[6]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_2_io_in_0 = {y_node_io_in_0_hi_2,_y_T[9]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_2_io_in_2 = {y_node_io_in_2_hi_2,_y_T_2[9]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_3_io_in_0 = {y_node_io_in_0_hi_3,_y_T[12]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_3_io_in_2 = {y_node_io_in_2_hi_3,_y_T_2[12]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_4_io_in_0 = {y_node_io_in_0_hi_4,_y_T[15]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_4_io_in_2 = {y_node_io_in_2_hi_4,_y_T_2[15]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_5_io_in_0 = {y_node_io_in_0_hi_5,_y_T[18]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_5_io_in_2 = {y_node_io_in_2_hi_5,_y_T_2[18]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_6_io_in_0 = {y_node_io_in_0_hi_6,_y_T[21]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_6_io_in_2 = {y_node_io_in_2_hi_6,_y_T_2[21]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node0_1_io_in_0 = {y_node0_io_in_0_hi_1,_y_T_9[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_1_io_in_2 = {y_node0_io_in_2_hi_1,_y_T_11[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  assign y_node_7_io_in_0 = {y_node_io_in_0_hi_7,_y_T_9[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_7_io_in_2 = {y_node_io_in_2_hi_7,_y_T_11[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_8_io_in_0 = {y_node_io_in_0_hi_8,_y_T_9[6]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_8_io_in_2 = {y_node_io_in_2_hi_8,_y_T_11[6]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_9_io_in_0 = {y_node_io_in_0_hi_9,_y_T_9[9]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_9_io_in_2 = {y_node_io_in_2_hi_9,_y_T_11[9]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_10_io_in_0 = {y_node_io_in_0_hi_10,_y_T_9[12]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_10_io_in_2 = {y_node_io_in_2_hi_10,_y_T_11[12]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node0_2_io_in_0 = {y_node0_io_in_0_hi_2,_y_T_24[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_2_io_in_2 = {y_node0_io_in_2_hi_2,_y_T_26[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  assign y_node_11_io_in_0 = {y_node_io_in_0_hi_11,_y_T_24[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_11_io_in_2 = {y_node_io_in_2_hi_11,_y_T_26[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_12_io_in_0 = {y_node_io_in_0_hi_12,_y_T_24[6]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_12_io_in_2 = {y_node_io_in_2_hi_12,_y_T_26[6]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_13_io_in_0 = {y_node_io_in_0_hi_13,_y_T_24[9]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_13_io_in_2 = {y_node_io_in_2_hi_13,_y_T_26[9]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node0_3_io_in_0 = {y_node0_io_in_0_hi_3,_y_T_27[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_3_io_in_2 = {y_node0_io_in_2_hi_3,_y_T_29[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  assign y_node_14_io_in_0 = {y_node_io_in_0_hi_14,_y_T_27[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_14_io_in_2 = {y_node_io_in_2_hi_14,_y_T_29[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node0_4_io_in_0 = {y_node0_io_in_0_hi_4,_y_T_42[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_4_io_in_2 = {y_node0_io_in_2_hi_4,_y_T_44[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  assign y_node_15_io_in_0 = {y_node_io_in_0_hi_15,_y_T_42[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_15_io_in_2 = {y_node_io_in_2_hi_15,_y_T_44[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 43:29]
  assign y_node0_5_io_in_0 = {y_node0_io_in_0_hi_5,_y_T_45[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_5_io_in_2 = {y_node0_io_in_2_hi_5,_y_T_47[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
  assign y_node0_6_io_in_0 = {y_node0_io_in_0_hi_6,_y_T_54[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_6_io_in_2 = {y_node0_io_in_2_hi_6,_y_T_56[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/ErrorDetector.scala 34:26]
endmodule
module LZC_9(
  input  [24:0] io_in, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 11:14]
  output [4:0]  io_out // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 11:14]
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
  input  [24:0] io_a, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 15:14]
  input  [24:0] io_b, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 15:14]
  output [4:0]  io_lzc, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 15:14]
  output        io_error, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 15:14]
  output        io_zero // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 15:14]
);
  wire [24:0] preEncoder_io_g; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 24:26]
  wire [24:0] preEncoder_io_s; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 24:26]
  wire [24:0] preEncoder_io_e; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 24:26]
  wire [24:0] preEncoder_io_f; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 24:26]
  wire [24:0] errorDetector_io_g; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 30:29]
  wire [24:0] errorDetector_io_s; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 30:29]
  wire [24:0] errorDetector_io_e; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 30:29]
  wire  errorDetector_io_y; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 30:29]
  wire [24:0] io_lzc_lzc_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
  wire [4:0] io_lzc_lzc_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
  wire  g_0 = io_a[0] & ~io_b[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_0 = ~io_a[0] & io_b[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_0 = ~(io_a[0] ^ io_b[0]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_1 = io_a[1] & ~io_b[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_1 = ~io_a[1] & io_b[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_1 = ~(io_a[1] ^ io_b[1]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_2 = io_a[2] & ~io_b[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_2 = ~io_a[2] & io_b[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_2 = ~(io_a[2] ^ io_b[2]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_3 = io_a[3] & ~io_b[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_3 = ~io_a[3] & io_b[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_3 = ~(io_a[3] ^ io_b[3]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_4 = io_a[4] & ~io_b[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_4 = ~io_a[4] & io_b[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_4 = ~(io_a[4] ^ io_b[4]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_5 = io_a[5] & ~io_b[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_5 = ~io_a[5] & io_b[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_5 = ~(io_a[5] ^ io_b[5]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_6 = io_a[6] & ~io_b[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_6 = ~io_a[6] & io_b[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_6 = ~(io_a[6] ^ io_b[6]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_7 = io_a[7] & ~io_b[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_7 = ~io_a[7] & io_b[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_7 = ~(io_a[7] ^ io_b[7]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_8 = io_a[8] & ~io_b[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_8 = ~io_a[8] & io_b[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_8 = ~(io_a[8] ^ io_b[8]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_9 = io_a[9] & ~io_b[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_9 = ~io_a[9] & io_b[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_9 = ~(io_a[9] ^ io_b[9]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_10 = io_a[10] & ~io_b[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_10 = ~io_a[10] & io_b[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_10 = ~(io_a[10] ^ io_b[10]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_11 = io_a[11] & ~io_b[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_11 = ~io_a[11] & io_b[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_11 = ~(io_a[11] ^ io_b[11]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_12 = io_a[12] & ~io_b[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_12 = ~io_a[12] & io_b[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_12 = ~(io_a[12] ^ io_b[12]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_13 = io_a[13] & ~io_b[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_13 = ~io_a[13] & io_b[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_13 = ~(io_a[13] ^ io_b[13]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_14 = io_a[14] & ~io_b[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_14 = ~io_a[14] & io_b[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_14 = ~(io_a[14] ^ io_b[14]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_15 = io_a[15] & ~io_b[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_15 = ~io_a[15] & io_b[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_15 = ~(io_a[15] ^ io_b[15]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_16 = io_a[16] & ~io_b[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_16 = ~io_a[16] & io_b[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_16 = ~(io_a[16] ^ io_b[16]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_17 = io_a[17] & ~io_b[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_17 = ~io_a[17] & io_b[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_17 = ~(io_a[17] ^ io_b[17]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_18 = io_a[18] & ~io_b[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_18 = ~io_a[18] & io_b[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_18 = ~(io_a[18] ^ io_b[18]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_19 = io_a[19] & ~io_b[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_19 = ~io_a[19] & io_b[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_19 = ~(io_a[19] ^ io_b[19]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_20 = io_a[20] & ~io_b[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_20 = ~io_a[20] & io_b[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_20 = ~(io_a[20] ^ io_b[20]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_21 = io_a[21] & ~io_b[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_21 = ~io_a[21] & io_b[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_21 = ~(io_a[21] ^ io_b[21]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_22 = io_a[22] & ~io_b[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_22 = ~io_a[22] & io_b[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_22 = ~(io_a[22] ^ io_b[22]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_23 = io_a[23] & ~io_b[23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_23 = ~io_a[23] & io_b[23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_23 = ~(io_a[23] ^ io_b[23]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire  g_24 = io_a[24] & ~io_b[24]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 19:18]
  wire  s_24 = ~io_a[24] & io_b[24]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 20:21]
  wire  e_24 = ~(io_a[24] ^ io_b[24]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 21:13]
  wire [5:0] preEncoder_io_g_lo_lo = {g_5,g_4,g_3,g_2,g_1,g_0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 25:25]
  wire [11:0] preEncoder_io_g_lo = {g_11,g_10,g_9,g_8,g_7,g_6,preEncoder_io_g_lo_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 25:25]
  wire [5:0] preEncoder_io_g_hi_lo = {g_17,g_16,g_15,g_14,g_13,g_12}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 25:25]
  wire [12:0] preEncoder_io_g_hi = {g_24,g_23,g_22,g_21,g_20,g_19,g_18,preEncoder_io_g_hi_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 25:25]
  wire [5:0] preEncoder_io_s_lo_lo = {s_5,s_4,s_3,s_2,s_1,s_0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 26:25]
  wire [11:0] preEncoder_io_s_lo = {s_11,s_10,s_9,s_8,s_7,s_6,preEncoder_io_s_lo_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 26:25]
  wire [5:0] preEncoder_io_s_hi_lo = {s_17,s_16,s_15,s_14,s_13,s_12}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 26:25]
  wire [12:0] preEncoder_io_s_hi = {s_24,s_23,s_22,s_21,s_20,s_19,s_18,preEncoder_io_s_hi_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 26:25]
  wire [5:0] preEncoder_io_e_lo_lo = {e_5,e_4,e_3,e_2,e_1,e_0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 27:25]
  wire [11:0] preEncoder_io_e_lo = {e_11,e_10,e_9,e_8,e_7,e_6,preEncoder_io_e_lo_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 27:25]
  wire [5:0] preEncoder_io_e_hi_lo = {e_17,e_16,e_15,e_14,e_13,e_12}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 27:25]
  wire [12:0] preEncoder_io_e_hi = {e_24,e_23,e_22,e_21,e_20,e_19,e_18,preEncoder_io_e_hi_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 27:25]
  PreEncoder preEncoder ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 24:26]
    .io_g(preEncoder_io_g),
    .io_s(preEncoder_io_s),
    .io_e(preEncoder_io_e),
    .io_f(preEncoder_io_f)
  );
  ErrorDetector errorDetector ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 30:29]
    .io_g(errorDetector_io_g),
    .io_s(errorDetector_io_s),
    .io_e(errorDetector_io_e),
    .io_y(errorDetector_io_y)
  );
  LZC_9 io_lzc_lzc ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 21:21]
    .io_in(io_lzc_lzc_io_in),
    .io_out(io_lzc_lzc_io_out)
  );
  assign io_lzc = io_lzc_lzc_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 36:10]
  assign io_error = errorDetector_io_y; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 35:12]
  assign io_zero = ~(|preEncoder_io_f); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 37:14]
  assign preEncoder_io_g = {preEncoder_io_g_hi,preEncoder_io_g_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 25:25]
  assign preEncoder_io_s = {preEncoder_io_s_hi,preEncoder_io_s_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 26:25]
  assign preEncoder_io_e = {preEncoder_io_e_hi,preEncoder_io_e_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 27:25]
  assign errorDetector_io_g = {preEncoder_io_g_hi,preEncoder_io_g_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 31:27]
  assign errorDetector_io_s = {preEncoder_io_s_hi,preEncoder_io_s_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 32:27]
  assign errorDetector_io_e = {preEncoder_io_e_hi,preEncoder_io_e_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/LZA.scala 33:27]
  assign io_lzc_lzc_io_in = preEncoder_io_f; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/lza_utils/LZC.scala 22:15]
endmodule
module ClosePath(
  input         io_in_a_sign, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 108:14]
  input  [7:0]  io_in_a_exp, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 108:14]
  input  [23:0] io_in_a_sig, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 108:14]
  input  [7:0]  io_in_b_exp, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 108:14]
  input  [23:0] io_in_b_sig, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 108:14]
  input         io_in_needShift, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 108:14]
  input  [2:0]  io_in_roundingMode, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 108:14]
  output [31:0] io_out_result, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 108:14]
  output        io_out_near_path_of, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 108:14]
  output        io_out_near_path_ix, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 108:14]
  output        io_out_near_path_uf // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 108:14]
);
  wire [24:0] lza_io_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 134:19]
  wire [24:0] lza_io_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 134:19]
  wire [4:0] lza_io_lzc; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 134:19]
  wire  lza_io_error; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 134:19]
  wire  lza_io_zero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 134:19]
  wire  near_path_tininess_rounder_io_in_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 174:42]
  wire [26:0] near_path_tininess_rounder_io_in_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 174:42]
  wire [2:0] near_path_tininess_rounder_io_rm; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 174:42]
  wire  near_path_tininess_rounder_io_tininess; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 174:42]
  wire [22:0] near_path_rounder_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  near_path_rounder_io_roundIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  near_path_rounder_io_stickyIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  near_path_rounder_io_signIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire [2:0] near_path_rounder_io_rm; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire [22:0] near_path_rounder_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  near_path_rounder_io_inexact; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire  near_path_rounder_io_cout; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
  wire [24:0] _b_sig_T = {io_in_b_sig,1'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 123:19]
  wire [24:0] b_sig = _b_sig_T >> io_in_needShift; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 123:43]
  wire  bIsZero = ~(|io_in_b_exp); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 124:17]
  wire [25:0] _resultSigComplementForm_T = {1'h0,io_in_a_sig,1'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 126:8]
  wire [24:0] _resultSigComplementForm_T_2 = ~b_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 127:42]
  wire [24:0] _resultSigComplementForm_T_4 = _resultSigComplementForm_T_2 + 25'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 127:49]
  wire [25:0] _resultSigComplementForm_T_5 = {1'h1,_resultSigComplementForm_T_4}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 127:31]
  wire [25:0] _resultSigComplementForm_T_7 = _resultSigComplementForm_T + _resultSigComplementForm_T_5; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 127:26]
  wire [25:0] resultSigComplementForm = bIsZero ? _resultSigComplementForm_T : _resultSigComplementForm_T_7; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 125:36]
  wire  a_LessThan_b = resultSigComplementForm[25]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 128:50]
  wire [24:0] _resultSigNoRound_T_1 = ~resultSigComplementForm[24:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 130:5]
  wire [24:0] _resultSigNoRound_T_3 = _resultSigNoRound_T_1 + 25'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 130:38]
  wire [24:0] resultSigNoRound = a_LessThan_b ? _resultSigNoRound_T_3 : resultSigComplementForm[24:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 129:29]
  wire  result_sign = a_LessThan_b ? ~io_in_a_sign : io_in_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 132:24]
  wire [7:0] resultExpNoRound = lza_io_zero ? 8'h0 : io_in_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 146:29]
  wire  resultExpIsZero = resultExpNoRound == 8'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 147:42]
  wire [4:0] _GEN_0 = {{4'd0}, lza_io_error}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 149:45]
  wire [4:0] _shiftLimit_T_1 = lza_io_lzc + _GEN_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 149:45]
  wire [7:0] _GEN_1 = {{3'd0}, _shiftLimit_T_1}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 149:37]
  wire  shiftLimit = resultExpNoRound <= _GEN_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 149:37]
  wire [7:0] _GEN_2 = {{3'd0}, lza_io_lzc}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 150:33]
  wire [7:0] exp_s1 = resultExpNoRound - _GEN_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 150:33]
  wire [7:0] _GEN_3 = {{7'd0}, lza_io_error}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 151:23]
  wire [7:0] exp_s2 = exp_s1 - _GEN_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 151:23]
  wire [7:0] closePathResult_exp = shiftLimit ? 8'h0 : exp_s2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 152:29]
  wire [7:0] _sigShiftNum_T_1 = resultExpNoRound - 8'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 157:39]
  wire [7:0] _sigShiftNum_T_2 = shiftLimit ? _sigShiftNum_T_1 : {{3'd0}, lza_io_lzc}; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [7:0] sigShiftNum = resultExpIsZero ? 8'h0 : _sigShiftNum_T_2; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [279:0] _GEN_5 = {{255'd0}, resultSigNoRound}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 161:34]
  wire [279:0] _sig_s1_T = _GEN_5 << sigShiftNum; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 161:34]
  wire [24:0] sig_s1 = _sig_s1_T[24:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 161:49]
  wire [24:0] _sig_s2_T_1 = {sig_s1[23:0],1'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 162:33]
  wire [24:0] sig_s2 = lza_io_error ? _sig_s2_T_1 : sig_s1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 162:19]
  wire [24:0] _sig_s3_T = shiftLimit ? sig_s1 : sig_s2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 165:10]
  wire [26:0] sig_s3 = {_sig_s3_T,2'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 164:8]
  wire [26:0] close_path_sig = {sig_s3[26:1],|sig_s3[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 171:53]
  wire [7:0] _GEN_4 = {{7'd0}, near_path_rounder_io_cout}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 186:57]
  wire [7:0] near_path_exp_rounded = _GEN_4 + closePathResult_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 186:57]
  wire  near_path_zero_sign = io_in_roundingMode == 3'h2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 188:48]
  wire  _io_out_result_T_3 = result_sign & ~lza_io_zero | near_path_zero_sign & lza_io_zero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 190:51]
  wire [8:0] io_out_result_hi = {_io_out_result_T_3,near_path_exp_rounded}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 189:23]
  LZA lza ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 134:19]
    .io_a(lza_io_a),
    .io_b(lza_io_b),
    .io_lzc(lza_io_lzc),
    .io_error(lza_io_error),
    .io_zero(lza_io_zero)
  );
  TininessRounder near_path_tininess_rounder ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 174:42]
    .io_in_sign(near_path_tininess_rounder_io_in_sign),
    .io_in_sig(near_path_tininess_rounder_io_in_sig),
    .io_rm(near_path_tininess_rounder_io_rm),
    .io_tininess(near_path_tininess_rounder_io_tininess)
  );
  RoundingUnit near_path_rounder ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 44:25]
    .io_in(near_path_rounder_io_in),
    .io_roundIn(near_path_rounder_io_roundIn),
    .io_stickyIn(near_path_rounder_io_stickyIn),
    .io_signIn(near_path_rounder_io_signIn),
    .io_rm(near_path_rounder_io_rm),
    .io_out(near_path_rounder_io_out),
    .io_inexact(near_path_rounder_io_inexact),
    .io_cout(near_path_rounder_io_cout)
  );
  assign io_out_result = {io_out_result_hi,near_path_rounder_io_out}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 189:23]
  assign io_out_near_path_of = near_path_exp_rounded == 8'hff; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 195:48]
  assign io_out_near_path_ix = near_path_rounder_io_inexact | io_out_near_path_of; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 196:55]
  assign io_out_near_path_uf = near_path_tininess_rounder_io_tininess & io_out_near_path_ix; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 197:45]
  assign lza_io_a = {io_in_a_sig,1'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 122:18]
  assign lza_io_b = _b_sig_T >> io_in_needShift; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 123:43]
  assign near_path_tininess_rounder_io_in_sign = a_LessThan_b ? ~io_in_a_sign : io_in_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 132:24]
  assign near_path_tininess_rounder_io_in_sig = {sig_s3[26:1],|sig_s3[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 171:53]
  assign near_path_tininess_rounder_io_rm = io_in_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 176:36]
  assign near_path_rounder_io_in = close_path_sig[25:3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 45:33]
  assign near_path_rounder_io_roundIn = close_path_sig[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 46:50]
  assign near_path_rounder_io_stickyIn = |close_path_sig[1:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 47:51]
  assign near_path_rounder_io_signIn = a_LessThan_b ? ~io_in_a_sign : io_in_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 132:24]
  assign near_path_rounder_io_rm = io_in_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 48:19]
endmodule
module FADD(
  output        io_in_ready, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
  input         io_in_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
  input  [31:0] io_in_bits_a, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
  input  [31:0] io_in_bits_b, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
  input  [2:0]  io_in_bits_roundingMode, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
  input         io_in_bits_a_inter_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
  input         io_in_bits_b_inter_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
  input         io_in_bits_a_inter_flags_isNaN, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
  input         io_in_bits_a_inter_flags_isInf, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
  input         io_in_bits_a_inter_flags_isInv, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
  input         io_in_bits_b_inter_flags_isNaN, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
  input         io_in_bits_b_inter_flags_isInf, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
  input         io_in_bits_b_inter_flags_isInv, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
  input         io_out_ready, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
  output        io_out_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
  output [4:0]  io_out_bits_fflags, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
  output [31:0] io_out_bits_result // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 221:14]
);
  wire  farPath_io_in_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 247:23]
  wire [7:0] farPath_io_in_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 247:23]
  wire [23:0] farPath_io_in_a_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 247:23]
  wire [7:0] farPath_io_in_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 247:23]
  wire [23:0] farPath_io_in_b_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 247:23]
  wire  farPath_io_in_addSig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 247:23]
  wire  farPath_io_in_tinyAdd; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 247:23]
  wire [4:0] farPath_io_in_shiftNum; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 247:23]
  wire [2:0] farPath_io_in_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 247:23]
  wire [31:0] farPath_io_out_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 247:23]
  wire  farPath_io_out_far_path_of; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 247:23]
  wire  farPath_io_out_far_path_ix; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 247:23]
  wire  farPath_io_out_far_path_uf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 247:23]
  wire  closePath_io_in_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 261:25]
  wire [7:0] closePath_io_in_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 261:25]
  wire [23:0] closePath_io_in_a_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 261:25]
  wire [7:0] closePath_io_in_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 261:25]
  wire [23:0] closePath_io_in_b_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 261:25]
  wire  closePath_io_in_needShift; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 261:25]
  wire [2:0] closePath_io_in_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 261:25]
  wire [31:0] closePath_io_out_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 261:25]
  wire  closePath_io_out_near_path_of; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 261:25]
  wire  closePath_io_out_near_path_ix; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 261:25]
  wire  closePath_io_out_near_path_uf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 261:25]
  wire  fp_a_sign = io_in_bits_a[31]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 58:19]
  wire [7:0] fp_a_exp = io_in_bits_a[30:23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 59:18]
  wire [22:0] fp_a_sig = io_in_bits_a[22:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 60:18]
  wire  fp_b_sign = io_in_bits_b[31]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 58:19]
  wire [7:0] fp_b_exp = io_in_bits_b[30:23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 59:18]
  wire [22:0] fp_b_sig = io_in_bits_b[22:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 60:18]
  wire  decode_a_expNotZero = |fp_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 31:28]
  wire  decode_a_expIsOnes = &fp_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 32:27]
  wire  decode_a_sigNotZero = |fp_a_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 33:28]
  wire  decode_a__expIsZero = ~decode_a_expNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 36:27]
  wire  decode_a__sigIsZero = ~decode_a_sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 39:27]
  wire  decode_a__isSubnormal = decode_a__expIsZero & decode_a_sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 40:46]
  wire  decode_a__isInf = decode_a_expIsOnes & decode_a__sigIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 41:40]
  wire  decode_a__isNaN = decode_a_expIsOnes & decode_a_sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 43:40]
  wire  decode_a__isSNaN = decode_a__isNaN & ~fp_a_sig[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 44:37]
  wire  decode_b_expNotZero = |fp_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 31:28]
  wire  decode_b_expIsOnes = &fp_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 32:27]
  wire  decode_b_sigNotZero = |fp_b_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 33:28]
  wire  decode_b__expIsZero = ~decode_b_expNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 36:27]
  wire  decode_b__sigIsZero = ~decode_b_sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 39:27]
  wire  decode_b__isSubnormal = decode_b__expIsZero & decode_b_sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 40:46]
  wire  decode_b__isInf = decode_b_expIsOnes & decode_b__sigIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 41:40]
  wire  decode_b__isNaN = decode_b_expIsOnes & decode_b_sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 43:40]
  wire  decode_b__isSNaN = decode_b__isNaN & ~fp_b_sig[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 44:37]
  wire [7:0] _raw_a_inner_exp_T_1 = fp_a_exp + 8'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 83:38]
  wire [7:0] raw_a_exp = decode_a__isSubnormal ? _raw_a_inner_exp_T_1 : fp_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 83:23]
  wire [23:0] raw_a_sig = {decode_a_expNotZero,fp_a_sig}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 84:23]
  wire [7:0] _raw_b_inner_exp_T_1 = fp_b_exp + 8'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 83:38]
  wire [7:0] raw_b_exp = decode_b__isSubnormal ? _raw_b_inner_exp_T_1 : fp_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 83:23]
  wire [23:0] raw_b_sig = {decode_b_expNotZero,fp_b_sig}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 84:23]
  wire  addSig = fp_a_sign == fp_b_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 235:26]
  wire  needSwap = raw_a_exp < raw_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 236:28]
  wire [7:0] _diffExp_T_1 = raw_b_exp - raw_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 237:41]
  wire [7:0] _diffExp_T_3 = raw_a_exp - raw_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 237:64]
  wire [7:0] diffExp = needSwap ? _diffExp_T_1 : _diffExp_T_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 237:20]
  wire [4:0] initShiftNum = diffExp[4:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 240:29]
  wire  isMaxAlign = diffExp > 8'h1a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 241:28]
  wire  _closePathSel_T = ~addSig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 243:22]
  wire  closePathSel = ~addSig & ~isMaxAlign & initShiftNum <= 5'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 243:45]
  wire  a_isNaN = io_in_bits_a_inter_valid ? io_in_bits_a_inter_flags_isNaN : decode_a__isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 275:20]
  wire  a_isSNaN = io_in_bits_a_inter_valid ? io_in_bits_a_inter_flags_isInv : decode_a__isSNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 276:21]
  wire  a_isInf = io_in_bits_a_inter_valid ? io_in_bits_a_inter_flags_isInf : decode_a__isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 277:20]
  wire  b_isNaN = io_in_bits_b_inter_valid ? io_in_bits_b_inter_flags_isNaN : decode_b__isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 281:20]
  wire  b_isSNaN = io_in_bits_b_inter_valid ? io_in_bits_b_inter_flags_isInv : decode_b__isSNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 282:21]
  wire  b_isInf = io_in_bits_b_inter_valid ? io_in_bits_b_inter_flags_isInf : decode_b__isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 283:20]
  wire  special_path_hasNaN = a_isNaN | b_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 285:37]
  wire  special_path_hasSNaN = a_isSNaN | b_isSNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 286:39]
  wire  special_path_hasInf = a_isInf | b_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 287:37]
  wire  special_path_inf_iv = a_isInf & b_isInf & _closePathSel_T; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 288:48]
  wire  special_case_happen = special_path_hasNaN | special_path_hasInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 289:49]
  wire  special_path_iv = special_path_hasSNaN | special_path_inf_iv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 290:46]
  wire  _special_path_result_T = special_path_hasNaN | special_path_inf_iv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 293:25]
  wire  _special_path_result_T_3 = a_isInf ? fp_a_sign : fp_b_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 296:10]
  wire [31:0] _special_path_result_T_5 = {_special_path_result_T_3,8'hff,23'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 295:8]
  wire [31:0] special_path_result = _special_path_result_T ? 32'h7fc00000 : _special_path_result_T_5; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 292:32]
  wire [4:0] special_path_fflags = {special_path_iv,4'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 301:32]
  wire  common_overflow_sign = closePathSel ? closePath_io_out_result[31] : farPath_io_out_result[31]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 306:8]
  wire  rmin = io_in_bits_roundingMode == 3'h1 | io_in_bits_roundingMode == 3'h2 & ~farPath_io_out_result[31] |
    io_in_bits_roundingMode == 3'h3 & farPath_io_out_result[31]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 54:41]
  wire [7:0] common_overflow_exp = rmin ? 8'hfe : 8'hff; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 308:32]
  wire [22:0] common_overflow_sig = rmin ? 23'h7fffff : 23'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 314:8]
  wire  _common_overflow_T = ~closePathSel; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 316:5]
  wire  common_overflow = ~closePathSel & farPath_io_out_far_path_of | closePathSel & closePath_io_out_near_path_of; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 316:34]
  wire  common_underflow = _common_overflow_T & farPath_io_out_far_path_uf | closePathSel &
    closePath_io_out_near_path_uf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 318:34]
  wire  common_inexact = _common_overflow_T & farPath_io_out_far_path_ix | closePathSel & closePath_io_out_near_path_ix; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 320:34]
  wire [4:0] common_fflags = {2'h0,common_overflow,common_underflow,common_inexact}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 321:26]
  wire [31:0] _io_out_bits_result_T = {common_overflow_sign,common_overflow_exp,common_overflow_sig}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 336:10]
  wire [31:0] _io_out_bits_result_T_1 = closePathSel ? closePath_io_out_result : farPath_io_out_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 337:10]
  wire [31:0] _io_out_bits_result_T_2 = common_overflow ? _io_out_bits_result_T : _io_out_bits_result_T_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 334:8]
  FarPath farPath ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 247:23]
    .io_in_a_sign(farPath_io_in_a_sign),
    .io_in_a_exp(farPath_io_in_a_exp),
    .io_in_a_sig(farPath_io_in_a_sig),
    .io_in_b_exp(farPath_io_in_b_exp),
    .io_in_b_sig(farPath_io_in_b_sig),
    .io_in_addSig(farPath_io_in_addSig),
    .io_in_tinyAdd(farPath_io_in_tinyAdd),
    .io_in_shiftNum(farPath_io_in_shiftNum),
    .io_in_roundingMode(farPath_io_in_roundingMode),
    .io_out_result(farPath_io_out_result),
    .io_out_far_path_of(farPath_io_out_far_path_of),
    .io_out_far_path_ix(farPath_io_out_far_path_ix),
    .io_out_far_path_uf(farPath_io_out_far_path_uf)
  );
  ClosePath closePath ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 261:25]
    .io_in_a_sign(closePath_io_in_a_sign),
    .io_in_a_exp(closePath_io_in_a_exp),
    .io_in_a_sig(closePath_io_in_a_sig),
    .io_in_b_exp(closePath_io_in_b_exp),
    .io_in_b_sig(closePath_io_in_b_sig),
    .io_in_needShift(closePath_io_in_needShift),
    .io_in_roundingMode(closePath_io_in_roundingMode),
    .io_out_result(closePath_io_out_result),
    .io_out_near_path_of(closePath_io_out_near_path_of),
    .io_out_near_path_ix(closePath_io_out_near_path_ix),
    .io_out_near_path_uf(closePath_io_out_near_path_uf)
  );
  assign io_in_ready = io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 329:15]
  assign io_out_valid = io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 330:16]
  assign io_out_bits_fflags = special_case_happen ? special_path_fflags : common_fflags; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 340:28]
  assign io_out_bits_result = special_case_happen ? special_path_result : _io_out_bits_result_T_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 331:28]
  assign farPath_io_in_a_sign = needSwap ? fp_b_sign : fp_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 248:25]
  assign farPath_io_in_a_exp = needSwap ? raw_b_exp : raw_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 248:25]
  assign farPath_io_in_a_sig = needSwap ? raw_b_sig : raw_a_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 248:25]
  assign farPath_io_in_b_exp = needSwap ? raw_a_exp : raw_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 249:25]
  assign farPath_io_in_b_sig = needSwap ? raw_a_sig : raw_b_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 249:25]
  assign farPath_io_in_addSig = fp_a_sign == fp_b_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 235:26]
  assign farPath_io_in_tinyAdd = decode_a__expIsZero & decode_b__expIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 251:47]
  assign farPath_io_in_shiftNum = isMaxAlign ? 5'h1a : initShiftNum; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 242:21]
  assign farPath_io_in_roundingMode = io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 253:30]
  assign closePath_io_in_a_sign = needSwap ? fp_b_sign : fp_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 262:27]
  assign closePath_io_in_a_exp = needSwap ? raw_b_exp : raw_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 262:27]
  assign closePath_io_in_a_sig = needSwap ? raw_b_sig : raw_a_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 262:27]
  assign closePath_io_in_b_exp = needSwap ? raw_a_exp : raw_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 263:27]
  assign closePath_io_in_b_sig = needSwap ? raw_a_sig : raw_b_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 263:27]
  assign closePath_io_in_needShift = initShiftNum == 5'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 264:45]
  assign closePath_io_in_roundingMode = io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 265:32]
endmodule
module RoundingUnit_16(
  input  [9:0] io_in, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 7:14]
  input        io_roundIn, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 7:14]
  input        io_stickyIn, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 7:14]
  input        io_signIn, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 7:14]
  input  [2:0] io_rm, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 7:14]
  output [9:0] io_out, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 7:14]
  output       io_inexact, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 7:14]
  output       io_cout // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 7:14]
);
  wire  g = io_in[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 19:25]
  wire  inexact = io_roundIn | io_stickyIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 20:19]
  wire  _r_up_T_4 = io_roundIn & io_stickyIn | io_roundIn & ~io_stickyIn & g; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 25:24]
  wire  _r_up_T_6 = inexact & ~io_signIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 27:23]
  wire  _r_up_T_7 = inexact & io_signIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 28:23]
  wire  _r_up_T_11 = 3'h1 == io_rm ? 1'h0 : 3'h0 == io_rm & _r_up_T_4; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _r_up_T_13 = 3'h3 == io_rm ? _r_up_T_6 : _r_up_T_11; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _r_up_T_15 = 3'h2 == io_rm ? _r_up_T_7 : _r_up_T_13; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  r_up = 3'h4 == io_rm ? io_roundIn : _r_up_T_15; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [9:0] out_r_up = io_in + 10'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 32:24]
  assign io_out = r_up ? out_r_up : io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 33:16]
  assign io_inexact = io_roundIn | io_stickyIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 20:19]
  assign io_cout = r_up & &io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/RoundingUnit.scala 36:19]
endmodule
module ShiftRightJam_4(
  input  [11:0] io_in, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 11:14]
  input  [7:0]  io_shamt, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 11:14]
  output [11:0] io_out, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 11:14]
  output        io_sticky // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 11:14]
);
  wire  exceed_max_shift = io_shamt > 8'hc; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 17:35]
  wire [3:0] shamt = io_shamt[3:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 18:23]
  wire [15:0] _sticky_mask_T = 16'h1 << shamt; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 20:11]
  wire [15:0] _sticky_mask_T_2 = _sticky_mask_T - 16'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 20:28]
  wire [11:0] _sticky_mask_T_5 = exceed_max_shift ? 12'hfff : 12'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 20:53]
  wire [11:0] sticky_mask = _sticky_mask_T_2[11:0] | _sticky_mask_T_5; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 20:47]
  wire [11:0] _io_out_T = io_in >> io_shamt; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 21:46]
  wire [11:0] _io_sticky_T = io_in & sticky_mask; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 22:23]
  assign io_out = exceed_max_shift ? 12'h0 : _io_out_T; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 21:16]
  assign io_sticky = |_io_sticky_T; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 22:38]
endmodule
module FPDownConverter(
  output        io_in_ready, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 77:14]
  input         io_in_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 77:14]
  input  [31:0] io_in_bits_in, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 77:14]
  input  [2:0]  io_in_bits_roundingMode, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 77:14]
  input         io_out_ready, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 77:14]
  output        io_out_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 77:14]
  output [15:0] io_out_bits_result, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 77:14]
  output [4:0]  io_out_bits_fflags // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 77:14]
);
  wire [9:0] normal_rounder_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 99:30]
  wire  normal_rounder_io_roundIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 99:30]
  wire  normal_rounder_io_stickyIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 99:30]
  wire  normal_rounder_io_signIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 99:30]
  wire [2:0] normal_rounder_io_rm; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 99:30]
  wire [9:0] normal_rounder_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 99:30]
  wire  normal_rounder_io_inexact; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 99:30]
  wire  normal_rounder_io_cout; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 99:30]
  wire [11:0] shiftRightJam_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire [7:0] shiftRightJam_io_shamt; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire [11:0] shiftRightJam_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire  shiftRightJam_io_sticky; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 27:31]
  wire [9:0] subnormal_rounder_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 125:33]
  wire  subnormal_rounder_io_roundIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 125:33]
  wire  subnormal_rounder_io_stickyIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 125:33]
  wire  subnormal_rounder_io_signIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 125:33]
  wire [2:0] subnormal_rounder_io_rm; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 125:33]
  wire [9:0] subnormal_rounder_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 125:33]
  wire  subnormal_rounder_io_inexact; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 125:33]
  wire  subnormal_rounder_io_cout; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 125:33]
  wire  fp_in_sign = io_in_bits_in[31]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 58:19]
  wire [7:0] fp_in_exp = io_in_bits_in[30:23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 59:18]
  wire [22:0] fp_in_sig = io_in_bits_in[22:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 60:18]
  wire  decode_expNotZero = |fp_in_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 31:28]
  wire  decode_expIsOnes = &fp_in_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 32:27]
  wire  decode_sigNotZero = |fp_in_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 33:28]
  wire  decode__isNaN = decode_expIsOnes & decode_sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 43:40]
  wire  decode__isSNaN = decode__isNaN & ~fp_in_sig[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 44:37]
  wire [8:0] _resultExpNoRound_T = {1'b0,$signed(fp_in_exp)}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 90:36]
  wire [8:0] resultExpNoRound = $signed(_resultExpNoRound_T) - 9'sh70; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 90:41]
  wire  normal_stickyBit = |fp_in_sig[11:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 97:54]
  wire [8:0] _normal_exp_rounded_T_2 = $signed(resultExpNoRound) + 9'sh1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 107:73]
  wire [8:0] normal_exp_rounded = normal_rounder_io_cout ? $signed(_normal_exp_rounded_T_2) : $signed(resultExpNoRound); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 107:31]
  wire  _expOverflow_T = $signed(resultExpNoRound) > 9'sh1d; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 110:22]
  wire  _expOverflow_T_1 = $signed(resultExpNoRound) > 9'sh1e; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 111:22]
  wire  expOverflow = normal_rounder_io_cout ? _expOverflow_T : _expOverflow_T_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 108:24]
  wire  _expUnderflow_T_1 = $signed(resultExpNoRound) < 9'sh1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 113:91]
  wire  expUnderflow = normal_rounder_io_cout ? $signed(resultExpNoRound) < 9'sh0 : $signed(resultExpNoRound) < 9'sh1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 113:25]
  wire  normal_ix = normal_rounder_io_inexact | expOverflow; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 114:45]
  wire  subnormal_exp_rounded = subnormal_rounder_io_cout; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 132:34]
  wire  rmin = io_in_bits_roundingMode == 3'h1 | io_in_bits_roundingMode == 3'h2 & ~fp_in_sign | io_in_bits_roundingMode
     == 3'h3 & fp_in_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 140:89]
  wire [4:0] normal_of_exp = rmin ? 5'h1e : 5'h1f; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 141:26]
  wire [9:0] normal_of_sig = rmin ? 10'h3ff : 10'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 146:26]
  wire  _common_exp_T = ~_expUnderflow_T_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 153:7]
  wire  _common_exp_T_1 = ~_expUnderflow_T_1 & expOverflow; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 153:23]
  wire  _common_exp_T_4 = _common_exp_T & ~expOverflow; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 154:23]
  wire [4:0] _common_exp_T_6 = _common_exp_T_1 ? normal_of_exp : 5'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] _common_exp_T_7 = _common_exp_T_4 ? normal_exp_rounded[4:0] : 5'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire  _common_exp_T_8 = _expUnderflow_T_1 & subnormal_exp_rounded; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] _common_exp_T_9 = _common_exp_T_6 | _common_exp_T_7; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] _GEN_0 = {{4'd0}, _common_exp_T_8}; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] common_exp = _common_exp_T_9 | _GEN_0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _common_sig_T_5 = _common_exp_T_1 ? normal_of_sig : 10'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _common_sig_T_6 = _common_exp_T_4 ? normal_rounder_io_out : 10'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _common_sig_T_7 = _expUnderflow_T_1 ? subnormal_rounder_io_out : 10'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _common_sig_T_8 = _common_sig_T_5 | _common_sig_T_6; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] common_sig = _common_sig_T_8 | _common_sig_T_7; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire  _of_T = ~decode_expIsOnes; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 182:12]
  wire  of = ~decode_expIsOnes & expOverflow; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 182:26]
  wire  uf = _of_T & _expUnderflow_T_1 & expUnderflow & subnormal_rounder_io_inexact; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 183:60]
  wire  _ix_T_3 = _expUnderflow_T_1 & subnormal_rounder_io_inexact; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 186:23]
  wire  _ix_T_4 = _common_exp_T & normal_ix | _ix_T_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 185:36]
  wire  ix = _of_T & _ix_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 184:26]
  wire  _result_T_1 = ~decode__isNaN & fp_in_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 192:19]
  wire [4:0] _result_T_4 = decode_expIsOnes ? 5'h1f : 5'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] _result_T_5 = _of_T ? common_exp : 5'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [4:0] _result_T_6 = _result_T_4 | _result_T_5; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _result_T_8 = {decode_sigNotZero,9'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 200:12]
  wire [9:0] _result_T_9 = decode_expIsOnes ? _result_T_8 : 10'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _result_T_10 = _of_T ? common_sig : 10'h0; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [9:0] _result_T_11 = _result_T_9 | _result_T_10; // @[src/main/scala/chisel3/util/Mux.scala 30:73]
  wire [5:0] result_hi = {_result_T_1,_result_T_6}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 191:19]
  wire [1:0] io_out_bits_fflags_lo = {uf,ix}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 209:28]
  wire [2:0] io_out_bits_fflags_hi = {decode__isSNaN,1'h0,of}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 209:28]
  RoundingUnit_16 normal_rounder ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 99:30]
    .io_in(normal_rounder_io_in),
    .io_roundIn(normal_rounder_io_roundIn),
    .io_stickyIn(normal_rounder_io_stickyIn),
    .io_signIn(normal_rounder_io_signIn),
    .io_rm(normal_rounder_io_rm),
    .io_out(normal_rounder_io_out),
    .io_inexact(normal_rounder_io_inexact),
    .io_cout(normal_rounder_io_cout)
  );
  ShiftRightJam_4 shiftRightJam ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/ShiftRightJam.scala 27:31]
    .io_in(shiftRightJam_io_in),
    .io_shamt(shiftRightJam_io_shamt),
    .io_out(shiftRightJam_io_out),
    .io_sticky(shiftRightJam_io_sticky)
  );
  RoundingUnit_16 subnormal_rounder ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 125:33]
    .io_in(subnormal_rounder_io_in),
    .io_roundIn(subnormal_rounder_io_roundIn),
    .io_stickyIn(subnormal_rounder_io_stickyIn),
    .io_signIn(subnormal_rounder_io_signIn),
    .io_rm(subnormal_rounder_io_rm),
    .io_out(subnormal_rounder_io_out),
    .io_inexact(subnormal_rounder_io_inexact),
    .io_cout(subnormal_rounder_io_cout)
  );
  assign io_in_ready = io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 206:15]
  assign io_out_valid = io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 207:16]
  assign io_out_bits_result = {result_hi,_result_T_11}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 191:19]
  assign io_out_bits_fflags = {io_out_bits_fflags_hi,io_out_bits_fflags_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 209:28]
  assign normal_rounder_io_in = fp_in_sig[22:13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 95:34]
  assign normal_rounder_io_roundIn = fp_in_sig[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 96:61]
  assign normal_rounder_io_stickyIn = |fp_in_sig[11:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 97:54]
  assign normal_rounder_io_signIn = io_in_bits_in[31]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 58:19]
  assign normal_rounder_io_rm = io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 104:24]
  assign shiftRightJam_io_in = {decode_expNotZero,fp_in_sig[22:12]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 121:8]
  assign shiftRightJam_io_shamt = 8'h71 - fp_in_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 119:45]
  assign subnormal_rounder_io_in = shiftRightJam_io_out[10:1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 126:56]
  assign subnormal_rounder_io_roundIn = shiftRightJam_io_out[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 127:48]
  assign subnormal_rounder_io_stickyIn = shiftRightJam_io_sticky | normal_stickyBit; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 124:42]
  assign subnormal_rounder_io_signIn = io_in_bits_in[31]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/package.scala 58:19]
  assign subnormal_rounder_io_rm = io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 130:27]
endmodule
module DotProdUnit(
  input         clock,
  input         reset,
  output        io_in_ready, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
  input         io_in_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
  input  [15:0] io_in_bits_vec_a_0, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
  input  [15:0] io_in_bits_vec_a_1, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
  input  [15:0] io_in_bits_vec_a_2, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
  input  [15:0] io_in_bits_vec_a_3, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
  input  [15:0] io_in_bits_vec_b_0, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
  input  [15:0] io_in_bits_vec_b_1, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
  input  [15:0] io_in_bits_vec_b_2, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
  input  [15:0] io_in_bits_vec_b_3, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
  input  [31:0] io_in_bits_c, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
  input         io_in_bits_mixPc, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
  input  [2:0]  io_in_bits_roundingMode, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
  input         io_out_ready, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
  output        io_out_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
  output [4:0]  io_out_bits_fflags, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
  output [31:0] io_out_bits_result // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 27:14]
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
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [31:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [31:0] _RAND_48;
  reg [31:0] _RAND_49;
  reg [31:0] _RAND_50;
  reg [31:0] _RAND_51;
  reg [31:0] _RAND_52;
  reg [31:0] _RAND_53;
  reg [31:0] _RAND_54;
`endif // RANDOMIZE_REG_INIT
  wire  fmul_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire [15:0] fmul_io_in_bits_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire [15:0] fmul_io_in_bits_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_io_toFADD_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_io_toFADD_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire [31:0] fmul_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_io_toFADD_bits_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire [15:0] fmul_1_io_in_bits_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire [15:0] fmul_1_io_in_bits_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_toFADD_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_toFADD_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire [31:0] fmul_1_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_1_io_toFADD_bits_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire [15:0] fmul_2_io_in_bits_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire [15:0] fmul_2_io_in_bits_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_toFADD_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_toFADD_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire [31:0] fmul_2_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_2_io_toFADD_bits_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire [15:0] fmul_3_io_in_bits_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire [15:0] fmul_3_io_in_bits_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_toFADD_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_toFADD_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire [31:0] fmul_3_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fmul_3_io_toFADD_bits_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
  wire  fcvt_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 314:22]
  wire [15:0] fcvt_io_in_bits_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 314:22]
  wire  fcvt_io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 314:22]
  wire [31:0] fcvt_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 314:22]
  wire  faddModule_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_io_in_bits_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_io_in_bits_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [2:0] faddModule_io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_bits_a_inter_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_bits_b_inter_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_bits_a_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_bits_a_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_bits_a_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_bits_b_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_bits_b_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_in_bits_b_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_io_out_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [4:0] faddModule_io_out_bits_fflags; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_1_io_in_bits_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_1_io_in_bits_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [2:0] faddModule_1_io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_bits_a_inter_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_bits_b_inter_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_bits_a_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_bits_a_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_bits_a_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_bits_b_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_bits_b_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_in_bits_b_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_1_io_out_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [4:0] faddModule_1_io_out_bits_fflags; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_1_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_2_io_in_bits_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_2_io_in_bits_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [2:0] faddModule_2_io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_bits_a_inter_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_bits_b_inter_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_bits_a_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_bits_a_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_bits_a_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_bits_b_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_bits_b_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_in_bits_b_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_2_io_out_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [4:0] faddModule_2_io_out_bits_fflags; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_2_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_3_io_in_bits_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_3_io_in_bits_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [2:0] faddModule_3_io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_bits_a_inter_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_bits_b_inter_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_bits_a_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_bits_a_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_bits_a_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_bits_b_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_bits_b_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_in_bits_b_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  faddModule_3_io_out_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [4:0] faddModule_3_io_out_bits_fflags; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire [31:0] faddModule_3_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
  wire  fcvt_1_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 220:22]
  wire  fcvt_1_io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 220:22]
  wire [31:0] fcvt_1_io_in_bits_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 220:22]
  wire [2:0] fcvt_1_io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 220:22]
  wire  fcvt_1_io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 220:22]
  wire  fcvt_1_io_out_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 220:22]
  wire [15:0] fcvt_1_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 220:22]
  wire [4:0] fcvt_1_io_out_bits_fflags; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 220:22]
  wire  firstFaddReady_0 = faddModule_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 45:28 82:25]
  wire  firstFaddReady_1 = faddModule_1_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 45:28 82:25]
  wire  _T = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 47:134]
  wire  prehandshaked = io_in_valid & fmul_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 108:35]
  reg  valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 109:24]
  wire  _GEN_0 = fmul_io_toFADD_valid & _T ? 1'h0 : valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 110:46 111:13 109:24]
  wire  _GEN_1 = prehandshaked | _GEN_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 113:25 114:13]
  reg [15:0] fmul_io_in_bits_a_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 118:35]
  reg [15:0] fmul_io_in_bits_b_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 119:35]
  wire  prehandshaked_1 = io_in_valid & fmul_1_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 108:35]
  reg  valid_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 109:24]
  wire  _GEN_4 = fmul_1_io_toFADD_valid & _T ? 1'h0 : valid_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 110:46 111:13 109:24]
  wire  _GEN_5 = prehandshaked_1 | _GEN_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 113:25 114:13]
  reg [15:0] fmul_io_in_bits_a_r_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 118:35]
  reg [15:0] fmul_io_in_bits_b_r_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 119:35]
  wire  prehandshaked_2 = io_in_valid & fmul_2_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 108:35]
  reg  valid_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 109:24]
  wire  _GEN_8 = fmul_2_io_toFADD_valid & _T ? 1'h0 : valid_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 110:46 111:13 109:24]
  wire  _GEN_9 = prehandshaked_2 | _GEN_8; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 113:25 114:13]
  reg [15:0] fmul_io_in_bits_a_r_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 118:35]
  reg [15:0] fmul_io_in_bits_b_r_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 119:35]
  wire  prehandshaked_3 = io_in_valid & fmul_3_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 108:35]
  reg  valid_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 109:24]
  wire  _GEN_12 = fmul_3_io_toFADD_valid & _T ? 1'h0 : valid_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 110:46 111:13 109:24]
  wire  _GEN_13 = prehandshaked_3 | _GEN_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 113:25 114:13]
  reg [15:0] fmul_io_in_bits_a_r_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 118:35]
  reg [15:0] fmul_io_in_bits_b_r_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 119:35]
  wire  _mixPc_s1_T = io_in_ready & io_in_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 52:35]
  reg  mixPc_s1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 53:27]
  reg [2:0] rm_s1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 54:24]
  wire  _T_9 = ~io_in_bits_mixPc; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 55:103]
  wire  _T_10 = io_in_valid & ~io_in_bits_mixPc; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 55:100]
  wire  prehandshaked_4 = _T_10 & fcvt_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 316:35]
  reg [15:0] fcvt_io_in_bits_in_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 326:36]
  reg [31:0] c_fp32_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 56:55]
  wire  fmulReady_0 = fmul_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 42:34 50:18]
  wire  fmulReady_1 = fmul_1_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 42:34 50:18]
  wire  fmulReady_2 = fmul_2_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 42:34 50:18]
  wire  fmulReady_3 = fmul_3_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 42:34 50:18]
  wire  fmulValid_0 = fmul_io_toFADD_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 42:34 49:18]
  wire  fmulValid_1 = fmul_1_io_toFADD_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 42:34 49:18]
  wire  _s1_handshaked_s2_T = fmulValid_0 & fmulValid_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 64:44]
  wire  fmulValid_2 = fmul_2_io_toFADD_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 42:34 49:18]
  wire  fmulValid_3 = fmul_3_io_toFADD_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 42:34 49:18]
  wire  s1_handshaked_s2 = fmulValid_0 & fmulValid_1 & fmulValid_2 & fmulValid_3 & _T; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 64:49]
  reg  mixPc_s2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 65:27]
  reg [2:0] rm_s2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 66:24]
  wire  prehandshaked_5 = _s1_handshaked_s2_T & faddModule_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 354:35]
  reg  valid_5; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 355:24]
  wire  firstPostReady_0 = faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 113:23 69:28]
  wire  _GEN_24 = faddModule_io_out_valid & firstPostReady_0 ? 1'h0 : valid_5; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 356:49 357:13 355:24]
  wire  _GEN_25 = prehandshaked_5 | _GEN_24; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 359:25 360:13]
  reg  a_flag_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
  reg  a_flag_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
  reg  a_flag_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
  wire  fmulResult_0_inter_flags_isNaN = fmul_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 41:24 48:19]
  wire  fmulResult_0_inter_flags_isInf = fmul_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 41:24 48:19]
  wire  fmulResult_0_inter_flags_isInv = fmul_io_toFADD_bits_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 41:24 48:19]
  reg  b_flag_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
  reg  b_flag_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
  reg  b_flag_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
  wire  fmulResult_1_inter_flags_isNaN = fmul_1_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 41:24 48:19]
  wire  fmulResult_1_inter_flags_isInf = fmul_1_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 41:24 48:19]
  wire  fmulResult_1_inter_flags_isInv = fmul_1_io_toFADD_bits_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 41:24 48:19]
  reg [31:0] faddModule_io_in_bits_a_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 370:41]
  wire [31:0] fmulResult_0_fp_prod = fmul_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 41:24 48:19]
  reg [31:0] faddModule_io_in_bits_b_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 371:41]
  wire [31:0] fmulResult_1_fp_prod = fmul_1_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 41:24 48:19]
  wire  prevalid_1 = fmulValid_2 & fmulValid_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 76:39]
  wire  prehandshaked_6 = prevalid_1 & faddModule_1_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 354:35]
  reg  valid_6; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 355:24]
  wire  _GEN_36 = faddModule_1_io_out_valid & firstPostReady_0 ? 1'h0 : valid_6; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 356:49 357:13 355:24]
  wire  _GEN_37 = prehandshaked_6 | _GEN_36; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 359:25 360:13]
  reg  a_flag_1_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
  reg  a_flag_1_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
  reg  a_flag_1_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
  wire  fmulResult_2_inter_flags_isNaN = fmul_2_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 41:24 48:19]
  wire  fmulResult_2_inter_flags_isInf = fmul_2_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 41:24 48:19]
  wire  fmulResult_2_inter_flags_isInv = fmul_2_io_toFADD_bits_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 41:24 48:19]
  reg  b_flag_1_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
  reg  b_flag_1_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
  reg  b_flag_1_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
  wire  fmulResult_3_inter_flags_isNaN = fmul_3_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 41:24 48:19]
  wire  fmulResult_3_inter_flags_isInf = fmul_3_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 41:24 48:19]
  wire  fmulResult_3_inter_flags_isInv = fmul_3_io_toFADD_bits_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 41:24 48:19]
  reg [31:0] faddModule_io_in_bits_a_r_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 370:41]
  wire [31:0] fmulResult_2_fp_prod = fmul_2_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 41:24 48:19]
  reg [31:0] faddModule_io_in_bits_b_r_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 371:41]
  wire [31:0] fmulResult_3_fp_prod = fmul_3_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 41:24 48:19]
  reg [31:0] firstAddResult_2_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 87:45]
  wire  firstFaddValid_0 = faddModule_io_out_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 68:28 81:25]
  wire  firstFaddValid_1 = faddModule_1_io_out_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 68:28 81:25]
  wire  _T_15 = firstFaddValid_0 & firstFaddValid_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 129:113]
  wire  prehandshaked_7 = _T_15 & firstPostReady_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 93:34]
  reg [2:0] rm_this; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 94:28]
  reg  mixPc_this; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 95:31]
  wire  prehandshaked_8 = _T_15 & faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 354:35]
  reg  valid_7; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 355:24]
  wire  postReady_0 = faddModule_3_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 105:27 123:22]
  wire  _GEN_51 = faddModule_2_io_out_valid & postReady_0 ? 1'h0 : valid_7; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 356:49 357:13 355:24]
  wire  _GEN_52 = prehandshaked_8 | _GEN_51; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 359:25 360:13]
  reg [31:0] faddModule_io_in_bits_a_r_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 370:41]
  wire [31:0] firstAddResult_0 = faddModule_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 67:28 80:25]
  reg [31:0] faddModule_io_in_bits_b_r_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 371:41]
  wire [31:0] firstAddResult_1 = faddModule_1_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 67:28 80:25]
  reg [31:0] addResult_1_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 115:36]
  wire  postValid_0 = faddModule_2_io_out_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 104:27 112:24]
  wire  prehandshaked_9 = postValid_0 & postReady_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 119:52]
  reg [2:0] rm_sx; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 120:33]
  reg  mixPc_sx; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 121:36]
  wire  prehandshaked_10 = postValid_0 & faddModule_3_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 354:35]
  reg  valid_8; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 355:24]
  wire  _T_17 = faddModule_3_io_out_valid & io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 356:34]
  wire  _GEN_58 = faddModule_3_io_out_valid & io_out_ready ? 1'h0 : valid_8; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 356:49 357:13 355:24]
  wire  _GEN_59 = prehandshaked_10 | _GEN_58; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 359:25 360:13]
  reg [31:0] faddModule_io_in_bits_a_r_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 370:41]
  wire [31:0] addResult_0 = faddModule_2_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 103:27 111:24]
  reg [31:0] faddModule_io_in_bits_b_r_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 371:41]
  reg [2:0] rm_es; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 135:24]
  reg  mixPc_es; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 136:27]
  reg [31:0] atResult_es; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 137:30]
  reg [4:0] atflags_es; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 138:29]
  reg  esValid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 140:24]
  wire  _T_18 = io_out_ready & io_out_valid; // @[src/main/scala/chisel3/util/Decoupled.scala 52:35]
  wire  _GEN_66 = _T_18 ? 1'h0 : esValid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 141:22 142:13 140:24]
  wire  _GEN_67 = _T_17 | _GEN_66; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 144:25 145:13]
  wire  _T_20 = faddModule_3_io_out_valid & _T_9; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 148:110]
  wire  prehandshaked_11 = _T_20 & fcvt_1_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 222:35]
  reg  valid_9; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 223:24]
  wire  _GEN_68 = fcvt_1_io_out_valid & io_out_ready ? 1'h0 : valid_9; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 224:43 225:13 223:24]
  wire  _GEN_69 = prehandshaked_11 | _GEN_68; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 227:25 228:13]
  reg [31:0] fcvt_io_in_bits_in_r_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 232:36]
  FMULnoRound fmul ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
    .io_in_ready(fmul_io_in_ready),
    .io_in_valid(fmul_io_in_valid),
    .io_in_bits_a(fmul_io_in_bits_a),
    .io_in_bits_b(fmul_io_in_bits_b),
    .io_toFADD_ready(fmul_io_toFADD_ready),
    .io_toFADD_valid(fmul_io_toFADD_valid),
    .io_toFADD_bits_fp_prod(fmul_io_toFADD_bits_fp_prod),
    .io_toFADD_bits_inter_flags_isNaN(fmul_io_toFADD_bits_inter_flags_isNaN),
    .io_toFADD_bits_inter_flags_isInf(fmul_io_toFADD_bits_inter_flags_isInf),
    .io_toFADD_bits_inter_flags_isInv(fmul_io_toFADD_bits_inter_flags_isInv)
  );
  FMULnoRound fmul_1 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
    .io_in_ready(fmul_1_io_in_ready),
    .io_in_valid(fmul_1_io_in_valid),
    .io_in_bits_a(fmul_1_io_in_bits_a),
    .io_in_bits_b(fmul_1_io_in_bits_b),
    .io_toFADD_ready(fmul_1_io_toFADD_ready),
    .io_toFADD_valid(fmul_1_io_toFADD_valid),
    .io_toFADD_bits_fp_prod(fmul_1_io_toFADD_bits_fp_prod),
    .io_toFADD_bits_inter_flags_isNaN(fmul_1_io_toFADD_bits_inter_flags_isNaN),
    .io_toFADD_bits_inter_flags_isInf(fmul_1_io_toFADD_bits_inter_flags_isInf),
    .io_toFADD_bits_inter_flags_isInv(fmul_1_io_toFADD_bits_inter_flags_isInv)
  );
  FMULnoRound fmul_2 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
    .io_in_ready(fmul_2_io_in_ready),
    .io_in_valid(fmul_2_io_in_valid),
    .io_in_bits_a(fmul_2_io_in_bits_a),
    .io_in_bits_b(fmul_2_io_in_bits_b),
    .io_toFADD_ready(fmul_2_io_toFADD_ready),
    .io_toFADD_valid(fmul_2_io_toFADD_valid),
    .io_toFADD_bits_fp_prod(fmul_2_io_toFADD_bits_fp_prod),
    .io_toFADD_bits_inter_flags_isNaN(fmul_2_io_toFADD_bits_inter_flags_isNaN),
    .io_toFADD_bits_inter_flags_isInf(fmul_2_io_toFADD_bits_inter_flags_isInf),
    .io_toFADD_bits_inter_flags_isInv(fmul_2_io_toFADD_bits_inter_flags_isInv)
  );
  FMULnoRound fmul_3 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 106:22]
    .io_in_ready(fmul_3_io_in_ready),
    .io_in_valid(fmul_3_io_in_valid),
    .io_in_bits_a(fmul_3_io_in_bits_a),
    .io_in_bits_b(fmul_3_io_in_bits_b),
    .io_toFADD_ready(fmul_3_io_toFADD_ready),
    .io_toFADD_valid(fmul_3_io_toFADD_valid),
    .io_toFADD_bits_fp_prod(fmul_3_io_toFADD_bits_fp_prod),
    .io_toFADD_bits_inter_flags_isNaN(fmul_3_io_toFADD_bits_inter_flags_isNaN),
    .io_toFADD_bits_inter_flags_isInf(fmul_3_io_toFADD_bits_inter_flags_isInf),
    .io_toFADD_bits_inter_flags_isInv(fmul_3_io_toFADD_bits_inter_flags_isInv)
  );
  FPUpConverter fcvt ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 314:22]
    .io_in_ready(fcvt_io_in_ready),
    .io_in_bits_in(fcvt_io_in_bits_in),
    .io_out_ready(fcvt_io_out_ready),
    .io_out_bits_result(fcvt_io_out_bits_result)
  );
  FADD faddModule ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
    .io_in_ready(faddModule_io_in_ready),
    .io_in_valid(faddModule_io_in_valid),
    .io_in_bits_a(faddModule_io_in_bits_a),
    .io_in_bits_b(faddModule_io_in_bits_b),
    .io_in_bits_roundingMode(faddModule_io_in_bits_roundingMode),
    .io_in_bits_a_inter_valid(faddModule_io_in_bits_a_inter_valid),
    .io_in_bits_b_inter_valid(faddModule_io_in_bits_b_inter_valid),
    .io_in_bits_a_inter_flags_isNaN(faddModule_io_in_bits_a_inter_flags_isNaN),
    .io_in_bits_a_inter_flags_isInf(faddModule_io_in_bits_a_inter_flags_isInf),
    .io_in_bits_a_inter_flags_isInv(faddModule_io_in_bits_a_inter_flags_isInv),
    .io_in_bits_b_inter_flags_isNaN(faddModule_io_in_bits_b_inter_flags_isNaN),
    .io_in_bits_b_inter_flags_isInf(faddModule_io_in_bits_b_inter_flags_isInf),
    .io_in_bits_b_inter_flags_isInv(faddModule_io_in_bits_b_inter_flags_isInv),
    .io_out_ready(faddModule_io_out_ready),
    .io_out_valid(faddModule_io_out_valid),
    .io_out_bits_fflags(faddModule_io_out_bits_fflags),
    .io_out_bits_result(faddModule_io_out_bits_result)
  );
  FADD faddModule_1 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
    .io_in_ready(faddModule_1_io_in_ready),
    .io_in_valid(faddModule_1_io_in_valid),
    .io_in_bits_a(faddModule_1_io_in_bits_a),
    .io_in_bits_b(faddModule_1_io_in_bits_b),
    .io_in_bits_roundingMode(faddModule_1_io_in_bits_roundingMode),
    .io_in_bits_a_inter_valid(faddModule_1_io_in_bits_a_inter_valid),
    .io_in_bits_b_inter_valid(faddModule_1_io_in_bits_b_inter_valid),
    .io_in_bits_a_inter_flags_isNaN(faddModule_1_io_in_bits_a_inter_flags_isNaN),
    .io_in_bits_a_inter_flags_isInf(faddModule_1_io_in_bits_a_inter_flags_isInf),
    .io_in_bits_a_inter_flags_isInv(faddModule_1_io_in_bits_a_inter_flags_isInv),
    .io_in_bits_b_inter_flags_isNaN(faddModule_1_io_in_bits_b_inter_flags_isNaN),
    .io_in_bits_b_inter_flags_isInf(faddModule_1_io_in_bits_b_inter_flags_isInf),
    .io_in_bits_b_inter_flags_isInv(faddModule_1_io_in_bits_b_inter_flags_isInv),
    .io_out_ready(faddModule_1_io_out_ready),
    .io_out_valid(faddModule_1_io_out_valid),
    .io_out_bits_fflags(faddModule_1_io_out_bits_fflags),
    .io_out_bits_result(faddModule_1_io_out_bits_result)
  );
  FADD faddModule_2 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
    .io_in_ready(faddModule_2_io_in_ready),
    .io_in_valid(faddModule_2_io_in_valid),
    .io_in_bits_a(faddModule_2_io_in_bits_a),
    .io_in_bits_b(faddModule_2_io_in_bits_b),
    .io_in_bits_roundingMode(faddModule_2_io_in_bits_roundingMode),
    .io_in_bits_a_inter_valid(faddModule_2_io_in_bits_a_inter_valid),
    .io_in_bits_b_inter_valid(faddModule_2_io_in_bits_b_inter_valid),
    .io_in_bits_a_inter_flags_isNaN(faddModule_2_io_in_bits_a_inter_flags_isNaN),
    .io_in_bits_a_inter_flags_isInf(faddModule_2_io_in_bits_a_inter_flags_isInf),
    .io_in_bits_a_inter_flags_isInv(faddModule_2_io_in_bits_a_inter_flags_isInv),
    .io_in_bits_b_inter_flags_isNaN(faddModule_2_io_in_bits_b_inter_flags_isNaN),
    .io_in_bits_b_inter_flags_isInf(faddModule_2_io_in_bits_b_inter_flags_isInf),
    .io_in_bits_b_inter_flags_isInv(faddModule_2_io_in_bits_b_inter_flags_isInv),
    .io_out_ready(faddModule_2_io_out_ready),
    .io_out_valid(faddModule_2_io_out_valid),
    .io_out_bits_fflags(faddModule_2_io_out_bits_fflags),
    .io_out_bits_result(faddModule_2_io_out_bits_result)
  );
  FADD faddModule_3 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 352:28]
    .io_in_ready(faddModule_3_io_in_ready),
    .io_in_valid(faddModule_3_io_in_valid),
    .io_in_bits_a(faddModule_3_io_in_bits_a),
    .io_in_bits_b(faddModule_3_io_in_bits_b),
    .io_in_bits_roundingMode(faddModule_3_io_in_bits_roundingMode),
    .io_in_bits_a_inter_valid(faddModule_3_io_in_bits_a_inter_valid),
    .io_in_bits_b_inter_valid(faddModule_3_io_in_bits_b_inter_valid),
    .io_in_bits_a_inter_flags_isNaN(faddModule_3_io_in_bits_a_inter_flags_isNaN),
    .io_in_bits_a_inter_flags_isInf(faddModule_3_io_in_bits_a_inter_flags_isInf),
    .io_in_bits_a_inter_flags_isInv(faddModule_3_io_in_bits_a_inter_flags_isInv),
    .io_in_bits_b_inter_flags_isNaN(faddModule_3_io_in_bits_b_inter_flags_isNaN),
    .io_in_bits_b_inter_flags_isInf(faddModule_3_io_in_bits_b_inter_flags_isInf),
    .io_in_bits_b_inter_flags_isInv(faddModule_3_io_in_bits_b_inter_flags_isInv),
    .io_out_ready(faddModule_3_io_out_ready),
    .io_out_valid(faddModule_3_io_out_valid),
    .io_out_bits_fflags(faddModule_3_io_out_bits_fflags),
    .io_out_bits_result(faddModule_3_io_out_bits_result)
  );
  FPDownConverter fcvt_1 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 220:22]
    .io_in_ready(fcvt_1_io_in_ready),
    .io_in_valid(fcvt_1_io_in_valid),
    .io_in_bits_in(fcvt_1_io_in_bits_in),
    .io_in_bits_roundingMode(fcvt_1_io_in_bits_roundingMode),
    .io_out_ready(fcvt_1_io_out_ready),
    .io_out_valid(fcvt_1_io_out_valid),
    .io_out_bits_result(fcvt_1_io_out_bits_result),
    .io_out_bits_fflags(fcvt_1_io_out_bits_fflags)
  );
  assign io_in_ready = fmulReady_0 & fmulReady_1 & fmulReady_2 & fmulReady_3 & fcvt_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 60:41]
  assign io_out_valid = fcvt_1_io_out_valid | mixPc_es & esValid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 151:32]
  assign io_out_bits_fflags = atflags_es | fcvt_1_io_out_bits_fflags; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 150:36]
  assign io_out_bits_result = mixPc_es ? atResult_es : {{16'd0}, fcvt_1_io_out_bits_result}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 149:28]
  assign fmul_io_in_valid = valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 117:22]
  assign fmul_io_in_bits_a = fmul_io_in_bits_a_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 118:23]
  assign fmul_io_in_bits_b = fmul_io_in_bits_b_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 119:23]
  assign fmul_io_toFADD_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 47:134]
  assign fmul_1_io_in_valid = valid_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 117:22]
  assign fmul_1_io_in_bits_a = fmul_io_in_bits_a_r_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 118:23]
  assign fmul_1_io_in_bits_b = fmul_io_in_bits_b_r_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 119:23]
  assign fmul_1_io_toFADD_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 47:134]
  assign fmul_2_io_in_valid = valid_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 117:22]
  assign fmul_2_io_in_bits_a = fmul_io_in_bits_a_r_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 118:23]
  assign fmul_2_io_in_bits_b = fmul_io_in_bits_b_r_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 119:23]
  assign fmul_2_io_toFADD_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 47:134]
  assign fmul_3_io_in_valid = valid_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 117:22]
  assign fmul_3_io_in_bits_a = fmul_io_in_bits_a_r_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 118:23]
  assign fmul_3_io_in_bits_b = fmul_io_in_bits_b_r_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 119:23]
  assign fmul_3_io_toFADD_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 47:134]
  assign fcvt_io_in_bits_in = fcvt_io_in_bits_in_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 326:24]
  assign fcvt_io_out_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 55:134]
  assign faddModule_io_in_valid = valid_5; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 368:28]
  assign faddModule_io_in_bits_a = faddModule_io_in_bits_a_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 370:29]
  assign faddModule_io_in_bits_b = faddModule_io_in_bits_b_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 371:29]
  assign faddModule_io_in_bits_roundingMode = rm_s2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 372:40]
  assign faddModule_io_in_bits_a_inter_valid = 1'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 373:41]
  assign faddModule_io_in_bits_b_inter_valid = 1'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 374:41]
  assign faddModule_io_in_bits_a_inter_flags_isNaN = a_flag_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 375:41]
  assign faddModule_io_in_bits_a_inter_flags_isInf = a_flag_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 375:41]
  assign faddModule_io_in_bits_a_inter_flags_isInv = a_flag_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 375:41]
  assign faddModule_io_in_bits_b_inter_flags_isNaN = b_flag_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 376:41]
  assign faddModule_io_in_bits_b_inter_flags_isInf = b_flag_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 376:41]
  assign faddModule_io_in_bits_b_inter_flags_isInv = b_flag_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 376:41]
  assign faddModule_io_out_ready = faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 113:23 69:28]
  assign faddModule_1_io_in_valid = valid_6; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 368:28]
  assign faddModule_1_io_in_bits_a = faddModule_io_in_bits_a_r_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 370:29]
  assign faddModule_1_io_in_bits_b = faddModule_io_in_bits_b_r_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 371:29]
  assign faddModule_1_io_in_bits_roundingMode = rm_s2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 372:40]
  assign faddModule_1_io_in_bits_a_inter_valid = 1'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 373:41]
  assign faddModule_1_io_in_bits_b_inter_valid = 1'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 374:41]
  assign faddModule_1_io_in_bits_a_inter_flags_isNaN = a_flag_1_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 375:41]
  assign faddModule_1_io_in_bits_a_inter_flags_isInf = a_flag_1_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 375:41]
  assign faddModule_1_io_in_bits_a_inter_flags_isInv = a_flag_1_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 375:41]
  assign faddModule_1_io_in_bits_b_inter_flags_isNaN = b_flag_1_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 376:41]
  assign faddModule_1_io_in_bits_b_inter_flags_isInf = b_flag_1_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 376:41]
  assign faddModule_1_io_in_bits_b_inter_flags_isInv = b_flag_1_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 376:41]
  assign faddModule_1_io_out_ready = faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 113:23 69:28]
  assign faddModule_2_io_in_valid = valid_7; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 368:28]
  assign faddModule_2_io_in_bits_a = faddModule_io_in_bits_a_r_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 370:29]
  assign faddModule_2_io_in_bits_b = faddModule_io_in_bits_b_r_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 371:29]
  assign faddModule_2_io_in_bits_roundingMode = rm_this; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 372:40]
  assign faddModule_2_io_in_bits_a_inter_valid = 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 373:41]
  assign faddModule_2_io_in_bits_b_inter_valid = 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 374:41]
  assign faddModule_2_io_in_bits_a_inter_flags_isNaN = 1'h0;
  assign faddModule_2_io_in_bits_a_inter_flags_isInf = 1'h0;
  assign faddModule_2_io_in_bits_a_inter_flags_isInv = 1'h0;
  assign faddModule_2_io_in_bits_b_inter_flags_isNaN = 1'h0;
  assign faddModule_2_io_in_bits_b_inter_flags_isInf = 1'h0;
  assign faddModule_2_io_in_bits_b_inter_flags_isInv = 1'h0;
  assign faddModule_2_io_out_ready = faddModule_3_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 105:27 123:22]
  assign faddModule_3_io_in_valid = valid_8; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 368:28]
  assign faddModule_3_io_in_bits_a = faddModule_io_in_bits_a_r_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 370:29]
  assign faddModule_3_io_in_bits_b = faddModule_io_in_bits_b_r_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 371:29]
  assign faddModule_3_io_in_bits_roundingMode = rm_sx; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 372:40]
  assign faddModule_3_io_in_bits_a_inter_valid = 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 373:41]
  assign faddModule_3_io_in_bits_b_inter_valid = 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 374:41]
  assign faddModule_3_io_in_bits_a_inter_flags_isNaN = 1'h0;
  assign faddModule_3_io_in_bits_a_inter_flags_isInf = 1'h0;
  assign faddModule_3_io_in_bits_a_inter_flags_isInv = 1'h0;
  assign faddModule_3_io_in_bits_b_inter_flags_isNaN = 1'h0;
  assign faddModule_3_io_in_bits_b_inter_flags_isInf = 1'h0;
  assign faddModule_3_io_in_bits_b_inter_flags_isInv = 1'h0;
  assign faddModule_3_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 377:29]
  assign fcvt_1_io_in_valid = valid_9; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 231:22]
  assign fcvt_1_io_in_bits_in = fcvt_io_in_bits_in_r_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 232:24]
  assign fcvt_1_io_in_bits_roundingMode = rm_es; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 233:34]
  assign fcvt_1_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 234:23]
  always @(posedge clock) begin
    if (reset) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 109:24]
      valid <= 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 109:24]
    end else begin
      valid <= _GEN_1;
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 118:35]
      fmul_io_in_bits_a_r <= io_in_bits_vec_a_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 118:35]
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 119:35]
      fmul_io_in_bits_b_r <= io_in_bits_vec_b_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 119:35]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 109:24]
      valid_1 <= 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 109:24]
    end else begin
      valid_1 <= _GEN_5;
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 118:35]
      fmul_io_in_bits_a_r_1 <= io_in_bits_vec_a_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 118:35]
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 119:35]
      fmul_io_in_bits_b_r_1 <= io_in_bits_vec_b_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 119:35]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 109:24]
      valid_2 <= 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 109:24]
    end else begin
      valid_2 <= _GEN_9;
    end
    if (prehandshaked_2) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 118:35]
      fmul_io_in_bits_a_r_2 <= io_in_bits_vec_a_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 118:35]
    end
    if (prehandshaked_2) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 119:35]
      fmul_io_in_bits_b_r_2 <= io_in_bits_vec_b_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 119:35]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 109:24]
      valid_3 <= 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 109:24]
    end else begin
      valid_3 <= _GEN_13;
    end
    if (prehandshaked_3) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 118:35]
      fmul_io_in_bits_a_r_3 <= io_in_bits_vec_a_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 118:35]
    end
    if (prehandshaked_3) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 119:35]
      fmul_io_in_bits_b_r_3 <= io_in_bits_vec_b_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FMUL.scala 119:35]
    end
    if (_mixPc_s1_T) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 53:27]
      mixPc_s1 <= io_in_bits_mixPc; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 53:27]
    end
    if (_mixPc_s1_T) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 54:24]
      rm_s1 <= io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 54:24]
    end
    if (prehandshaked_4) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 326:36]
      fcvt_io_in_bits_in_r <= io_in_bits_c[15:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 326:36]
    end
    if (_mixPc_s1_T & io_in_bits_mixPc) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 56:55]
      c_fp32_r <= io_in_bits_c; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 56:55]
    end
    if (s1_handshaked_s2) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 65:27]
      mixPc_s2 <= mixPc_s1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 65:27]
    end
    if (s1_handshaked_s2) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 66:24]
      rm_s2 <= rm_s1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 66:24]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 355:24]
      valid_5 <= 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 355:24]
    end else begin
      valid_5 <= _GEN_25;
    end
    if (prehandshaked_5) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
      a_flag_isNaN <= fmulResult_0_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
    end
    if (prehandshaked_5) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
      a_flag_isInf <= fmulResult_0_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
    end
    if (prehandshaked_5) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
      a_flag_isInv <= fmulResult_0_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
    end
    if (prehandshaked_5) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
      b_flag_isNaN <= fmulResult_1_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
    end
    if (prehandshaked_5) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
      b_flag_isInf <= fmulResult_1_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
    end
    if (prehandshaked_5) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
      b_flag_isInv <= fmulResult_1_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
    end
    if (prehandshaked_5) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 370:41]
      faddModule_io_in_bits_a_r <= fmulResult_0_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 370:41]
    end
    if (prehandshaked_5) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 371:41]
      faddModule_io_in_bits_b_r <= fmulResult_1_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 371:41]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 355:24]
      valid_6 <= 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 355:24]
    end else begin
      valid_6 <= _GEN_37;
    end
    if (prehandshaked_6) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
      a_flag_1_isNaN <= fmulResult_2_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
    end
    if (prehandshaked_6) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
      a_flag_1_isInf <= fmulResult_2_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
    end
    if (prehandshaked_6) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
      a_flag_1_isInv <= fmulResult_2_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 365:55]
    end
    if (prehandshaked_6) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
      b_flag_1_isNaN <= fmulResult_3_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
    end
    if (prehandshaked_6) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
      b_flag_1_isInf <= fmulResult_3_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
    end
    if (prehandshaked_6) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
      b_flag_1_isInv <= fmulResult_3_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 366:55]
    end
    if (prehandshaked_6) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 370:41]
      faddModule_io_in_bits_a_r_1 <= fmulResult_2_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 370:41]
    end
    if (prehandshaked_6) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 371:41]
      faddModule_io_in_bits_b_r_1 <= fmulResult_3_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 371:41]
    end
    if (s1_handshaked_s2) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 87:45]
      if (mixPc_s1) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 56:19]
        firstAddResult_2_r <= fcvt_io_out_bits_result;
      end else begin
        firstAddResult_2_r <= c_fp32_r;
      end
    end
    if (prehandshaked_7) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 94:28]
      rm_this <= rm_s2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 94:28]
    end
    if (prehandshaked_7) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 95:31]
      mixPc_this <= mixPc_s2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 95:31]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 355:24]
      valid_7 <= 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 355:24]
    end else begin
      valid_7 <= _GEN_52;
    end
    if (prehandshaked_8) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 370:41]
      faddModule_io_in_bits_a_r_2 <= firstAddResult_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 370:41]
    end
    if (prehandshaked_8) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 371:41]
      faddModule_io_in_bits_b_r_2 <= firstAddResult_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 371:41]
    end
    if (prehandshaked_7) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 115:36]
      addResult_1_r <= firstAddResult_2_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 115:36]
    end
    if (prehandshaked_9) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 120:33]
      rm_sx <= rm_this; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 120:33]
    end
    if (prehandshaked_9) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 121:36]
      mixPc_sx <= mixPc_this; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 121:36]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 355:24]
      valid_8 <= 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 355:24]
    end else begin
      valid_8 <= _GEN_59;
    end
    if (prehandshaked_10) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 370:41]
      faddModule_io_in_bits_a_r_3 <= addResult_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 370:41]
    end
    if (prehandshaked_10) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 371:41]
      faddModule_io_in_bits_b_r_3 <= addResult_1_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FADD.scala 371:41]
    end
    if (_T_17) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 135:24]
      rm_es <= rm_sx; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 135:24]
    end
    if (_T_17) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 136:27]
      mixPc_es <= mixPc_sx; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 136:27]
    end
    if (_T_17) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 137:30]
      atResult_es <= faddModule_3_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 137:30]
    end
    if (_T_17) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 138:29]
      atflags_es <= faddModule_3_io_out_bits_fflags; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 138:29]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 140:24]
      esValid <= 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/DotProdUnit.scala 140:24]
    end else begin
      esValid <= _GEN_67;
    end
    if (reset) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 223:24]
      valid_9 <= 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 223:24]
    end else begin
      valid_9 <= _GEN_69;
    end
    if (prehandshaked_11) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 232:36]
      fcvt_io_in_bits_in_r_1 <= faddModule_3_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fpu/FPToFP.scala 232:36]
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
  valid = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  fmul_io_in_bits_a_r = _RAND_1[15:0];
  _RAND_2 = {1{`RANDOM}};
  fmul_io_in_bits_b_r = _RAND_2[15:0];
  _RAND_3 = {1{`RANDOM}};
  valid_1 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  fmul_io_in_bits_a_r_1 = _RAND_4[15:0];
  _RAND_5 = {1{`RANDOM}};
  fmul_io_in_bits_b_r_1 = _RAND_5[15:0];
  _RAND_6 = {1{`RANDOM}};
  valid_2 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  fmul_io_in_bits_a_r_2 = _RAND_7[15:0];
  _RAND_8 = {1{`RANDOM}};
  fmul_io_in_bits_b_r_2 = _RAND_8[15:0];
  _RAND_9 = {1{`RANDOM}};
  valid_3 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  fmul_io_in_bits_a_r_3 = _RAND_10[15:0];
  _RAND_11 = {1{`RANDOM}};
  fmul_io_in_bits_b_r_3 = _RAND_11[15:0];
  _RAND_12 = {1{`RANDOM}};
  mixPc_s1 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  rm_s1 = _RAND_13[2:0];
  _RAND_14 = {1{`RANDOM}};
  fcvt_io_in_bits_in_r = _RAND_14[15:0];
  _RAND_15 = {1{`RANDOM}};
  c_fp32_r = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  mixPc_s2 = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  rm_s2 = _RAND_17[2:0];
  _RAND_18 = {1{`RANDOM}};
  valid_5 = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  a_flag_isNaN = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  a_flag_isInf = _RAND_20[0:0];
  _RAND_21 = {1{`RANDOM}};
  a_flag_isInv = _RAND_21[0:0];
  _RAND_22 = {1{`RANDOM}};
  b_flag_isNaN = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  b_flag_isInf = _RAND_23[0:0];
  _RAND_24 = {1{`RANDOM}};
  b_flag_isInv = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  faddModule_io_in_bits_a_r = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  faddModule_io_in_bits_b_r = _RAND_26[31:0];
  _RAND_27 = {1{`RANDOM}};
  valid_6 = _RAND_27[0:0];
  _RAND_28 = {1{`RANDOM}};
  a_flag_1_isNaN = _RAND_28[0:0];
  _RAND_29 = {1{`RANDOM}};
  a_flag_1_isInf = _RAND_29[0:0];
  _RAND_30 = {1{`RANDOM}};
  a_flag_1_isInv = _RAND_30[0:0];
  _RAND_31 = {1{`RANDOM}};
  b_flag_1_isNaN = _RAND_31[0:0];
  _RAND_32 = {1{`RANDOM}};
  b_flag_1_isInf = _RAND_32[0:0];
  _RAND_33 = {1{`RANDOM}};
  b_flag_1_isInv = _RAND_33[0:0];
  _RAND_34 = {1{`RANDOM}};
  faddModule_io_in_bits_a_r_1 = _RAND_34[31:0];
  _RAND_35 = {1{`RANDOM}};
  faddModule_io_in_bits_b_r_1 = _RAND_35[31:0];
  _RAND_36 = {1{`RANDOM}};
  firstAddResult_2_r = _RAND_36[31:0];
  _RAND_37 = {1{`RANDOM}};
  rm_this = _RAND_37[2:0];
  _RAND_38 = {1{`RANDOM}};
  mixPc_this = _RAND_38[0:0];
  _RAND_39 = {1{`RANDOM}};
  valid_7 = _RAND_39[0:0];
  _RAND_40 = {1{`RANDOM}};
  faddModule_io_in_bits_a_r_2 = _RAND_40[31:0];
  _RAND_41 = {1{`RANDOM}};
  faddModule_io_in_bits_b_r_2 = _RAND_41[31:0];
  _RAND_42 = {1{`RANDOM}};
  addResult_1_r = _RAND_42[31:0];
  _RAND_43 = {1{`RANDOM}};
  rm_sx = _RAND_43[2:0];
  _RAND_44 = {1{`RANDOM}};
  mixPc_sx = _RAND_44[0:0];
  _RAND_45 = {1{`RANDOM}};
  valid_8 = _RAND_45[0:0];
  _RAND_46 = {1{`RANDOM}};
  faddModule_io_in_bits_a_r_3 = _RAND_46[31:0];
  _RAND_47 = {1{`RANDOM}};
  faddModule_io_in_bits_b_r_3 = _RAND_47[31:0];
  _RAND_48 = {1{`RANDOM}};
  rm_es = _RAND_48[2:0];
  _RAND_49 = {1{`RANDOM}};
  mixPc_es = _RAND_49[0:0];
  _RAND_50 = {1{`RANDOM}};
  atResult_es = _RAND_50[31:0];
  _RAND_51 = {1{`RANDOM}};
  atflags_es = _RAND_51[4:0];
  _RAND_52 = {1{`RANDOM}};
  esValid = _RAND_52[0:0];
  _RAND_53 = {1{`RANDOM}};
  valid_9 = _RAND_53[0:0];
  _RAND_54 = {1{`RANDOM}};
  fcvt_io_in_bits_in_r_1 = _RAND_54[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
