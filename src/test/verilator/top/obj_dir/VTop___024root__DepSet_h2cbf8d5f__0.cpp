// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop__Syms.h"
#include "VTop___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval_triggers__ico(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTop___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VTop___024root___ico_sequent__TOP__1(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->io_in_ready = ((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1_io_in_ready) 
                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_io_in_ready)) 
                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1_io_in_ready) 
                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_ready))) 
                           & (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1_io_in_ready) 
                               & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_ready)) 
                              & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1_io_in_ready) 
                                 & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_io_in_ready))));
}

void VTop___024root___ico_sequent__TOP__0(VTop___024root* vlSelf);
void VTop_Octet___ico_sequent__TOP__Top__DOT__tc__DOT__ot__0(VTop_Octet* vlSelf);
void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__0(VTop_DotProdUnit* vlSelf);

void VTop___024root___eval_ico(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VTop___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VTop_Octet___ico_sequent__TOP__Top__DOT__tc__DOT__ot__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot));
        VTop_Octet___ico_sequent__TOP__Top__DOT__tc__DOT__ot__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1));
        VTop_Octet___ico_sequent__TOP__Top__DOT__tc__DOT__ot__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot));
        VTop_Octet___ico_sequent__TOP__Top__DOT__tc__DOT__ot__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2));
        VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3));
        VTop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf);
#endif  // VL_DEBUG

void VTop___024root___eval_triggers__act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))));
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VTop___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[0U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__matrix_d_3);
    vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[1U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__matrix_d_3 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[2U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__matrix_d_2);
    vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[3U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__matrix_d_2 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[4U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__matrix_d_1);
    vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[5U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__matrix_d_1 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[6U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__matrix_d_0);
    vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[7U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__matrix_d_0 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[0U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__matrix_d_3);
    vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[1U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__matrix_d_3 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[2U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__matrix_d_2);
    vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[3U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__matrix_d_2 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[4U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__matrix_d_1);
    vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[5U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__matrix_d_1 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[6U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__matrix_d_0);
    vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[7U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__matrix_d_0 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[0U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__matrix_d_3);
    vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[1U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__matrix_d_3 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[2U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__matrix_d_2);
    vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[3U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__matrix_d_2 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[4U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__matrix_d_1);
    vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[5U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__matrix_d_1 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[6U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__matrix_d_0);
    vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[7U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__matrix_d_0 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[0U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__matrix_d_3);
    vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[1U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__matrix_d_3 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[2U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__matrix_d_2);
    vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[3U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__matrix_d_2 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[4U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__matrix_d_1);
    vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[5U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__matrix_d_1 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[6U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__matrix_d_0);
    vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[7U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__matrix_d_0 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[0U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__matrix_d_3);
    vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[1U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__matrix_d_3 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[2U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__matrix_d_2);
    vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[3U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__matrix_d_2 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[4U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__matrix_d_1);
    vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[5U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__matrix_d_1 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[6U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__matrix_d_0);
    vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[7U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__matrix_d_0 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[0U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__matrix_d_3);
    vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[1U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__matrix_d_3 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[2U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__matrix_d_2);
    vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[3U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__matrix_d_2 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[4U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__matrix_d_1);
    vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[5U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__matrix_d_1 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[6U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__matrix_d_0);
    vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[7U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__matrix_d_0 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[0U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__matrix_d_3);
    vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[1U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__matrix_d_3 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[2U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__matrix_d_2);
    vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[3U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__matrix_d_2 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[4U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__matrix_d_1);
    vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[5U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__matrix_d_1 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[6U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__matrix_d_0);
    vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[7U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__matrix_d_0 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[0U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__matrix_d_3);
    vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[1U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__matrix_d_3 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[2U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__matrix_d_2);
    vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[3U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__matrix_d_2 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[4U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__matrix_d_1);
    vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[5U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__matrix_d_1 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[6U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__matrix_d_0);
    vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[7U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__matrix_d_0 
                   >> 0x20U));
    vlSelf->io_out_valid = ((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__outValid) 
                              & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__outValid)) 
                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__outValid) 
                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__outValid))) 
                            & (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__outValid) 
                                & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg__DOT__outValid)) 
                               & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg_1__DOT__outValid) 
                                  & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot.__PVT__tg__DOT__outValid))));
}

void VTop_Octet___nba_sequent__TOP__Top__DOT__tc__DOT__ot__0(VTop_Octet* vlSelf);
void VTop_Octet___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__0(VTop_Octet* vlSelf);
void VTop_Octet___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__0(VTop_Octet* vlSelf);
void VTop_Octet___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__0(VTop_Octet* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__0(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__0(VTop_DotProdUnit* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_Octet___nba_sequent__TOP__Top__DOT__tc__DOT__ot__1(VTop_Octet* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_2__0(VTop_FADD* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__1(VTop_DotProdUnit* vlSelf);
void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__1(VTop_DotProdUnit* vlSelf);

void VTop___024root___eval_nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTop_Octet___nba_sequent__TOP__Top__DOT__tc__DOT__ot__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VTop_Octet___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1));
        VTop_Octet___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot));
        VTop_Octet___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3));
        VTop___024root___nba_sequent__TOP__0(vlSelf);
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule_2));
        VTop_Octet___nba_sequent__TOP__Top__DOT__tc__DOT__ot__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule_2));
        VTop_Octet___nba_sequent__TOP__Top__DOT__tc__DOT__ot__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule_2));
        VTop_Octet___nba_sequent__TOP__Top__DOT__tc__DOT__ot__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule_2));
        VTop_Octet___nba_sequent__TOP__Top__DOT__tc__DOT__ot__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule_2));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3));
        VTop___024root___ico_sequent__TOP__1(vlSelf);
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2));
        VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3));
    }
}
