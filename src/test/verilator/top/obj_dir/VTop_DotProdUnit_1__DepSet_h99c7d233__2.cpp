// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_DotProdUnit_1.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__1(VTop_DotProdUnit_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (1U & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0) 
                                                   ^ 
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U]) 
                                                  >> 0xfU));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U]))));
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (IData)(
                                                     (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1) 
                                                       >> 0xfU) 
                                                      ^ 
                                                      (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                       >> 0x1fU)));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                            >> 0x10U))))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                                       >> 0x10U))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                   >> 0x1aU)))) 
                          << 0xaU) | (0x3ffU & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                >> 0x10U)))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                                    >> 0x1aU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                                      >> 0x10U))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2) 
                                                ^ vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U]) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U]))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (IData)(
                                                     (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3) 
                                                       >> 0xfU) 
                                                      ^ 
                                                      (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                       >> 0x1fU)));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                            >> 0x10U))))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                                       >> 0x10U))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                   >> 0x1aU)))) 
                          << 0xaU) | (0x3ffU & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                >> 0x10U)))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                                    >> 0x1aU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                                      >> 0x10U))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
    vlSelf->__PVT__fmul__DOT__lzc = (0xfU & ((0U != 
                                              (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                               & (0x200000U 
                                                  >> (IData)(vlSelf->__PVT__fmul__DOT__lzcRaw))))
                                              ? (IData)(vlSelf->__PVT__fmul__DOT__lzcRaw)
                                              : ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__fmul__DOT__lzcRaw))));
    vlSelf->__PVT__fmul__DOT__resultExpNoShift = ((IData)(vlSelf->__PVT__fmul__DOT__hasZero)
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x61U) 
                                                      + 
                                                      (0x3fU 
                                                       & ((0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                                << 0x16U) 
                                                               | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                                  >> 0xaU)) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U]))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_1__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                          >> 0x1aU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                                       >> 0x1aU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[4U] 
                                                              >> 0x10U)))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_2__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U]))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                          >> 0x1aU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                                       >> 0x1aU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[5U] 
                                                              >> 0x10U)))))))))));
    vlSelf->__PVT__fmul__DOT__shiftLimit = ((0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift))) 
                                            <= (IData)(vlSelf->__PVT__fmul__DOT__lzc));
    vlSelf->__PVT__fmul_1__DOT__shiftLimit = ((0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift))) 
                                              <= (IData)(vlSelf->__PVT__fmul_1__DOT__lzc));
    vlSelf->__PVT__fmul_2__DOT__shiftLimit = ((0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__fmul_2__DOT__resultExpNoShift))) 
                                              <= (IData)(vlSelf->__PVT__fmul_2__DOT__lzc));
    vlSelf->__PVT__fmul_3__DOT__shiftLimit = ((0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__fmul_3__DOT__resultExpNoShift))) 
                                              <= (IData)(vlSelf->__PVT__fmul_3__DOT__lzc));
    vlSelf->__PVT__fmul__DOT___resultSigShifted_T = 
        ((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
          ? (IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift)
          : (IData)(vlSelf->__PVT__fmul__DOT__lzc));
    vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
            ? (IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift)
            : (IData)(vlSelf->__PVT__fmul_1__DOT__lzc));
    vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->__PVT__fmul_2__DOT__shiftLimit)
            ? (IData)(vlSelf->__PVT__fmul_2__DOT__resultExpNoShift)
            : (IData)(vlSelf->__PVT__fmul_2__DOT__lzc));
    vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->__PVT__fmul_3__DOT__shiftLimit)
            ? (IData)(vlSelf->__PVT__fmul_3__DOT__resultExpNoShift)
            : (IData)(vlSelf->__PVT__fmul_3__DOT__lzc));
}

