// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDotProdUnit.h for the primary calling header

#include "verilated.h"

#include "VDotProdUnit__Syms.h"
#include "VDotProdUnit___024root.h"

VL_INLINE_OPT void VDotProdUnit___024root___ico_sequent__TOP__0(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_in_ready = vlSelf->io_out_ready;
    vlSelf->DotProdUnit__DOT__prehandshaked_2 = (((IData)(vlSelf->DotProdUnit__DOT__valid_1) 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__valid)) 
                                                 & (IData)(vlSelf->io_out_ready));
    vlSelf->DotProdUnit__DOT__prehandshaked_1 = ((IData)(vlSelf->io_in_valid) 
                                                 & (IData)(vlSelf->io_out_ready));
    vlSelf->DotProdUnit__DOT__handshaked = ((IData)(vlSelf->io_in_valid) 
                                            & (IData)(vlSelf->io_in_ready));
    vlSelf->DotProdUnit__DOT___GEN_33 = ((IData)(vlSelf->DotProdUnit__DOT__prehandshaked_2) 
                                         | ((~ ((IData)(vlSelf->DotProdUnit__DOT__valid_2) 
                                                & (IData)(vlSelf->io_out_ready))) 
                                            & (IData)(vlSelf->DotProdUnit__DOT__valid_2)));
    vlSelf->DotProdUnit__DOT___GEN_9 = ((IData)(vlSelf->DotProdUnit__DOT__prehandshaked_1) 
                                        | ((~ ((IData)(vlSelf->io_out_ready) 
                                               & (IData)(vlSelf->DotProdUnit__DOT__valid))) 
                                           & (IData)(vlSelf->DotProdUnit__DOT__valid)));
    vlSelf->DotProdUnit__DOT___GEN_21 = ((IData)(vlSelf->DotProdUnit__DOT__prehandshaked_1) 
                                         | ((~ ((IData)(vlSelf->DotProdUnit__DOT__valid_1) 
                                                & (IData)(vlSelf->io_out_ready))) 
                                            & (IData)(vlSelf->DotProdUnit__DOT__valid_1)));
}

void VDotProdUnit___024root___eval_act(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___eval_act\n"); );
}

VL_INLINE_OPT void VDotProdUnit___024root___nba_sequent__TOP__2(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___nba_sequent__TOP__2\n"); );
    // Body
    vlSelf->DotProdUnit__DOT___GEN_9 = ((IData)(vlSelf->DotProdUnit__DOT__prehandshaked_1) 
                                        | ((~ ((IData)(vlSelf->io_out_ready) 
                                               & (IData)(vlSelf->DotProdUnit__DOT__valid))) 
                                           & (IData)(vlSelf->DotProdUnit__DOT__valid)));
    vlSelf->DotProdUnit__DOT___GEN_21 = ((IData)(vlSelf->DotProdUnit__DOT__prehandshaked_1) 
                                         | ((~ ((IData)(vlSelf->DotProdUnit__DOT__valid_1) 
                                                & (IData)(vlSelf->io_out_ready))) 
                                            & (IData)(vlSelf->DotProdUnit__DOT__valid_1)));
}

void VDotProdUnit___024root___eval_triggers__ico(VDotProdUnit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VDotProdUnit___024root___dump_triggers__ico(VDotProdUnit___024root* vlSelf);
#endif  // VL_DEBUG
void VDotProdUnit___024root___eval_ico(VDotProdUnit___024root* vlSelf);
void VDotProdUnit___024root___eval_triggers__act(VDotProdUnit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VDotProdUnit___024root___dump_triggers__act(VDotProdUnit___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VDotProdUnit___024root___dump_triggers__nba(VDotProdUnit___024root* vlSelf);
#endif  // VL_DEBUG
void VDotProdUnit___024root___eval_nba(VDotProdUnit___024root* vlSelf);

void VDotProdUnit___024root___eval(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VDotProdUnit___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VDotProdUnit___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("DotProdUnit.v", 1507, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VDotProdUnit___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VDotProdUnit___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VDotProdUnit___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("DotProdUnit.v", 1507, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VDotProdUnit___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VDotProdUnit___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("DotProdUnit.v", 1507, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VDotProdUnit___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VDotProdUnit___024root___eval_debug_assertions(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_in_valid & 0xfeU))) {
        Verilated::overWidthError("io_in_valid");}
    if (VL_UNLIKELY((vlSelf->io_in_bits_roundingMode 
                     & 0xf8U))) {
        Verilated::overWidthError("io_in_bits_roundingMode");}
    if (VL_UNLIKELY((vlSelf->io_out_ready & 0xfeU))) {
        Verilated::overWidthError("io_out_ready");}
}
#endif  // VL_DEBUG
