module LZC(
  input  [10:0] io_in, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/LZC.scala 11:14]
  output [3:0]  io_out // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/LZC.scala 11:14]
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
  output        io_in_ready, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 27:14]
  input         io_in_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 27:14]
  input  [15:0] io_in_bits_a, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 27:14]
  input  [15:0] io_in_bits_b, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 27:14]
  input         io_toFADD_ready, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 27:14]
  output        io_toFADD_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 27:14]
  output [31:0] io_toFADD_bits_fp_prod, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 27:14]
  output        io_toFADD_bits_inter_flags_isNaN, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 27:14]
  output        io_toFADD_bits_inter_flags_isInf, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 27:14]
  output        io_toFADD_bits_inter_flags_isInv // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 27:14]
);
  wire [10:0] aLZC_lzc_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/LZC.scala 21:21]
  wire [3:0] aLZC_lzc_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/LZC.scala 21:21]
  wire [10:0] bLZC_lzc_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/LZC.scala 21:21]
  wire [3:0] bLZC_lzc_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/LZC.scala 21:21]
  wire  fp_a_sign = io_in_bits_a[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 58:19]
  wire [4:0] fp_a_exp = io_in_bits_a[14:10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 59:18]
  wire [9:0] fp_a_sig = io_in_bits_a[9:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 60:18]
  wire  fp_b_sign = io_in_bits_b[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 58:19]
  wire [4:0] fp_b_exp = io_in_bits_b[14:10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 59:18]
  wire [9:0] fp_b_sig = io_in_bits_b[9:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 60:18]
  wire  expNotZero = |fp_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 31:28]
  wire  expIsOnes = &fp_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 32:27]
  wire  sigNotZero = |fp_a_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 33:28]
  wire  decode_a_expIsZero = ~expNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 36:27]
  wire  decode_a_sigIsZero = ~sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 39:27]
  wire  decode_a_isInf = expIsOnes & decode_a_sigIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 41:40]
  wire  decode_a_isZero = decode_a_expIsZero & decode_a_sigIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 42:41]
  wire  decode_a_isNaN = expIsOnes & sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 43:40]
  wire  decode_a_isSNaN = decode_a_isNaN & ~fp_a_sig[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 44:37]
  wire  expNotZero_1 = |fp_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 31:28]
  wire  expIsOnes_1 = &fp_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 32:27]
  wire  sigNotZero_1 = |fp_b_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 33:28]
  wire  decode_b_expIsZero = ~expNotZero_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 36:27]
  wire  decode_b_sigIsZero = ~sigNotZero_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 39:27]
  wire  decode_b_isInf = expIsOnes_1 & decode_b_sigIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 41:40]
  wire  decode_b_isZero = decode_b_expIsZero & decode_b_sigIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 42:41]
  wire  decode_b_isNaN = expIsOnes_1 & sigNotZero_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 43:40]
  wire  decode_b_isSNaN = decode_b_isNaN & ~fp_b_sig[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 44:37]
  wire  raw_a_isSub = sigNotZero & decode_a_expIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 81:78]
  wire [4:0] _raw_a_inner_exp_T_1 = fp_a_exp + 5'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 83:38]
  wire [4:0] raw_a_exp = raw_a_isSub ? _raw_a_inner_exp_T_1 : fp_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 83:23]
  wire [10:0] raw_a_sig = {expNotZero,fp_a_sig}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 84:23]
  wire  raw_b_isSub = sigNotZero_1 & decode_b_expIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 81:78]
  wire [4:0] _raw_b_inner_exp_T_1 = fp_b_exp + 5'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 83:38]
  wire [4:0] raw_b_exp = raw_b_isSub ? _raw_b_inner_exp_T_1 : fp_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 83:23]
  wire [10:0] raw_b_sig = {expNotZero_1,fp_b_sig}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 84:23]
  wire  hasZero = decode_a_isZero | decode_b_isZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 40:33]
  wire  resultSign = fp_a_sign ^ fp_b_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 41:30]
  wire [5:0] _expSum_T = {1'h0,raw_a_exp}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 42:19]
  wire [5:0] _expSum_T_1 = {1'h0,raw_b_exp}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 42:46]
  wire [5:0] expSum = _expSum_T + _expSum_T_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 42:41]
  wire [7:0] _expSumUpPc_T = {2'h0,expSum}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 45:23]
  wire [7:0] expSumUpPc = _expSumUpPc_T + 8'h61; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 45:71]
  wire [7:0] resultExpNoShift = hasZero ? 8'h0 : expSumUpPc; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [21:0] resultSigNoShift = raw_a_sig * raw_b_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 52:37]
  wire [3:0] lzcRaw = aLZC_lzc_io_out + bLZC_lzc_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 58:21]
  wire [21:0] ErrorDetectMask = 22'h200000 >> lzcRaw; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 59:68]
  wire [21:0] _lzcError_T = resultSigNoShift & ErrorDetectMask; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 60:37]
  wire  lzcError = ~(|_lzcError_T); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 60:18]
  wire [3:0] _lzc_T_1 = lzcRaw + 4'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 61:34]
  wire [3:0] lzc = lzcError ? _lzc_T_1 : lzcRaw; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 61:16]
  wire [7:0] _shiftLimit_T_1 = resultExpNoShift + 8'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 62:38]
  wire [7:0] _GEN_0 = {{4'd0}, lzc}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 62:45]
  wire  shiftLimit = _shiftLimit_T_1 <= _GEN_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 62:45]
  wire [7:0] _resultSigShifted_T = shiftLimit ? resultExpNoShift : {{4'd0}, lzc}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 64:50]
  wire [276:0] _GEN_1 = {{255'd0}, resultSigNoShift}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 64:44]
  wire [276:0] _resultSigShifted_T_1 = _GEN_1 << _resultSigShifted_T; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 64:44]
  wire [21:0] resultSigShifted = _resultSigShifted_T_1[21:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 64:86]
  wire [7:0] _resultExpShifted_T_1 = resultExpNoShift - _GEN_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 65:79]
  wire [7:0] _resultExpShifted_T_3 = _resultExpShifted_T_1 + 8'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 65:85]
  wire [7:0] resultExpShifted = shiftLimit ? 8'h0 : _resultExpShifted_T_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 65:29]
  wire  hasNaN = decode_a_isNaN | decode_b_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 69:31]
  wire  hasSNaN = decode_a_isSNaN | decode_b_isSNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 70:33]
  wire  hasInf = decode_a_isInf | decode_b_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 71:31]
  wire  special_case_happen = hasZero | hasNaN | hasInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 72:47]
  wire  zero_mul_inf = hasZero & hasInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 74:30]
  wire  nan_result = hasNaN | zero_mul_inf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 75:27]
  wire [31:0] _special_result_T_2 = {resultSign,8'hff,23'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 80:10]
  wire [31:0] _special_result_T_3 = {resultSign,31'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 84:10]
  wire [31:0] _special_result_T_4 = hasInf ? _special_result_T_2 : _special_result_T_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 79:8]
  wire [31:0] special_result = nan_result ? 32'h7fc00000 : _special_result_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 77:27]
  wire [31:0] _io_toFADD_bits_fp_prod_T_1 = {resultSign,resultExpShifted,resultSigShifted[20:0],2'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 92:8]
  LZC aLZC_lzc ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/LZC.scala 21:21]
    .io_in(aLZC_lzc_io_in),
    .io_out(aLZC_lzc_io_out)
  );
  LZC bLZC_lzc ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/LZC.scala 21:21]
    .io_in(bLZC_lzc_io_in),
    .io_out(bLZC_lzc_io_out)
  );
  assign io_in_ready = io_toFADD_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 94:15]
  assign io_toFADD_valid = io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 95:19]
  assign io_toFADD_bits_fp_prod = special_case_happen ? special_result : _io_toFADD_bits_fp_prod_T_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 90:32]
  assign io_toFADD_bits_inter_flags_isNaN = hasNaN | zero_mul_inf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 75:27]
  assign io_toFADD_bits_inter_flags_isInf = decode_a_isInf | decode_b_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 71:31]
  assign io_toFADD_bits_inter_flags_isInv = hasSNaN | zero_mul_inf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FMUL.scala 76:28]
  assign aLZC_lzc_io_in = {expNotZero,fp_a_sig}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 84:23]
  assign bLZC_lzc_io_in = {expNotZero_1,fp_b_sig}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 84:23]
endmodule
module ShiftRightJam(
  input  [25:0] io_in, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 11:14]
  input  [4:0]  io_shamt, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 11:14]
  output [25:0] io_out, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 11:14]
  output        io_sticky // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 11:14]
);
  wire  exceed_max_shift = io_shamt > 5'h1a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 17:35]
  wire [31:0] _sticky_mask_T = 32'h1 << io_shamt; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 20:11]
  wire [31:0] _sticky_mask_T_2 = _sticky_mask_T - 32'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 20:28]
  wire [25:0] _sticky_mask_T_5 = exceed_max_shift ? 26'h3ffffff : 26'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 20:53]
  wire [25:0] sticky_mask = _sticky_mask_T_2[25:0] | _sticky_mask_T_5; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 20:47]
  wire [25:0] _io_out_T = io_in >> io_shamt; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 21:46]
  wire [25:0] _io_sticky_T = io_in & sticky_mask; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 22:23]
  assign io_out = exceed_max_shift ? 26'h0 : _io_out_T; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 21:16]
  assign io_sticky = |_io_sticky_T; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 22:38]
endmodule
module RoundingUnit(
  input  [22:0] io_in, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 8:14]
  input         io_roundIn, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 8:14]
  input         io_stickyIn, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 8:14]
  input         io_signIn, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 8:14]
  input  [2:0]  io_rm, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 8:14]
  output [22:0] io_out, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 8:14]
  output        io_inexact, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 8:14]
  output        io_cout // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 8:14]
);
  wire  g = io_in[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 20:25]
  wire  inexact = io_roundIn | io_stickyIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 21:19]
  wire  _r_up_T_4 = io_roundIn & io_stickyIn | io_roundIn & ~io_stickyIn & g; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 26:24]
  wire  _r_up_T_6 = inexact & ~io_signIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 28:23]
  wire  _r_up_T_7 = inexact & io_signIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 29:23]
  wire  _r_up_T_11 = 3'h1 == io_rm ? 1'h0 : 3'h0 == io_rm & _r_up_T_4; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _r_up_T_13 = 3'h3 == io_rm ? _r_up_T_6 : _r_up_T_11; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  _r_up_T_15 = 3'h2 == io_rm ? _r_up_T_7 : _r_up_T_13; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire  r_up = 3'h4 == io_rm ? io_roundIn : _r_up_T_15; // @[src/main/scala/chisel3/util/Mux.scala 77:13]
  wire [22:0] out_r_up = io_in + 23'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 33:24]
  assign io_out = r_up ? out_r_up : io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 34:16]
  assign io_inexact = io_roundIn | io_stickyIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 21:19]
  assign io_cout = r_up & &io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 37:19]
endmodule
module TininessRounder(
  input         io_in_sign, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 61:14]
  input  [26:0] io_in_sig, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 61:14]
  input  [2:0]  io_rm, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 61:14]
  output        io_tininess // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 61:14]
);
  wire [22:0] rounder_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  rounder_io_roundIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  rounder_io_stickyIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  rounder_io_signIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire [2:0] rounder_io_rm; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire [22:0] rounder_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  rounder_io_inexact; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  rounder_io_cout; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  _tininess_T_5 = io_in_sig[26:25] == 2'h1 & ~rounder_io_cout; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 75:41]
  RoundingUnit rounder ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
    .io_in(rounder_io_in),
    .io_roundIn(rounder_io_roundIn),
    .io_stickyIn(rounder_io_stickyIn),
    .io_signIn(rounder_io_signIn),
    .io_rm(rounder_io_rm),
    .io_out(rounder_io_out),
    .io_inexact(rounder_io_inexact),
    .io_cout(rounder_io_cout)
  );
  assign io_tininess = io_in_sig[26:25] == 2'h0 | _tininess_T_5; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 74:53]
  assign rounder_io_in = io_in_sig[24:2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 46:33]
  assign rounder_io_roundIn = io_in_sig[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 47:50]
  assign rounder_io_stickyIn = |io_in_sig[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 48:51]
  assign rounder_io_signIn = io_in_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 50:23]
  assign rounder_io_rm = io_rm; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 49:19]
