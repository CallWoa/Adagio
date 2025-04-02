// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_DotProdUnit_1.h"

VL_ATTR_COLD void VTop_DotProdUnit_1___ctor_var_reset(VTop_DotProdUnit_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit_1___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clock = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
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
    vlSelf->__PVT__io_in_bits_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_in_bits_ctrl_mixPc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_out_bits_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pipeline_reg_io_out_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg_1_io_out_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg_2_io_out_ready = VL_RAND_RESET_I(1);
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
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = VL_RAND_RESET_I(10);
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out = VL_RAND_RESET_I(4);
    vlSelf->__PVT__fcvt__DOT__fp_in_exp = VL_RAND_RESET_I(5);
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fcvt__DOT___result_T_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg__DOT__validReg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag = VL_RAND_RESET_I(2);
    vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src = VL_RAND_RESET_I(5);
    vlSelf->__PVT__pipeline_reg__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg_1__DOT__validReg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag = VL_RAND_RESET_I(2);
    vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src = VL_RAND_RESET_I(5);
    vlSelf->__PVT__pipeline_reg_1__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg_2__DOT__validReg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag = VL_RAND_RESET_I(2);
    vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src = VL_RAND_RESET_I(5);
    vlSelf->__PVT__pipeline_reg_2__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg_3__DOT__validReg = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag = VL_RAND_RESET_I(2);
    vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src = VL_RAND_RESET_I(5);
    vlSelf->__PVT__pipeline_reg_3__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in = VL_RAND_RESET_I(12);
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in = VL_RAND_RESET_I(10);
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up = VL_RAND_RESET_I(1);
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T = VL_RAND_RESET_I(12);
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up = VL_RAND_RESET_I(1);
}
