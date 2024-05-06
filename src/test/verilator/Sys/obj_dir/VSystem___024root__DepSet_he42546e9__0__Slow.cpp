// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystem.h for the primary calling header

#include "verilated.h"

#include "VSystem__Syms.h"
#include "VSystem___024root.h"

VL_ATTR_COLD void VSystem___024root___eval_static(VSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystem___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSystem___024root___eval_initial__TOP(VSystem___024root* vlSelf);

VL_ATTR_COLD void VSystem___024root___eval_initial(VSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystem___024root___eval_initial\n"); );
    // Body
    VSystem___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VSystem___024root___eval_initial__TOP(VSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystem___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_1;
    // Body
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x5f737263U;
    __Vtemp_1[2U] = 0x74726978U;
    __Vtemp_1[3U] = 0x632f6d61U;
    __Vtemp_1[4U] = 0x2e2f7372U;
    VL_READMEM_N(true, 64, 256, 0, VL_CVT_PACK_STR_NW(5, __Vtemp_1)
                 ,  &(vlSelf->System__DOT__rf), 0, ~0ULL);
}

VL_ATTR_COLD void VSystem___024root___eval_final(VSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystem___024root___eval_final\n"); );
}

VL_ATTR_COLD void VSystem___024root___eval_triggers__stl(VSystem___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSystem___024root___dump_triggers__stl(VSystem___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VSystem___024root___eval_stl(VSystem___024root* vlSelf);

VL_ATTR_COLD void VSystem___024root___eval_settle(VSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystem___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VSystem___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VSystem___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("System.v", 3510, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VSystem___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSystem___024root___dump_triggers__stl(VSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystem___024root___dump_triggers__stl\n"); );
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
VL_ATTR_COLD void VSystem___024root___dump_triggers__ico(VSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystem___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VSystem___024root___dump_triggers__act(VSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystem___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VSystem___024root___dump_triggers__nba(VSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystem___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSystem___024root___ctor_var_reset(VSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystem___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_mixPc = VL_RAND_RESET_I(1);
    vlSelf->io_exec_en = VL_RAND_RESET_I(1);
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
    vlSelf->System__DOT__top_io_out_valid = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->System__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->System__DOT__rf_a_tile_v_3_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->System__DOT__rf_MPORT_en = VL_RAND_RESET_I(1);
    vlSelf->System__DOT__set = VL_RAND_RESET_I(2);
    vlSelf->System__DOT__step = VL_RAND_RESET_I(2);
    vlSelf->System__DOT__out_set = VL_RAND_RESET_I(2);
    vlSelf->System__DOT__out_step = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_a_0);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_a_1);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_a_2);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_a_3);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_a_4);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_a_5);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_a_6);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_a_7);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_b_0);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_b_2);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_b_4);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_b_6);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_c_0);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_c_1);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_c_2);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_c_3);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_c_4);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_c_5);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_c_6);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__matrix_c_7);
    vlSelf->System__DOT__matBsel = VL_RAND_RESET_I(1);
    vlSelf->System__DOT___in_valid_T_2 = VL_RAND_RESET_I(2);
    vlSelf->System__DOT__top_io_in_valid_REG = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(384, vlSelf->System__DOT___matrix_a_0_T_1);
    VL_RAND_RESET_W(256, vlSelf->System__DOT___matrix_b_0_T);
    VL_RAND_RESET_W(384, vlSelf->System__DOT___matrix_a_1_T_1);
    VL_RAND_RESET_W(256, vlSelf->System__DOT___matrix_b_2_T);
    VL_RAND_RESET_W(384, vlSelf->System__DOT___matrix_a_4_T_1);
    VL_RAND_RESET_W(256, vlSelf->System__DOT___matrix_b_4_T);
    VL_RAND_RESET_W(384, vlSelf->System__DOT___matrix_a_5_T_1);
    VL_RAND_RESET_W(256, vlSelf->System__DOT___matrix_b_6_T);
    vlSelf->System__DOT___set_T_1 = VL_RAND_RESET_I(2);
    vlSelf->System__DOT___step_T_1 = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(384, vlSelf->System__DOT___GEN_9);
    VL_RAND_RESET_W(384, vlSelf->System__DOT___GEN_24);
    VL_RAND_RESET_W(384, vlSelf->System__DOT___GEN_31);
    VL_RAND_RESET_W(384, vlSelf->System__DOT___GEN_42);
    VL_RAND_RESET_W(384, vlSelf->System__DOT___GEN_53);
    VL_RAND_RESET_W(384, vlSelf->System__DOT___GEN_68);
    VL_RAND_RESET_W(384, vlSelf->System__DOT___GEN_75);
    VL_RAND_RESET_W(384, vlSelf->System__DOT___GEN_86);
    vlSelf->System__DOT___out_set_T_1 = VL_RAND_RESET_I(2);
    vlSelf->System__DOT___out_step_T_1 = VL_RAND_RESET_I(2);
    vlSelf->System__DOT__initvar = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data);
    VL_RAND_RESET_W(256, vlSelf->System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data);
    vlSelf->__Vdlyvval__System__DOT__rf__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v0 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v1 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v1 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v2 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v2 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v3 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v3 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v4 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v4 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v5 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v5 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v6 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v6 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v7 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v7 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v8 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v8 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v9 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v9 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v10 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v10 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v11 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v11 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v12 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v12 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v13 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v13 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v14 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v14 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v15 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v15 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v16 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v16 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v17 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v17 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v18 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v18 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v19 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v19 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v20 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v20 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v21 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v21 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v22 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v22 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v23 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v23 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v24 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v24 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v25 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v25 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v26 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v26 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v27 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v27 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v28 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v28 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v29 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v29 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v30 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v30 = 0;
    vlSelf->__Vdlyvval__System__DOT__rf__v31 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__System__DOT__rf__v31 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