endmodule
module FarPath(
  input         io_in_a_sign, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 10:14]
  input  [7:0]  io_in_a_exp, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 10:14]
  input  [23:0] io_in_a_sig, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 10:14]
  input  [7:0]  io_in_b_exp, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 10:14]
  input  [23:0] io_in_b_sig, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 10:14]
  input         io_in_addSig, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 10:14]
  input         io_in_tinyAdd, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 10:14]
  input  [4:0]  io_in_shiftNum, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 10:14]
  input  [2:0]  io_in_roundingMode, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 10:14]
  output [31:0] io_out_result, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 10:14]
  output        io_out_far_path_of, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 10:14]
  output        io_out_far_path_ix, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 10:14]
  output        io_out_far_path_uf // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 10:14]
);
  wire [25:0] shiftRightJam_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 27:31]
  wire [4:0] shiftRightJam_io_shamt; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 27:31]
  wire [25:0] shiftRightJam_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 27:31]
  wire  shiftRightJam_io_sticky; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 27:31]
  wire  far_path_tininess_rounder_io_in_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 74:41]
  wire [26:0] far_path_tininess_rounder_io_in_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 74:41]
  wire [2:0] far_path_tininess_rounder_io_rm; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 74:41]
  wire  far_path_tininess_rounder_io_tininess; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 74:41]
  wire [22:0] far_path_rounder_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  far_path_rounder_io_roundIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  far_path_rounder_io_stickyIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  far_path_rounder_io_signIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire [2:0] far_path_rounder_io_rm; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire [22:0] far_path_rounder_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  far_path_rounder_io_inexact; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  far_path_rounder_io_cout; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  aIsZero = ~(|io_in_a_exp); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 27:17]
  wire  bIsZero = ~(|io_in_b_exp); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 28:17]
  wire  bothZero = aIsZero & bIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 29:26]
  wire [27:0] pos_sigB = {1'h0,shiftRightJam_io_out,shiftRightJam_io_sticky}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 34:21]
  wire [26:0] _neg_sigB_T = {shiftRightJam_io_out,shiftRightJam_io_sticky}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 35:36]
  wire [26:0] _neg_sigB_T_1 = ~_neg_sigB_T; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 35:32]
  wire [26:0] _neg_sigB_T_3 = _neg_sigB_T_1 + 27'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 35:63]
  wire [27:0] neg_sigB = {1'h1,_neg_sigB_T_3}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 35:21]
  wire [27:0] adder_in_sigB = io_in_addSig ? pos_sigB : neg_sigB; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 36:26]
  wire [27:0] adder_in_sigA = {1'h0,io_in_a_sig,3'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 37:26]
  wire [27:0] resultSigInNormalCase = adder_in_sigA + adder_in_sigB; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 38:45]
  wire [27:0] result_sig_raw = bIsZero ? adder_in_sigA : resultSigInNormalCase; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 40:27]
  wire  cout = result_sig_raw[27]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 42:33]
  wire  keep = result_sig_raw[26]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 43:41]
  wire  _resultSigNoRound_T = keep | io_in_tinyAdd; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 46:19]
  wire [26:0] _resultSigNoRound_T_4 = {result_sig_raw[27:2],|result_sig_raw[1:0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 48:44]
  wire [26:0] _resultSigNoRound_T_9 = {result_sig_raw[26:1],|result_sig_raw[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 49:52]
  wire [26:0] _resultSigNoRound_T_14 = {result_sig_raw[25:0],1'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 50:52]
  wire [26:0] _resultSigNoRound_T_15 = _resultSigNoRound_T ? _resultSigNoRound_T_9 : _resultSigNoRound_T_14; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [26:0] resultSigNoRound = cout ? _resultSigNoRound_T_4 : _resultSigNoRound_T_15; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [7:0] _resultExpNoRound_T_1 = io_in_a_exp + 8'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 56:28]
  wire  _resultExpNoRound_T_2 = keep | bothZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 57:13]
  wire [7:0] _resultExpNoRound_T_5 = io_in_a_exp - 8'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 58:43]
  wire [7:0] _resultExpNoRound_T_6 = _resultExpNoRound_T_2 ? io_in_a_exp : _resultExpNoRound_T_5; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [7:0] resultExpNoRound = cout ? _resultExpNoRound_T_1 : _resultExpNoRound_T_6; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire  far_path_tininess = io_in_tinyAdd & far_path_tininess_rounder_io_tininess; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 77:35]
  wire [7:0] _GEN_0 = {{7'd0}, far_path_rounder_io_cout}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 86:55]
  wire [7:0] far_path_exp_rounded = _GEN_0 + resultExpNoRound; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 86:55]
  wire  far_path_may_of = &io_in_b_exp & io_in_addSig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 89:42]
  wire  far_path_may_uf = far_path_tininess & ~far_path_may_of; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 91:43]
  wire  far_path_of_before_round = resultExpNoRound == 8'hff; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 94:22]
  wire  _far_path_of_after_round_T = resultExpNoRound == 8'hfe; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 96:22]
  wire  far_path_of_after_round = far_path_rounder_io_cout & _far_path_of_after_round_T; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 95:58]
  wire [8:0] io_out_result_hi = {io_in_a_sign,far_path_exp_rounded}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 104:8]
  ShiftRightJam shiftRightJam ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 27:31]
    .io_in(shiftRightJam_io_in),
    .io_shamt(shiftRightJam_io_shamt),
    .io_out(shiftRightJam_io_out),
    .io_sticky(shiftRightJam_io_sticky)
  );
  TininessRounder far_path_tininess_rounder ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 74:41]
    .io_in_sign(far_path_tininess_rounder_io_in_sign),
    .io_in_sig(far_path_tininess_rounder_io_in_sig),
    .io_rm(far_path_tininess_rounder_io_rm),
    .io_tininess(far_path_tininess_rounder_io_tininess)
  );
  RoundingUnit far_path_rounder ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
    .io_in(far_path_rounder_io_in),
    .io_roundIn(far_path_rounder_io_roundIn),
    .io_stickyIn(far_path_rounder_io_stickyIn),
    .io_signIn(far_path_rounder_io_signIn),
    .io_rm(far_path_rounder_io_rm),
    .io_out(far_path_rounder_io_out),
    .io_inexact(far_path_rounder_io_inexact),
    .io_cout(far_path_rounder_io_cout)
  );
  assign io_out_result = {io_out_result_hi,far_path_rounder_io_out}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 104:8]
  assign io_out_far_path_of = far_path_of_before_round | far_path_of_after_round | far_path_may_of; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 99:57]
  assign io_out_far_path_ix = far_path_rounder_io_inexact | io_out_far_path_of; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 100:53]
  assign io_out_far_path_uf = far_path_may_uf & io_out_far_path_ix; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 101:41]
  assign shiftRightJam_io_in = {io_in_b_sig,2'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 31:53]
  assign shiftRightJam_io_shamt = io_in_shiftNum; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/ShiftRightJam.scala 29:28]
  assign far_path_tininess_rounder_io_in_sign = io_in_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 69:27 71:22]
  assign far_path_tininess_rounder_io_in_sig = cout ? _resultSigNoRound_T_4 : _resultSigNoRound_T_15; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  assign far_path_tininess_rounder_io_rm = io_in_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 76:35]
  assign far_path_rounder_io_in = resultSigNoRound[25:3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 46:33]
  assign far_path_rounder_io_roundIn = resultSigNoRound[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 47:50]
  assign far_path_rounder_io_stickyIn = |resultSigNoRound[1:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 48:51]
  assign far_path_rounder_io_signIn = io_in_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 50:23]
  assign far_path_rounder_io_rm = io_in_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 49:19]
