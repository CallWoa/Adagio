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
    vlSelf->io_in_bits_roundingMode = VL_RAND_RESET_I(3);
    vlSelf->io_out_ready = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->io_out_bits_threadgroup0_matrix_d_data);
    VL_RAND_RESET_W(256, vlSelf->io_out_bits_threadgroup4_matrix_d_data);
    vlSelf->__PVT__tg_io_in_ready = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->__PVT__tg_io_in_bits_matrix_b_data);
    vlSelf->__PVT__tg_1_io_in_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg__DOT__dp_in_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg__DOT__dp_in_va_0 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tg__DOT__dp_in_va_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tg__DOT__dp_in_va_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tg__DOT__dp_in_va_3 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tg__DOT__dp_in_c_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tg__DOT__dp_in_c_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tg__DOT__dp_in_c_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tg__DOT__dp_in_c_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tg__DOT__matrix_d_buffer_0 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg__DOT__matrix_d_buffer_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg__DOT__matrix_d_buffer_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg__DOT__matrix_d_buffer_3 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg__DOT__dp_in_rowtag = VL_RAND_RESET_I(2);
    vlSelf->__PVT__tg__DOT__outValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__tg__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg__DOT___T_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg__DOT___GEN_23 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__tg__DOT___GEN_67 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg__DOT__result_fp16 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg__DOT__result_fp32_lo = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg__DOT__result_fp32_hi = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg__DOT___GEN_74 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg_1__DOT__dp_in_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = VL_RAND_RESET_I(16);
    vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_0 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_3 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = VL_RAND_RESET_I(2);
    vlSelf->__PVT__tg_1__DOT__outValid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg_1__DOT___GEN_0 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg_1__DOT__state = VL_RAND_RESET_I(3);
    vlSelf->__PVT__tg_1__DOT___T_2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg_1__DOT___T_9 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg_1__DOT___GEN_23 = VL_RAND_RESET_I(3);
    vlSelf->__PVT__tg_1__DOT___GEN_67 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__tg_1__DOT__result_fp16 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg_1__DOT__result_fp32_lo = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg_1__DOT__result_fp32_hi = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__tg_1__DOT___GEN_74 = VL_RAND_RESET_Q(64);
}
