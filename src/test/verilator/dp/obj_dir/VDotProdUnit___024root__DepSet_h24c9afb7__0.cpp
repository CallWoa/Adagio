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
    vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT___GEN_1 
        = ((IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT___T) 
           | ((~ (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2_io_out_ready)) 
              & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__validReg)));
    vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT___T 
        = ((IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_io_out_ready) 
           & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__validReg));
    vlSelf->io_in_ready = (1U & ((~ (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__validReg)) 
                                 | (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_io_out_ready)));
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

void VDotProdUnit___024root___eval_ico(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VDotProdUnit___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VDotProdUnit___024root___eval_act(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___eval_act\n"); );
}

void VDotProdUnit___024root___eval_triggers__ico(VDotProdUnit___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VDotProdUnit___024root___dump_triggers__ico(VDotProdUnit___024root* vlSelf);
#endif  // VL_DEBUG
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
                VL_FATAL_MT("DotProdUnit.v", 2040, "", "Input combinational region did not converge.");
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
                    VL_FATAL_MT("DotProdUnit.v", 2040, "", "Active region did not converge.");
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
                VL_FATAL_MT("DotProdUnit.v", 2040, "", "NBA region did not converge.");
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
    if (VL_UNLIKELY((vlSelf->io_in_bits_flush & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_flush");}
    if (VL_UNLIKELY((vlSelf->io_in_bits_ctrl_mixPc 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_ctrl_mixPc");}
    if (VL_UNLIKELY((vlSelf->io_in_bits_ctrl_rowtag 
                     & 0xfcU))) {
        Verilated::overWidthError("io_in_bits_ctrl_rowtag");}
    if (VL_UNLIKELY((vlSelf->io_in_bits_ctrl_decode_src 
                     & 0xe0U))) {
        Verilated::overWidthError("io_in_bits_ctrl_decode_src");}
    if (VL_UNLIKELY((vlSelf->io_out_ready & 0xfeU))) {
        Verilated::overWidthError("io_out_ready");}
}
#endif  // VL_DEBUG
