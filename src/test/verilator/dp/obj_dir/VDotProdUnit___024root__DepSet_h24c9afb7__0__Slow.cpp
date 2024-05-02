// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDotProdUnit.h for the primary calling header

#include "verilated.h"

#include "VDotProdUnit__Syms.h"
#include "VDotProdUnit___024root.h"

VL_ATTR_COLD void VDotProdUnit___024root___eval_static(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___eval_static\n"); );
}

VL_ATTR_COLD void VDotProdUnit___024root___eval_initial(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
}

VL_ATTR_COLD void VDotProdUnit___024root___eval_final(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___eval_final\n"); );
}

VL_ATTR_COLD void VDotProdUnit___024root___eval_triggers__stl(VDotProdUnit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VDotProdUnit___024root___dump_triggers__stl(VDotProdUnit___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void VDotProdUnit___024root___eval_stl(VDotProdUnit___024root* vlSelf);

VL_ATTR_COLD void VDotProdUnit___024root___eval_settle(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        VDotProdUnit___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                VDotProdUnit___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("DotProdUnit.v", 1507, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            VDotProdUnit___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDotProdUnit___024root___dump_triggers__stl(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VDotProdUnit___024root___stl_sequent__TOP__0(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->io_out_valid = vlSelf->DotProdUnit__DOT__valid_2;
    vlSelf->DotProdUnit__DOT__fmul__DOT__resultSign 
        = (1U & (((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                  ^ (IData)(vlSelf->DotProdUnit__DOT__vec_b_0)) 
                 >> 0xfU));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSign 
        = (1U & (((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                  ^ (IData)(vlSelf->DotProdUnit__DOT__vec_b_1)) 
                 >> 0xfU));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSign 
        = (1U & (((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                  ^ (IData)(vlSelf->DotProdUnit__DOT__vec_b_2)) 
                 >> 0xfU));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSign 
        = (1U & (((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                  ^ (IData)(vlSelf->DotProdUnit__DOT__vec_b_3)) 
                 >> 0xfU));
    vlSelf->io_in_ready = vlSelf->io_out_ready;
    vlSelf->DotProdUnit__DOT__prehandshaked_2 = (((IData)(vlSelf->DotProdUnit__DOT__valid_1) 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__valid)) 
                                                 & (IData)(vlSelf->io_out_ready));
    vlSelf->DotProdUnit__DOT__fmul__DOT__decode_a_isNaN 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0)))));
    vlSelf->DotProdUnit__DOT__fmul__DOT__decode_b_isNaN 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0)))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_a_isNaN 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1)))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_b_isNaN 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1)))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_a_isNaN 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2)))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_b_isNaN 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2)))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_a_isNaN 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3)))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_b_isNaN 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3)))));
    vlSelf->DotProdUnit__DOT__fmul__DOT__hasInf = ((IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))) 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x3ffU 
                                                                           & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))))))) 
                                                   | (IData)(
                                                             ((0x7c00U 
                                                               == 
                                                               (0x7c00U 
                                                                & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))) 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3ffU 
                                                                             & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))))))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasInf = 
        ((IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))))))) 
         | (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))))))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasInf = 
        ((IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))))))) 
         | (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))))))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasInf = 
        ((IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))))))) 
         | (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))))))));
    vlSelf->DotProdUnit__DOT__prehandshaked_1 = ((IData)(vlSelf->io_in_valid) 
                                                 & (IData)(vlSelf->io_out_ready));
    vlSelf->DotProdUnit__DOT__fmul__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))) 
                        * (((IData)((0U != (0x1fU & 
                                            ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                             >> 0xaU)))) 
                            << 0xaU) | (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0)))));
    vlSelf->DotProdUnit__DOT__fmul__DOT__lzcRaw = (0xfU 
                                                   & (((0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                                            >> 0xaU)))
                                                        ? 0U
                                                        : 
                                                       ((0x200U 
                                                         & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                                         ? 1U
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                                          ? 2U
                                                          : 
                                                         ((0x80U 
                                                           & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                                           ? 3U
                                                           : 
                                                          ((0x40U 
                                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                                            ? 4U
                                                            : 
                                                           ((0x20U 
                                                             & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                                             ? 5U
                                                             : 
                                                            ((0x10U 
                                                              & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                                              ? 6U
                                                              : 
                                                             ((8U 
                                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                                               ? 7U
                                                               : 
                                                              ((4U 
                                                                & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                                                ? 8U
                                                                : 
                                                               ((2U 
                                                                 & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                                                 ? 9U
                                                                 : 0xaU)))))))))) 
                                                      + 
                                                      ((0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                                            >> 0xaU)))
                                                        ? 0U
                                                        : 
                                                       ((0x200U 
                                                         & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                                         ? 1U
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                                          ? 2U
                                                          : 
                                                         ((0x80U 
                                                           & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                                           ? 3U
                                                           : 
                                                          ((0x40U 
                                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                                            ? 4U
                                                            : 
                                                           ((0x20U 
                                                             & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                                             ? 5U
                                                             : 
                                                            ((0x10U 
                                                              & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                                              ? 6U
                                                              : 
                                                             ((8U 
                                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                                               ? 7U
                                                               : 
                                                              ((4U 
                                                                & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                                                ? 8U
                                                                : 
                                                               ((2U 
                                                                 & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                                                 ? 9U
                                                                 : 0xaU))))))))))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))) 
                        * (((IData)((0U != (0x1fU & 
                                            ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                             >> 0xaU)))) 
                            << 0xaU) | (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1)))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzcRaw = 
        (0xfU & (((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                   >> 0xaU))) ? 0U : 
                  ((0x200U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))
                    ? 1U : ((0x100U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))
                             ? 2U : ((0x80U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))
                                      ? 3U : ((0x40U 
                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))
                                               ? 4U
                                               : ((0x20U 
                                                   & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))
                                                   ? 5U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))
                                                    ? 6U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))
                                                     ? 7U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))
                                                      ? 8U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))
                                                       ? 9U
                                                       : 0xaU)))))))))) 
                 + ((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                     >> 0xaU))) ? 0U
                     : ((0x200U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                         ? 1U : ((0x100U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                                  ? 2U : ((0x80U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                                           ? 3U : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                                                     ? 5U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                                                      ? 6U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                                                       ? 7U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                                                        ? 8U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                                                         ? 9U
                                                         : 0xaU))))))))))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))) 
                        * (((IData)((0U != (0x1fU & 
                                            ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                             >> 0xaU)))) 
                            << 0xaU) | (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2)))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzcRaw = 
        (0xfU & (((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                   >> 0xaU))) ? 0U : 
                  ((0x200U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))
                    ? 1U : ((0x100U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))
                             ? 2U : ((0x80U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))
                                      ? 3U : ((0x40U 
                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))
                                               ? 4U
                                               : ((0x20U 
                                                   & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))
                                                   ? 5U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))
                                                    ? 6U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))
                                                     ? 7U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))
                                                      ? 8U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))
                                                       ? 9U
                                                       : 0xaU)))))))))) 
                 + ((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                     >> 0xaU))) ? 0U
                     : ((0x200U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                         ? 1U : ((0x100U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                                  ? 2U : ((0x80U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                                           ? 3U : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                                                     ? 5U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                                                      ? 6U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                                                       ? 7U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                                                        ? 8U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                                                         ? 9U
                                                         : 0xaU))))))))))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))) 
                        * (((IData)((0U != (0x1fU & 
                                            ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                             >> 0xaU)))) 
                            << 0xaU) | (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3)))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzcRaw = 
        (0xfU & (((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                   >> 0xaU))) ? 0U : 
                  ((0x200U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))
                    ? 1U : ((0x100U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))
                             ? 2U : ((0x80U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))
                                      ? 3U : ((0x40U 
                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))
                                               ? 4U
                                               : ((0x20U 
                                                   & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))
                                                   ? 5U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))
                                                    ? 6U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))
                                                     ? 7U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))
                                                      ? 8U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))
                                                       ? 9U
                                                       : 0xaU)))))))))) 
                 + ((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                     >> 0xaU))) ? 0U
                     : ((0x200U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                         ? 1U : ((0x100U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                                  ? 2U : ((0x80U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                                           ? 3U : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                                                     ? 5U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                                                      ? 6U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                                                       ? 7U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                                                        ? 8U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                                                         ? 9U
                                                         : 0xaU))))))))))));
    vlSelf->DotProdUnit__DOT__fmul__DOT__hasZero = 
        (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                            >> 0xaU))))) 
                & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0)))))) 
               | ((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                              >> 0xaU))))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))))))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasZero 
        = (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                              >> 0xaU))))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1)))))) 
                 | ((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                                >> 0xaU))))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))))))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasZero 
        = (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                              >> 0xaU))))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2)))))) 
                 | ((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                                >> 0xaU))))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))))))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasZero 
        = (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                              >> 0xaU))))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3)))))) 
                 | ((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                                >> 0xaU))))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))))))));
    vlSelf->DotProdUnit__DOT__handshaked = ((IData)(vlSelf->io_in_valid) 
                                            & (IData)(vlSelf->io_in_ready));
    vlSelf->DotProdUnit__DOT___GEN_33 = ((IData)(vlSelf->DotProdUnit__DOT__prehandshaked_2) 
                                         | ((~ ((IData)(vlSelf->DotProdUnit__DOT__valid_2) 
                                                & (IData)(vlSelf->io_out_ready))) 
                                            & (IData)(vlSelf->DotProdUnit__DOT__valid_2)));
    vlSelf->DotProdUnit__DOT__fmul__DOT__hasNaN = ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__decode_a_isNaN) 
                                                   | (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__decode_b_isNaN));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasNaN = 
        ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_a_isNaN) 
         | (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_b_isNaN));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasNaN = 
        ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_a_isNaN) 
         | (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_b_isNaN));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasNaN = 
        ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_a_isNaN) 
         | (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_b_isNaN));
    vlSelf->DotProdUnit__DOT___GEN_9 = ((IData)(vlSelf->DotProdUnit__DOT__prehandshaked_1) 
                                        | ((~ ((IData)(vlSelf->io_out_ready) 
                                               & (IData)(vlSelf->DotProdUnit__DOT__valid))) 
                                           & (IData)(vlSelf->DotProdUnit__DOT__valid)));
    vlSelf->DotProdUnit__DOT___GEN_21 = ((IData)(vlSelf->DotProdUnit__DOT__prehandshaked_1) 
                                         | ((~ ((IData)(vlSelf->DotProdUnit__DOT__valid_1) 
                                                & (IData)(vlSelf->io_out_ready))) 
                                            & (IData)(vlSelf->DotProdUnit__DOT__valid_1)));
    vlSelf->DotProdUnit__DOT__fmul__DOT__lzc = (0xfU 
                                                & ((0U 
                                                    != 
                                                    (vlSelf->DotProdUnit__DOT__fmul__DOT__resultSigNoShift 
                                                     & (0x200000U 
                                                        >> (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__lzcRaw))))
                                                    ? (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__lzcRaw)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__lzcRaw))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzc = (0xfU 
                                                  & ((0U 
                                                      != 
                                                      (vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSigNoShift 
                                                       & (0x200000U 
                                                          >> (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzcRaw))))
                                                      ? (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzcRaw)
                                                      : 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzcRaw))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzc = (0xfU 
                                                  & ((0U 
                                                      != 
                                                      (vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSigNoShift 
                                                       & (0x200000U 
                                                          >> (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzcRaw))))
                                                      ? (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzcRaw)
                                                      : 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzcRaw))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzc = (0xfU 
                                                  & ((0U 
                                                      != 
                                                      (vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSigNoShift 
                                                       & (0x200000U 
                                                          >> (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzcRaw))))
                                                      ? (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzcRaw)
                                                      : 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzcRaw))));
    if (vlSelf->DotProdUnit__DOT__fmul__DOT__hasZero) {
        vlSelf->DotProdUnit__DOT__fmul__DOT__zero_mul_inf 
            = vlSelf->DotProdUnit__DOT__fmul__DOT__hasInf;
        vlSelf->DotProdUnit__DOT__fmul__DOT__resultExpNoShift = 0U;
    } else {
        vlSelf->DotProdUnit__DOT__fmul__DOT__zero_mul_inf = 0U;
        vlSelf->DotProdUnit__DOT__fmul__DOT__resultExpNoShift 
            = (0xffU & ((IData)(0x61U) + (0x3fU & (
                                                   (0x1fU 
                                                    & (((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                                        >> 0xaU) 
                                                       + 
                                                       ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                                                        >> 0xaU))))) 
                                                        & (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0)))))) 
                                                   + 
                                                   (0x1fU 
                                                    & (((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                                        >> 0xaU) 
                                                       + 
                                                       ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                                                        >> 0xaU))))) 
                                                        & (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))))))))));
    }
    if (vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasZero) {
        vlSelf->DotProdUnit__DOT__fmul_1__DOT__zero_mul_inf 
            = vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasInf;
        vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift = 0U;
    } else {
        vlSelf->DotProdUnit__DOT__fmul_1__DOT__zero_mul_inf = 0U;
        vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift 
            = (0xffU & ((IData)(0x61U) + (0x3fU & (
                                                   (0x1fU 
                                                    & (((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                                        >> 0xaU) 
                                                       + 
                                                       ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                                                        >> 0xaU))))) 
                                                        & (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1)))))) 
                                                   + 
                                                   (0x1fU 
                                                    & (((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                                        >> 0xaU) 
                                                       + 
                                                       ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                                                        >> 0xaU))))) 
                                                        & (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))))))))));
    }
    if (vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasZero) {
        vlSelf->DotProdUnit__DOT__fmul_2__DOT__zero_mul_inf 
            = vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasInf;
        vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift = 0U;
    } else {
        vlSelf->DotProdUnit__DOT__fmul_2__DOT__zero_mul_inf = 0U;
        vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift 
            = (0xffU & ((IData)(0x61U) + (0x3fU & (
                                                   (0x1fU 
                                                    & (((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                                        >> 0xaU) 
                                                       + 
                                                       ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                                                        >> 0xaU))))) 
                                                        & (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2)))))) 
                                                   + 
                                                   (0x1fU 
                                                    & (((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                                        >> 0xaU) 
                                                       + 
                                                       ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                                                        >> 0xaU))))) 
                                                        & (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))))))))));
    }
    if (vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasZero) {
        vlSelf->DotProdUnit__DOT__fmul_3__DOT__zero_mul_inf 
            = vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasInf;
        vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift = 0U;
    } else {
        vlSelf->DotProdUnit__DOT__fmul_3__DOT__zero_mul_inf = 0U;
        vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift 
            = (0xffU & ((IData)(0x61U) + (0x3fU & (
                                                   (0x1fU 
                                                    & (((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                                        >> 0xaU) 
                                                       + 
                                                       ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                                                        >> 0xaU))))) 
                                                        & (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3)))))) 
                                                   + 
                                                   (0x1fU 
                                                    & (((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                                        >> 0xaU) 
                                                       + 
                                                       ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x1fU 
                                                                     & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                                                        >> 0xaU))))) 
                                                        & (0U 
                                                           != 
                                                           (0x3ffU 
                                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))))))))));
    }
    vlSelf->DotProdUnit__DOT__fmul__DOT__nan_result 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasNaN) 
           | (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__zero_mul_inf));
    vlSelf->DotProdUnit__DOT__fmul__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__nan_result 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasNaN) 
           | (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__zero_mul_inf));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__nan_result 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasNaN) 
           | (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__zero_mul_inf));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__nan_result 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasNaN) 
           | (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__zero_mul_inf));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__shiftLimit)
            ? (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__resultExpNoShift)
            : (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__shiftLimit)
            ? (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift)
            : (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__shiftLimit)
            ? (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift)
            : (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__shiftLimit)
            ? (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift)
            : (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzc));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDotProdUnit___024root___dump_triggers__ico(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___dump_triggers__ico\n"); );
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
VL_ATTR_COLD void VDotProdUnit___024root___dump_triggers__act(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___dump_triggers__act\n"); );
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
VL_ATTR_COLD void VDotProdUnit___024root___dump_triggers__nba(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VDotProdUnit___024root___ctor_var_reset(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_in_ready = VL_RAND_RESET_I(1);
    vlSelf->io_in_valid = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_vec_a_0 = VL_RAND_RESET_I(16);
    vlSelf->io_in_bits_vec_a_1 = VL_RAND_RESET_I(16);
    vlSelf->io_in_bits_vec_a_2 = VL_RAND_RESET_I(16);
    vlSelf->io_in_bits_vec_a_3 = VL_RAND_RESET_I(16);
    vlSelf->io_in_bits_vec_b_0 = VL_RAND_RESET_I(16);
    vlSelf->io_in_bits_vec_b_1 = VL_RAND_RESET_I(16);
    vlSelf->io_in_bits_vec_b_2 = VL_RAND_RESET_I(16);
    vlSelf->io_in_bits_vec_b_3 = VL_RAND_RESET_I(16);
    vlSelf->io_in_bits_roundingMode = VL_RAND_RESET_I(3);
    vlSelf->io_out_ready = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->io_out_bits_fflags = VL_RAND_RESET_I(5);
    vlSelf->io_out_bits_result = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__handshaked = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__vec_a_0 = VL_RAND_RESET_I(16);
    vlSelf->DotProdUnit__DOT__vec_a_1 = VL_RAND_RESET_I(16);
    vlSelf->DotProdUnit__DOT__vec_a_2 = VL_RAND_RESET_I(16);
    vlSelf->DotProdUnit__DOT__vec_a_3 = VL_RAND_RESET_I(16);
    vlSelf->DotProdUnit__DOT__vec_b_0 = VL_RAND_RESET_I(16);
    vlSelf->DotProdUnit__DOT__vec_b_1 = VL_RAND_RESET_I(16);
    vlSelf->DotProdUnit__DOT__vec_b_2 = VL_RAND_RESET_I(16);
    vlSelf->DotProdUnit__DOT__vec_b_3 = VL_RAND_RESET_I(16);
    vlSelf->DotProdUnit__DOT__valid = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__a_flag_isNaN = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__a_flag_isInf = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__a_flag_isInv = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__b_flag_isNaN = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__b_flag_isInf = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__b_flag_isInv = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__prehandshaked_1 = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__valid_1 = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT___GEN_21 = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__a_flag_1_isNaN = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__a_flag_1_isInf = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__a_flag_1_isInv = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__b_flag_1_isNaN = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__b_flag_1_isInf = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__b_flag_1_isInv = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1 = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1 = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__prehandshaked_2 = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__valid_2 = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT___GEN_33 = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__fmul__DOT__decode_a_isNaN = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul__DOT__decode_b_isNaN = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul__DOT__hasZero = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul__DOT__resultSign = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul__DOT__resultExpNoShift = VL_RAND_RESET_I(8);
    vlSelf->DotProdUnit__DOT__fmul__DOT__resultSigNoShift = VL_RAND_RESET_I(22);
    vlSelf->DotProdUnit__DOT__fmul__DOT__lzcRaw = VL_RAND_RESET_I(4);
    vlSelf->DotProdUnit__DOT__fmul__DOT__lzc = VL_RAND_RESET_I(4);
    vlSelf->DotProdUnit__DOT__fmul__DOT__shiftLimit = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul__DOT___resultSigShifted_T = VL_RAND_RESET_I(8);
    vlSelf->DotProdUnit__DOT__fmul__DOT__hasNaN = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul__DOT__hasInf = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul__DOT__zero_mul_inf = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul__DOT__nan_result = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_a_isNaN = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_b_isNaN = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasZero = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSign = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift = VL_RAND_RESET_I(8);
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSigNoShift = VL_RAND_RESET_I(22);
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzcRaw = VL_RAND_RESET_I(4);
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzc = VL_RAND_RESET_I(4);
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__shiftLimit = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_1__DOT___resultSigShifted_T = VL_RAND_RESET_I(8);
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasNaN = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasInf = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__zero_mul_inf = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__nan_result = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_a_isNaN = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_b_isNaN = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasZero = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSign = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift = VL_RAND_RESET_I(8);
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSigNoShift = VL_RAND_RESET_I(22);
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzcRaw = VL_RAND_RESET_I(4);
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzc = VL_RAND_RESET_I(4);
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__shiftLimit = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_2__DOT___resultSigShifted_T = VL_RAND_RESET_I(8);
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasNaN = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasInf = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__zero_mul_inf = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__nan_result = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_a_isNaN = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_b_isNaN = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasZero = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSign = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift = VL_RAND_RESET_I(8);
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSigNoShift = VL_RAND_RESET_I(22);
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzcRaw = VL_RAND_RESET_I(4);
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzc = VL_RAND_RESET_I(4);
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__shiftLimit = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_3__DOT___resultSigShifted_T = VL_RAND_RESET_I(8);
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasNaN = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasInf = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__zero_mul_inf = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__nan_result = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
