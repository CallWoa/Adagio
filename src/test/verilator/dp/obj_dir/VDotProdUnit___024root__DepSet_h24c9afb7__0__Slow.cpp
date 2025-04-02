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
                VL_FATAL_MT("DotProdUnit.v", 2040, "", "Settle region did not converge.");
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
    vlSelf->io_out_valid = vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__validReg;
    if ((0xffffU == (vlSelf->io_in_bits_c >> 0x10U))) {
        vlSelf->DotProdUnit__DOT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSelf->io_in_bits_c);
        vlSelf->DotProdUnit__DOT__fcvt__DOT__fp_in_exp 
            = (0x1fU & (vlSelf->io_in_bits_c >> 0xaU));
    } else {
        vlSelf->DotProdUnit__DOT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->DotProdUnit__DOT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->DotProdUnit__DOT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSelf->io_in_bits_c 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSelf->io_in_bits_c))));
    vlSelf->DotProdUnit__DOT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSelf->io_in_bits_c 
                                          >> 0x10U)))) 
                  | (vlSelf->io_in_bits_c >> 9U))) ? 0U
            : ((IData)((0xffff0100U == (0xffff0100U 
                                        & vlSelf->io_in_bits_c)))
                ? 1U : ((IData)((0xffff0080U == (0xffff0080U 
                                                 & vlSelf->io_in_bits_c)))
                         ? 2U : ((IData)((0xffff0040U 
                                          == (0xffff0040U 
                                              & vlSelf->io_in_bits_c)))
                                  ? 3U : ((IData)((0xffff0020U 
                                                   == 
                                                   (0xffff0020U 
                                                    & vlSelf->io_in_bits_c)))
                                           ? 4U : ((IData)(
                                                           (0xffff0010U 
                                                            == 
                                                            (0xffff0010U 
                                                             & vlSelf->io_in_bits_c)))
                                                    ? 5U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0008U 
                                                             == 
                                                             (0xffff0008U 
                                                              & vlSelf->io_in_bits_c)))
                                                     ? 6U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0004U 
                                                              == 
                                                              (0xffff0004U 
                                                               & vlSelf->io_in_bits_c)))
                                                      ? 7U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0002U 
                                                               == 
                                                               (0xffff0002U 
                                                                & vlSelf->io_in_bits_c)))
                                                       ? 8U
                                                       : 9U)))))))));
    vlSelf->io_out_bits_ctrl_mixPc = vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc;
    vlSelf->io_out_bits_ctrl_rowtag = vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag;
    vlSelf->io_out_bits_ctrl_decode_src = vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src;
    vlSelf->DotProdUnit__DOT__fmul__DOT__resultSign 
        = (1U & (((IData)(vlSelf->io_in_bits_vec_a_0) 
                  ^ (IData)(vlSelf->io_in_bits_vec_b_0)) 
                 >> 0xfU));
    vlSelf->DotProdUnit__DOT__fmul__DOT__hasNaN = ((IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & (IData)(vlSelf->io_in_bits_vec_a_0))) 
                                                            & (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSelf->io_in_bits_vec_a_0))))) 
                                                   | (IData)(
                                                             ((0x7c00U 
                                                               == 
                                                               (0x7c00U 
                                                                & (IData)(vlSelf->io_in_bits_vec_b_0))) 
                                                              & (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSelf->io_in_bits_vec_b_0))))));
    vlSelf->DotProdUnit__DOT__fmul__DOT__hasInf = ((IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & (IData)(vlSelf->io_in_bits_vec_a_0))) 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x3ffU 
                                                                           & (IData)(vlSelf->io_in_bits_vec_a_0))))))) 
                                                   | (IData)(
                                                             ((0x7c00U 
                                                               == 
                                                               (0x7c00U 
                                                                & (IData)(vlSelf->io_in_bits_vec_b_0))) 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3ffU 
                                                                             & (IData)(vlSelf->io_in_bits_vec_b_0))))))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSign 
        = (1U & (((IData)(vlSelf->io_in_bits_vec_a_1) 
                  ^ (IData)(vlSelf->io_in_bits_vec_b_1)) 
                 >> 0xfU));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasNaN = 
        ((IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->io_in_bits_vec_a_1))) 
                  & (0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_a_1))))) 
         | (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->io_in_bits_vec_b_1))) 
                    & (0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_b_1))))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasInf = 
        ((IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->io_in_bits_vec_a_1))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_a_1))))))) 
         | (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->io_in_bits_vec_b_1))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_b_1))))))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSign 
        = (1U & (((IData)(vlSelf->io_in_bits_vec_a_2) 
                  ^ (IData)(vlSelf->io_in_bits_vec_b_2)) 
                 >> 0xfU));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasNaN = 
        ((IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->io_in_bits_vec_a_2))) 
                  & (0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_a_2))))) 
         | (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->io_in_bits_vec_b_2))) 
                    & (0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_b_2))))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasInf = 
        ((IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->io_in_bits_vec_a_2))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_a_2))))))) 
         | (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->io_in_bits_vec_b_2))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_b_2))))))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSign 
        = (1U & (((IData)(vlSelf->io_in_bits_vec_a_3) 
                  ^ (IData)(vlSelf->io_in_bits_vec_b_3)) 
                 >> 0xfU));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasNaN = 
        ((IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->io_in_bits_vec_a_3))) 
                  & (0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_a_3))))) 
         | (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->io_in_bits_vec_b_3))) 
                    & (0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_b_3))))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasInf = 
        ((IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->io_in_bits_vec_a_3))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_a_3))))))) 
         | (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->io_in_bits_vec_b_3))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_b_3))))))));
    vlSelf->DotProdUnit__DOT__fmul__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_a_0) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->io_in_bits_vec_a_0))) 
                        * (((IData)((0U != (0x1fU & 
                                            ((IData)(vlSelf->io_in_bits_vec_b_0) 
                                             >> 0xaU)))) 
                            << 0xaU) | (0x3ffU & (IData)(vlSelf->io_in_bits_vec_b_0)))));
    vlSelf->DotProdUnit__DOT__fmul__DOT__lzcRaw = (0xfU 
                                                   & (((0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->io_in_bits_vec_a_0) 
                                                            >> 0xaU)))
                                                        ? 0U
                                                        : 
                                                       ((0x200U 
                                                         & (IData)(vlSelf->io_in_bits_vec_a_0))
                                                         ? 1U
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->io_in_bits_vec_a_0))
                                                          ? 2U
                                                          : 
                                                         ((0x80U 
                                                           & (IData)(vlSelf->io_in_bits_vec_a_0))
                                                           ? 3U
                                                           : 
                                                          ((0x40U 
                                                            & (IData)(vlSelf->io_in_bits_vec_a_0))
                                                            ? 4U
                                                            : 
                                                           ((0x20U 
                                                             & (IData)(vlSelf->io_in_bits_vec_a_0))
                                                             ? 5U
                                                             : 
                                                            ((0x10U 
                                                              & (IData)(vlSelf->io_in_bits_vec_a_0))
                                                              ? 6U
                                                              : 
                                                             ((8U 
                                                               & (IData)(vlSelf->io_in_bits_vec_a_0))
                                                               ? 7U
                                                               : 
                                                              ((4U 
                                                                & (IData)(vlSelf->io_in_bits_vec_a_0))
                                                                ? 8U
                                                                : 
                                                               ((2U 
                                                                 & (IData)(vlSelf->io_in_bits_vec_a_0))
                                                                 ? 9U
                                                                 : 0xaU)))))))))) 
                                                      + 
                                                      ((0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->io_in_bits_vec_b_0) 
                                                            >> 0xaU)))
                                                        ? 0U
                                                        : 
                                                       ((0x200U 
                                                         & (IData)(vlSelf->io_in_bits_vec_b_0))
                                                         ? 1U
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->io_in_bits_vec_b_0))
                                                          ? 2U
                                                          : 
                                                         ((0x80U 
                                                           & (IData)(vlSelf->io_in_bits_vec_b_0))
                                                           ? 3U
                                                           : 
                                                          ((0x40U 
                                                            & (IData)(vlSelf->io_in_bits_vec_b_0))
                                                            ? 4U
                                                            : 
                                                           ((0x20U 
                                                             & (IData)(vlSelf->io_in_bits_vec_b_0))
                                                             ? 5U
                                                             : 
                                                            ((0x10U 
                                                              & (IData)(vlSelf->io_in_bits_vec_b_0))
                                                              ? 6U
                                                              : 
                                                             ((8U 
                                                               & (IData)(vlSelf->io_in_bits_vec_b_0))
                                                               ? 7U
                                                               : 
                                                              ((4U 
                                                                & (IData)(vlSelf->io_in_bits_vec_b_0))
                                                                ? 8U
                                                                : 
                                                               ((2U 
                                                                 & (IData)(vlSelf->io_in_bits_vec_b_0))
                                                                 ? 9U
                                                                 : 0xaU))))))))))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_a_1) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->io_in_bits_vec_a_1))) 
                        * (((IData)((0U != (0x1fU & 
                                            ((IData)(vlSelf->io_in_bits_vec_b_1) 
                                             >> 0xaU)))) 
                            << 0xaU) | (0x3ffU & (IData)(vlSelf->io_in_bits_vec_b_1)))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzcRaw = 
        (0xfU & (((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_a_1) 
                                   >> 0xaU))) ? 0U : 
                  ((0x200U & (IData)(vlSelf->io_in_bits_vec_a_1))
                    ? 1U : ((0x100U & (IData)(vlSelf->io_in_bits_vec_a_1))
                             ? 2U : ((0x80U & (IData)(vlSelf->io_in_bits_vec_a_1))
                                      ? 3U : ((0x40U 
                                               & (IData)(vlSelf->io_in_bits_vec_a_1))
                                               ? 4U
                                               : ((0x20U 
                                                   & (IData)(vlSelf->io_in_bits_vec_a_1))
                                                   ? 5U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->io_in_bits_vec_a_1))
                                                    ? 6U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->io_in_bits_vec_a_1))
                                                     ? 7U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->io_in_bits_vec_a_1))
                                                      ? 8U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->io_in_bits_vec_a_1))
                                                       ? 9U
                                                       : 0xaU)))))))))) 
                 + ((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_b_1) 
                                     >> 0xaU))) ? 0U
                     : ((0x200U & (IData)(vlSelf->io_in_bits_vec_b_1))
                         ? 1U : ((0x100U & (IData)(vlSelf->io_in_bits_vec_b_1))
                                  ? 2U : ((0x80U & (IData)(vlSelf->io_in_bits_vec_b_1))
                                           ? 3U : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->io_in_bits_vec_b_1))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->io_in_bits_vec_b_1))
                                                     ? 5U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->io_in_bits_vec_b_1))
                                                      ? 6U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->io_in_bits_vec_b_1))
                                                       ? 7U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->io_in_bits_vec_b_1))
                                                        ? 8U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->io_in_bits_vec_b_1))
                                                         ? 9U
                                                         : 0xaU))))))))))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_a_2) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->io_in_bits_vec_a_2))) 
                        * (((IData)((0U != (0x1fU & 
                                            ((IData)(vlSelf->io_in_bits_vec_b_2) 
                                             >> 0xaU)))) 
                            << 0xaU) | (0x3ffU & (IData)(vlSelf->io_in_bits_vec_b_2)))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzcRaw = 
        (0xfU & (((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_a_2) 
                                   >> 0xaU))) ? 0U : 
                  ((0x200U & (IData)(vlSelf->io_in_bits_vec_a_2))
                    ? 1U : ((0x100U & (IData)(vlSelf->io_in_bits_vec_a_2))
                             ? 2U : ((0x80U & (IData)(vlSelf->io_in_bits_vec_a_2))
                                      ? 3U : ((0x40U 
                                               & (IData)(vlSelf->io_in_bits_vec_a_2))
                                               ? 4U
                                               : ((0x20U 
                                                   & (IData)(vlSelf->io_in_bits_vec_a_2))
                                                   ? 5U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->io_in_bits_vec_a_2))
                                                    ? 6U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->io_in_bits_vec_a_2))
                                                     ? 7U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->io_in_bits_vec_a_2))
                                                      ? 8U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->io_in_bits_vec_a_2))
                                                       ? 9U
                                                       : 0xaU)))))))))) 
                 + ((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_b_2) 
                                     >> 0xaU))) ? 0U
                     : ((0x200U & (IData)(vlSelf->io_in_bits_vec_b_2))
                         ? 1U : ((0x100U & (IData)(vlSelf->io_in_bits_vec_b_2))
                                  ? 2U : ((0x80U & (IData)(vlSelf->io_in_bits_vec_b_2))
                                           ? 3U : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->io_in_bits_vec_b_2))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->io_in_bits_vec_b_2))
                                                     ? 5U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->io_in_bits_vec_b_2))
                                                      ? 6U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->io_in_bits_vec_b_2))
                                                       ? 7U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->io_in_bits_vec_b_2))
                                                        ? 8U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->io_in_bits_vec_b_2))
                                                         ? 9U
                                                         : 0xaU))))))))))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_a_3) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->io_in_bits_vec_a_3))) 
                        * (((IData)((0U != (0x1fU & 
                                            ((IData)(vlSelf->io_in_bits_vec_b_3) 
                                             >> 0xaU)))) 
                            << 0xaU) | (0x3ffU & (IData)(vlSelf->io_in_bits_vec_b_3)))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzcRaw = 
        (0xfU & (((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_a_3) 
                                   >> 0xaU))) ? 0U : 
                  ((0x200U & (IData)(vlSelf->io_in_bits_vec_a_3))
                    ? 1U : ((0x100U & (IData)(vlSelf->io_in_bits_vec_a_3))
                             ? 2U : ((0x80U & (IData)(vlSelf->io_in_bits_vec_a_3))
                                      ? 3U : ((0x40U 
                                               & (IData)(vlSelf->io_in_bits_vec_a_3))
                                               ? 4U
                                               : ((0x20U 
                                                   & (IData)(vlSelf->io_in_bits_vec_a_3))
                                                   ? 5U
                                                   : 
                                                  ((0x10U 
                                                    & (IData)(vlSelf->io_in_bits_vec_a_3))
                                                    ? 6U
                                                    : 
                                                   ((8U 
                                                     & (IData)(vlSelf->io_in_bits_vec_a_3))
                                                     ? 7U
                                                     : 
                                                    ((4U 
                                                      & (IData)(vlSelf->io_in_bits_vec_a_3))
                                                      ? 8U
                                                      : 
                                                     ((2U 
                                                       & (IData)(vlSelf->io_in_bits_vec_a_3))
                                                       ? 9U
                                                       : 0xaU)))))))))) 
                 + ((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_b_3) 
                                     >> 0xaU))) ? 0U
                     : ((0x200U & (IData)(vlSelf->io_in_bits_vec_b_3))
                         ? 1U : ((0x100U & (IData)(vlSelf->io_in_bits_vec_b_3))
                                  ? 2U : ((0x80U & (IData)(vlSelf->io_in_bits_vec_b_3))
                                           ? 3U : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->io_in_bits_vec_b_3))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
                                                     & (IData)(vlSelf->io_in_bits_vec_b_3))
                                                     ? 5U
                                                     : 
                                                    ((0x10U 
                                                      & (IData)(vlSelf->io_in_bits_vec_b_3))
                                                      ? 6U
                                                      : 
                                                     ((8U 
                                                       & (IData)(vlSelf->io_in_bits_vec_b_3))
                                                       ? 7U
                                                       : 
                                                      ((4U 
                                                        & (IData)(vlSelf->io_in_bits_vec_b_3))
                                                        ? 8U
                                                        : 
                                                       ((2U 
                                                         & (IData)(vlSelf->io_in_bits_vec_b_3))
                                                         ? 9U
                                                         : 0xaU))))))))))));
    vlSelf->DotProdUnit__DOT__fmul__DOT__hasZero = 
        (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_a_0) 
                                            >> 0xaU))))) 
                & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_a_0)))))) 
               | ((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_b_0) 
                                              >> 0xaU))))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_b_0))))))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasZero 
        = (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_a_1) 
                                              >> 0xaU))))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_a_1)))))) 
                 | ((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_b_1) 
                                                >> 0xaU))))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_b_1))))))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasZero 
        = (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_a_2) 
                                              >> 0xaU))))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_a_2)))))) 
                 | ((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_b_2) 
                                                >> 0xaU))))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_b_2))))))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasZero 
        = (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_a_3) 
                                              >> 0xaU))))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_a_3)))))) 
                 | ((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->io_in_bits_vec_b_3) 
                                                >> 0xaU))))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->io_in_bits_vec_b_3))))))));
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                        >> 0xcU)));
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = ((vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
            >> 0xcU) & (0U != (0x2fffU & vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->DotProdUnit__DOT__pipeline_reg_2_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__validReg)) 
                 | (IData)(vlSelf->io_out_ready)));
    vlSelf->DotProdUnit__DOT__fcvt__DOT___result_T_4 
        = ((~ (IData)((0x1fU == (IData)(vlSelf->DotProdUnit__DOT__fcvt__DOT__fp_in_exp)))) 
           & (0U != (IData)(vlSelf->DotProdUnit__DOT__fcvt__DOT__fp_in_exp)));
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
    vlSelf->DotProdUnit__DOT__fmul__DOT__resultExpNoShift 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasZero)
            ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                               & ((0x1fU 
                                                   & (((IData)(vlSelf->io_in_bits_vec_a_0) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->io_in_bits_vec_a_0) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->io_in_bits_vec_a_0)))))) 
                                                  + 
                                                  (0x1fU 
                                                   & (((IData)(vlSelf->io_in_bits_vec_b_0) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->io_in_bits_vec_b_0) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->io_in_bits_vec_b_0)))))))))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasZero)
            ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                               & ((0x1fU 
                                                   & (((IData)(vlSelf->io_in_bits_vec_a_1) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->io_in_bits_vec_a_1) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->io_in_bits_vec_a_1)))))) 
                                                  + 
                                                  (0x1fU 
                                                   & (((IData)(vlSelf->io_in_bits_vec_b_1) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->io_in_bits_vec_b_1) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->io_in_bits_vec_b_1)))))))))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasZero)
            ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                               & ((0x1fU 
                                                   & (((IData)(vlSelf->io_in_bits_vec_a_2) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->io_in_bits_vec_a_2) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->io_in_bits_vec_a_2)))))) 
                                                  + 
                                                  (0x1fU 
                                                   & (((IData)(vlSelf->io_in_bits_vec_b_2) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->io_in_bits_vec_b_2) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->io_in_bits_vec_b_2)))))))))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasZero)
            ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                               & ((0x1fU 
                                                   & (((IData)(vlSelf->io_in_bits_vec_a_3) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->io_in_bits_vec_a_3) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->io_in_bits_vec_a_3)))))) 
                                                  + 
                                                  (0x1fU 
                                                   & (((IData)(vlSelf->io_in_bits_vec_b_3) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->io_in_bits_vec_b_3) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSelf->io_in_bits_vec_b_3)))))))))));
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT___T 
        = ((IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2_io_out_ready) 
           & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__validReg));
    vlSelf->DotProdUnit__DOT__pipeline_reg_1_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__validReg)) 
                 | (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2_io_out_ready)));
    vlSelf->DotProdUnit__DOT__fmul__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = (((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                 >> 0x17U)))) 
            & (IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T)) 
           & (((0U != ((IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT__shiftRightJam_io_in) 
                       & (((0xffffU & ((IData)(1U) 
                                       << (0xfU & ((IData)(1U) 
                                                   - 
                                                   (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                    >> 0x17U))))) 
                           - (IData)(1U)) | ((0xcU 
                                              < (0xffU 
                                                 & ((IData)(0x71U) 
                                                    - 
                                                    (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x17U))))
                                              ? 0xfffU
                                              : 0U)))) 
               | (0U != (0xfffU & vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res))) 
              | ((0xcU >= (0xffU & ((IData)(0x71U) 
                                    - (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                       >> 0x17U)))) 
                 & ((IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                    >> 1U))));
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT__expOverflow 
        = ((IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT__normal_rounder_io_cout)
            ? VL_LTS_III(9, 0x1dU, (0x1ffU & ((0xffU 
                                               & (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                  >> 0x17U)) 
                                              - (IData)(0x70U))))
            : VL_LTS_III(9, 0x1eU, (0x1ffU & ((0xffU 
                                               & (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                  >> 0x17U)) 
                                              - (IData)(0x70U)))));
    vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT___GEN_1 
        = ((IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT___T) 
           | ((~ (IData)(vlSelf->io_out_ready)) & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__validReg)));
    vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT___T 
        = ((IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_1_io_out_ready) 
           & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__validReg));
    vlSelf->DotProdUnit__DOT__pipeline_reg_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__validReg)) 
                 | (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_1_io_out_ready)));
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
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT___common_exp_T_4 
        = (VL_LTES_III(9, 1U, (0x1ffU & ((0xffU & (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                   >> 0x17U)) 
                                         - (IData)(0x70U)))) 
           & (~ (IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT__expOverflow)));
    vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT___GEN_1 
        = ((IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT___T) 
           | ((~ (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2_io_out_ready)) 
              & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__validReg)));
    vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT___T 
        = ((IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_io_out_ready) 
           & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__validReg));
    vlSelf->io_in_ready = (1U & ((~ (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__validReg)) 
                                 | (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_io_out_ready)));
    vlSelf->io_out_bits_result = ((IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc)
                                   ? vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res
                                   : (0xffff0000U | 
                                      ((0x8000U & (
                                                   (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                    >> 0x10U) 
                                                   & ((~ (IData)(
                                                                 ((0x7f800000U 
                                                                   == 
                                                                   (0x7f800000U 
                                                                    & vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res)) 
                                                                  & (0U 
                                                                     != 
                                                                     (0x7fffffU 
                                                                      & vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res))))) 
                                                      << 0xfU))) 
                                       | ((0x7c00U 
                                           & ((((0xffU 
                                                 == 
                                                 (0xffU 
                                                  & (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x17U)))
                                                 ? 0x1fU
                                                 : 0U) 
                                               | ((0xffU 
                                                   == 
                                                   (0xffU 
                                                    & (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                       >> 0x17U)))
                                                   ? 0U
                                                   : 
                                                  ((((VL_LTES_III(9, 1U, 
                                                                  (0x1ffU 
                                                                   & ((0xffU 
                                                                       & (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                          >> 0x17U)) 
                                                                      - (IData)(0x70U)))) 
                                                      & (IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT__expOverflow))
                                                      ? 0x1fU
                                                      : 0U) 
                                                    | ((IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT___common_exp_T_4)
                                                        ? 
                                                       (((0xffU 
                                                          & (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                             >> 0x17U)) 
                                                         - (IData)(0x10U)) 
                                                        + (IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT__normal_rounder_io_cout))
                                                        : 0U)) 
                                                   | (VL_GTS_III(9, 1U, 
                                                                 (0x1ffU 
                                                                  & ((0xffU 
                                                                      & (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                         >> 0x17U)) 
                                                                     - (IData)(0x70U)))) 
                                                      & ((IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT__subnormal_rounder__DOT__r_up) 
                                                         & (0x3ffU 
                                                            == (IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT__subnormal_rounder_io_in))))))) 
                                              << 0xaU)) 
                                          | (0x3ffU 
                                             & (((0xffU 
                                                  == 
                                                  (0xffU 
                                                   & (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                      >> 0x17U)))
                                                  ? 
                                                 ((IData)(
                                                          (0U 
                                                           != 
                                                           (0x7fffffU 
                                                            & vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res))) 
                                                  << 9U)
                                                  : 0U) 
                                                | ((0xffU 
                                                    == 
                                                    (0xffU 
                                                     & (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                        >> 0x17U)))
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT___common_exp_T_4)
                                                      ? 
                                                     ((vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                       >> 0xdU) 
                                                      + (IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                      : 0U) 
                                                    | (VL_GTS_III(9, 1U, 
                                                                  (0x1ffU 
                                                                   & ((0xffU 
                                                                       & (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                                          >> 0x17U)) 
                                                                      - (IData)(0x70U))))
                                                        ? 
                                                       ((IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                        + (IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                        : 0U)))))))));
    vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT___GEN_1 
        = ((IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT___T) 
           | ((~ (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_1_io_out_ready)) 
              & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__validReg)));
    vlSelf->DotProdUnit__DOT__pipeline_reg__DOT___T 
        = ((IData)(vlSelf->io_in_ready) & (IData)(vlSelf->io_in_valid));
    vlSelf->DotProdUnit__DOT__pipeline_reg__DOT___GEN_1 
        = ((IData)(vlSelf->DotProdUnit__DOT__pipeline_reg__DOT___T) 
           | ((~ (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_io_out_ready)) 
              & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__validReg)));
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
    vlSelf->io_in_bits_c = VL_RAND_RESET_I(32);
    vlSelf->io_in_bits_flush = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_ctrl_mixPc = VL_RAND_RESET_I(1);
    vlSelf->io_in_bits_ctrl_rowtag = VL_RAND_RESET_I(2);
    vlSelf->io_in_bits_ctrl_decode_src = VL_RAND_RESET_I(5);
    vlSelf->io_out_ready = VL_RAND_RESET_I(1);
    vlSelf->io_out_valid = VL_RAND_RESET_I(1);
    vlSelf->io_out_bits_result = VL_RAND_RESET_I(32);
    vlSelf->io_out_bits_ctrl_mixPc = VL_RAND_RESET_I(1);
    vlSelf->io_out_bits_ctrl_rowtag = VL_RAND_RESET_I(2);
    vlSelf->io_out_bits_ctrl_decode_src = VL_RAND_RESET_I(5);
    vlSelf->DotProdUnit__DOT__pipeline_reg_io_out_ready = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg_1_io_out_ready = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg_2_io_out_ready = VL_RAND_RESET_I(1);
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
    vlSelf->DotProdUnit__DOT__fcvt__DOT__subnormal_shamt_lzc_io_in = VL_RAND_RESET_I(10);
    vlSelf->DotProdUnit__DOT__fcvt__DOT__subnormal_shamt_lzc_io_out = VL_RAND_RESET_I(4);
    vlSelf->DotProdUnit__DOT__fcvt__DOT__fp_in_exp = VL_RAND_RESET_I(5);
    vlSelf->DotProdUnit__DOT__fcvt__DOT__decode_in_sigNotZero = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fcvt__DOT___result_T_4 = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__validReg = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_0 = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_1 = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_2 = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_3 = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_4 = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_ctrl_mixPc = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_ctrl_rowtag = VL_RAND_RESET_I(2);
    vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_ctrl_decode_src = VL_RAND_RESET_I(5);
    vlSelf->DotProdUnit__DOT__pipeline_reg__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__validReg = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_add_res_0 = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_add_res_1 = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_add_res_2 = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag = VL_RAND_RESET_I(2);
    vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src = VL_RAND_RESET_I(5);
    vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__validReg = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_add_res_0 = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_add_res_1 = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag = VL_RAND_RESET_I(2);
    vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src = VL_RAND_RESET_I(5);
    vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__validReg = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res = VL_RAND_RESET_I(32);
    vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag = VL_RAND_RESET_I(2);
    vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src = VL_RAND_RESET_I(5);
    vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT___T = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT__normal_rounder_io_cout = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT__shiftRightJam_io_in = VL_RAND_RESET_I(12);
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT__subnormal_rounder_io_in = VL_RAND_RESET_I(10);
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT__expOverflow = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT___common_exp_T_4 = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT__normal_rounder__DOT__r_up = VL_RAND_RESET_I(1);
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T = VL_RAND_RESET_I(12);
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT__subnormal_rounder__DOT__r_up = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
