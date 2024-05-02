// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_DotProdUnit.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__valid_2) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__valid_2) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_17 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_52 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_33 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_41 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_17)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_50 = ((IData)(vlSelf->__PVT___T_17) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__1\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__valid_2) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__valid_2) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_2 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_2);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_2 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_2 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_2))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_2 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_2 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_2)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_2)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_2)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_2)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_2)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_2)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_2)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_2)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (1U & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0) 
                                                   ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0)) 
                                                  >> 0xfU));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0)))));
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1))))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1)))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2)))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3))))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3)))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3))))))));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
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
    vlSelf->__PVT__fmul__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                                            | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                                               & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)));
    vlSelf->__PVT__fmul__DOT__resultExpNoShift = ((IData)(vlSelf->__PVT__fmul__DOT__hasZero)
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x61U) 
                                                      + 
                                                      (0x3fU 
                                                       & ((0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_0)))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_1__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)));
    vlSelf->__PVT__fmul_1__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_1)))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_2__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)));
    vlSelf->__PVT__fmul_2__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_2)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_2_3)))))))))));
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

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__valid_3) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__valid_3) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_17 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_52 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_33 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_41 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_17)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_50 = ((IData)(vlSelf->__PVT___T_17) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__1\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__valid_3) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__valid_3) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_3 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_3);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_3 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_3 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_3))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_3 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_3 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_3)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_3)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_3)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_3)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_3)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_3)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_3)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_c_3)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (1U & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0) 
                                                   ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0)) 
                                                  >> 0xfU));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0)))));
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1))))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1)))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2)))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3))))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3)))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3))))))));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
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
    vlSelf->__PVT__fmul__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                                            | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                                               & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)));
    vlSelf->__PVT__fmul__DOT__resultExpNoShift = ((IData)(vlSelf->__PVT__fmul__DOT__hasZero)
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x61U) 
                                                      + 
                                                      (0x3fU 
                                                       & ((0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_0)))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_1__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)));
    vlSelf->__PVT__fmul_1__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_1)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_1)))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_2__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)));
    vlSelf->__PVT__fmul_2__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_2)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_2)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_va_3)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dpIn_vb_3_3)))))))))));
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

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_17 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_52 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_33 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_41 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_17)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_50 = ((IData)(vlSelf->__PVT___T_17) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__1\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_0 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_0);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_0 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_0 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_0))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_0 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_0 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_0)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_0)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_0)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_0)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_0)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_0)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_0)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_0)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (1U & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                   ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0)) 
                                                  >> 0xfU));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0)))));
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1))))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1)))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2)))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3))))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3)))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3))))))));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
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
    vlSelf->__PVT__fmul__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                                            | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                                               & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)));
    vlSelf->__PVT__fmul__DOT__resultExpNoShift = ((IData)(vlSelf->__PVT__fmul__DOT__hasZero)
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x61U) 
                                                      + 
                                                      (0x3fU 
                                                       & ((0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F0)))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_1__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)));
    vlSelf->__PVT__fmul_1__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F1)))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_2__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)));
    vlSelf->__PVT__fmul_2__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F2)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb___05F3)))))))))));
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

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__valid_1) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__valid_1) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_17 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_52 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_33 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_41 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_17)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_50 = ((IData)(vlSelf->__PVT___T_17) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__1\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__valid_1) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__valid_1) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_1 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_1);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_1 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_1 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_1))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_1 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_1 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_1)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_1)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_1)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_1)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_1)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_1)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_1)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_1)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (1U & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                   ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0)) 
                                                  >> 0xfU));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0)))));
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1))))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1)))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2)))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3))))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3)))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3))))))));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
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
    vlSelf->__PVT__fmul__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                                            | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                                               & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)));
    vlSelf->__PVT__fmul__DOT__resultExpNoShift = ((IData)(vlSelf->__PVT__fmul__DOT__hasZero)
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x61U) 
                                                      + 
                                                      (0x3fU 
                                                       & ((0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_0)))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_1__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)));
    vlSelf->__PVT__fmul_1__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_1)))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_2__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)));
    vlSelf->__PVT__fmul_2__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_2)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_1_3)))))))))));
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

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__valid_2) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__valid_2) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_17 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_52 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_33 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_41 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_17)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_50 = ((IData)(vlSelf->__PVT___T_17) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__1\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__valid_2) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__valid_2) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_2 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_2);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_2 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_2 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_2))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_2 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_2 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_2)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_2)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_2)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_2)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_2)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_2)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_2)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_2)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (1U & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                   ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0)) 
                                                  >> 0xfU));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0)))));
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1))))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1)))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2)))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3))))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3)))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3))))))));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
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
    vlSelf->__PVT__fmul__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                                            | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                                               & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)));
    vlSelf->__PVT__fmul__DOT__resultExpNoShift = ((IData)(vlSelf->__PVT__fmul__DOT__hasZero)
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x61U) 
                                                      + 
                                                      (0x3fU 
                                                       & ((0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_0)))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_1__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)));
    vlSelf->__PVT__fmul_1__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_1)))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_2__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)));
    vlSelf->__PVT__fmul_2__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_2)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_2_3)))))))))));
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

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__valid_3) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__valid_3) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_17 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_52 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_33 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_41 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_17)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_50 = ((IData)(vlSelf->__PVT___T_17) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__1\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__valid_3) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__valid_3) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_3 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_3);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_3 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_3 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_3))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_3 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_3 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_3)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_3)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_3)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_3)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_3)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_3)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_3)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_c_3)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (1U & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                   ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0)) 
                                                  >> 0xfU));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0)))));
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1))))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1)))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2)))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3))))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3)))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3))))))));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
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
    vlSelf->__PVT__fmul__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                                            | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                                               & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)));
    vlSelf->__PVT__fmul__DOT__resultExpNoShift = ((IData)(vlSelf->__PVT__fmul__DOT__hasZero)
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x61U) 
                                                      + 
                                                      (0x3fU 
                                                       & ((0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_0)))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_1__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)));
    vlSelf->__PVT__fmul_1__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_1)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_1)))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_2__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)));
    vlSelf->__PVT__fmul_2__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_2)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_2)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_va_3)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg__DOT__dpIn_vb_3_3)))))))))));
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

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_17 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_52 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_33 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_41 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_17)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_50 = ((IData)(vlSelf->__PVT___T_17) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__1\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_0 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_0);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_0 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_0 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_0))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_0 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_0 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_0)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_0)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_0)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_0)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_0)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_0)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_0)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_0)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (1U & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                   ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0)) 
                                                  >> 0xfU));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0)))));
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1))))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1)))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2)))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3))))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3)))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3))))))));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
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
    vlSelf->__PVT__fmul__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                                            | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                                               & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)));
    vlSelf->__PVT__fmul__DOT__resultExpNoShift = ((IData)(vlSelf->__PVT__fmul__DOT__hasZero)
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x61U) 
                                                      + 
                                                      (0x3fU 
                                                       & ((0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F0)))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_1__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)));
    vlSelf->__PVT__fmul_1__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F1)))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_2__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)));
    vlSelf->__PVT__fmul_2__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F2)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb___05F3)))))))))));
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

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__valid_1) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__valid_1) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_17 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_52 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_33 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_41 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_17)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_50 = ((IData)(vlSelf->__PVT___T_17) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__1\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__valid_1) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__valid_1) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_1 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_1);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_1 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_1 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_1))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_1 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_1 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_1)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_1)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_1)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_1)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_1)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_1)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_1)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_1)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (1U & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                   ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0)) 
                                                  >> 0xfU));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0)))));
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1))))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1)))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2)))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3))))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3)))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3))))))));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
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
    vlSelf->__PVT__fmul__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                                            | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                                               & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)));
    vlSelf->__PVT__fmul__DOT__resultExpNoShift = ((IData)(vlSelf->__PVT__fmul__DOT__hasZero)
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x61U) 
                                                      + 
                                                      (0x3fU 
                                                       & ((0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_0)))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_1__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)));
    vlSelf->__PVT__fmul_1__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_1)))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_2__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)));
    vlSelf->__PVT__fmul_2__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_2)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_1_3)))))))))));
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

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__valid_2) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__valid_2) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_17 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_52 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_33 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_41 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_17)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_50 = ((IData)(vlSelf->__PVT___T_17) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__1\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__valid_2) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__valid_2) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_2 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_2);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_2 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_2 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_2))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_2 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_2 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_2)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_2)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_2)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_2)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_2)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_2)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_2)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_2)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (1U & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                   ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0)) 
                                                  >> 0xfU));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0)))));
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1))))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1)))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2)))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3))))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3)))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3))))))));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
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
    vlSelf->__PVT__fmul__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                                            | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                                               & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)));
    vlSelf->__PVT__fmul__DOT__resultExpNoShift = ((IData)(vlSelf->__PVT__fmul__DOT__hasZero)
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x61U) 
                                                      + 
                                                      (0x3fU 
                                                       & ((0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_0)))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_1__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)));
    vlSelf->__PVT__fmul_1__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_1)))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_2__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)));
    vlSelf->__PVT__fmul_2__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_2)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_2_3)))))))))));
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