VL_INLINE_OPT void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__1(VTop_DotProdUnit_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__1\n"); );
    // Body
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (1U & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0) 
                                                   ^ 
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U]) 
                                                  >> 0xfU));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U]))));
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (IData)(
                                                     (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1) 
                                                       >> 0xfU) 
                                                      ^ 
                                                      (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                       >> 0x1fU)));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                            >> 0x10U))))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                                       >> 0x10U))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                   >> 0x1aU)))) 
                          << 0xaU) | (0x3ffU & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                >> 0x10U)))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                                    >> 0x1aU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                                      >> 0x10U))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2) 
                                                ^ vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U]) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U]))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (IData)(
                                                     (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3) 
                                                       >> 0xfU) 
                                                      ^ 
                                                      (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                       >> 0x1fU)));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                            >> 0x10U))))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                                       >> 0x10U))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                   >> 0x1aU)))) 
                          << 0xaU) | (0x3ffU & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                >> 0x10U)))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                                    >> 0x1aU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                                      >> 0x10U))))))));
    vlSelf->__PVT__fcvt__DOT___result_T_4 = ((~ (IData)(
                                                        (0x1fU 
                                                         == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                             & (0U 
                                                != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)));
    vlSelf->__PVT__fmul__DOT__lzc = (0xfU & ((0U != 
                                              (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                               & (0x200000U 
                                                  >> (IData)(vlSelf->__PVT__fmul__DOT__lzcRaw))))
                                              ? (IData)(vlSelf->__PVT__fmul__DOT__lzcRaw)
                                              : ((IData)(1U) 
                                                 + (IData)(vlSelf->__PVT__fmul__DOT__lzcRaw))));
    vlSelf->__PVT__fmul__DOT__resultExpNoShift = ((IData)(vlSelf->__PVT__fmul__DOT__hasZero)
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x61U) 
                                                      + 
                                                      (0x3fU 
                                                       & ((0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                                << 0x16U) 
                                                               | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                                  >> 0xaU)) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U]))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_1__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_1)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                          >> 0x1aU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                                       >> 0x1aU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[6U] 
                                                              >> 0x10U)))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_2__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_2)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U]))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_va_3)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                          >> 0x1aU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                                       >> 0x1aU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_vb_qual1_2_data[7U] 
                                                              >> 0x10U)))))))))));
    vlSelf->__PVT__fmul__DOT__shiftLimit = ((0xffU 
                                             & ((IData)(1U) 
                                                + (IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift))) 
                                            <= (IData)(vlSelf->__PVT__fmul__DOT__lzc));
    vlSelf->__PVT__fmul_1__DOT__shiftLimit = ((0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift))) 
                                              <= (IData)(vlSelf->__PVT__fmul_1__DOT__lzc));
    vlSelf->__PVT__fmul_2__DOT__shiftLimit = ((0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__fmul_2__DOT__resultExpNoShift))) 
                                              <= (IData)(vlSelf->__PVT__fmul_2__DOT__lzc));
    vlSelf->__PVT__fmul_3__DOT__shiftLimit = ((0xffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlSelf->__PVT__fmul_3__DOT__resultExpNoShift))) 
                                              <= (IData)(vlSelf->__PVT__fmul_3__DOT__lzc));
    vlSelf->__PVT__fmul__DOT___resultSigShifted_T = 
        ((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
          ? (IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift)
          : (IData)(vlSelf->__PVT__fmul__DOT__lzc));
    vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
            ? (IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift)
            : (IData)(vlSelf->__PVT__fmul_1__DOT__lzc));
    vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->__PVT__fmul_2__DOT__shiftLimit)
            ? (IData)(vlSelf->__PVT__fmul_2__DOT__resultExpNoShift)
            : (IData)(vlSelf->__PVT__fmul_2__DOT__lzc));
    vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->__PVT__fmul_3__DOT__shiftLimit)
            ? (IData)(vlSelf->__PVT__fmul_3__DOT__resultExpNoShift)
            : (IData)(vlSelf->__PVT__fmul_3__DOT__lzc));
}
