// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop___024root.h"

VL_ATTR_COLD void VTop___024root___eval_static(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_static\n"); );
}

VL_ATTR_COLD void VTop___024root___eval_initial(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VTop___024root___eval_final(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_final\n"); );
}

VL_ATTR_COLD void VTop___024root___eval_triggers__stl(VTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VTop___024root___eval_stl(VTop___024root* vlSelf);

VL_ATTR_COLD void VTop___024root___eval_settle(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VTop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("Top.v", 3305, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VTop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__stl(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VTop___024root___ctor_var_reset(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_in_ready = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b);
    VL_RAND_RESET_W(256, vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c);
    vlSelf->io_in_bits_ctrl_matBSel = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_ctrl_mixPcMode = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_ctrl_roundingMode = VL_RAND_RESET_I(1);
    vlSelf->io_out_ready = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(256, vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data);
    VL_RAND_RESET_W(256, vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data);
    VL_RAND_RESET_W(256, vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data);
    VL_RAND_RESET_W(256, vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data);
    VL_RAND_RESET_W(256, vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data);
    VL_RAND_RESET_W(256, vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data);
    VL_RAND_RESET_W(256, vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data);
    VL_RAND_RESET_W(256, vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data);
    VL_RAND_RESET_W(256, vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data);
    VL_RAND_RESET_W(256, vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data);
    VL_RAND_RESET_W(256, vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data);
    VL_RAND_RESET_W(256, vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data);
    VL_RAND_RESET_W(256, vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data);
    VL_RAND_RESET_W(256, vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data);
    VL_RAND_RESET_W(256, vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data);
    VL_RAND_RESET_W(256, vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
