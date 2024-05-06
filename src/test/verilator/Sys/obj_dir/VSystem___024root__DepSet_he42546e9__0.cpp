// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystem.h for the primary calling header

#include "verilated.h"

#include "VSystem__Syms.h"
#include "VSystem___024root.h"

void VSystem___024root___eval_act(VSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystem___024root___eval_act\n"); );
}

void VSystem___024root___eval_triggers__ico(VSystem___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSystem___024root___dump_triggers__ico(VSystem___024root* vlSelf);
#endif  // VL_DEBUG
void VSystem___024root___eval_ico(VSystem___024root* vlSelf);
void VSystem___024root___eval_triggers__act(VSystem___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSystem___024root___dump_triggers__act(VSystem___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSystem___024root___dump_triggers__nba(VSystem___024root* vlSelf);
#endif  // VL_DEBUG
void VSystem___024root___eval_nba(VSystem___024root* vlSelf);

void VSystem___024root___eval(VSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystem___024root___eval\n"); );
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
        VSystem___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VSystem___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("System.v", 3510, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VSystem___024root___eval_ico(vlSelf);
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
            VSystem___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VSystem___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("System.v", 3510, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VSystem___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VSystem___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("System.v", 3510, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VSystem___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VSystem___024root___eval_debug_assertions(VSystem___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSystem___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_mixPc & 0xfeU))) {
        Verilated::overWidthError("io_mixPc");}
    if (VL_UNLIKELY((vlSelf->io_exec_en & 0xfeU))) {
        Verilated::overWidthError("io_exec_en");}
    if (VL_UNLIKELY((vlSelf->io_out_ready & 0xfeU))) {
        Verilated::overWidthError("io_out_ready");}
}
#endif  // VL_DEBUG