endmodule
module PreEncoder(
  input  [24:0] io_g, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 11:14]
  input  [24:0] io_s, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 11:14]
  input  [24:0] io_e, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 11:14]
  output [24:0] io_f // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 11:14]
);
  wire  _f_0_T_6 = ~io_e[1] & io_s[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 17:25]
  wire  _f_0_T_7 = io_e[1] & io_g[0] | _f_0_T_6; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 16:33]
  wire  _f_0_T_10 = io_e[1] & io_s[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 18:25]
  wire  _f_0_T_11 = _f_0_T_7 | _f_0_T_10; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 17:33]
  wire  f_0 = _f_0_T_11 | io_e[1] & io_s[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 18:33]
  wire  _f_1_T_4 = ~io_s[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_1_T_7 = ~io_e[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_1_T_12 = ~io_e[2] & io_s[1] & _f_1_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_1_T_13 = io_e[2] & io_g[1] & ~io_s[0] | _f_1_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_1_T_18 = ~io_g[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_1_T_19 = io_e[2] & io_s[1] & ~io_g[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_1_T_20 = _f_1_T_13 | _f_1_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_1_T_27 = _f_1_T_7 & io_g[1] & _f_1_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_1 = _f_1_T_20 | _f_1_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_2_T_4 = ~io_s[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_2_T_7 = ~io_e[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_2_T_12 = ~io_e[3] & io_s[2] & _f_2_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_2_T_13 = io_e[3] & io_g[2] & ~io_s[1] | _f_2_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_2_T_18 = ~io_g[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_2_T_19 = io_e[3] & io_s[2] & ~io_g[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_2_T_20 = _f_2_T_13 | _f_2_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_2_T_27 = _f_2_T_7 & io_g[2] & _f_2_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_2 = _f_2_T_20 | _f_2_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_3_T_4 = ~io_s[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_3_T_7 = ~io_e[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_3_T_12 = ~io_e[4] & io_s[3] & _f_3_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_3_T_13 = io_e[4] & io_g[3] & ~io_s[2] | _f_3_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_3_T_18 = ~io_g[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_3_T_19 = io_e[4] & io_s[3] & ~io_g[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_3_T_20 = _f_3_T_13 | _f_3_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_3_T_27 = _f_3_T_7 & io_g[3] & _f_3_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_3 = _f_3_T_20 | _f_3_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_4_T_4 = ~io_s[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_4_T_7 = ~io_e[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_4_T_12 = ~io_e[5] & io_s[4] & _f_4_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_4_T_13 = io_e[5] & io_g[4] & ~io_s[3] | _f_4_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_4_T_18 = ~io_g[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_4_T_19 = io_e[5] & io_s[4] & ~io_g[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_4_T_20 = _f_4_T_13 | _f_4_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_4_T_27 = _f_4_T_7 & io_g[4] & _f_4_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_4 = _f_4_T_20 | _f_4_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_5_T_4 = ~io_s[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_5_T_7 = ~io_e[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_5_T_12 = ~io_e[6] & io_s[5] & _f_5_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_5_T_13 = io_e[6] & io_g[5] & ~io_s[4] | _f_5_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_5_T_18 = ~io_g[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_5_T_19 = io_e[6] & io_s[5] & ~io_g[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_5_T_20 = _f_5_T_13 | _f_5_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_5_T_27 = _f_5_T_7 & io_g[5] & _f_5_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_5 = _f_5_T_20 | _f_5_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_6_T_4 = ~io_s[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_6_T_7 = ~io_e[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_6_T_12 = ~io_e[7] & io_s[6] & _f_6_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_6_T_13 = io_e[7] & io_g[6] & ~io_s[5] | _f_6_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_6_T_18 = ~io_g[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_6_T_19 = io_e[7] & io_s[6] & ~io_g[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_6_T_20 = _f_6_T_13 | _f_6_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_6_T_27 = _f_6_T_7 & io_g[6] & _f_6_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_6 = _f_6_T_20 | _f_6_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_7_T_4 = ~io_s[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_7_T_7 = ~io_e[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_7_T_12 = ~io_e[8] & io_s[7] & _f_7_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_7_T_13 = io_e[8] & io_g[7] & ~io_s[6] | _f_7_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_7_T_18 = ~io_g[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_7_T_19 = io_e[8] & io_s[7] & ~io_g[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_7_T_20 = _f_7_T_13 | _f_7_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_7_T_27 = _f_7_T_7 & io_g[7] & _f_7_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_7 = _f_7_T_20 | _f_7_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_8_T_4 = ~io_s[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_8_T_7 = ~io_e[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_8_T_12 = ~io_e[9] & io_s[8] & _f_8_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_8_T_13 = io_e[9] & io_g[8] & ~io_s[7] | _f_8_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_8_T_18 = ~io_g[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_8_T_19 = io_e[9] & io_s[8] & ~io_g[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_8_T_20 = _f_8_T_13 | _f_8_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_8_T_27 = _f_8_T_7 & io_g[8] & _f_8_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_8 = _f_8_T_20 | _f_8_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_9_T_4 = ~io_s[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_9_T_7 = ~io_e[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_9_T_12 = ~io_e[10] & io_s[9] & _f_9_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_9_T_13 = io_e[10] & io_g[9] & ~io_s[8] | _f_9_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_9_T_18 = ~io_g[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_9_T_19 = io_e[10] & io_s[9] & ~io_g[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_9_T_20 = _f_9_T_13 | _f_9_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_9_T_27 = _f_9_T_7 & io_g[9] & _f_9_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_9 = _f_9_T_20 | _f_9_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_10_T_4 = ~io_s[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_10_T_7 = ~io_e[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_10_T_12 = ~io_e[11] & io_s[10] & _f_10_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_10_T_13 = io_e[11] & io_g[10] & ~io_s[9] | _f_10_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_10_T_18 = ~io_g[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_10_T_19 = io_e[11] & io_s[10] & ~io_g[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_10_T_20 = _f_10_T_13 | _f_10_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_10_T_27 = _f_10_T_7 & io_g[10] & _f_10_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_10 = _f_10_T_20 | _f_10_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_11_T_4 = ~io_s[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_11_T_7 = ~io_e[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_11_T_12 = ~io_e[12] & io_s[11] & _f_11_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_11_T_13 = io_e[12] & io_g[11] & ~io_s[10] | _f_11_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_11_T_18 = ~io_g[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_11_T_19 = io_e[12] & io_s[11] & ~io_g[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_11_T_20 = _f_11_T_13 | _f_11_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_11_T_27 = _f_11_T_7 & io_g[11] & _f_11_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_11 = _f_11_T_20 | _f_11_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_12_T_4 = ~io_s[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_12_T_7 = ~io_e[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_12_T_12 = ~io_e[13] & io_s[12] & _f_12_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_12_T_13 = io_e[13] & io_g[12] & ~io_s[11] | _f_12_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_12_T_18 = ~io_g[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_12_T_19 = io_e[13] & io_s[12] & ~io_g[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_12_T_20 = _f_12_T_13 | _f_12_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_12_T_27 = _f_12_T_7 & io_g[12] & _f_12_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_12 = _f_12_T_20 | _f_12_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_13_T_4 = ~io_s[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_13_T_7 = ~io_e[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_13_T_12 = ~io_e[14] & io_s[13] & _f_13_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_13_T_13 = io_e[14] & io_g[13] & ~io_s[12] | _f_13_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_13_T_18 = ~io_g[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_13_T_19 = io_e[14] & io_s[13] & ~io_g[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_13_T_20 = _f_13_T_13 | _f_13_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_13_T_27 = _f_13_T_7 & io_g[13] & _f_13_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_13 = _f_13_T_20 | _f_13_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_14_T_4 = ~io_s[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_14_T_7 = ~io_e[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_14_T_12 = ~io_e[15] & io_s[14] & _f_14_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_14_T_13 = io_e[15] & io_g[14] & ~io_s[13] | _f_14_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_14_T_18 = ~io_g[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_14_T_19 = io_e[15] & io_s[14] & ~io_g[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_14_T_20 = _f_14_T_13 | _f_14_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_14_T_27 = _f_14_T_7 & io_g[14] & _f_14_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_14 = _f_14_T_20 | _f_14_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_15_T_4 = ~io_s[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_15_T_7 = ~io_e[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_15_T_12 = ~io_e[16] & io_s[15] & _f_15_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_15_T_13 = io_e[16] & io_g[15] & ~io_s[14] | _f_15_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_15_T_18 = ~io_g[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_15_T_19 = io_e[16] & io_s[15] & ~io_g[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_15_T_20 = _f_15_T_13 | _f_15_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_15_T_27 = _f_15_T_7 & io_g[15] & _f_15_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_15 = _f_15_T_20 | _f_15_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_16_T_4 = ~io_s[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_16_T_7 = ~io_e[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_16_T_12 = ~io_e[17] & io_s[16] & _f_16_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_16_T_13 = io_e[17] & io_g[16] & ~io_s[15] | _f_16_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_16_T_18 = ~io_g[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_16_T_19 = io_e[17] & io_s[16] & ~io_g[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_16_T_20 = _f_16_T_13 | _f_16_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_16_T_27 = _f_16_T_7 & io_g[16] & _f_16_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_16 = _f_16_T_20 | _f_16_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_17_T_4 = ~io_s[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_17_T_7 = ~io_e[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_17_T_12 = ~io_e[18] & io_s[17] & _f_17_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_17_T_13 = io_e[18] & io_g[17] & ~io_s[16] | _f_17_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_17_T_18 = ~io_g[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_17_T_19 = io_e[18] & io_s[17] & ~io_g[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_17_T_20 = _f_17_T_13 | _f_17_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_17_T_27 = _f_17_T_7 & io_g[17] & _f_17_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_17 = _f_17_T_20 | _f_17_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_18_T_4 = ~io_s[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_18_T_7 = ~io_e[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_18_T_12 = ~io_e[19] & io_s[18] & _f_18_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_18_T_13 = io_e[19] & io_g[18] & ~io_s[17] | _f_18_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_18_T_18 = ~io_g[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_18_T_19 = io_e[19] & io_s[18] & ~io_g[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_18_T_20 = _f_18_T_13 | _f_18_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_18_T_27 = _f_18_T_7 & io_g[18] & _f_18_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_18 = _f_18_T_20 | _f_18_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_19_T_4 = ~io_s[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_19_T_7 = ~io_e[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_19_T_12 = ~io_e[20] & io_s[19] & _f_19_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_19_T_13 = io_e[20] & io_g[19] & ~io_s[18] | _f_19_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_19_T_18 = ~io_g[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_19_T_19 = io_e[20] & io_s[19] & ~io_g[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_19_T_20 = _f_19_T_13 | _f_19_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_19_T_27 = _f_19_T_7 & io_g[19] & _f_19_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_19 = _f_19_T_20 | _f_19_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_20_T_4 = ~io_s[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_20_T_7 = ~io_e[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_20_T_12 = ~io_e[21] & io_s[20] & _f_20_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_20_T_13 = io_e[21] & io_g[20] & ~io_s[19] | _f_20_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_20_T_18 = ~io_g[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_20_T_19 = io_e[21] & io_s[20] & ~io_g[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_20_T_20 = _f_20_T_13 | _f_20_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_20_T_27 = _f_20_T_7 & io_g[20] & _f_20_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_20 = _f_20_T_20 | _f_20_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_21_T_4 = ~io_s[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_21_T_7 = ~io_e[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_21_T_12 = ~io_e[22] & io_s[21] & _f_21_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_21_T_13 = io_e[22] & io_g[21] & ~io_s[20] | _f_21_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_21_T_18 = ~io_g[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_21_T_19 = io_e[22] & io_s[21] & ~io_g[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_21_T_20 = _f_21_T_13 | _f_21_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_21_T_27 = _f_21_T_7 & io_g[21] & _f_21_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_21 = _f_21_T_20 | _f_21_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_22_T_4 = ~io_s[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_22_T_7 = ~io_e[23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_22_T_12 = ~io_e[23] & io_s[22] & _f_22_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_22_T_13 = io_e[23] & io_g[22] & ~io_s[21] | _f_22_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_22_T_18 = ~io_g[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_22_T_19 = io_e[23] & io_s[22] & ~io_g[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_22_T_20 = _f_22_T_13 | _f_22_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_22_T_27 = _f_22_T_7 & io_g[22] & _f_22_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_22 = _f_22_T_20 | _f_22_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  _f_23_T_4 = ~io_s[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:33]
  wire  _f_23_T_7 = ~io_e[24]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:14]
  wire  _f_23_T_12 = ~io_e[24] & io_s[23] & _f_23_T_4; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:30]
  wire  _f_23_T_13 = io_e[24] & io_g[23] & ~io_s[22] | _f_23_T_12; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 23:43]
  wire  _f_23_T_18 = ~io_g[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:33]
  wire  _f_23_T_19 = io_e[24] & io_s[23] & ~io_g[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:30]
  wire  _f_23_T_20 = _f_23_T_13 | _f_23_T_19; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 24:43]
  wire  _f_23_T_27 = _f_23_T_7 & io_g[23] & _f_23_T_18; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 26:30]
  wire  f_23 = _f_23_T_20 | _f_23_T_27; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 25:43]
  wire  f_24 = io_g[24] & ~io_s[23] | io_s[24] & ~io_g[23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 21:36]
  wire [5:0] io_f_lo_lo = {f_5,f_4,f_3,f_2,f_1,f_0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 29:14]
  wire [11:0] io_f_lo = {f_11,f_10,f_9,f_8,f_7,f_6,io_f_lo_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 29:14]
  wire [5:0] io_f_hi_lo = {f_17,f_16,f_15,f_14,f_13,f_12}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 29:14]
  wire [12:0] io_f_hi = {f_24,f_23,f_22,f_21,f_20,f_19,f_18,io_f_hi_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 29:14]
  assign io_f = {io_f_hi,io_f_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/PreEncoder.scala 29:14]
endmodule
module node(
  input  [2:0] io_in_0, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/node.scala 7:14]
  input  [2:0] io_in_2, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/node.scala 7:14]
  output [1:0] io_out_0, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/node.scala 7:14]
  output [1:0] io_out_2 // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/node.scala 7:14]
);
  wire  pout_0 = io_in_0[0] | io_in_2[0] & io_in_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/node.scala 16:19]
  wire  _pout_1_T_7 = io_in_2[0] | io_in_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/node.scala 17:47]
  wire  pout_1 = ~io_in_2[0] & io_in_0[1] | io_in_0[2] & (io_in_2[0] | io_in_2[1]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/node.scala 17:31]
  wire  zout_0 = io_in_2[0] & io_in_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/node.scala 18:19]
  wire  zout_1 = io_in_2[2] & _pout_1_T_7; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/node.scala 19:19]
  assign io_out_0 = {pout_1,pout_0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/node.scala 22:19]
  assign io_out_2 = {zout_1,zout_0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/node.scala 24:19]
endmodule
module ErrorDetector(
  input  [24:0] io_g, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 12:14]
  input  [24:0] io_s, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 12:14]
  input  [24:0] io_e, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 12:14]
  output        io_y // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 12:14]
);
  wire [2:0] y_node0_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_1_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_1_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_1_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_1_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_2_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_2_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_2_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_2_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_3_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_3_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_3_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_3_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_4_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_4_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_4_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_4_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_5_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_5_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_5_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_5_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_6_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_6_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_6_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_6_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node0_1_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_1_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_1_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_1_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node_7_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_7_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_7_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_7_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_8_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_8_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_8_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_8_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_9_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_9_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_9_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_9_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_10_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_10_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_10_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_10_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node0_2_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_2_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_2_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_2_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node_11_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_11_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_11_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_11_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_12_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_12_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_12_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_12_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_13_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_13_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_13_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_13_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node0_3_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_3_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_3_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_3_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node_14_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_14_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_14_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_14_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node0_4_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_4_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_4_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_4_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node_15_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node_15_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_15_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [1:0] y_node_15_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
  wire [2:0] y_node0_5_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_5_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_5_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_5_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_6_io_in_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [2:0] y_node0_6_io_in_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_6_io_out_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire [1:0] y_node0_6_io_out_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
  wire  _p_0_T_6 = ~io_e[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_0 = (io_e[1] | io_e[2] & io_g[1] | ~io_e[2] & io_s[1]) & io_g[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_0 = (io_e[1] | io_e[2] & io_s[1] | _p_0_T_6 & io_g[1]) & io_s[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_0 = ~(p_0 | n_0); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_1_T_6 = ~io_e[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_1 = (io_e[2] | io_e[3] & io_g[2] | ~io_e[3] & io_s[2]) & io_g[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_1 = (io_e[2] | io_e[3] & io_s[2] | _p_1_T_6 & io_g[2]) & io_s[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_1 = ~(p_1 | n_1); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_2_T_6 = ~io_e[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_2 = (io_e[3] | io_e[4] & io_g[3] | ~io_e[4] & io_s[3]) & io_g[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_2 = (io_e[3] | io_e[4] & io_s[3] | _p_2_T_6 & io_g[3]) & io_s[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_2 = ~(p_2 | n_2); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_3_T_6 = ~io_e[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_3 = (io_e[4] | io_e[5] & io_g[4] | ~io_e[5] & io_s[4]) & io_g[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_3 = (io_e[4] | io_e[5] & io_s[4] | _p_3_T_6 & io_g[4]) & io_s[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_3 = ~(p_3 | n_3); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_4_T_6 = ~io_e[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_4 = (io_e[5] | io_e[6] & io_g[5] | ~io_e[6] & io_s[5]) & io_g[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_4 = (io_e[5] | io_e[6] & io_s[5] | _p_4_T_6 & io_g[5]) & io_s[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_4 = ~(p_4 | n_4); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_5_T_6 = ~io_e[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_5 = (io_e[6] | io_e[7] & io_g[6] | ~io_e[7] & io_s[6]) & io_g[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_5 = (io_e[6] | io_e[7] & io_s[6] | _p_5_T_6 & io_g[6]) & io_s[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_5 = ~(p_5 | n_5); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_6_T_6 = ~io_e[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_6 = (io_e[7] | io_e[8] & io_g[7] | ~io_e[8] & io_s[7]) & io_g[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_6 = (io_e[7] | io_e[8] & io_s[7] | _p_6_T_6 & io_g[7]) & io_s[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_6 = ~(p_6 | n_6); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_7_T_6 = ~io_e[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_7 = (io_e[8] | io_e[9] & io_g[8] | ~io_e[9] & io_s[8]) & io_g[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_7 = (io_e[8] | io_e[9] & io_s[8] | _p_7_T_6 & io_g[8]) & io_s[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_7 = ~(p_7 | n_7); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_8_T_6 = ~io_e[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_8 = (io_e[9] | io_e[10] & io_g[9] | ~io_e[10] & io_s[9]) & io_g[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_8 = (io_e[9] | io_e[10] & io_s[9] | _p_8_T_6 & io_g[9]) & io_s[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_8 = ~(p_8 | n_8); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_9_T_6 = ~io_e[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_9 = (io_e[10] | io_e[11] & io_g[10] | ~io_e[11] & io_s[10]) & io_g[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_9 = (io_e[10] | io_e[11] & io_s[10] | _p_9_T_6 & io_g[10]) & io_s[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_9 = ~(p_9 | n_9); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_10_T_6 = ~io_e[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_10 = (io_e[11] | io_e[12] & io_g[11] | ~io_e[12] & io_s[11]) & io_g[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_10 = (io_e[11] | io_e[12] & io_s[11] | _p_10_T_6 & io_g[11]) & io_s[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_10 = ~(p_10 | n_10); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_11_T_6 = ~io_e[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_11 = (io_e[12] | io_e[13] & io_g[12] | ~io_e[13] & io_s[12]) & io_g[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_11 = (io_e[12] | io_e[13] & io_s[12] | _p_11_T_6 & io_g[12]) & io_s[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_11 = ~(p_11 | n_11); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_12_T_6 = ~io_e[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_12 = (io_e[13] | io_e[14] & io_g[13] | ~io_e[14] & io_s[13]) & io_g[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_12 = (io_e[13] | io_e[14] & io_s[13] | _p_12_T_6 & io_g[13]) & io_s[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_12 = ~(p_12 | n_12); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_13_T_6 = ~io_e[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_13 = (io_e[14] | io_e[15] & io_g[14] | ~io_e[15] & io_s[14]) & io_g[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_13 = (io_e[14] | io_e[15] & io_s[14] | _p_13_T_6 & io_g[14]) & io_s[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_13 = ~(p_13 | n_13); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_14_T_6 = ~io_e[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_14 = (io_e[15] | io_e[16] & io_g[15] | ~io_e[16] & io_s[15]) & io_g[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_14 = (io_e[15] | io_e[16] & io_s[15] | _p_14_T_6 & io_g[15]) & io_s[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_14 = ~(p_14 | n_14); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_15_T_6 = ~io_e[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_15 = (io_e[16] | io_e[17] & io_g[16] | ~io_e[17] & io_s[16]) & io_g[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_15 = (io_e[16] | io_e[17] & io_s[16] | _p_15_T_6 & io_g[16]) & io_s[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_15 = ~(p_15 | n_15); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_16_T_6 = ~io_e[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_16 = (io_e[17] | io_e[18] & io_g[17] | ~io_e[18] & io_s[17]) & io_g[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_16 = (io_e[17] | io_e[18] & io_s[17] | _p_16_T_6 & io_g[17]) & io_s[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_16 = ~(p_16 | n_16); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_17_T_6 = ~io_e[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_17 = (io_e[18] | io_e[19] & io_g[18] | ~io_e[19] & io_s[18]) & io_g[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_17 = (io_e[18] | io_e[19] & io_s[18] | _p_17_T_6 & io_g[18]) & io_s[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_17 = ~(p_17 | n_17); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_18_T_6 = ~io_e[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_18 = (io_e[19] | io_e[20] & io_g[19] | ~io_e[20] & io_s[19]) & io_g[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_18 = (io_e[19] | io_e[20] & io_s[19] | _p_18_T_6 & io_g[19]) & io_s[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_18 = ~(p_18 | n_18); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_19_T_6 = ~io_e[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_19 = (io_e[20] | io_e[21] & io_g[20] | ~io_e[21] & io_s[20]) & io_g[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_19 = (io_e[20] | io_e[21] & io_s[20] | _p_19_T_6 & io_g[20]) & io_s[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_19 = ~(p_19 | n_19); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_20_T_6 = ~io_e[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_20 = (io_e[21] | io_e[22] & io_g[21] | ~io_e[22] & io_s[21]) & io_g[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_20 = (io_e[21] | io_e[22] & io_s[21] | _p_20_T_6 & io_g[21]) & io_s[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_20 = ~(p_20 | n_20); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_21_T_6 = ~io_e[23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_21 = (io_e[22] | io_e[23] & io_g[22] | ~io_e[23] & io_s[22]) & io_g[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_21 = (io_e[22] | io_e[23] & io_s[22] | _p_21_T_6 & io_g[22]) & io_s[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_21 = ~(p_21 | n_21); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  _p_22_T_6 = ~io_e[24]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:47]
  wire  p_22 = (io_e[23] | io_e[24] & io_g[23] | ~io_e[24] & io_s[23]) & io_g[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 23:67]
  wire  n_22 = (io_e[23] | io_e[24] & io_s[23] | _p_22_T_6 & io_g[23]) & io_s[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 24:67]
  wire  z_22 = ~(p_22 | n_22); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  p_23 = (io_e[24] | io_g[24]) & io_g[23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 20:33]
  wire  n_23 = (io_e[24] | io_s[24]) & io_s[23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 21:33]
  wire  z_23 = ~(p_23 | n_23); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire  z_24 = ~(io_g[24] | io_s[24]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 26:13]
  wire [5:0] y_lo_lo = {p_19,p_20,p_21,p_22,p_23,io_g[24]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 63:28]
  wire [11:0] y_lo = {p_13,p_14,p_15,p_16,p_17,p_18,y_lo_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 63:28]
  wire [5:0] y_hi_lo = {p_7,p_8,p_9,p_10,p_11,p_12}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 63:28]
  wire [24:0] _y_T = {p_0,p_1,p_2,p_3,p_4,p_5,p_6,y_hi_lo,y_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 63:28]
  wire [5:0] y_lo_lo_2 = {z_19,z_20,z_21,z_22,z_23,z_24}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 63:44]
  wire [11:0] y_lo_2 = {z_13,z_14,z_15,z_16,z_17,z_18,y_lo_lo_2}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 63:44]
  wire [5:0] y_hi_lo_2 = {z_7,z_8,z_9,z_10,z_11,z_12}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 63:44]
  wire [24:0] _y_T_2 = {z_0,z_1,z_2,z_3,z_4,z_5,z_6,y_hi_lo_2,y_lo_2}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 63:44]
  wire [1:0] y_node0_io_in_0_hi = {_y_T[2],_y_T[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi = {_y_T_2[2],_y_T_2[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0 = y_node0_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1 = y_node0_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0 = y_node0_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1 = y_node0_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 37:40]
  wire [1:0] y_node_io_in_0_hi = {_y_T[5],_y_T[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi = {_y_T_2[5],_y_T_2[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0 = y_node_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1 = y_node_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0 = y_node_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1 = y_node_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_1 = {_y_T[8],_y_T[7]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_1 = {_y_T_2[8],_y_T_2[7]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_1 = y_node_1_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_1 = y_node_1_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_1 = y_node_1_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_1 = y_node_1_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_2 = {_y_T[11],_y_T[10]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_2 = {_y_T_2[11],_y_T_2[10]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_2 = y_node_2_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_2 = y_node_2_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_2 = y_node_2_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_2 = y_node_2_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_3 = {_y_T[14],_y_T[13]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_3 = {_y_T_2[14],_y_T_2[13]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_3 = y_node_3_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_3 = y_node_3_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_3 = y_node_3_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_3 = y_node_3_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_4 = {_y_T[17],_y_T[16]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_4 = {_y_T_2[17],_y_T_2[16]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_4 = y_node_4_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_4 = y_node_4_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_4 = y_node_4_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_4 = y_node_4_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_5 = {_y_T[20],_y_T[19]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_5 = {_y_T_2[20],_y_T_2[19]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_5 = y_node_5_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_5 = y_node_5_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_5 = y_node_5_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_5 = y_node_5_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_6 = {_y_T[23],_y_T[22]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_6 = {_y_T_2[23],_y_T_2[22]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_6 = y_node_6_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_6 = y_node_6_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_6 = y_node_6_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_6 = y_node_6_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire [7:0] y_lo_3 = {y_pout_1_2,y_pout_0_2,y_pout_1_1,y_pout_0_1,y_pout_1,y_pout_0,y_nextColumn_p_1,y_nextColumn_p_0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 61:33]
  wire [16:0] _y_T_9 = {_y_T[24],y_pout_1_6,y_pout_0_6,y_pout_1_5,y_pout_0_5,y_pout_1_4,y_pout_0_4,y_pout_1_3,y_pout_0_3
    ,y_lo_3}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 61:33]
  wire [7:0] y_lo_5 = {y_zout_1_2,y_zout_0_2,y_zout_1_1,y_zout_0_1,y_zout_1,y_zout_0,y_nextColumn_z_1,y_nextColumn_z_0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 61:87]
  wire [16:0] _y_T_11 = {_y_T_2[24],y_zout_1_6,y_zout_0_6,y_zout_1_5,y_zout_0_5,y_zout_1_4,y_zout_0_4,y_zout_1_3,
    y_zout_0_3,y_lo_5}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_1 = {_y_T_9[2],_y_T_9[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_1 = {_y_T_11[2],_y_T_11[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_1 = y_node0_1_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_1 = y_node0_1_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_1 = y_node0_1_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_1 = y_node0_1_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 37:40]
  wire [1:0] y_node_io_in_0_hi_7 = {_y_T_9[5],_y_T_9[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_7 = {_y_T_11[5],_y_T_11[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_7 = y_node_7_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_7 = y_node_7_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_7 = y_node_7_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_7 = y_node_7_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_8 = {_y_T_9[8],_y_T_9[7]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_8 = {_y_T_11[8],_y_T_11[7]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_8 = y_node_8_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_8 = y_node_8_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_8 = y_node_8_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_8 = y_node_8_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_9 = {_y_T_9[11],_y_T_9[10]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_9 = {_y_T_11[11],_y_T_11[10]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_9 = y_node_9_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_9 = y_node_9_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_9 = y_node_9_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_9 = y_node_9_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_10 = {_y_T_9[14],_y_T_9[13]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_10 = {_y_T_11[14],_y_T_11[13]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_10 = y_node_10_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_10 = y_node_10_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_10 = y_node_10_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_10 = y_node_10_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire [5:0] y_lo_6 = {y_pout_1_8,y_pout_0_8,y_pout_1_7,y_pout_0_7,y_nextColumn_p_1_1,y_nextColumn_p_0_1}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 61:33]
  wire [11:0] _y_T_24 = {_y_T_9[16],_y_T_9[15],y_pout_1_10,y_pout_0_10,y_pout_1_9,y_pout_0_9,y_lo_6}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 61:33]
  wire [5:0] y_lo_8 = {y_zout_1_8,y_zout_0_8,y_zout_1_7,y_zout_0_7,y_nextColumn_z_1_1,y_nextColumn_z_0_1}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 61:87]
  wire [11:0] _y_T_26 = {_y_T_11[16],_y_T_9[15],y_zout_1_10,y_zout_0_10,y_zout_1_9,y_zout_0_9,y_lo_8}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_2 = {_y_T_24[2],_y_T_24[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_2 = {_y_T_26[2],_y_T_26[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_2 = y_node0_2_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_2 = y_node0_2_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_2 = y_node0_2_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_2 = y_node0_2_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 37:40]
  wire [1:0] y_node_io_in_0_hi_11 = {_y_T_24[5],_y_T_24[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_11 = {_y_T_26[5],_y_T_26[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_11 = y_node_11_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_11 = y_node_11_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_11 = y_node_11_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_11 = y_node_11_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_12 = {_y_T_24[8],_y_T_24[7]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_12 = {_y_T_26[8],_y_T_26[7]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_12 = y_node_12_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_12 = y_node_12_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_12 = y_node_12_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_12 = y_node_12_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire [1:0] y_node_io_in_0_hi_13 = {_y_T_24[11],_y_T_24[10]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_13 = {_y_T_26[11],_y_T_26[10]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_13 = y_node_13_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_13 = y_node_13_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_13 = y_node_13_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_13 = y_node_13_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire [7:0] _y_T_27 = {y_pout_1_13,y_pout_0_13,y_pout_1_12,y_pout_0_12,y_pout_1_11,y_pout_0_11,y_nextColumn_p_1_2,
    y_nextColumn_p_0_2}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 61:33]
  wire [7:0] _y_T_29 = {y_zout_1_13,y_zout_0_13,y_zout_1_12,y_zout_0_12,y_zout_1_11,y_zout_0_11,y_nextColumn_z_1_2,
    y_nextColumn_z_0_2}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_3 = {_y_T_27[2],_y_T_27[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_3 = {_y_T_29[2],_y_T_29[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_3 = y_node0_3_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_3 = y_node0_3_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_3 = y_node0_3_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_3 = y_node0_3_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 37:40]
  wire [1:0] y_node_io_in_0_hi_14 = {_y_T_27[5],_y_T_27[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_14 = {_y_T_29[5],_y_T_29[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_14 = y_node_14_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_14 = y_node_14_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_14 = y_node_14_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_14 = y_node_14_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire [5:0] _y_T_42 = {_y_T_27[7],_y_T_27[6],y_pout_1_14,y_pout_0_14,y_nextColumn_p_1_3,y_nextColumn_p_0_3}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 61:33]
  wire [5:0] _y_T_44 = {_y_T_29[7],_y_T_27[6],y_zout_1_14,y_zout_0_14,y_nextColumn_z_1_3,y_nextColumn_z_0_3}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_4 = {_y_T_42[2],_y_T_42[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_4 = {_y_T_44[2],_y_T_44[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_4 = y_node0_4_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_4 = y_node0_4_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_4 = y_node0_4_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_4 = y_node0_4_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 37:40]
  wire [1:0] y_node_io_in_0_hi_15 = {_y_T_42[5],_y_T_42[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  wire [1:0] y_node_io_in_2_hi_15 = {_y_T_44[5],_y_T_44[4]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  wire  y_pout_0_15 = y_node_15_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_pout_1_15 = y_node_15_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 44:35]
  wire  y_zout_0_15 = y_node_15_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire  y_zout_1_15 = y_node_15_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 46:35]
  wire [3:0] _y_T_45 = {y_pout_1_15,y_pout_0_15,y_nextColumn_p_1_4,y_nextColumn_p_0_4}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 61:33]
  wire [3:0] _y_T_47 = {y_zout_1_15,y_zout_0_15,y_nextColumn_z_1_4,y_nextColumn_z_0_4}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_5 = {_y_T_45[2],_y_T_45[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_5 = {_y_T_47[2],_y_T_47[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_5 = y_node0_5_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_5 = y_node0_5_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_5 = y_node0_5_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_5 = y_node0_5_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 37:40]
  wire [2:0] _y_T_54 = {_y_T_45[3],y_nextColumn_p_1_5,y_nextColumn_p_0_5}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 61:33]
  wire [2:0] _y_T_56 = {_y_T_47[3],y_nextColumn_z_1_5,y_nextColumn_z_0_5}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 61:87]
  wire [1:0] y_node0_io_in_0_hi_6 = {_y_T_54[2],_y_T_54[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 32:26]
  wire [1:0] y_node0_io_in_2_hi_6 = {_y_T_56[2],_y_T_56[1]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 34:26]
  wire  y_nextColumn_p_0_6 = y_node0_6_io_out_0[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_p_1_6 = y_node0_6_io_out_0[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 35:40]
  wire  y_nextColumn_z_0_6 = y_node0_6_io_out_2[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 37:40]
  wire  y_nextColumn_z_1_6 = y_node0_6_io_out_2[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 37:40]
  node y_node0 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_io_in_0),
    .io_in_2(y_node0_io_in_2),
    .io_out_0(y_node0_io_out_0),
    .io_out_2(y_node0_io_out_2)
  );
  node y_node ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_io_in_0),
    .io_in_2(y_node_io_in_2),
    .io_out_0(y_node_io_out_0),
    .io_out_2(y_node_io_out_2)
  );
  node y_node_1 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_1_io_in_0),
    .io_in_2(y_node_1_io_in_2),
    .io_out_0(y_node_1_io_out_0),
    .io_out_2(y_node_1_io_out_2)
  );
  node y_node_2 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_2_io_in_0),
    .io_in_2(y_node_2_io_in_2),
    .io_out_0(y_node_2_io_out_0),
    .io_out_2(y_node_2_io_out_2)
  );
  node y_node_3 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_3_io_in_0),
    .io_in_2(y_node_3_io_in_2),
    .io_out_0(y_node_3_io_out_0),
    .io_out_2(y_node_3_io_out_2)
  );
  node y_node_4 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_4_io_in_0),
    .io_in_2(y_node_4_io_in_2),
    .io_out_0(y_node_4_io_out_0),
    .io_out_2(y_node_4_io_out_2)
  );
  node y_node_5 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_5_io_in_0),
    .io_in_2(y_node_5_io_in_2),
    .io_out_0(y_node_5_io_out_0),
    .io_out_2(y_node_5_io_out_2)
  );
  node y_node_6 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_6_io_in_0),
    .io_in_2(y_node_6_io_in_2),
    .io_out_0(y_node_6_io_out_0),
    .io_out_2(y_node_6_io_out_2)
  );
  node y_node0_1 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_1_io_in_0),
    .io_in_2(y_node0_1_io_in_2),
    .io_out_0(y_node0_1_io_out_0),
    .io_out_2(y_node0_1_io_out_2)
  );
  node y_node_7 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_7_io_in_0),
    .io_in_2(y_node_7_io_in_2),
    .io_out_0(y_node_7_io_out_0),
    .io_out_2(y_node_7_io_out_2)
  );
  node y_node_8 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_8_io_in_0),
    .io_in_2(y_node_8_io_in_2),
    .io_out_0(y_node_8_io_out_0),
    .io_out_2(y_node_8_io_out_2)
  );
  node y_node_9 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_9_io_in_0),
    .io_in_2(y_node_9_io_in_2),
    .io_out_0(y_node_9_io_out_0),
    .io_out_2(y_node_9_io_out_2)
  );
  node y_node_10 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_10_io_in_0),
    .io_in_2(y_node_10_io_in_2),
    .io_out_0(y_node_10_io_out_0),
    .io_out_2(y_node_10_io_out_2)
  );
  node y_node0_2 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_2_io_in_0),
    .io_in_2(y_node0_2_io_in_2),
    .io_out_0(y_node0_2_io_out_0),
    .io_out_2(y_node0_2_io_out_2)
  );
  node y_node_11 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_11_io_in_0),
    .io_in_2(y_node_11_io_in_2),
    .io_out_0(y_node_11_io_out_0),
    .io_out_2(y_node_11_io_out_2)
  );
  node y_node_12 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_12_io_in_0),
    .io_in_2(y_node_12_io_in_2),
    .io_out_0(y_node_12_io_out_0),
    .io_out_2(y_node_12_io_out_2)
  );
  node y_node_13 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_13_io_in_0),
    .io_in_2(y_node_13_io_in_2),
    .io_out_0(y_node_13_io_out_0),
    .io_out_2(y_node_13_io_out_2)
  );
  node y_node0_3 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_3_io_in_0),
    .io_in_2(y_node0_3_io_in_2),
    .io_out_0(y_node0_3_io_out_0),
    .io_out_2(y_node0_3_io_out_2)
  );
  node y_node_14 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_14_io_in_0),
    .io_in_2(y_node_14_io_in_2),
    .io_out_0(y_node_14_io_out_0),
    .io_out_2(y_node_14_io_out_2)
  );
  node y_node0_4 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_4_io_in_0),
    .io_in_2(y_node0_4_io_in_2),
    .io_out_0(y_node0_4_io_out_0),
    .io_out_2(y_node0_4_io_out_2)
  );
  node y_node_15 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 40:26]
    .io_in_0(y_node_15_io_in_0),
    .io_in_2(y_node_15_io_in_2),
    .io_out_0(y_node_15_io_out_0),
    .io_out_2(y_node_15_io_out_2)
  );
  node y_node0_5 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_5_io_in_0),
    .io_in_2(y_node0_5_io_in_2),
    .io_out_0(y_node0_5_io_out_0),
    .io_out_2(y_node0_5_io_out_2)
  );
  node y_node0_6 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 31:23]
    .io_in_0(y_node0_6_io_in_0),
    .io_in_2(y_node0_6_io_in_2),
    .io_out_0(y_node0_6_io_out_0),
    .io_out_2(y_node0_6_io_out_2)
  );
  assign io_y = (y_nextColumn_p_0_6 ^ y_nextColumn_p_1_6) & ~y_nextColumn_z_0_6 & ~y_nextColumn_z_1_6; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 60:81]
  assign y_node0_io_in_0 = {y_node0_io_in_0_hi,_y_T[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_io_in_2 = {y_node0_io_in_2_hi,_y_T_2[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 34:26]
  assign y_node_io_in_0 = {y_node_io_in_0_hi,_y_T[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_io_in_2 = {y_node_io_in_2_hi,_y_T_2[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_1_io_in_0 = {y_node_io_in_0_hi_1,_y_T[6]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_1_io_in_2 = {y_node_io_in_2_hi_1,_y_T_2[6]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_2_io_in_0 = {y_node_io_in_0_hi_2,_y_T[9]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_2_io_in_2 = {y_node_io_in_2_hi_2,_y_T_2[9]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_3_io_in_0 = {y_node_io_in_0_hi_3,_y_T[12]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_3_io_in_2 = {y_node_io_in_2_hi_3,_y_T_2[12]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_4_io_in_0 = {y_node_io_in_0_hi_4,_y_T[15]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_4_io_in_2 = {y_node_io_in_2_hi_4,_y_T_2[15]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_5_io_in_0 = {y_node_io_in_0_hi_5,_y_T[18]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_5_io_in_2 = {y_node_io_in_2_hi_5,_y_T_2[18]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_6_io_in_0 = {y_node_io_in_0_hi_6,_y_T[21]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_6_io_in_2 = {y_node_io_in_2_hi_6,_y_T_2[21]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  assign y_node0_1_io_in_0 = {y_node0_io_in_0_hi_1,_y_T_9[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_1_io_in_2 = {y_node0_io_in_2_hi_1,_y_T_11[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 34:26]
  assign y_node_7_io_in_0 = {y_node_io_in_0_hi_7,_y_T_9[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_7_io_in_2 = {y_node_io_in_2_hi_7,_y_T_11[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_8_io_in_0 = {y_node_io_in_0_hi_8,_y_T_9[6]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_8_io_in_2 = {y_node_io_in_2_hi_8,_y_T_11[6]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_9_io_in_0 = {y_node_io_in_0_hi_9,_y_T_9[9]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_9_io_in_2 = {y_node_io_in_2_hi_9,_y_T_11[9]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_10_io_in_0 = {y_node_io_in_0_hi_10,_y_T_9[12]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_10_io_in_2 = {y_node_io_in_2_hi_10,_y_T_11[12]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  assign y_node0_2_io_in_0 = {y_node0_io_in_0_hi_2,_y_T_24[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_2_io_in_2 = {y_node0_io_in_2_hi_2,_y_T_26[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 34:26]
  assign y_node_11_io_in_0 = {y_node_io_in_0_hi_11,_y_T_24[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_11_io_in_2 = {y_node_io_in_2_hi_11,_y_T_26[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_12_io_in_0 = {y_node_io_in_0_hi_12,_y_T_24[6]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_12_io_in_2 = {y_node_io_in_2_hi_12,_y_T_26[6]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  assign y_node_13_io_in_0 = {y_node_io_in_0_hi_13,_y_T_24[9]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_13_io_in_2 = {y_node_io_in_2_hi_13,_y_T_26[9]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  assign y_node0_3_io_in_0 = {y_node0_io_in_0_hi_3,_y_T_27[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_3_io_in_2 = {y_node0_io_in_2_hi_3,_y_T_29[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 34:26]
  assign y_node_14_io_in_0 = {y_node_io_in_0_hi_14,_y_T_27[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_14_io_in_2 = {y_node_io_in_2_hi_14,_y_T_29[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  assign y_node0_4_io_in_0 = {y_node0_io_in_0_hi_4,_y_T_42[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_4_io_in_2 = {y_node0_io_in_2_hi_4,_y_T_44[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 34:26]
  assign y_node_15_io_in_0 = {y_node_io_in_0_hi_15,_y_T_42[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 41:29]
  assign y_node_15_io_in_2 = {y_node_io_in_2_hi_15,_y_T_44[3]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 43:29]
  assign y_node0_5_io_in_0 = {y_node0_io_in_0_hi_5,_y_T_45[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_5_io_in_2 = {y_node0_io_in_2_hi_5,_y_T_47[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 34:26]
  assign y_node0_6_io_in_0 = {y_node0_io_in_0_hi_6,_y_T_54[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 32:26]
  assign y_node0_6_io_in_2 = {y_node0_io_in_2_hi_6,_y_T_56[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/ErrorDetector.scala 34:26]
endmodule
module LZC_8(
  input  [24:0] io_in, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/LZC.scala 11:14]
  output [4:0]  io_out // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/LZC.scala 11:14]
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
  input  [24:0] io_a, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 15:14]
  input  [24:0] io_b, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 15:14]
  output [4:0]  io_lzc, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 15:14]
  output        io_error, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 15:14]
  output        io_zero // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 15:14]
);
  wire [24:0] preEncoder_io_g; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 24:26]
  wire [24:0] preEncoder_io_s; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 24:26]
  wire [24:0] preEncoder_io_e; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 24:26]
  wire [24:0] preEncoder_io_f; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 24:26]
  wire [24:0] errorDetector_io_g; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 30:29]
  wire [24:0] errorDetector_io_s; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 30:29]
  wire [24:0] errorDetector_io_e; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 30:29]
  wire  errorDetector_io_y; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 30:29]
  wire [24:0] io_lzc_lzc_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/LZC.scala 21:21]
  wire [4:0] io_lzc_lzc_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/LZC.scala 21:21]
  wire  g_0 = io_a[0] & ~io_b[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_0 = ~io_a[0] & io_b[0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_0 = ~(io_a[0] ^ io_b[0]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_1 = io_a[1] & ~io_b[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_1 = ~io_a[1] & io_b[1]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_1 = ~(io_a[1] ^ io_b[1]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_2 = io_a[2] & ~io_b[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_2 = ~io_a[2] & io_b[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_2 = ~(io_a[2] ^ io_b[2]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_3 = io_a[3] & ~io_b[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_3 = ~io_a[3] & io_b[3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_3 = ~(io_a[3] ^ io_b[3]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_4 = io_a[4] & ~io_b[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_4 = ~io_a[4] & io_b[4]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_4 = ~(io_a[4] ^ io_b[4]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_5 = io_a[5] & ~io_b[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_5 = ~io_a[5] & io_b[5]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_5 = ~(io_a[5] ^ io_b[5]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_6 = io_a[6] & ~io_b[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_6 = ~io_a[6] & io_b[6]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_6 = ~(io_a[6] ^ io_b[6]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_7 = io_a[7] & ~io_b[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_7 = ~io_a[7] & io_b[7]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_7 = ~(io_a[7] ^ io_b[7]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_8 = io_a[8] & ~io_b[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_8 = ~io_a[8] & io_b[8]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_8 = ~(io_a[8] ^ io_b[8]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_9 = io_a[9] & ~io_b[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_9 = ~io_a[9] & io_b[9]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_9 = ~(io_a[9] ^ io_b[9]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_10 = io_a[10] & ~io_b[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_10 = ~io_a[10] & io_b[10]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_10 = ~(io_a[10] ^ io_b[10]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_11 = io_a[11] & ~io_b[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_11 = ~io_a[11] & io_b[11]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_11 = ~(io_a[11] ^ io_b[11]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_12 = io_a[12] & ~io_b[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_12 = ~io_a[12] & io_b[12]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_12 = ~(io_a[12] ^ io_b[12]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_13 = io_a[13] & ~io_b[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_13 = ~io_a[13] & io_b[13]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_13 = ~(io_a[13] ^ io_b[13]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_14 = io_a[14] & ~io_b[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_14 = ~io_a[14] & io_b[14]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_14 = ~(io_a[14] ^ io_b[14]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_15 = io_a[15] & ~io_b[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_15 = ~io_a[15] & io_b[15]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_15 = ~(io_a[15] ^ io_b[15]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_16 = io_a[16] & ~io_b[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_16 = ~io_a[16] & io_b[16]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_16 = ~(io_a[16] ^ io_b[16]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_17 = io_a[17] & ~io_b[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_17 = ~io_a[17] & io_b[17]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_17 = ~(io_a[17] ^ io_b[17]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_18 = io_a[18] & ~io_b[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_18 = ~io_a[18] & io_b[18]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_18 = ~(io_a[18] ^ io_b[18]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_19 = io_a[19] & ~io_b[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_19 = ~io_a[19] & io_b[19]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_19 = ~(io_a[19] ^ io_b[19]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_20 = io_a[20] & ~io_b[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_20 = ~io_a[20] & io_b[20]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_20 = ~(io_a[20] ^ io_b[20]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_21 = io_a[21] & ~io_b[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_21 = ~io_a[21] & io_b[21]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_21 = ~(io_a[21] ^ io_b[21]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_22 = io_a[22] & ~io_b[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_22 = ~io_a[22] & io_b[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_22 = ~(io_a[22] ^ io_b[22]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_23 = io_a[23] & ~io_b[23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_23 = ~io_a[23] & io_b[23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_23 = ~(io_a[23] ^ io_b[23]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire  g_24 = io_a[24] & ~io_b[24]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 19:18]
  wire  s_24 = ~io_a[24] & io_b[24]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 20:21]
  wire  e_24 = ~(io_a[24] ^ io_b[24]); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 21:13]
  wire [5:0] preEncoder_io_g_lo_lo = {g_5,g_4,g_3,g_2,g_1,g_0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 25:25]
  wire [11:0] preEncoder_io_g_lo = {g_11,g_10,g_9,g_8,g_7,g_6,preEncoder_io_g_lo_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 25:25]
  wire [5:0] preEncoder_io_g_hi_lo = {g_17,g_16,g_15,g_14,g_13,g_12}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 25:25]
  wire [12:0] preEncoder_io_g_hi = {g_24,g_23,g_22,g_21,g_20,g_19,g_18,preEncoder_io_g_hi_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 25:25]
  wire [5:0] preEncoder_io_s_lo_lo = {s_5,s_4,s_3,s_2,s_1,s_0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 26:25]
  wire [11:0] preEncoder_io_s_lo = {s_11,s_10,s_9,s_8,s_7,s_6,preEncoder_io_s_lo_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 26:25]
  wire [5:0] preEncoder_io_s_hi_lo = {s_17,s_16,s_15,s_14,s_13,s_12}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 26:25]
  wire [12:0] preEncoder_io_s_hi = {s_24,s_23,s_22,s_21,s_20,s_19,s_18,preEncoder_io_s_hi_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 26:25]
  wire [5:0] preEncoder_io_e_lo_lo = {e_5,e_4,e_3,e_2,e_1,e_0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 27:25]
  wire [11:0] preEncoder_io_e_lo = {e_11,e_10,e_9,e_8,e_7,e_6,preEncoder_io_e_lo_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 27:25]
  wire [5:0] preEncoder_io_e_hi_lo = {e_17,e_16,e_15,e_14,e_13,e_12}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 27:25]
  wire [12:0] preEncoder_io_e_hi = {e_24,e_23,e_22,e_21,e_20,e_19,e_18,preEncoder_io_e_hi_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 27:25]
  PreEncoder preEncoder ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 24:26]
    .io_g(preEncoder_io_g),
    .io_s(preEncoder_io_s),
    .io_e(preEncoder_io_e),
    .io_f(preEncoder_io_f)
  );
  ErrorDetector errorDetector ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 30:29]
    .io_g(errorDetector_io_g),
    .io_s(errorDetector_io_s),
    .io_e(errorDetector_io_e),
    .io_y(errorDetector_io_y)
  );
  LZC_8 io_lzc_lzc ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/LZC.scala 21:21]
    .io_in(io_lzc_lzc_io_in),
    .io_out(io_lzc_lzc_io_out)
  );
  assign io_lzc = io_lzc_lzc_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 36:10]
  assign io_error = errorDetector_io_y; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 35:12]
  assign io_zero = ~(|preEncoder_io_f); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 37:14]
  assign preEncoder_io_g = {preEncoder_io_g_hi,preEncoder_io_g_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 25:25]
  assign preEncoder_io_s = {preEncoder_io_s_hi,preEncoder_io_s_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 26:25]
  assign preEncoder_io_e = {preEncoder_io_e_hi,preEncoder_io_e_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 27:25]
  assign errorDetector_io_g = {preEncoder_io_g_hi,preEncoder_io_g_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 31:27]
  assign errorDetector_io_s = {preEncoder_io_s_hi,preEncoder_io_s_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 32:27]
  assign errorDetector_io_e = {preEncoder_io_e_hi,preEncoder_io_e_lo}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/LZA.scala 33:27]
  assign io_lzc_lzc_io_in = preEncoder_io_f; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/lza_utils/LZC.scala 22:15]
endmodule
module ClosePath(
  input         io_in_a_sign, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 109:14]
  input  [7:0]  io_in_a_exp, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 109:14]
  input  [23:0] io_in_a_sig, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 109:14]
  input  [7:0]  io_in_b_exp, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 109:14]
  input  [23:0] io_in_b_sig, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 109:14]
  input         io_in_needShift, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 109:14]
  input  [2:0]  io_in_roundingMode, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 109:14]
  output [31:0] io_out_result, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 109:14]
  output        io_out_near_path_of, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 109:14]
  output        io_out_near_path_ix, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 109:14]
  output        io_out_near_path_uf // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 109:14]
);
  wire [24:0] lza_io_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 135:19]
  wire [24:0] lza_io_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 135:19]
  wire [4:0] lza_io_lzc; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 135:19]
  wire  lza_io_error; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 135:19]
  wire  lza_io_zero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 135:19]
  wire  near_path_tininess_rounder_io_in_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 176:42]
  wire [26:0] near_path_tininess_rounder_io_in_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 176:42]
  wire [2:0] near_path_tininess_rounder_io_rm; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 176:42]
  wire  near_path_tininess_rounder_io_tininess; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 176:42]
  wire [22:0] near_path_rounder_io_in; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  near_path_rounder_io_roundIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  near_path_rounder_io_stickyIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  near_path_rounder_io_signIn; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire [2:0] near_path_rounder_io_rm; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire [22:0] near_path_rounder_io_out; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  near_path_rounder_io_inexact; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire  near_path_rounder_io_cout; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
  wire [24:0] _b_sig_T = {io_in_b_sig,1'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 124:19]
  wire [24:0] b_sig = _b_sig_T >> io_in_needShift; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 124:43]
  wire  bIsZero = ~(|io_in_b_exp); // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 125:17]
  wire [25:0] _resultSigComplementForm_T = {1'h0,io_in_a_sig,1'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 127:8]
  wire [24:0] _resultSigComplementForm_T_2 = ~b_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 128:42]
  wire [24:0] _resultSigComplementForm_T_4 = _resultSigComplementForm_T_2 + 25'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 128:49]
  wire [25:0] _resultSigComplementForm_T_5 = {1'h1,_resultSigComplementForm_T_4}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 128:31]
  wire [25:0] _resultSigComplementForm_T_7 = _resultSigComplementForm_T + _resultSigComplementForm_T_5; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 128:26]
  wire [25:0] resultSigComplementForm = bIsZero ? _resultSigComplementForm_T : _resultSigComplementForm_T_7; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 126:36]
  wire  a_LessThan_b = resultSigComplementForm[25]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 129:50]
  wire [24:0] _resultSigNoRound_T_1 = ~resultSigComplementForm[24:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 131:5]
  wire [24:0] _resultSigNoRound_T_3 = _resultSigNoRound_T_1 + 25'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 131:38]
  wire [24:0] resultSigNoRound = a_LessThan_b ? _resultSigNoRound_T_3 : resultSigComplementForm[24:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 130:29]
  wire  result_sign = a_LessThan_b ? ~io_in_a_sign : io_in_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 133:24]
  wire [7:0] resultExpNoRound = lza_io_zero ? 8'h0 : io_in_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 148:29]
  wire  resultExpIsZero = resultExpNoRound == 8'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 149:42]
  wire [4:0] _GEN_0 = {{4'd0}, lza_io_error}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 151:45]
  wire [4:0] _shiftLimit_T_1 = lza_io_lzc + _GEN_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 151:45]
  wire [7:0] _GEN_1 = {{3'd0}, _shiftLimit_T_1}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 151:37]
  wire  shiftLimit = resultExpNoRound <= _GEN_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 151:37]
  wire [7:0] _GEN_2 = {{3'd0}, lza_io_lzc}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 152:33]
  wire [7:0] exp_s1 = resultExpNoRound - _GEN_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 152:33]
  wire [7:0] _GEN_3 = {{7'd0}, lza_io_error}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 153:23]
  wire [7:0] exp_s2 = exp_s1 - _GEN_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 153:23]
  wire [7:0] nearPathResult_exp = shiftLimit ? 8'h0 : exp_s2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 154:28]
  wire [7:0] _sigShiftNum_T_1 = resultExpNoRound - 8'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 159:39]
  wire [7:0] _sigShiftNum_T_2 = shiftLimit ? _sigShiftNum_T_1 : {{3'd0}, lza_io_lzc}; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [7:0] sigShiftNum = resultExpIsZero ? 8'h0 : _sigShiftNum_T_2; // @[src/main/scala/chisel3/util/Mux.scala 50:70]
  wire [279:0] _GEN_5 = {{255'd0}, resultSigNoRound}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 163:34]
  wire [279:0] _sig_s1_T = _GEN_5 << sigShiftNum; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 163:34]
  wire [24:0] sig_s1 = _sig_s1_T[24:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 163:49]
  wire [24:0] _sig_s2_T_1 = {sig_s1[23:0],1'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 164:33]
  wire [24:0] sig_s2 = lza_io_error ? _sig_s2_T_1 : sig_s1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 164:19]
  wire [24:0] _near_path_sig_cor_T = shiftLimit ? sig_s1 : sig_s2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 167:10]
  wire [26:0] near_path_sig_cor = {_near_path_sig_cor_T,2'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 166:8]
  wire [26:0] near_path_sig = {near_path_sig_cor[26:1],|near_path_sig_cor[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 173:63]
  wire [7:0] _GEN_4 = {{7'd0}, near_path_rounder_io_cout}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 188:57]
  wire [7:0] near_path_exp_rounded = _GEN_4 + nearPathResult_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 188:57]
  wire  near_path_zero_sign = io_in_roundingMode == 3'h2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 190:48]
  wire  _io_out_result_T_3 = result_sign & ~lza_io_zero | near_path_zero_sign & lza_io_zero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 192:49]
  wire [8:0] io_out_result_hi = {_io_out_result_T_3,near_path_exp_rounded}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 191:23]
  LZA lza ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 135:19]
    .io_a(lza_io_a),
    .io_b(lza_io_b),
    .io_lzc(lza_io_lzc),
    .io_error(lza_io_error),
    .io_zero(lza_io_zero)
  );
  TininessRounder near_path_tininess_rounder ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 176:42]
    .io_in_sign(near_path_tininess_rounder_io_in_sign),
    .io_in_sig(near_path_tininess_rounder_io_in_sig),
    .io_rm(near_path_tininess_rounder_io_rm),
    .io_tininess(near_path_tininess_rounder_io_tininess)
  );
  RoundingUnit near_path_rounder ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 45:25]
    .io_in(near_path_rounder_io_in),
    .io_roundIn(near_path_rounder_io_roundIn),
    .io_stickyIn(near_path_rounder_io_stickyIn),
    .io_signIn(near_path_rounder_io_signIn),
    .io_rm(near_path_rounder_io_rm),
    .io_out(near_path_rounder_io_out),
    .io_inexact(near_path_rounder_io_inexact),
    .io_cout(near_path_rounder_io_cout)
  );
  assign io_out_result = {io_out_result_hi,near_path_rounder_io_out}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 191:23]
  assign io_out_near_path_of = near_path_exp_rounded == 8'hff; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 197:48]
  assign io_out_near_path_ix = near_path_rounder_io_inexact | io_out_near_path_of; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 198:55]
  assign io_out_near_path_uf = near_path_tininess_rounder_io_tininess & io_out_near_path_ix; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 199:45]
  assign lza_io_a = {io_in_a_sig,1'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 123:18]
  assign lza_io_b = _b_sig_T >> io_in_needShift; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 124:43]
  assign near_path_tininess_rounder_io_in_sign = a_LessThan_b ? ~io_in_a_sign : io_in_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 133:24]
  assign near_path_tininess_rounder_io_in_sig = {near_path_sig_cor[26:1],|near_path_sig_cor[0]}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 173:63]
  assign near_path_tininess_rounder_io_rm = io_in_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 178:36]
  assign near_path_rounder_io_in = near_path_sig[25:3]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 46:33]
  assign near_path_rounder_io_roundIn = near_path_sig[2]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 47:50]
  assign near_path_rounder_io_stickyIn = |near_path_sig[1:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 48:51]
  assign near_path_rounder_io_signIn = a_LessThan_b ? ~io_in_a_sign : io_in_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 133:24]
  assign near_path_rounder_io_rm = io_in_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 49:19]
endmodule
module FADD(
  output        io_in_ready, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
  input         io_in_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
  input  [31:0] io_in_bits_a, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
  input  [31:0] io_in_bits_b, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
  input  [2:0]  io_in_bits_roundingMode, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
  input         io_in_bits_a_inter_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
  input         io_in_bits_b_inter_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
  input         io_in_bits_a_inter_flags_isNaN, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
  input         io_in_bits_a_inter_flags_isInf, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
  input         io_in_bits_a_inter_flags_isInv, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
  input         io_in_bits_b_inter_flags_isNaN, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
  input         io_in_bits_b_inter_flags_isInf, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
  input         io_in_bits_b_inter_flags_isInv, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
  input         io_out_ready, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
  output        io_out_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
  output [4:0]  io_out_bits_fflags, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
  output [31:0] io_out_bits_result // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 223:14]
);
  wire  farPath_io_in_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 249:23]
  wire [7:0] farPath_io_in_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 249:23]
  wire [23:0] farPath_io_in_a_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 249:23]
  wire [7:0] farPath_io_in_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 249:23]
  wire [23:0] farPath_io_in_b_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 249:23]
  wire  farPath_io_in_addSig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 249:23]
  wire  farPath_io_in_tinyAdd; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 249:23]
  wire [4:0] farPath_io_in_shiftNum; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 249:23]
  wire [2:0] farPath_io_in_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 249:23]
  wire [31:0] farPath_io_out_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 249:23]
  wire  farPath_io_out_far_path_of; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 249:23]
  wire  farPath_io_out_far_path_ix; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 249:23]
  wire  farPath_io_out_far_path_uf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 249:23]
  wire  closePath_io_in_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 263:25]
  wire [7:0] closePath_io_in_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 263:25]
  wire [23:0] closePath_io_in_a_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 263:25]
  wire [7:0] closePath_io_in_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 263:25]
  wire [23:0] closePath_io_in_b_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 263:25]
  wire  closePath_io_in_needShift; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 263:25]
  wire [2:0] closePath_io_in_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 263:25]
  wire [31:0] closePath_io_out_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 263:25]
  wire  closePath_io_out_near_path_of; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 263:25]
  wire  closePath_io_out_near_path_ix; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 263:25]
  wire  closePath_io_out_near_path_uf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 263:25]
  wire  fp_a_sign = io_in_bits_a[31]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 58:19]
  wire [7:0] fp_a_exp = io_in_bits_a[30:23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 59:18]
  wire [22:0] fp_a_sig = io_in_bits_a[22:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 60:18]
  wire  fp_b_sign = io_in_bits_b[31]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 58:19]
  wire [7:0] fp_b_exp = io_in_bits_b[30:23]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 59:18]
  wire [22:0] fp_b_sig = io_in_bits_b[22:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 60:18]
  wire  decode_a_expNotZero = |fp_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 31:28]
  wire  decode_a_expIsOnes = &fp_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 32:27]
  wire  decode_a_sigNotZero = |fp_a_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 33:28]
  wire  decode_a__expIsZero = ~decode_a_expNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 36:27]
  wire  decode_a__sigIsZero = ~decode_a_sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 39:27]
  wire  decode_a__isSubnormal = decode_a__expIsZero & decode_a_sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 40:46]
  wire  decode_a__isInf = decode_a_expIsOnes & decode_a__sigIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 41:40]
  wire  decode_a__isNaN = decode_a_expIsOnes & decode_a_sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 43:40]
  wire  decode_a__isSNaN = decode_a__isNaN & ~fp_a_sig[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 44:37]
  wire  decode_b_expNotZero = |fp_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 31:28]
  wire  decode_b_expIsOnes = &fp_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 32:27]
  wire  decode_b_sigNotZero = |fp_b_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 33:28]
  wire  decode_b__expIsZero = ~decode_b_expNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 36:27]
  wire  decode_b__sigIsZero = ~decode_b_sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 39:27]
  wire  decode_b__isSubnormal = decode_b__expIsZero & decode_b_sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 40:46]
  wire  decode_b__isInf = decode_b_expIsOnes & decode_b__sigIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 41:40]
  wire  decode_b__isNaN = decode_b_expIsOnes & decode_b_sigNotZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 43:40]
  wire  decode_b__isSNaN = decode_b__isNaN & ~fp_b_sig[22]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 44:37]
  wire [7:0] _raw_a_inner_exp_T_1 = fp_a_exp + 8'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 83:38]
  wire [7:0] raw_a_exp = decode_a__isSubnormal ? _raw_a_inner_exp_T_1 : fp_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 83:23]
  wire [23:0] raw_a_sig = {decode_a_expNotZero,fp_a_sig}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 84:23]
  wire [7:0] _raw_b_inner_exp_T_1 = fp_b_exp + 8'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 83:38]
  wire [7:0] raw_b_exp = decode_b__isSubnormal ? _raw_b_inner_exp_T_1 : fp_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 83:23]
  wire [23:0] raw_b_sig = {decode_b_expNotZero,fp_b_sig}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/package.scala 84:23]
  wire  addSig = fp_a_sign == fp_b_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 237:26]
  wire  needSwap = raw_a_exp < raw_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 238:28]
  wire [7:0] _diffExp_T_1 = raw_b_exp - raw_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 239:41]
  wire [7:0] _diffExp_T_3 = raw_a_exp - raw_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 239:64]
  wire [7:0] diffExp = needSwap ? _diffExp_T_1 : _diffExp_T_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 239:20]
  wire [4:0] initShiftNum = diffExp[4:0]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 242:29]
  wire  isMaxAlign = diffExp > 8'h1a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 243:28]
  wire  _closePathSel_T = ~addSig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 245:22]
  wire  closePathSel = ~addSig & ~isMaxAlign & initShiftNum <= 5'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 245:45]
  wire  a_isNaN = io_in_bits_a_inter_valid ? io_in_bits_a_inter_flags_isNaN : decode_a__isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 277:20]
  wire  a_isSNaN = io_in_bits_a_inter_valid ? io_in_bits_a_inter_flags_isInv : decode_a__isSNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 278:21]
  wire  a_isInf = io_in_bits_a_inter_valid ? io_in_bits_a_inter_flags_isInf : decode_a__isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 279:20]
  wire  b_isNaN = io_in_bits_b_inter_valid ? io_in_bits_b_inter_flags_isNaN : decode_b__isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 283:20]
  wire  b_isSNaN = io_in_bits_b_inter_valid ? io_in_bits_b_inter_flags_isInv : decode_b__isSNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 284:21]
  wire  b_isInf = io_in_bits_b_inter_valid ? io_in_bits_b_inter_flags_isInf : decode_b__isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 285:20]
  wire  special_path_hasNaN = a_isNaN | b_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 287:37]
  wire  special_path_hasSNaN = a_isSNaN | b_isSNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 288:39]
  wire  special_path_hasInf = a_isInf | b_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 289:37]
  wire  special_path_inf_iv = a_isInf & b_isInf & _closePathSel_T; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 290:48]
  wire  special_case_happen = special_path_hasNaN | special_path_hasInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 291:49]
  wire  special_path_iv = special_path_hasSNaN | special_path_inf_iv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 292:46]
  wire  _special_path_result_T = special_path_hasNaN | special_path_inf_iv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 295:25]
  wire  _special_path_result_T_3 = a_isInf ? fp_a_sign : fp_b_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 298:10]
  wire [31:0] _special_path_result_T_5 = {_special_path_result_T_3,8'hff,23'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 297:8]
  wire [31:0] special_path_result = _special_path_result_T ? 32'h7fc00000 : _special_path_result_T_5; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 294:32]
  wire [4:0] special_path_fflags = {special_path_iv,4'h0}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 303:32]
  wire  common_overflow_sign = closePathSel ? closePath_io_out_result[31] : farPath_io_out_result[31]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 308:8]
  wire  rmin = io_in_bits_roundingMode == 3'h1 | io_in_bits_roundingMode == 3'h2 & ~farPath_io_out_result[31] |
    io_in_bits_roundingMode == 3'h3 & farPath_io_out_result[31]; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/utils/RoundingUnit.scala 55:41]
  wire [7:0] common_overflow_exp = rmin ? 8'hfe : 8'hff; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 310:32]
  wire [22:0] common_overflow_sig = rmin ? 23'h7fffff : 23'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 316:8]
  wire  _common_overflow_T = ~closePathSel; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 318:5]
  wire  common_overflow = ~closePathSel & farPath_io_out_far_path_of | closePathSel & closePath_io_out_near_path_of; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 318:34]
  wire  common_underflow = _common_overflow_T & farPath_io_out_far_path_uf | closePathSel &
    closePath_io_out_near_path_uf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 320:34]
  wire  common_inexact = _common_overflow_T & farPath_io_out_far_path_ix | closePathSel & closePath_io_out_near_path_ix; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 322:34]
  wire [4:0] common_fflags = {2'h0,common_overflow,common_underflow,common_inexact}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 323:26]
  wire [31:0] _io_out_bits_result_T = {common_overflow_sign,common_overflow_exp,common_overflow_sig}; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 338:10]
  wire [31:0] _io_out_bits_result_T_1 = closePathSel ? closePath_io_out_result : farPath_io_out_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 339:10]
  wire [31:0] _io_out_bits_result_T_2 = common_overflow ? _io_out_bits_result_T : _io_out_bits_result_T_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 336:8]
  FarPath farPath ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 249:23]
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
  ClosePath closePath ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 263:25]
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
  assign io_in_ready = io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 331:15]
  assign io_out_valid = io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 332:16]
  assign io_out_bits_fflags = special_case_happen ? special_path_fflags : common_fflags; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 342:28]
  assign io_out_bits_result = special_case_happen ? special_path_result : _io_out_bits_result_T_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 333:28]
  assign farPath_io_in_a_sign = needSwap ? fp_b_sign : fp_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 250:25]
  assign farPath_io_in_a_exp = needSwap ? raw_b_exp : raw_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 250:25]
  assign farPath_io_in_a_sig = needSwap ? raw_b_sig : raw_a_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 250:25]
  assign farPath_io_in_b_exp = needSwap ? raw_a_exp : raw_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 251:25]
  assign farPath_io_in_b_sig = needSwap ? raw_a_sig : raw_b_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 251:25]
  assign farPath_io_in_addSig = fp_a_sign == fp_b_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 237:26]
  assign farPath_io_in_tinyAdd = decode_a__expIsZero & decode_b__expIsZero; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 253:47]
  assign farPath_io_in_shiftNum = isMaxAlign ? 5'h1a : initShiftNum; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 244:21]
  assign farPath_io_in_roundingMode = io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 255:30]
  assign closePath_io_in_a_sign = needSwap ? fp_b_sign : fp_a_sign; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 264:27]
  assign closePath_io_in_a_exp = needSwap ? raw_b_exp : raw_a_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 264:27]
  assign closePath_io_in_a_sig = needSwap ? raw_b_sig : raw_a_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 264:27]
  assign closePath_io_in_b_exp = needSwap ? raw_a_exp : raw_b_exp; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 265:27]
  assign closePath_io_in_b_sig = needSwap ? raw_a_sig : raw_b_sig; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 265:27]
  assign closePath_io_in_needShift = initShiftNum == 5'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 266:45]
  assign closePath_io_in_roundingMode = io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 267:32]
endmodule
module DotProdUnit(
  input         clock,
  input         reset,
  output        io_in_ready, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 24:14]
  input         io_in_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 24:14]
  input  [15:0] io_in_bits_vec_a_0, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 24:14]
  input  [15:0] io_in_bits_vec_a_1, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 24:14]
  input  [15:0] io_in_bits_vec_a_2, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 24:14]
  input  [15:0] io_in_bits_vec_a_3, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 24:14]
  input  [15:0] io_in_bits_vec_b_0, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 24:14]
  input  [15:0] io_in_bits_vec_b_1, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 24:14]
  input  [15:0] io_in_bits_vec_b_2, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 24:14]
  input  [15:0] io_in_bits_vec_b_3, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 24:14]
  input  [2:0]  io_in_bits_roundingMode, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 24:14]
  input         io_out_ready, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 24:14]
  output        io_out_valid, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 24:14]
  output [4:0]  io_out_bits_fflags, // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 24:14]
  output [31:0] io_out_bits_result // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 24:14]
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
`endif // RANDOMIZE_REG_INIT
  wire  fmul_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire [15:0] fmul_io_in_bits_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire [15:0] fmul_io_in_bits_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_io_toFADD_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_io_toFADD_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire [31:0] fmul_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_io_toFADD_bits_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_1_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_1_io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire [15:0] fmul_1_io_in_bits_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire [15:0] fmul_1_io_in_bits_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_1_io_toFADD_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_1_io_toFADD_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire [31:0] fmul_1_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_1_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_1_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_1_io_toFADD_bits_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_2_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_2_io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire [15:0] fmul_2_io_in_bits_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire [15:0] fmul_2_io_in_bits_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_2_io_toFADD_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_2_io_toFADD_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire [31:0] fmul_2_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_2_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_2_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_2_io_toFADD_bits_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_3_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_3_io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire [15:0] fmul_3_io_in_bits_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire [15:0] fmul_3_io_in_bits_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_3_io_toFADD_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_3_io_toFADD_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire [31:0] fmul_3_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_3_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_3_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  fmul_3_io_toFADD_bits_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
  wire  faddModule_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire [31:0] faddModule_io_in_bits_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire [31:0] faddModule_io_in_bits_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire [2:0] faddModule_io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_io_in_bits_a_inter_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_io_in_bits_b_inter_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_io_in_bits_a_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_io_in_bits_a_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_io_in_bits_a_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_io_in_bits_b_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_io_in_bits_b_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_io_in_bits_b_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_io_out_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire [4:0] faddModule_io_out_bits_fflags; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire [31:0] faddModule_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_1_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_1_io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire [31:0] faddModule_1_io_in_bits_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire [31:0] faddModule_1_io_in_bits_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire [2:0] faddModule_1_io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_1_io_in_bits_a_inter_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_1_io_in_bits_b_inter_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_1_io_in_bits_a_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_1_io_in_bits_a_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_1_io_in_bits_a_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_1_io_in_bits_b_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_1_io_in_bits_b_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_1_io_in_bits_b_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_1_io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_1_io_out_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire [4:0] faddModule_1_io_out_bits_fflags; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire [31:0] faddModule_1_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_2_io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire [31:0] faddModule_2_io_in_bits_a; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire [31:0] faddModule_2_io_in_bits_b; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire [2:0] faddModule_2_io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_2_io_in_bits_a_inter_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_2_io_in_bits_b_inter_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_2_io_in_bits_a_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_2_io_in_bits_a_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_2_io_in_bits_a_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_2_io_in_bits_b_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_2_io_in_bits_b_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_2_io_in_bits_b_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_2_io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  faddModule_2_io_out_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire [4:0] faddModule_2_io_out_bits_fflags; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire [31:0] faddModule_2_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
  wire  handshaked = io_in_valid & io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 31:26]
  reg [15:0] vec_a_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 32:24]
  reg [15:0] vec_a_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 32:24]
  reg [15:0] vec_a_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 32:24]
  reg [15:0] vec_a_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 32:24]
  reg [15:0] vec_b_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 33:24]
  reg [15:0] vec_b_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 33:24]
  reg [15:0] vec_b_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 33:24]
  reg [15:0] vec_b_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 33:24]
  wire  firstFaddReady_0 = faddModule_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 38:28 67:25]
  wire  firstFaddReady_1 = faddModule_1_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 38:28 67:25]
  wire  fmulReady_0 = fmul_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 36:34 47:18]
  wire  fmulReady_1 = fmul_1_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 36:34 47:18]
  wire  fmulReady_2 = fmul_2_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 36:34 47:18]
  wire  fmulReady_3 = fmul_3_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 36:34 47:18]
  wire  fmulValid_0 = fmul_io_toFADD_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 36:34 46:18]
  wire  fmulValid_1 = fmul_1_io_toFADD_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 36:34 46:18]
  wire  prevalid = fmulValid_0 & fmulValid_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 61:39]
  wire  prehandshaked = prevalid & faddModule_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 356:35]
  reg  valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 357:24]
  wire  firstPostReady_0 = faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 54:28 77:19]
  wire  _GEN_8 = faddModule_io_out_valid & firstPostReady_0 ? 1'h0 : valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 358:49 359:13 357:24]
  wire  _GEN_9 = prehandshaked | _GEN_8; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 361:25 362:13]
  reg  a_flag_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
  reg  a_flag_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
  reg  a_flag_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
  wire  fmulResult_0_inter_flags_isNaN = fmul_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 35:24 45:19]
  wire  fmulResult_0_inter_flags_isInf = fmul_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 35:24 45:19]
  wire  fmulResult_0_inter_flags_isInv = fmul_io_toFADD_bits_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 35:24 45:19]
  reg  b_flag_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
  reg  b_flag_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
  reg  b_flag_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
  wire  fmulResult_1_inter_flags_isNaN = fmul_1_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 35:24 45:19]
  wire  fmulResult_1_inter_flags_isInf = fmul_1_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 35:24 45:19]
  wire  fmulResult_1_inter_flags_isInv = fmul_1_io_toFADD_bits_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 35:24 45:19]
  reg [31:0] faddModule_io_in_bits_a_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 372:41]
  wire [31:0] fmulResult_0_fp_prod = fmul_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 35:24 45:19]
  reg [31:0] faddModule_io_in_bits_b_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 373:41]
  wire [31:0] fmulResult_1_fp_prod = fmul_1_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 35:24 45:19]
  wire  fmulValid_2 = fmul_2_io_toFADD_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 36:34 46:18]
  wire  fmulValid_3 = fmul_3_io_toFADD_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 36:34 46:18]
  wire  prevalid_1 = fmulValid_2 & fmulValid_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 61:39]
  wire  prehandshaked_1 = prevalid_1 & faddModule_1_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 356:35]
  reg  valid_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 357:24]
  wire  _GEN_20 = faddModule_1_io_out_valid & firstPostReady_0 ? 1'h0 : valid_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 358:49 359:13 357:24]
  wire  _GEN_21 = prehandshaked_1 | _GEN_20; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 361:25 362:13]
  reg  a_flag_1_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
  reg  a_flag_1_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
  reg  a_flag_1_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
  wire  fmulResult_2_inter_flags_isNaN = fmul_2_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 35:24 45:19]
  wire  fmulResult_2_inter_flags_isInf = fmul_2_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 35:24 45:19]
  wire  fmulResult_2_inter_flags_isInv = fmul_2_io_toFADD_bits_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 35:24 45:19]
  reg  b_flag_1_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
  reg  b_flag_1_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
  reg  b_flag_1_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
  wire  fmulResult_3_inter_flags_isNaN = fmul_3_io_toFADD_bits_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 35:24 45:19]
  wire  fmulResult_3_inter_flags_isInf = fmul_3_io_toFADD_bits_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 35:24 45:19]
  wire  fmulResult_3_inter_flags_isInv = fmul_3_io_toFADD_bits_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 35:24 45:19]
  reg [31:0] faddModule_io_in_bits_a_r_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 372:41]
  wire [31:0] fmulResult_2_fp_prod = fmul_2_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 35:24 45:19]
  reg [31:0] faddModule_io_in_bits_b_r_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 373:41]
  wire [31:0] fmulResult_3_fp_prod = fmul_3_io_toFADD_bits_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 35:24 45:19]
  wire  firstFaddValid_0 = faddModule_io_out_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 53:28 66:25]
  wire  firstFaddValid_1 = faddModule_1_io_out_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 53:28 66:25]
  wire  _T_2 = firstFaddValid_0 & firstFaddValid_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 104:108]
  wire  prehandshaked_2 = _T_2 & faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 356:35]
  reg  valid_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 357:24]
  wire  _GEN_32 = faddModule_2_io_out_valid & io_out_ready ? 1'h0 : valid_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 358:49 359:13 357:24]
  wire  _GEN_33 = prehandshaked_2 | _GEN_32; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 361:25 362:13]
  reg [31:0] faddModule_io_in_bits_a_r_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 372:41]
  wire [31:0] firstAddResult_0 = faddModule_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 52:28 65:25]
  reg [31:0] faddModule_io_in_bits_b_r_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 373:41]
  wire [31:0] firstAddResult_1 = faddModule_1_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 52:28 65:25]
  FMULnoRound fmul ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
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
  FMULnoRound fmul_1 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
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
  FMULnoRound fmul_2 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
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
  FMULnoRound fmul_3 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 40:22]
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
  FADD faddModule ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
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
  FADD faddModule_1 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
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
  FADD faddModule_2 ( // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 354:28]
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
  assign io_in_ready = fmulReady_0 & fmulReady_1 & fmulReady_2 & fmulReady_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 49:36]
  assign io_out_valid = faddModule_2_io_out_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 107:16]
  assign io_out_bits_fflags = faddModule_2_io_out_bits_fflags; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 106:22]
  assign io_out_bits_result = faddModule_2_io_out_bits_result; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 105:22]
  assign fmul_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 43:22]
  assign fmul_io_in_bits_a = vec_a_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 41:23]
  assign fmul_io_in_bits_b = vec_b_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 42:23]
  assign fmul_io_toFADD_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 44:52]
  assign fmul_1_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 43:22]
  assign fmul_1_io_in_bits_a = vec_a_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 41:23]
  assign fmul_1_io_in_bits_b = vec_b_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 42:23]
  assign fmul_1_io_toFADD_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 44:52]
  assign fmul_2_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 43:22]
  assign fmul_2_io_in_bits_a = vec_a_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 41:23]
  assign fmul_2_io_in_bits_b = vec_b_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 42:23]
  assign fmul_2_io_toFADD_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 44:52]
  assign fmul_3_io_in_valid = io_in_valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 43:22]
  assign fmul_3_io_in_bits_a = vec_a_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 41:23]
  assign fmul_3_io_in_bits_b = vec_b_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 42:23]
  assign fmul_3_io_toFADD_ready = firstFaddReady_0 & firstFaddReady_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 44:52]
  assign faddModule_io_in_valid = valid; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 370:28]
  assign faddModule_io_in_bits_a = faddModule_io_in_bits_a_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 372:29]
  assign faddModule_io_in_bits_b = faddModule_io_in_bits_b_r; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 373:29]
  assign faddModule_io_in_bits_roundingMode = io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 374:40]
  assign faddModule_io_in_bits_a_inter_valid = 1'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 375:41]
  assign faddModule_io_in_bits_b_inter_valid = 1'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 376:41]
  assign faddModule_io_in_bits_a_inter_flags_isNaN = a_flag_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 377:41]
  assign faddModule_io_in_bits_a_inter_flags_isInf = a_flag_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 377:41]
  assign faddModule_io_in_bits_a_inter_flags_isInv = a_flag_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 377:41]
  assign faddModule_io_in_bits_b_inter_flags_isNaN = b_flag_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 378:41]
  assign faddModule_io_in_bits_b_inter_flags_isInf = b_flag_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 378:41]
  assign faddModule_io_in_bits_b_inter_flags_isInv = b_flag_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 378:41]
  assign faddModule_io_out_ready = faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 54:28 77:19]
  assign faddModule_1_io_in_valid = valid_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 370:28]
  assign faddModule_1_io_in_bits_a = faddModule_io_in_bits_a_r_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 372:29]
  assign faddModule_1_io_in_bits_b = faddModule_io_in_bits_b_r_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 373:29]
  assign faddModule_1_io_in_bits_roundingMode = io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 374:40]
  assign faddModule_1_io_in_bits_a_inter_valid = 1'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 375:41]
  assign faddModule_1_io_in_bits_b_inter_valid = 1'h1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 376:41]
  assign faddModule_1_io_in_bits_a_inter_flags_isNaN = a_flag_1_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 377:41]
  assign faddModule_1_io_in_bits_a_inter_flags_isInf = a_flag_1_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 377:41]
  assign faddModule_1_io_in_bits_a_inter_flags_isInv = a_flag_1_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 377:41]
  assign faddModule_1_io_in_bits_b_inter_flags_isNaN = b_flag_1_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 378:41]
  assign faddModule_1_io_in_bits_b_inter_flags_isInf = b_flag_1_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 378:41]
  assign faddModule_1_io_in_bits_b_inter_flags_isInv = b_flag_1_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 378:41]
  assign faddModule_1_io_out_ready = faddModule_2_io_in_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 54:28 77:19]
  assign faddModule_2_io_in_valid = valid_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 370:28]
  assign faddModule_2_io_in_bits_a = faddModule_io_in_bits_a_r_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 372:29]
  assign faddModule_2_io_in_bits_b = faddModule_io_in_bits_b_r_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 373:29]
  assign faddModule_2_io_in_bits_roundingMode = io_in_bits_roundingMode; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 374:40]
  assign faddModule_2_io_in_bits_a_inter_valid = 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 375:41]
  assign faddModule_2_io_in_bits_b_inter_valid = 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 376:41]
  assign faddModule_2_io_in_bits_a_inter_flags_isNaN = 1'h0;
  assign faddModule_2_io_in_bits_a_inter_flags_isInf = 1'h0;
  assign faddModule_2_io_in_bits_a_inter_flags_isInv = 1'h0;
  assign faddModule_2_io_in_bits_b_inter_flags_isNaN = 1'h0;
  assign faddModule_2_io_in_bits_b_inter_flags_isInf = 1'h0;
  assign faddModule_2_io_in_bits_b_inter_flags_isInv = 1'h0;
  assign faddModule_2_io_out_ready = io_out_ready; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 379:29]
  always @(posedge clock) begin
    if (handshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 32:24]
      vec_a_0 <= io_in_bits_vec_a_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 32:24]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 32:24]
      vec_a_1 <= io_in_bits_vec_a_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 32:24]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 32:24]
      vec_a_2 <= io_in_bits_vec_a_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 32:24]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 32:24]
      vec_a_3 <= io_in_bits_vec_a_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 32:24]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 33:24]
      vec_b_0 <= io_in_bits_vec_b_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 33:24]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 33:24]
      vec_b_1 <= io_in_bits_vec_b_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 33:24]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 33:24]
      vec_b_2 <= io_in_bits_vec_b_2; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 33:24]
    end
    if (handshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 33:24]
      vec_b_3 <= io_in_bits_vec_b_3; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/TensorCore/utils/DotProdUnit.scala 33:24]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 357:24]
      valid <= 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 357:24]
    end else begin
      valid <= _GEN_9;
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
      a_flag_isNaN <= fmulResult_0_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
      a_flag_isInf <= fmulResult_0_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
      a_flag_isInv <= fmulResult_0_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
      b_flag_isNaN <= fmulResult_1_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
      b_flag_isInf <= fmulResult_1_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
      b_flag_isInv <= fmulResult_1_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 372:41]
      faddModule_io_in_bits_a_r <= fmulResult_0_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 372:41]
    end
    if (prehandshaked) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 373:41]
      faddModule_io_in_bits_b_r <= fmulResult_1_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 373:41]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 357:24]
      valid_1 <= 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 357:24]
    end else begin
      valid_1 <= _GEN_21;
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
      a_flag_1_isNaN <= fmulResult_2_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
      a_flag_1_isInf <= fmulResult_2_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
      a_flag_1_isInv <= fmulResult_2_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 367:55]
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
      b_flag_1_isNaN <= fmulResult_3_inter_flags_isNaN; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
      b_flag_1_isInf <= fmulResult_3_inter_flags_isInf; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
      b_flag_1_isInv <= fmulResult_3_inter_flags_isInv; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 368:55]
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 372:41]
      faddModule_io_in_bits_a_r_1 <= fmulResult_2_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 372:41]
    end
    if (prehandshaked_1) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 373:41]
      faddModule_io_in_bits_b_r_1 <= fmulResult_3_fp_prod; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 373:41]
    end
    if (reset) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 357:24]
      valid_2 <= 1'h0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 357:24]
    end else begin
      valid_2 <= _GEN_33;
    end
    if (prehandshaked_2) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 372:41]
      faddModule_io_in_bits_a_r_2 <= firstAddResult_0; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 372:41]
    end
    if (prehandshaked_2) begin // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 373:41]
      faddModule_io_in_bits_b_r_2 <= firstAddResult_1; // @[Users/liuyuxuan/proc/TensorCore/src/main/scala/fudian/FADD.scala 373:41]
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
  vec_a_0 = _RAND_0[15:0];
  _RAND_1 = {1{`RANDOM}};
  vec_a_1 = _RAND_1[15:0];
  _RAND_2 = {1{`RANDOM}};
  vec_a_2 = _RAND_2[15:0];
  _RAND_3 = {1{`RANDOM}};
  vec_a_3 = _RAND_3[15:0];
  _RAND_4 = {1{`RANDOM}};
  vec_b_0 = _RAND_4[15:0];
  _RAND_5 = {1{`RANDOM}};
  vec_b_1 = _RAND_5[15:0];
  _RAND_6 = {1{`RANDOM}};
  vec_b_2 = _RAND_6[15:0];
  _RAND_7 = {1{`RANDOM}};
  vec_b_3 = _RAND_7[15:0];
  _RAND_8 = {1{`RANDOM}};
  valid = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  a_flag_isNaN = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  a_flag_isInf = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  a_flag_isInv = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  b_flag_isNaN = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  b_flag_isInf = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  b_flag_isInv = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  faddModule_io_in_bits_a_r = _RAND_15[31:0];
  _RAND_16 = {1{`RANDOM}};
  faddModule_io_in_bits_b_r = _RAND_16[31:0];
  _RAND_17 = {1{`RANDOM}};
  valid_1 = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  a_flag_1_isNaN = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  a_flag_1_isInf = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  a_flag_1_isInv = _RAND_20[0:0];
  _RAND_21 = {1{`RANDOM}};
  b_flag_1_isNaN = _RAND_21[0:0];
  _RAND_22 = {1{`RANDOM}};
  b_flag_1_isInf = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  b_flag_1_isInv = _RAND_23[0:0];
  _RAND_24 = {1{`RANDOM}};
  faddModule_io_in_bits_a_r_1 = _RAND_24[31:0];
  _RAND_25 = {1{`RANDOM}};
  faddModule_io_in_bits_b_r_1 = _RAND_25[31:0];
  _RAND_26 = {1{`RANDOM}};
  valid_2 = _RAND_26[0:0];
  _RAND_27 = {1{`RANDOM}};
  faddModule_io_in_bits_a_r_2 = _RAND_27[31:0];
  _RAND_28 = {1{`RANDOM}};
  faddModule_io_in_bits_b_r_2 = _RAND_28[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
