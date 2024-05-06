// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystem.h for the primary calling header

#include "verilated.h"

#include "VSystem__Syms.h"
#include "VSystem_DotProdUnit.h"

VL_ATTR_COLD void VSystem_DotProdUnit___ctor_var_reset(VSystem_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VSystem_DotProdUnit___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_in_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_in_bits_vec_a_0 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__io_in_bits_vec_a_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__io_in_bits_vec_a_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__io_in_bits_vec_a_3 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__io_in_bits_vec_b_0 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__io_in_bits_vec_b_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__io_in_bits_vec_b_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__io_in_bits_vec_b_3 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__io_in_bits_c = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_in_bits_mixPc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_in_bits_rowtag = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_out_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_out_bits_mixPc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_rowtag = VL_RAND_RESET_I(2);
    vlSelf->__PVT__s1_handshaked_s2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mixPc_s2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rowtag_s2 = VL_RAND_RESET_I(2);
    vlSelf->__PVT__valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_flag_isNaN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_flag_isInf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__b_flag_isNaN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__b_flag_isInf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__faddModule_io_in_bits_a_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__faddModule_io_in_bits_b_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__prehandshaked_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_flag_1_isNaN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__a_flag_1_isInf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__b_flag_1_isNaN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__b_flag_1_isInf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__faddModule_io_in_bits_a_r_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__faddModule_io_in_bits_b_r_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__firstAddResult_2_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__prehandshaked_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mixPc_this = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rowtag_this = VL_RAND_RESET_I(2);
    vlSelf->__PVT__valid_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_32 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__faddModule_io_in_bits_a_r_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__faddModule_io_in_bits_b_r_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__addResult_1_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__posthandshaked = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mixPc_sx = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rowtag_sx = VL_RAND_RESET_I(2);
    vlSelf->__PVT__valid_3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___T_15 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_40 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__faddModule_io_in_bits_a_r_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__faddModule_io_in_bits_b_r_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mixPc_es = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rowtag_es = VL_RAND_RESET_I(2);
    vlSelf->__PVT__atResult_es = VL_RAND_RESET_I(32);
    vlSelf->__PVT__esValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_49 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__prehandshaked_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__valid_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT___GEN_51 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fcvt_io_in_bits_in_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__fmul__DOT__hasZero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul__DOT__resultSign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul__DOT__resultExpNoShift = VL_RAND_RESET_I(8);
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = VL_RAND_RESET_I(22);
    vlSelf->__PVT__fmul__DOT__lzcRaw = VL_RAND_RESET_I(4);
    vlSelf->__PVT__fmul__DOT__lzc = VL_RAND_RESET_I(4);
    vlSelf->__PVT__fmul__DOT__shiftLimit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul__DOT___resultSigShifted_T = VL_RAND_RESET_I(8);
    vlSelf->__PVT__fmul__DOT__hasNaN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul__DOT__hasInf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul__DOT__nan_result = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_1__DOT__hasZero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_1__DOT__resultSign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_1__DOT__resultExpNoShift = VL_RAND_RESET_I(8);
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = VL_RAND_RESET_I(22);
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = VL_RAND_RESET_I(4);
    vlSelf->__PVT__fmul_1__DOT__lzc = VL_RAND_RESET_I(4);
    vlSelf->__PVT__fmul_1__DOT__shiftLimit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T = VL_RAND_RESET_I(8);
    vlSelf->__PVT__fmul_1__DOT__hasNaN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_1__DOT__hasInf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_1__DOT__nan_result = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_2__DOT__hasZero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_2__DOT__resultSign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_2__DOT__resultExpNoShift = VL_RAND_RESET_I(8);
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = VL_RAND_RESET_I(22);
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = VL_RAND_RESET_I(4);
    vlSelf->__PVT__fmul_2__DOT__lzc = VL_RAND_RESET_I(4);
    vlSelf->__PVT__fmul_2__DOT__shiftLimit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T = VL_RAND_RESET_I(8);
    vlSelf->__PVT__fmul_2__DOT__hasNaN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_2__DOT__hasInf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_2__DOT__nan_result = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_3__DOT__hasZero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_3__DOT__resultSign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = VL_RAND_RESET_I(8);
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = VL_RAND_RESET_I(22);
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = VL_RAND_RESET_I(4);
    vlSelf->__PVT__fmul_3__DOT__lzc = VL_RAND_RESET_I(4);
    vlSelf->__PVT__fmul_3__DOT__shiftLimit = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T = VL_RAND_RESET_I(8);
    vlSelf->__PVT__fmul_3__DOT__hasNaN = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_3__DOT__hasInf = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fmul_3__DOT__nan_result = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = VL_RAND_RESET_I(10);
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out = VL_RAND_RESET_I(4);
    vlSelf->__PVT__fcvt__DOT__fp_in_exp = VL_RAND_RESET_I(5);
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fcvt__DOT___result_T_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in = VL_RAND_RESET_I(12);
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in = VL_RAND_RESET_I(10);
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T = VL_RAND_RESET_I(12);
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up = VL_RAND_RESET_I(1);
}
