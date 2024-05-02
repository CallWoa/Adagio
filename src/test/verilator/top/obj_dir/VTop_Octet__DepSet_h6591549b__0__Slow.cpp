// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_Octet.h"

VL_ATTR_COLD void VTop_Octet___ctor_var_reset(VTop_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Octet___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_in_ready = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_threadgroup0_matrix_a_data);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_threadgroup0_matrix_b_data);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_threadgroup0_matrix_c_data);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_threadgroup4_matrix_a_data);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_threadgroup4_matrix_b_data);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_threadgroup4_matrix_c_data);
    vlSelf->io_in_bits_matBSel = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_mixPcMode = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_roundingMode = VL_RAND_RESET_I(1);
    vlSelf->io_out_ready = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->io_out_bits_threadgroup0_matrix_d_data);
    VL_RAND_RESET_W(256, vlSelf->io_out_bits_threadgroup4_matrix_d_data);
    vlSelf->__PVT__tg_io_in_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg_1_io_in_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data);
    VL_RAND_RESET_W(256, vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data);
    VL_RAND_RESET_W(256, vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data);
    vlSelf->__PVT__tg_io_in_bits_mixPcMode_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg_io_in_bits_roundingMode_r = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data);
    VL_RAND_RESET_W(256, vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data);
    VL_RAND_RESET_W(256, vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data);
    vlSelf->__PVT__tg_io_in_bits_mixPcMode_r_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg_io_in_bits_roundingMode_r_1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_0 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_3 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_c = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_rowtag = VL_RAND_RESET_I(2);
    vlSelf->__PVT__tg__DOT__dp_1_io_in_bits_c = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tg__DOT__dp_2_io_in_bits_c = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tg__DOT__dp_3_io_in_bits_c = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tg__DOT__prehandshaked = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg__DOT__matrix_d_0 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg__DOT__matrix_d_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg__DOT__matrix_d_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg__DOT__matrix_d_3 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg__DOT__outValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__tg__DOT__dp_in_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg__DOT___GEN_8 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__tg__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg__DOT___GEN_15 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__tg__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg__DOT__result_fp16 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg__DOT__result_fp32_hi = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg__DOT__result_fp32_lo = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg__DOT___GEN_29 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_c = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_rowtag = VL_RAND_RESET_I(2);
    vlSelf->__PVT__tg_1__DOT__dp_1_io_in_bits_c = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tg_1__DOT__dp_2_io_in_bits_c = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tg_1__DOT__dp_3_io_in_bits_c = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tg_1__DOT__prehandshaked = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg_1__DOT__matrix_d_0 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg_1__DOT__matrix_d_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg_1__DOT__matrix_d_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg_1__DOT__matrix_d_3 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg_1__DOT__outValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg_1__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg_1__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__tg_1__DOT__dp_in_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg_1__DOT___GEN_5 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg_1__DOT___GEN_8 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__tg_1__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg_1__DOT___GEN_15 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__tg_1__DOT___GEN_16 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg_1__DOT__result_fp16 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg_1__DOT__result_fp32_hi = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg_1__DOT__result_fp32_lo = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg_1__DOT___GEN_29 = VL_RAND_RESET_Q(64);
}