VL_INLINE_OPT void VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__0\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__valid_3) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__valid_3) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___T_17 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_52 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT___GEN_33 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT___GEN_41 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_17)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT___GEN_50 = ((IData)(vlSelf->__PVT___T_17) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
}

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__1(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__1\n"); );
    // Body
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__valid_3) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__valid_3) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    if ((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_3 
                     >> 0x10U))) {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in 
            = (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_3);
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = (0x1fU 
                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_3 
                                                  >> 0xaU));
    } else {
        vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in = 0x200U;
        vlSelf->__PVT__fcvt__DOT__fp_in_exp = 0x1fU;
    }
    vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero 
        = (1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_3 
                                         >> 0x10U)))) 
                 | (0U != (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_3))));
    vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out 
        = ((1U & ((~ (IData)((0xffffU == (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_3 
                                          >> 0x10U)))) 
                  | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_3 
                     >> 9U))) ? 0U : ((IData)((0xffff0100U 
                                               == (0xffff0100U 
                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_3)))
                                       ? 1U : ((IData)(
                                                       (0xffff0080U 
                                                        == 
                                                        (0xffff0080U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_3)))
                                                ? 2U
                                                : ((IData)(
                                                           (0xffff0040U 
                                                            == 
                                                            (0xffff0040U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_3)))
                                                    ? 3U
                                                    : 
                                                   ((IData)(
                                                            (0xffff0020U 
                                                             == 
                                                             (0xffff0020U 
                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_3)))
                                                     ? 4U
                                                     : 
                                                    ((IData)(
                                                             (0xffff0010U 
                                                              == 
                                                              (0xffff0010U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_3)))
                                                      ? 5U
                                                      : 
                                                     ((IData)(
                                                              (0xffff0008U 
                                                               == 
                                                               (0xffff0008U 
                                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_3)))
                                                       ? 6U
                                                       : 
                                                      ((IData)(
                                                               (0xffff0004U 
                                                                == 
                                                                (0xffff0004U 
                                                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_3)))
                                                        ? 7U
                                                        : 
                                                       ((IData)(
                                                                (0xffff0002U 
                                                                 == 
                                                                 (0xffff0002U 
                                                                  & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_c_3)))
                                                         ? 8U
                                                         : 9U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (1U & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                   ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0)) 
                                                  >> 0xfU));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))))))) 
                                        | (IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0)))));
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1))))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1)))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2)))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                ^ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3)) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3))))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3))) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))) 
                      * (((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3)))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3))
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3) 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3))))))));
    vlSelf->__PVT___GEN_5 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_17 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
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
    vlSelf->__PVT__fmul__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                                            | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                                               & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)));
    vlSelf->__PVT__fmul__DOT__resultExpNoShift = ((IData)(vlSelf->__PVT__fmul__DOT__hasZero)
                                                   ? 0U
                                                   : 
                                                  (0xffU 
                                                   & ((IData)(0x61U) 
                                                      + 
                                                      (0x3fU 
                                                       & ((0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_0)))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_1__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_1__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)));
    vlSelf->__PVT__fmul_1__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_1)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_1)))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_2__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_2__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)));
    vlSelf->__PVT__fmul_2__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_2)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_2)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_va_3)))))) 
                                                + (0x1fU 
                                                   & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3) 
                                                       >> 0xaU) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3) 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1.__PVT__tg_1__DOT__dpIn_vb_3_3)))))))))));
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
