// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_DotProdUnit.h"
#include "VTop_FADD.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__0\n"); );
    // Body
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    if (vlSelf->__PVT___T_15) {
        vlSelf->__PVT__atResult_es = vlSelf->__PVT__faddModule_3->__PVT__io_out_bits_result;
        vlSelf->__PVT__rowtag_es = vlSelf->__PVT__rowtag_sx;
        vlSelf->__PVT__mixPc_es = vlSelf->__PVT__mixPc_sx;
        vlSelf->__PVT__rm_es = vlSelf->__PVT__rm_sx;
    }
    vlSelf->__PVT__valid = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT__valid_4 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT__esValid = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_32));
    vlSelf->__PVT__valid_3 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_40));
    if (vlSelf->__PVT__prehandshaked_5) {
        vlSelf->__PVT__fcvt_io_in_bits_in_r = vlSelf->__PVT__faddModule_3->__PVT__io_out_bits_result;
    }
    if (vlSelf->__PVT__posthandshaked) {
        vlSelf->__PVT__faddModule_io_in_bits_b_r_3 
            = vlSelf->__PVT__addResult_1_r;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_3 
            = (((IData)(vlSelf->__PVT__faddModule_2->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__faddModule_2->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r_2 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule_2->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__rowtag_sx = vlSelf->__PVT__rowtag_this;
        vlSelf->__PVT__mixPc_sx = vlSelf->__PVT__mixPc_this;
        vlSelf->__PVT__rm_sx = vlSelf->__PVT__rm_this;
    }
    vlSelf->__PVT___T_15 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__io_out_valid = ((IData)(vlSelf->__PVT__valid_4) 
                                   | ((IData)(vlSelf->__PVT__esValid) 
                                      & (IData)(vlSelf->__PVT__mixPc_es)));
    vlSelf->__PVT__fcvt_1__DOT__rmin = ((1U == (IData)(vlSelf->__PVT__rm_es)) 
                                        | (((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x1fU)) 
                                            & (2U == (IData)(vlSelf->__PVT__rm_es))) 
                                           | ((3U == (IData)(vlSelf->__PVT__rm_es)) 
                                              & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                 >> 0x1fU))));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact 
        = (IData)((0U != (0x1fffU & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                        >> 0xcU)));
    if (vlSelf->__PVT__prehandshaked_2) {
        vlSelf->__PVT__addResult_1_r = vlSelf->__PVT__firstAddResult_2_r;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_2 
            = (((IData)(vlSelf->__PVT__faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__a_flag_isInf) 
                   | (IData)(vlSelf->__PVT__b_flag_isInf)))
                ? (((IData)(vlSelf->__PVT__faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__a_flag_isInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__b_flag_isInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__a_flag_isInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r_2 
            = (((IData)(vlSelf->__PVT__faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__a_flag_1_isInf) 
                   | (IData)(vlSelf->__PVT__b_flag_1_isInf)))
                ? (((IData)(vlSelf->__PVT__faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__a_flag_1_isInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__b_flag_1_isInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__a_flag_1_isInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r_1 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule_1->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule_1->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    if (vlSelf->__PVT__prehandshaked_1) {
        vlSelf->__PVT__a_flag_isNaN = vlSelf->__PVT__fmul__DOT__nan_result;
        vlSelf->__PVT__b_flag_isNaN = vlSelf->__PVT__fmul_1__DOT__nan_result;
        vlSelf->__PVT__b_flag_1_isNaN = vlSelf->__PVT__fmul_3__DOT__nan_result;
        vlSelf->__PVT__a_flag_1_isNaN = vlSelf->__PVT__fmul_2__DOT__nan_result;
        vlSelf->__PVT__a_flag_isInf = vlSelf->__PVT__fmul__DOT__hasInf;
        vlSelf->__PVT__b_flag_isInf = vlSelf->__PVT__fmul_1__DOT__hasInf;
        vlSelf->__PVT__faddModule_io_in_bits_a_r = 
            (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
              | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                 | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
              ? ((IData)(vlSelf->__PVT__fmul__DOT__nan_result)
                  ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                       << 0x1fU))) : 
             (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
               << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                               ? 0U : (0xffU & ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                   - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                             << 0x17U) | (((0x14U >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                            ? (0x1fffffU 
                                               & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                  << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                            : 0U) << 2U))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r = 
            (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                 | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
              ? ((IData)(vlSelf->__PVT__fmul_1__DOT__nan_result)
                  ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                       << 0x1fU))) : 
             (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
               << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                               ? 0U : (0xffU & ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                   - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                             << 0x17U) | (((0x14U >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                            ? (0x1fffffU 
                                               & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                  << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                            : 0U) << 2U))));
        vlSelf->__PVT__a_flag_1_isInf = vlSelf->__PVT__fmul_2__DOT__hasInf;
        vlSelf->__PVT__b_flag_1_isInf = vlSelf->__PVT__fmul_3__DOT__hasInf;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_1 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? ((IData)(vlSelf->__PVT__fmul_2__DOT__nan_result)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_2__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_2__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_2__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r_1 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? ((IData)(vlSelf->__PVT__fmul_3__DOT__nan_result)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_3__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_3__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_3__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
    }
    if (vlSelf->__PVT__prehandshaked_2) {
        vlSelf->__PVT__rowtag_this = vlSelf->__PVT__rowtag_s2;
        vlSelf->__PVT__mixPc_this = vlSelf->__PVT__mixPc_s2;
        vlSelf->__PVT__rm_this = vlSelf->__PVT__rm_s2;
    }
    vlSelf->__PVT___GEN_49 = ((IData)(vlSelf->__PVT___T_15) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn 
        = ((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                   & (((0xffffU & ((IData)(1U) << (0xfU 
                                                   & ((IData)(1U) 
                                                      - 
                                                      (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                       >> 0x17U))))) 
                       - (IData)(1U)) | ((0xcU < (0xffU 
                                                  & ((IData)(0x71U) 
                                                     - 
                                                     (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                      >> 0x17U))))
                                          ? 0xfffU : 0U)))) 
           | (0U != (0xfffU & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_40 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_15)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__rm_es))
                  ? (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                     >> 0xcU) : ((2U == (IData)(vlSelf->__PVT__rm_es))
                                  ? ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact) 
                                     & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                        >> 0x1fU)) : 
                                 ((3U == (IData)(vlSelf->__PVT__rm_es))
                                   ? ((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                          >> 0x1fU)) 
                                      & (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact))
                                   : ((1U != (IData)(vlSelf->__PVT__rm_es)) 
                                      & ((0U == (IData)(vlSelf->__PVT__rm_es)) 
                                         & ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                             >> 0xcU) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x2fffU 
                                                        & vlSelf->__PVT__fcvt_io_in_bits_in_r))))))))));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn 
        = ((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x17U)))) 
           & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T));
    if (vlSelf->__PVT__s1_handshaked_s2) {
        if (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_mixPcMode_r_1) {
            vlSelf->__PVT__firstAddResult_2_r = vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c;
            vlSelf->__PVT__rowtag_s2 = vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_rowtag;
            vlSelf->__PVT__mixPc_s2 = 1U;
        } else {
            vlSelf->__PVT__firstAddResult_2_r = (((
                                                   (~ 
                                                    ((0x1fU 
                                                      == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                                                     & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                                                   & (IData)(
                                                             (0xffff8000U 
                                                              == 
                                                              (0xffff8000U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c)))) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & (((((0x1fU 
                                                            == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                            ? 0xffU
                                                            : 0U) 
                                                          | (((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                                              & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))
                                                              ? 
                                                             ((IData)(0x70U) 
                                                              - (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out))
                                                              : 0U)) 
                                                         | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                                             ? 
                                                            ((IData)(0x70U) 
                                                             + (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                             : 0U)) 
                                                        << 0x17U)) 
                                                    | ((((0x1fU 
                                                          == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                                          << 0x16U)
                                                          : 0U) 
                                                        | ((0U 
                                                            != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                            ? 0U
                                                            : 
                                                           (0x7fc000U 
                                                            & ((((0xffffU 
                                                                  == 
                                                                  (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c 
                                                                   >> 0x10U))
                                                                  ? vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_2_io_in_bits_c
                                                                  : 0U) 
                                                                << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                               << 0xeU)))) 
                                                       | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                                           << 0xdU)
                                                           : 0U))));
            vlSelf->__PVT__rowtag_s2 = vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_rowtag;
            vlSelf->__PVT__mixPc_s2 = 0U;
        }
        vlSelf->__PVT__rm_s2 = vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_roundingMode_r_1;
    }
    vlSelf->__PVT___GEN_51 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn) 
           | (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = ((4U == (IData)(vlSelf->__PVT__rm_es)) ? (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn)
            : ((2U == (IData)(vlSelf->__PVT__rm_es))
                ? ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact) 
                   & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                      >> 0x1fU)) : ((3U == (IData)(vlSelf->__PVT__rm_es))
                                     ? ((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                            >> 0x1fU)) 
                                        & (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact))
                                     : ((1U != (IData)(vlSelf->__PVT__rm_es)) 
                                        & ((0U == (IData)(vlSelf->__PVT__rm_es)) 
                                           & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn) 
                                              & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn) 
                                                 | ((0xcU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(0x71U) 
                                                         - 
                                                         (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                          >> 0x17U)))) 
                                                    & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                                                       >> 1U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (IData)(
                                                   (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                     >> 0xfU) 
                                                    ^ 
                                                    (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                     >> 0x1fU)));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))))) 
                                        | (IData)((
                                                   (0x7c000000U 
                                                    == 
                                                    (0x7c000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                          >> 0x10U))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))))))) 
                                        | (IData)((
                                                   (0x7c000000U 
                                                    == 
                                                    (0x7c000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                                     >> 0x10U))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                                    >> 0x1aU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                            >> 0x10U)))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                                  >> 0x1aU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                                    >> 0x10U))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                ^ vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U]) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U]))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U])))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (IData)(
                                                     (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                       >> 0xfU) 
                                                      ^ 
                                                      (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                       >> 0x1fU)));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                            >> 0x10U))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                                       >> 0x10U))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                   >> 0x1aU)))) 
                          << 0xaU) | (0x3ffU & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                >> 0x10U)))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                                    >> 0x1aU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                                      >> 0x10U))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                ^ vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U]) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U]))));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_in_valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U])))))));
    vlSelf->__PVT___GEN_32 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
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
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                                << 6U) 
                                                               | (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                                  >> 0x1aU)) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                                               >> 0x1aU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                                      >> 0x10U)))))))))));
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
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[3U]))))))))));
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
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                          >> 0x1aU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                                       >> 0x1aU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                              >> 0x10U)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[2U]))))))))));
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_in_valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__mixPc_es)
                                          ? vlSelf->__PVT__atResult_es
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__fcvt_io_in_bits_in_r)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__fcvt_io_in_bits_in_r))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1)
                                                               ? 
                                                              ((IData)(vlSelf->__PVT__fcvt_1__DOT__rmin)
                                                                ? 0x1eU
                                                                : 0x1fU)
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                                >> 0x17U)) 
                                                                              - (IData)(0x70U)))) 
                                                               & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up) 
                                                                  & (0x3ffU 
                                                                     == (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in))))))) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & (((0xffU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__fcvt_io_in_bits_in_r))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            ((((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1)
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__fcvt_1__DOT__rmin)
                                                                 ? 0x3ffU
                                                                 : 0U)
                                                                : 0U) 
                                                              | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                  ? 
                                                                 ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                   >> 0xdU) 
                                                                  + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                                  : 0U)) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
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

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__0\n"); );
    // Body
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    if (vlSelf->__PVT___T_15) {
        vlSelf->__PVT__atResult_es = vlSelf->__PVT__faddModule_3->__PVT__io_out_bits_result;
        vlSelf->__PVT__rm_es = vlSelf->__PVT__rm_sx;
        vlSelf->__PVT__rowtag_es = vlSelf->__PVT__rowtag_sx;
        vlSelf->__PVT__mixPc_es = vlSelf->__PVT__mixPc_sx;
    }
    vlSelf->__PVT__valid = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT__valid_4 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT__esValid = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_32));
    vlSelf->__PVT__valid_3 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_40));
    if (vlSelf->__PVT__prehandshaked_5) {
        vlSelf->__PVT__fcvt_io_in_bits_in_r = vlSelf->__PVT__faddModule_3->__PVT__io_out_bits_result;
    }
    if (vlSelf->__PVT__posthandshaked) {
        vlSelf->__PVT__faddModule_io_in_bits_b_r_3 
            = vlSelf->__PVT__addResult_1_r;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_3 
            = (((IData)(vlSelf->__PVT__faddModule_2->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__faddModule_2->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r_2 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule_2->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__rm_sx = vlSelf->__PVT__rm_this;
        vlSelf->__PVT__rowtag_sx = vlSelf->__PVT__rowtag_this;
        vlSelf->__PVT__mixPc_sx = vlSelf->__PVT__mixPc_this;
    }
    vlSelf->__PVT___T_15 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fcvt_1__DOT__rmin = ((1U == (IData)(vlSelf->__PVT__rm_es)) 
                                        | (((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x1fU)) 
                                            & (2U == (IData)(vlSelf->__PVT__rm_es))) 
                                           | ((3U == (IData)(vlSelf->__PVT__rm_es)) 
                                              & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                 >> 0x1fU))));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact 
        = (IData)((0U != (0x1fffU & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                        >> 0xcU)));
    if (vlSelf->__PVT__prehandshaked_2) {
        vlSelf->__PVT__addResult_1_r = vlSelf->__PVT__firstAddResult_2_r;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_2 
            = (((IData)(vlSelf->__PVT__faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__a_flag_isInf) 
                   | (IData)(vlSelf->__PVT__b_flag_isInf)))
                ? (((IData)(vlSelf->__PVT__faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__a_flag_isInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__b_flag_isInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__a_flag_isInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r_2 
            = (((IData)(vlSelf->__PVT__faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__a_flag_1_isInf) 
                   | (IData)(vlSelf->__PVT__b_flag_1_isInf)))
                ? (((IData)(vlSelf->__PVT__faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__a_flag_1_isInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__b_flag_1_isInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__a_flag_1_isInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r_1 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule_1->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule_1->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    if (vlSelf->__PVT__prehandshaked_1) {
        vlSelf->__PVT__a_flag_isNaN = vlSelf->__PVT__fmul__DOT__nan_result;
        vlSelf->__PVT__b_flag_isNaN = vlSelf->__PVT__fmul_1__DOT__nan_result;
        vlSelf->__PVT__b_flag_1_isNaN = vlSelf->__PVT__fmul_3__DOT__nan_result;
        vlSelf->__PVT__a_flag_1_isNaN = vlSelf->__PVT__fmul_2__DOT__nan_result;
        vlSelf->__PVT__a_flag_isInf = vlSelf->__PVT__fmul__DOT__hasInf;
        vlSelf->__PVT__b_flag_isInf = vlSelf->__PVT__fmul_1__DOT__hasInf;
        vlSelf->__PVT__faddModule_io_in_bits_a_r = 
            (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
              | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                 | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
              ? ((IData)(vlSelf->__PVT__fmul__DOT__nan_result)
                  ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                       << 0x1fU))) : 
             (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
               << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                               ? 0U : (0xffU & ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                   - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                             << 0x17U) | (((0x14U >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                            ? (0x1fffffU 
                                               & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                  << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                            : 0U) << 2U))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r = 
            (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                 | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
              ? ((IData)(vlSelf->__PVT__fmul_1__DOT__nan_result)
                  ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                       << 0x1fU))) : 
             (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
               << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                               ? 0U : (0xffU & ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                   - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                             << 0x17U) | (((0x14U >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                            ? (0x1fffffU 
                                               & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                  << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                            : 0U) << 2U))));
        vlSelf->__PVT__a_flag_1_isInf = vlSelf->__PVT__fmul_2__DOT__hasInf;
        vlSelf->__PVT__b_flag_1_isInf = vlSelf->__PVT__fmul_3__DOT__hasInf;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_1 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? ((IData)(vlSelf->__PVT__fmul_2__DOT__nan_result)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_2__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_2__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_2__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r_1 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? ((IData)(vlSelf->__PVT__fmul_3__DOT__nan_result)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_3__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_3__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_3__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
    }
    if (vlSelf->__PVT__prehandshaked_2) {
        vlSelf->__PVT__rm_this = vlSelf->__PVT__rm_s2;
        vlSelf->__PVT__rowtag_this = vlSelf->__PVT__rowtag_s2;
        vlSelf->__PVT__mixPc_this = vlSelf->__PVT__mixPc_s2;
    }
    vlSelf->__PVT__io_out_valid = ((IData)(vlSelf->__PVT__valid_4) 
                                   | ((IData)(vlSelf->__PVT__esValid) 
                                      & (IData)(vlSelf->__PVT__mixPc_es)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn 
        = ((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                   & (((0xffffU & ((IData)(1U) << (0xfU 
                                                   & ((IData)(1U) 
                                                      - 
                                                      (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                       >> 0x17U))))) 
                       - (IData)(1U)) | ((0xcU < (0xffU 
                                                  & ((IData)(0x71U) 
                                                     - 
                                                     (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                      >> 0x17U))))
                                          ? 0xfffU : 0U)))) 
           | (0U != (0xfffU & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT___GEN_49 = ((IData)(vlSelf->__PVT___T_15) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__rm_es))
                  ? (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                     >> 0xcU) : ((2U == (IData)(vlSelf->__PVT__rm_es))
                                  ? ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact) 
                                     & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                        >> 0x1fU)) : 
                                 ((3U == (IData)(vlSelf->__PVT__rm_es))
                                   ? ((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                          >> 0x1fU)) 
                                      & (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact))
                                   : ((1U != (IData)(vlSelf->__PVT__rm_es)) 
                                      & ((0U == (IData)(vlSelf->__PVT__rm_es)) 
                                         & ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                             >> 0xcU) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x2fffU 
                                                        & vlSelf->__PVT__fcvt_io_in_bits_in_r))))))))));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn 
        = ((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x17U)))) 
           & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T));
    if (vlSelf->__PVT__s1_handshaked_s2) {
        if (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_mixPcMode_r_1) {
            vlSelf->__PVT__firstAddResult_2_r = vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c;
            vlSelf->__PVT__rm_s2 = vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_roundingMode_r_1;
            vlSelf->__PVT__rowtag_s2 = vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_rowtag;
            vlSelf->__PVT__mixPc_s2 = 1U;
        } else {
            vlSelf->__PVT__firstAddResult_2_r = (((
                                                   (~ 
                                                    ((0x1fU 
                                                      == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                                                     & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                                                   & (IData)(
                                                             (0xffff8000U 
                                                              == 
                                                              (0xffff8000U 
                                                               & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c)))) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & (((((0x1fU 
                                                            == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                            ? 0xffU
                                                            : 0U) 
                                                          | (((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                                              & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))
                                                              ? 
                                                             ((IData)(0x70U) 
                                                              - (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out))
                                                              : 0U)) 
                                                         | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                                             ? 
                                                            ((IData)(0x70U) 
                                                             + (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                             : 0U)) 
                                                        << 0x17U)) 
                                                    | ((((0x1fU 
                                                          == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                                          << 0x16U)
                                                          : 0U) 
                                                        | ((0U 
                                                            != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                            ? 0U
                                                            : 
                                                           (0x7fc000U 
                                                            & ((((0xffffU 
                                                                  == 
                                                                  (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c 
                                                                   >> 0x10U))
                                                                  ? vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_3_io_in_bits_c
                                                                  : 0U) 
                                                                << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                               << 0xeU)))) 
                                                       | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                                           << 0xdU)
                                                           : 0U))));
            vlSelf->__PVT__rm_s2 = vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_roundingMode_r_1;
            vlSelf->__PVT__rowtag_s2 = vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_rowtag;
            vlSelf->__PVT__mixPc_s2 = 0U;
        }
    }
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_40 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_15)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn) 
           | (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = ((4U == (IData)(vlSelf->__PVT__rm_es)) ? (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn)
            : ((2U == (IData)(vlSelf->__PVT__rm_es))
                ? ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact) 
                   & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                      >> 0x1fU)) : ((3U == (IData)(vlSelf->__PVT__rm_es))
                                     ? ((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                            >> 0x1fU)) 
                                        & (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact))
                                     : ((1U != (IData)(vlSelf->__PVT__rm_es)) 
                                        & ((0U == (IData)(vlSelf->__PVT__rm_es)) 
                                           & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn) 
                                              & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn) 
                                                 | ((0xcU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(0x71U) 
                                                         - 
                                                         (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                          >> 0x17U)))) 
                                                    & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                                                       >> 1U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (IData)(
                                                   (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                     >> 0xfU) 
                                                    ^ 
                                                    (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                     >> 0x1fU)));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))))) 
                                        | (IData)((
                                                   (0x7c000000U 
                                                    == 
                                                    (0x7c000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                          >> 0x10U))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))))))) 
                                        | (IData)((
                                                   (0x7c000000U 
                                                    == 
                                                    (0x7c000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                                     >> 0x10U))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                                    >> 0x1aU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                            >> 0x10U)))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                                  >> 0x1aU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                                    >> 0x10U))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                ^ vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U]) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U]))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U])))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (IData)(
                                                     (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                       >> 0xfU) 
                                                      ^ 
                                                      (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                       >> 0x1fU)));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                            >> 0x10U))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                                       >> 0x10U))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                   >> 0x1aU)))) 
                          << 0xaU) | (0x3ffU & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                >> 0x10U)))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                                    >> 0x1aU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                                      >> 0x10U))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                ^ vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U]) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U]))));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_in_valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U])))))));
    vlSelf->__PVT___GEN_51 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
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
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                                << 6U) 
                                                               | (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                                  >> 0x1aU)) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                                               >> 0x1aU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                                      >> 0x10U)))))))))));
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
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[1U]))))))))));
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
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                          >> 0x1aU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                                       >> 0x1aU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                              >> 0x10U)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_io_in_bits_matrix_b_r_1_data[0U]))))))))));
    vlSelf->__PVT___GEN_32 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__mixPc_es)
                                          ? vlSelf->__PVT__atResult_es
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__fcvt_io_in_bits_in_r)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__fcvt_io_in_bits_in_r))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1)
                                                               ? 
                                                              ((IData)(vlSelf->__PVT__fcvt_1__DOT__rmin)
                                                                ? 0x1eU
                                                                : 0x1fU)
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                                >> 0x17U)) 
                                                                              - (IData)(0x70U)))) 
                                                               & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up) 
                                                                  & (0x3ffU 
                                                                     == (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in))))))) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & (((0xffU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__fcvt_io_in_bits_in_r))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            ((((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1)
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__fcvt_1__DOT__rmin)
                                                                 ? 0x3ffU
                                                                 : 0U)
                                                                : 0U) 
                                                              | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                  ? 
                                                                 ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                   >> 0xdU) 
                                                                  + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                                  : 0U)) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
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
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1.__PVT__tg_1__DOT__dp_in_valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
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

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__0\n"); );
    // Body
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    if (vlSelf->__PVT___T_15) {
        vlSelf->__PVT__atResult_es = vlSelf->__PVT__faddModule_3->__PVT__io_out_bits_result;
        vlSelf->__PVT__rowtag_es = vlSelf->__PVT__rowtag_sx;
        vlSelf->__PVT__mixPc_es = vlSelf->__PVT__mixPc_sx;
        vlSelf->__PVT__rm_es = vlSelf->__PVT__rm_sx;
    }
    vlSelf->__PVT__valid = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT__valid_4 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT__esValid = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_32));
    vlSelf->__PVT__valid_3 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_40));
    if (vlSelf->__PVT__prehandshaked_5) {
        vlSelf->__PVT__fcvt_io_in_bits_in_r = vlSelf->__PVT__faddModule_3->__PVT__io_out_bits_result;
    }
    if (vlSelf->__PVT__posthandshaked) {
        vlSelf->__PVT__faddModule_io_in_bits_b_r_3 
            = vlSelf->__PVT__addResult_1_r;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_3 
            = (((IData)(vlSelf->__PVT__faddModule_2->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__faddModule_2->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r_2 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule_2->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__rowtag_sx = vlSelf->__PVT__rowtag_this;
        vlSelf->__PVT__mixPc_sx = vlSelf->__PVT__mixPc_this;
        vlSelf->__PVT__rm_sx = vlSelf->__PVT__rm_this;
    }
    vlSelf->__PVT___T_15 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__io_out_valid = ((IData)(vlSelf->__PVT__valid_4) 
                                   | ((IData)(vlSelf->__PVT__esValid) 
                                      & (IData)(vlSelf->__PVT__mixPc_es)));
    vlSelf->__PVT__fcvt_1__DOT__rmin = ((1U == (IData)(vlSelf->__PVT__rm_es)) 
                                        | (((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x1fU)) 
                                            & (2U == (IData)(vlSelf->__PVT__rm_es))) 
                                           | ((3U == (IData)(vlSelf->__PVT__rm_es)) 
                                              & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                 >> 0x1fU))));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact 
        = (IData)((0U != (0x1fffU & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                        >> 0xcU)));
    if (vlSelf->__PVT__prehandshaked_2) {
        vlSelf->__PVT__addResult_1_r = vlSelf->__PVT__firstAddResult_2_r;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_2 
            = (((IData)(vlSelf->__PVT__faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__a_flag_isInf) 
                   | (IData)(vlSelf->__PVT__b_flag_isInf)))
                ? (((IData)(vlSelf->__PVT__faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__a_flag_isInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__b_flag_isInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__a_flag_isInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r_2 
            = (((IData)(vlSelf->__PVT__faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__a_flag_1_isInf) 
                   | (IData)(vlSelf->__PVT__b_flag_1_isInf)))
                ? (((IData)(vlSelf->__PVT__faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__a_flag_1_isInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__b_flag_1_isInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__a_flag_1_isInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r_1 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule_1->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule_1->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    if (vlSelf->__PVT__prehandshaked_1) {
        vlSelf->__PVT__a_flag_isNaN = vlSelf->__PVT__fmul__DOT__nan_result;
        vlSelf->__PVT__b_flag_isNaN = vlSelf->__PVT__fmul_1__DOT__nan_result;
        vlSelf->__PVT__b_flag_1_isNaN = vlSelf->__PVT__fmul_3__DOT__nan_result;
        vlSelf->__PVT__a_flag_1_isNaN = vlSelf->__PVT__fmul_2__DOT__nan_result;
        vlSelf->__PVT__a_flag_isInf = vlSelf->__PVT__fmul__DOT__hasInf;
        vlSelf->__PVT__b_flag_isInf = vlSelf->__PVT__fmul_1__DOT__hasInf;
        vlSelf->__PVT__faddModule_io_in_bits_a_r = 
            (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
              | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                 | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
              ? ((IData)(vlSelf->__PVT__fmul__DOT__nan_result)
                  ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                       << 0x1fU))) : 
             (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
               << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                               ? 0U : (0xffU & ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                   - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                             << 0x17U) | (((0x14U >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                            ? (0x1fffffU 
                                               & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                  << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                            : 0U) << 2U))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r = 
            (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                 | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
              ? ((IData)(vlSelf->__PVT__fmul_1__DOT__nan_result)
                  ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                       << 0x1fU))) : 
             (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
               << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                               ? 0U : (0xffU & ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                   - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                             << 0x17U) | (((0x14U >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                            ? (0x1fffffU 
                                               & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                  << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                            : 0U) << 2U))));
        vlSelf->__PVT__a_flag_1_isInf = vlSelf->__PVT__fmul_2__DOT__hasInf;
        vlSelf->__PVT__b_flag_1_isInf = vlSelf->__PVT__fmul_3__DOT__hasInf;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_1 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? ((IData)(vlSelf->__PVT__fmul_2__DOT__nan_result)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_2__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_2__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_2__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r_1 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? ((IData)(vlSelf->__PVT__fmul_3__DOT__nan_result)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_3__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_3__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_3__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
    }
    if (vlSelf->__PVT__prehandshaked_2) {
        vlSelf->__PVT__rowtag_this = vlSelf->__PVT__rowtag_s2;
        vlSelf->__PVT__mixPc_this = vlSelf->__PVT__mixPc_s2;
        vlSelf->__PVT__rm_this = vlSelf->__PVT__rm_s2;
    }
    vlSelf->__PVT___GEN_49 = ((IData)(vlSelf->__PVT___T_15) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn 
        = ((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                   & (((0xffffU & ((IData)(1U) << (0xfU 
                                                   & ((IData)(1U) 
                                                      - 
                                                      (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                       >> 0x17U))))) 
                       - (IData)(1U)) | ((0xcU < (0xffU 
                                                  & ((IData)(0x71U) 
                                                     - 
                                                     (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                      >> 0x17U))))
                                          ? 0xfffU : 0U)))) 
           | (0U != (0xfffU & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_40 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_15)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__rm_es))
                  ? (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                     >> 0xcU) : ((2U == (IData)(vlSelf->__PVT__rm_es))
                                  ? ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact) 
                                     & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                        >> 0x1fU)) : 
                                 ((3U == (IData)(vlSelf->__PVT__rm_es))
                                   ? ((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                          >> 0x1fU)) 
                                      & (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact))
                                   : ((1U != (IData)(vlSelf->__PVT__rm_es)) 
                                      & ((0U == (IData)(vlSelf->__PVT__rm_es)) 
                                         & ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                             >> 0xcU) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x2fffU 
                                                        & vlSelf->__PVT__fcvt_io_in_bits_in_r))))))))));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn 
        = ((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x17U)))) 
           & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T));
    if (vlSelf->__PVT__s1_handshaked_s2) {
        if (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_mixPcMode_r) {
            vlSelf->__PVT__firstAddResult_2_r = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c;
            vlSelf->__PVT__rowtag_s2 = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_rowtag;
            vlSelf->__PVT__mixPc_s2 = 1U;
        } else {
            vlSelf->__PVT__firstAddResult_2_r = (((
                                                   (~ 
                                                    ((0x1fU 
                                                      == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                                                     & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                                                   & (IData)(
                                                             (0xffff8000U 
                                                              == 
                                                              (0xffff8000U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c)))) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & (((((0x1fU 
                                                            == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                            ? 0xffU
                                                            : 0U) 
                                                          | (((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                                              & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))
                                                              ? 
                                                             ((IData)(0x70U) 
                                                              - (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out))
                                                              : 0U)) 
                                                         | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                                             ? 
                                                            ((IData)(0x70U) 
                                                             + (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                             : 0U)) 
                                                        << 0x17U)) 
                                                    | ((((0x1fU 
                                                          == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                                          << 0x16U)
                                                          : 0U) 
                                                        | ((0U 
                                                            != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                            ? 0U
                                                            : 
                                                           (0x7fc000U 
                                                            & ((((0xffffU 
                                                                  == 
                                                                  (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c 
                                                                   >> 0x10U))
                                                                  ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_c
                                                                  : 0U) 
                                                                << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                               << 0xeU)))) 
                                                       | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                                           << 0xdU)
                                                           : 0U))));
            vlSelf->__PVT__rowtag_s2 = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_rowtag;
            vlSelf->__PVT__mixPc_s2 = 0U;
        }
        vlSelf->__PVT__rm_s2 = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_roundingMode_r;
    }
    vlSelf->__PVT___GEN_51 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn) 
           | (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = ((4U == (IData)(vlSelf->__PVT__rm_es)) ? (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn)
            : ((2U == (IData)(vlSelf->__PVT__rm_es))
                ? ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact) 
                   & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                      >> 0x1fU)) : ((3U == (IData)(vlSelf->__PVT__rm_es))
                                     ? ((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                            >> 0x1fU)) 
                                        & (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact))
                                     : ((1U != (IData)(vlSelf->__PVT__rm_es)) 
                                        & ((0U == (IData)(vlSelf->__PVT__rm_es)) 
                                           & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn) 
                                              & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn) 
                                                 | ((0xcU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(0x71U) 
                                                         - 
                                                         (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                          >> 0x17U)))) 
                                                    & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                                                       >> 1U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (IData)(
                                                   (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                     >> 0xfU) 
                                                    ^ 
                                                    (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                     >> 0x1fU)));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))))) 
                                        | (IData)((
                                                   (0x7c000000U 
                                                    == 
                                                    (0x7c000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                          >> 0x10U))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))))))) 
                                        | (IData)((
                                                   (0x7c000000U 
                                                    == 
                                                    (0x7c000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                                     >> 0x10U))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                                    >> 0x1aU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                            >> 0x10U)))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                                  >> 0x1aU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                                    >> 0x10U))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                ^ vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U]) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U]))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U])))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (IData)(
                                                     (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                       >> 0xfU) 
                                                      ^ 
                                                      (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                       >> 0x1fU)));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                            >> 0x10U))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                                       >> 0x10U))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                   >> 0x1aU)))) 
                          << 0xaU) | (0x3ffU & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                >> 0x10U)))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                                    >> 0x1aU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                                      >> 0x10U))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                ^ vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U]) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U]))));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_in_valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U])))))));
    vlSelf->__PVT___GEN_32 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
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
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                                << 6U) 
                                                               | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                                  >> 0x1aU)) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                                               >> 0x1aU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                                      >> 0x10U)))))))))));
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
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[7U]))))))))));
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
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                          >> 0x1aU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                                       >> 0x1aU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                              >> 0x10U)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[6U]))))))))));
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_in_valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__mixPc_es)
                                          ? vlSelf->__PVT__atResult_es
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__fcvt_io_in_bits_in_r)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__fcvt_io_in_bits_in_r))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1)
                                                               ? 
                                                              ((IData)(vlSelf->__PVT__fcvt_1__DOT__rmin)
                                                                ? 0x1eU
                                                                : 0x1fU)
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                                >> 0x17U)) 
                                                                              - (IData)(0x70U)))) 
                                                               & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up) 
                                                                  & (0x3ffU 
                                                                     == (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in))))))) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & (((0xffU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__fcvt_io_in_bits_in_r))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            ((((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1)
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__fcvt_1__DOT__rmin)
                                                                 ? 0x3ffU
                                                                 : 0U)
                                                                : 0U) 
                                                              | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                  ? 
                                                                 ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                   >> 0xdU) 
                                                                  + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                                  : 0U)) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
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

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__0\n"); );
    // Body
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    if (vlSelf->__PVT___T_15) {
        vlSelf->__PVT__atResult_es = vlSelf->__PVT__faddModule_3->__PVT__io_out_bits_result;
        vlSelf->__PVT__rowtag_es = vlSelf->__PVT__rowtag_sx;
        vlSelf->__PVT__mixPc_es = vlSelf->__PVT__mixPc_sx;
        vlSelf->__PVT__rm_es = vlSelf->__PVT__rm_sx;
    }
    vlSelf->__PVT__valid = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT__valid_4 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT__esValid = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_32));
    vlSelf->__PVT__valid_3 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_40));
    if (vlSelf->__PVT__prehandshaked_5) {
        vlSelf->__PVT__fcvt_io_in_bits_in_r = vlSelf->__PVT__faddModule_3->__PVT__io_out_bits_result;
    }
    if (vlSelf->__PVT__posthandshaked) {
        vlSelf->__PVT__faddModule_io_in_bits_b_r_3 
            = vlSelf->__PVT__addResult_1_r;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_3 
            = (((IData)(vlSelf->__PVT__faddModule_2->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__faddModule_2->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r_2 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule_2->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__rowtag_sx = vlSelf->__PVT__rowtag_this;
        vlSelf->__PVT__mixPc_sx = vlSelf->__PVT__mixPc_this;
        vlSelf->__PVT__rm_sx = vlSelf->__PVT__rm_this;
    }
    vlSelf->__PVT___T_15 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__io_out_valid = ((IData)(vlSelf->__PVT__valid_4) 
                                   | ((IData)(vlSelf->__PVT__esValid) 
                                      & (IData)(vlSelf->__PVT__mixPc_es)));
    vlSelf->__PVT__fcvt_1__DOT__rmin = ((1U == (IData)(vlSelf->__PVT__rm_es)) 
                                        | (((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x1fU)) 
                                            & (2U == (IData)(vlSelf->__PVT__rm_es))) 
                                           | ((3U == (IData)(vlSelf->__PVT__rm_es)) 
                                              & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                 >> 0x1fU))));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact 
        = (IData)((0U != (0x1fffU & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                        >> 0xcU)));
    if (vlSelf->__PVT__prehandshaked_2) {
        vlSelf->__PVT__addResult_1_r = vlSelf->__PVT__firstAddResult_2_r;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_2 
            = (((IData)(vlSelf->__PVT__faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__a_flag_isInf) 
                   | (IData)(vlSelf->__PVT__b_flag_isInf)))
                ? (((IData)(vlSelf->__PVT__faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__a_flag_isInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__b_flag_isInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__a_flag_isInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r_2 
            = (((IData)(vlSelf->__PVT__faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__a_flag_1_isInf) 
                   | (IData)(vlSelf->__PVT__b_flag_1_isInf)))
                ? (((IData)(vlSelf->__PVT__faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__a_flag_1_isInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__b_flag_1_isInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__a_flag_1_isInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r_1 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule_1->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule_1->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    if (vlSelf->__PVT__prehandshaked_1) {
        vlSelf->__PVT__a_flag_isNaN = vlSelf->__PVT__fmul__DOT__nan_result;
        vlSelf->__PVT__b_flag_isNaN = vlSelf->__PVT__fmul_1__DOT__nan_result;
        vlSelf->__PVT__b_flag_1_isNaN = vlSelf->__PVT__fmul_3__DOT__nan_result;
        vlSelf->__PVT__a_flag_1_isNaN = vlSelf->__PVT__fmul_2__DOT__nan_result;
        vlSelf->__PVT__a_flag_isInf = vlSelf->__PVT__fmul__DOT__hasInf;
        vlSelf->__PVT__b_flag_isInf = vlSelf->__PVT__fmul_1__DOT__hasInf;
        vlSelf->__PVT__faddModule_io_in_bits_a_r = 
            (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
              | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                 | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
              ? ((IData)(vlSelf->__PVT__fmul__DOT__nan_result)
                  ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                       << 0x1fU))) : 
             (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
               << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                               ? 0U : (0xffU & ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                   - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                             << 0x17U) | (((0x14U >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                            ? (0x1fffffU 
                                               & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                  << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                            : 0U) << 2U))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r = 
            (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                 | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
              ? ((IData)(vlSelf->__PVT__fmul_1__DOT__nan_result)
                  ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                       << 0x1fU))) : 
             (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
               << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                               ? 0U : (0xffU & ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                   - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                             << 0x17U) | (((0x14U >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                            ? (0x1fffffU 
                                               & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                  << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                            : 0U) << 2U))));
        vlSelf->__PVT__a_flag_1_isInf = vlSelf->__PVT__fmul_2__DOT__hasInf;
        vlSelf->__PVT__b_flag_1_isInf = vlSelf->__PVT__fmul_3__DOT__hasInf;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_1 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? ((IData)(vlSelf->__PVT__fmul_2__DOT__nan_result)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_2__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_2__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_2__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r_1 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? ((IData)(vlSelf->__PVT__fmul_3__DOT__nan_result)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_3__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_3__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_3__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
    }
    if (vlSelf->__PVT__prehandshaked_2) {
        vlSelf->__PVT__rowtag_this = vlSelf->__PVT__rowtag_s2;
        vlSelf->__PVT__mixPc_this = vlSelf->__PVT__mixPc_s2;
        vlSelf->__PVT__rm_this = vlSelf->__PVT__rm_s2;
    }
    vlSelf->__PVT___GEN_49 = ((IData)(vlSelf->__PVT___T_15) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn 
        = ((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                   & (((0xffffU & ((IData)(1U) << (0xfU 
                                                   & ((IData)(1U) 
                                                      - 
                                                      (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                       >> 0x17U))))) 
                       - (IData)(1U)) | ((0xcU < (0xffU 
                                                  & ((IData)(0x71U) 
                                                     - 
                                                     (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                      >> 0x17U))))
                                          ? 0xfffU : 0U)))) 
           | (0U != (0xfffU & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_40 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_15)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__rm_es))
                  ? (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                     >> 0xcU) : ((2U == (IData)(vlSelf->__PVT__rm_es))
                                  ? ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact) 
                                     & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                        >> 0x1fU)) : 
                                 ((3U == (IData)(vlSelf->__PVT__rm_es))
                                   ? ((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                          >> 0x1fU)) 
                                      & (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact))
                                   : ((1U != (IData)(vlSelf->__PVT__rm_es)) 
                                      & ((0U == (IData)(vlSelf->__PVT__rm_es)) 
                                         & ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                             >> 0xcU) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x2fffU 
                                                        & vlSelf->__PVT__fcvt_io_in_bits_in_r))))))))));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn 
        = ((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x17U)))) 
           & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T));
    if (vlSelf->__PVT__s1_handshaked_s2) {
        if (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_mixPcMode_r) {
            vlSelf->__PVT__firstAddResult_2_r = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c;
            vlSelf->__PVT__rowtag_s2 = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_rowtag;
            vlSelf->__PVT__mixPc_s2 = 1U;
        } else {
            vlSelf->__PVT__firstAddResult_2_r = (((
                                                   (~ 
                                                    ((0x1fU 
                                                      == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                                                     & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                                                   & (IData)(
                                                             (0xffff8000U 
                                                              == 
                                                              (0xffff8000U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c)))) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & (((((0x1fU 
                                                            == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                            ? 0xffU
                                                            : 0U) 
                                                          | (((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                                              & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))
                                                              ? 
                                                             ((IData)(0x70U) 
                                                              - (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out))
                                                              : 0U)) 
                                                         | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                                             ? 
                                                            ((IData)(0x70U) 
                                                             + (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                             : 0U)) 
                                                        << 0x17U)) 
                                                    | ((((0x1fU 
                                                          == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                                          << 0x16U)
                                                          : 0U) 
                                                        | ((0U 
                                                            != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                            ? 0U
                                                            : 
                                                           (0x7fc000U 
                                                            & ((((0xffffU 
                                                                  == 
                                                                  (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c 
                                                                   >> 0x10U))
                                                                  ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_1_io_in_bits_c
                                                                  : 0U) 
                                                                << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                               << 0xeU)))) 
                                                       | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                                           << 0xdU)
                                                           : 0U))));
            vlSelf->__PVT__rowtag_s2 = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_rowtag;
            vlSelf->__PVT__mixPc_s2 = 0U;
        }
        vlSelf->__PVT__rm_s2 = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_roundingMode_r;
    }
    vlSelf->__PVT___GEN_51 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn) 
           | (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = ((4U == (IData)(vlSelf->__PVT__rm_es)) ? (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn)
            : ((2U == (IData)(vlSelf->__PVT__rm_es))
                ? ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact) 
                   & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                      >> 0x1fU)) : ((3U == (IData)(vlSelf->__PVT__rm_es))
                                     ? ((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                            >> 0x1fU)) 
                                        & (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact))
                                     : ((1U != (IData)(vlSelf->__PVT__rm_es)) 
                                        & ((0U == (IData)(vlSelf->__PVT__rm_es)) 
                                           & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn) 
                                              & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn) 
                                                 | ((0xcU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(0x71U) 
                                                         - 
                                                         (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                          >> 0x17U)))) 
                                                    & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                                                       >> 1U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (IData)(
                                                   (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                     >> 0xfU) 
                                                    ^ 
                                                    (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                     >> 0x1fU)));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))))) 
                                        | (IData)((
                                                   (0x7c000000U 
                                                    == 
                                                    (0x7c000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                          >> 0x10U))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))))))) 
                                        | (IData)((
                                                   (0x7c000000U 
                                                    == 
                                                    (0x7c000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                                     >> 0x10U))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                                    >> 0x1aU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                            >> 0x10U)))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                                  >> 0x1aU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                                    >> 0x10U))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                ^ vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U]) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U]))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U])))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (IData)(
                                                     (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                       >> 0xfU) 
                                                      ^ 
                                                      (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                       >> 0x1fU)));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                            >> 0x10U))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                                       >> 0x10U))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                   >> 0x1aU)))) 
                          << 0xaU) | (0x3ffU & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                >> 0x10U)))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                                    >> 0x1aU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                                      >> 0x10U))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                ^ vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U]) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U]))));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_in_valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U])))))));
    vlSelf->__PVT___GEN_32 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
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
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                                << 6U) 
                                                               | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                                  >> 0x1aU)) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                                               >> 0x1aU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                                      >> 0x10U)))))))))));
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
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[5U]))))))))));
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
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                          >> 0x1aU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                                       >> 0x1aU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                              >> 0x10U)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[4U]))))))))));
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_in_valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__mixPc_es)
                                          ? vlSelf->__PVT__atResult_es
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__fcvt_io_in_bits_in_r)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__fcvt_io_in_bits_in_r))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1)
                                                               ? 
                                                              ((IData)(vlSelf->__PVT__fcvt_1__DOT__rmin)
                                                                ? 0x1eU
                                                                : 0x1fU)
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                                >> 0x17U)) 
                                                                              - (IData)(0x70U)))) 
                                                               & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up) 
                                                                  & (0x3ffU 
                                                                     == (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in))))))) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & (((0xffU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__fcvt_io_in_bits_in_r))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            ((((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1)
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__fcvt_1__DOT__rmin)
                                                                 ? 0x3ffU
                                                                 : 0U)
                                                                : 0U) 
                                                              | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                  ? 
                                                                 ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                   >> 0xdU) 
                                                                  + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                                  : 0U)) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
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

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__0\n"); );
    // Body
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    if (vlSelf->__PVT___T_15) {
        vlSelf->__PVT__atResult_es = vlSelf->__PVT__faddModule_3->__PVT__io_out_bits_result;
        vlSelf->__PVT__rowtag_es = vlSelf->__PVT__rowtag_sx;
        vlSelf->__PVT__mixPc_es = vlSelf->__PVT__mixPc_sx;
        vlSelf->__PVT__rm_es = vlSelf->__PVT__rm_sx;
    }
    vlSelf->__PVT__valid = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT__valid_4 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT__esValid = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_32));
    vlSelf->__PVT__valid_3 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_40));
    if (vlSelf->__PVT__prehandshaked_5) {
        vlSelf->__PVT__fcvt_io_in_bits_in_r = vlSelf->__PVT__faddModule_3->__PVT__io_out_bits_result;
    }
    if (vlSelf->__PVT__posthandshaked) {
        vlSelf->__PVT__faddModule_io_in_bits_b_r_3 
            = vlSelf->__PVT__addResult_1_r;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_3 
            = (((IData)(vlSelf->__PVT__faddModule_2->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__faddModule_2->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r_2 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule_2->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__rowtag_sx = vlSelf->__PVT__rowtag_this;
        vlSelf->__PVT__mixPc_sx = vlSelf->__PVT__mixPc_this;
        vlSelf->__PVT__rm_sx = vlSelf->__PVT__rm_this;
    }
    vlSelf->__PVT___T_15 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__io_out_valid = ((IData)(vlSelf->__PVT__valid_4) 
                                   | ((IData)(vlSelf->__PVT__esValid) 
                                      & (IData)(vlSelf->__PVT__mixPc_es)));
    vlSelf->__PVT__fcvt_1__DOT__rmin = ((1U == (IData)(vlSelf->__PVT__rm_es)) 
                                        | (((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x1fU)) 
                                            & (2U == (IData)(vlSelf->__PVT__rm_es))) 
                                           | ((3U == (IData)(vlSelf->__PVT__rm_es)) 
                                              & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                 >> 0x1fU))));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact 
        = (IData)((0U != (0x1fffU & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                        >> 0xcU)));
    if (vlSelf->__PVT__prehandshaked_2) {
        vlSelf->__PVT__addResult_1_r = vlSelf->__PVT__firstAddResult_2_r;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_2 
            = (((IData)(vlSelf->__PVT__faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__a_flag_isInf) 
                   | (IData)(vlSelf->__PVT__b_flag_isInf)))
                ? (((IData)(vlSelf->__PVT__faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__a_flag_isInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__b_flag_isInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__a_flag_isInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r_2 
            = (((IData)(vlSelf->__PVT__faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__a_flag_1_isInf) 
                   | (IData)(vlSelf->__PVT__b_flag_1_isInf)))
                ? (((IData)(vlSelf->__PVT__faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__a_flag_1_isInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__b_flag_1_isInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__a_flag_1_isInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r_1 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule_1->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule_1->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    if (vlSelf->__PVT__prehandshaked_1) {
        vlSelf->__PVT__a_flag_isNaN = vlSelf->__PVT__fmul__DOT__nan_result;
        vlSelf->__PVT__b_flag_isNaN = vlSelf->__PVT__fmul_1__DOT__nan_result;
        vlSelf->__PVT__b_flag_1_isNaN = vlSelf->__PVT__fmul_3__DOT__nan_result;
        vlSelf->__PVT__a_flag_1_isNaN = vlSelf->__PVT__fmul_2__DOT__nan_result;
        vlSelf->__PVT__a_flag_isInf = vlSelf->__PVT__fmul__DOT__hasInf;
        vlSelf->__PVT__b_flag_isInf = vlSelf->__PVT__fmul_1__DOT__hasInf;
        vlSelf->__PVT__faddModule_io_in_bits_a_r = 
            (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
              | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                 | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
              ? ((IData)(vlSelf->__PVT__fmul__DOT__nan_result)
                  ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                       << 0x1fU))) : 
             (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
               << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                               ? 0U : (0xffU & ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                   - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                             << 0x17U) | (((0x14U >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                            ? (0x1fffffU 
                                               & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                  << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                            : 0U) << 2U))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r = 
            (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                 | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
              ? ((IData)(vlSelf->__PVT__fmul_1__DOT__nan_result)
                  ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                       << 0x1fU))) : 
             (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
               << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                               ? 0U : (0xffU & ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                   - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                             << 0x17U) | (((0x14U >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                            ? (0x1fffffU 
                                               & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                  << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                            : 0U) << 2U))));
        vlSelf->__PVT__a_flag_1_isInf = vlSelf->__PVT__fmul_2__DOT__hasInf;
        vlSelf->__PVT__b_flag_1_isInf = vlSelf->__PVT__fmul_3__DOT__hasInf;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_1 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? ((IData)(vlSelf->__PVT__fmul_2__DOT__nan_result)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_2__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_2__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_2__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r_1 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? ((IData)(vlSelf->__PVT__fmul_3__DOT__nan_result)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_3__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_3__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_3__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
    }
    if (vlSelf->__PVT__prehandshaked_2) {
        vlSelf->__PVT__rowtag_this = vlSelf->__PVT__rowtag_s2;
        vlSelf->__PVT__mixPc_this = vlSelf->__PVT__mixPc_s2;
        vlSelf->__PVT__rm_this = vlSelf->__PVT__rm_s2;
    }
    vlSelf->__PVT___GEN_49 = ((IData)(vlSelf->__PVT___T_15) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn 
        = ((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                   & (((0xffffU & ((IData)(1U) << (0xfU 
                                                   & ((IData)(1U) 
                                                      - 
                                                      (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                       >> 0x17U))))) 
                       - (IData)(1U)) | ((0xcU < (0xffU 
                                                  & ((IData)(0x71U) 
                                                     - 
                                                     (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                      >> 0x17U))))
                                          ? 0xfffU : 0U)))) 
           | (0U != (0xfffU & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_40 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_15)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__rm_es))
                  ? (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                     >> 0xcU) : ((2U == (IData)(vlSelf->__PVT__rm_es))
                                  ? ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact) 
                                     & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                        >> 0x1fU)) : 
                                 ((3U == (IData)(vlSelf->__PVT__rm_es))
                                   ? ((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                          >> 0x1fU)) 
                                      & (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact))
                                   : ((1U != (IData)(vlSelf->__PVT__rm_es)) 
                                      & ((0U == (IData)(vlSelf->__PVT__rm_es)) 
                                         & ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                             >> 0xcU) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x2fffU 
                                                        & vlSelf->__PVT__fcvt_io_in_bits_in_r))))))))));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn 
        = ((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x17U)))) 
           & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T));
    if (vlSelf->__PVT__s1_handshaked_s2) {
        if (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_mixPcMode_r) {
            vlSelf->__PVT__firstAddResult_2_r = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c;
            vlSelf->__PVT__rowtag_s2 = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_rowtag;
            vlSelf->__PVT__mixPc_s2 = 1U;
        } else {
            vlSelf->__PVT__firstAddResult_2_r = (((
                                                   (~ 
                                                    ((0x1fU 
                                                      == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                                                     & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                                                   & (IData)(
                                                             (0xffff8000U 
                                                              == 
                                                              (0xffff8000U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c)))) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & (((((0x1fU 
                                                            == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                            ? 0xffU
                                                            : 0U) 
                                                          | (((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                                              & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))
                                                              ? 
                                                             ((IData)(0x70U) 
                                                              - (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out))
                                                              : 0U)) 
                                                         | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                                             ? 
                                                            ((IData)(0x70U) 
                                                             + (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                             : 0U)) 
                                                        << 0x17U)) 
                                                    | ((((0x1fU 
                                                          == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                                          << 0x16U)
                                                          : 0U) 
                                                        | ((0U 
                                                            != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                            ? 0U
                                                            : 
                                                           (0x7fc000U 
                                                            & ((((0xffffU 
                                                                  == 
                                                                  (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c 
                                                                   >> 0x10U))
                                                                  ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_2_io_in_bits_c
                                                                  : 0U) 
                                                                << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                               << 0xeU)))) 
                                                       | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                                           << 0xdU)
                                                           : 0U))));
            vlSelf->__PVT__rowtag_s2 = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_rowtag;
            vlSelf->__PVT__mixPc_s2 = 0U;
        }
        vlSelf->__PVT__rm_s2 = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_roundingMode_r;
    }
    vlSelf->__PVT___GEN_51 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn) 
           | (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = ((4U == (IData)(vlSelf->__PVT__rm_es)) ? (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn)
            : ((2U == (IData)(vlSelf->__PVT__rm_es))
                ? ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact) 
                   & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                      >> 0x1fU)) : ((3U == (IData)(vlSelf->__PVT__rm_es))
                                     ? ((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                            >> 0x1fU)) 
                                        & (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact))
                                     : ((1U != (IData)(vlSelf->__PVT__rm_es)) 
                                        & ((0U == (IData)(vlSelf->__PVT__rm_es)) 
                                           & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn) 
                                              & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn) 
                                                 | ((0xcU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(0x71U) 
                                                         - 
                                                         (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                          >> 0x17U)))) 
                                                    & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                                                       >> 1U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (IData)(
                                                   (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                     >> 0xfU) 
                                                    ^ 
                                                    (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                     >> 0x1fU)));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))))) 
                                        | (IData)((
                                                   (0x7c000000U 
                                                    == 
                                                    (0x7c000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                          >> 0x10U))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))))))) 
                                        | (IData)((
                                                   (0x7c000000U 
                                                    == 
                                                    (0x7c000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                                     >> 0x10U))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                                    >> 0x1aU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                            >> 0x10U)))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                                  >> 0x1aU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                                    >> 0x10U))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                ^ vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U]) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U]))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U])))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (IData)(
                                                     (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                       >> 0xfU) 
                                                      ^ 
                                                      (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                       >> 0x1fU)));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                            >> 0x10U))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                                       >> 0x10U))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                   >> 0x1aU)))) 
                          << 0xaU) | (0x3ffU & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                >> 0x10U)))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                                    >> 0x1aU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                                      >> 0x10U))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                ^ vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U]) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U]))));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_in_valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U])))))));
    vlSelf->__PVT___GEN_32 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
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
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                                << 6U) 
                                                               | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                                  >> 0x1aU)) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                                               >> 0x1aU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                                      >> 0x10U)))))))))));
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
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[3U]))))))))));
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
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                          >> 0x1aU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                                       >> 0x1aU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                              >> 0x10U)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[2U]))))))))));
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_in_valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__mixPc_es)
                                          ? vlSelf->__PVT__atResult_es
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__fcvt_io_in_bits_in_r)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__fcvt_io_in_bits_in_r))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1)
                                                               ? 
                                                              ((IData)(vlSelf->__PVT__fcvt_1__DOT__rmin)
                                                                ? 0x1eU
                                                                : 0x1fU)
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                                >> 0x17U)) 
                                                                              - (IData)(0x70U)))) 
                                                               & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up) 
                                                                  & (0x3ffU 
                                                                     == (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in))))))) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & (((0xffU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__fcvt_io_in_bits_in_r))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            ((((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1)
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__fcvt_1__DOT__rmin)
                                                                 ? 0x3ffU
                                                                 : 0U)
                                                                : 0U) 
                                                              | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                  ? 
                                                                 ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                   >> 0xdU) 
                                                                  + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                                  : 0U)) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
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

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__0\n"); );
    // Body
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    if (vlSelf->__PVT___T_15) {
        vlSelf->__PVT__atResult_es = vlSelf->__PVT__faddModule_3->__PVT__io_out_bits_result;
        vlSelf->__PVT__rm_es = vlSelf->__PVT__rm_sx;
        vlSelf->__PVT__rowtag_es = vlSelf->__PVT__rowtag_sx;
        vlSelf->__PVT__mixPc_es = vlSelf->__PVT__mixPc_sx;
    }
    vlSelf->__PVT__valid = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT__valid_4 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT__esValid = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_32));
    vlSelf->__PVT__valid_3 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_40));
    if (vlSelf->__PVT__prehandshaked_5) {
        vlSelf->__PVT__fcvt_io_in_bits_in_r = vlSelf->__PVT__faddModule_3->__PVT__io_out_bits_result;
    }
    if (vlSelf->__PVT__posthandshaked) {
        vlSelf->__PVT__faddModule_io_in_bits_b_r_3 
            = vlSelf->__PVT__addResult_1_r;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_3 
            = (((IData)(vlSelf->__PVT__faddModule_2->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__faddModule_2->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r_2 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule_2->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__rm_sx = vlSelf->__PVT__rm_this;
        vlSelf->__PVT__rowtag_sx = vlSelf->__PVT__rowtag_this;
        vlSelf->__PVT__mixPc_sx = vlSelf->__PVT__mixPc_this;
    }
    vlSelf->__PVT___T_15 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fcvt_1__DOT__rmin = ((1U == (IData)(vlSelf->__PVT__rm_es)) 
                                        | (((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x1fU)) 
                                            & (2U == (IData)(vlSelf->__PVT__rm_es))) 
                                           | ((3U == (IData)(vlSelf->__PVT__rm_es)) 
                                              & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                 >> 0x1fU))));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact 
        = (IData)((0U != (0x1fffU & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                        >> 0xcU)));
    if (vlSelf->__PVT__prehandshaked_2) {
        vlSelf->__PVT__addResult_1_r = vlSelf->__PVT__firstAddResult_2_r;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_2 
            = (((IData)(vlSelf->__PVT__faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__a_flag_isInf) 
                   | (IData)(vlSelf->__PVT__b_flag_isInf)))
                ? (((IData)(vlSelf->__PVT__faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__a_flag_isInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__b_flag_isInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__a_flag_isInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r_2 
            = (((IData)(vlSelf->__PVT__faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__a_flag_1_isInf) 
                   | (IData)(vlSelf->__PVT__b_flag_1_isInf)))
                ? (((IData)(vlSelf->__PVT__faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__a_flag_1_isInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__b_flag_1_isInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__a_flag_1_isInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r_1 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule_1->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule_1->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    if (vlSelf->__PVT__prehandshaked_1) {
        vlSelf->__PVT__a_flag_isNaN = vlSelf->__PVT__fmul__DOT__nan_result;
        vlSelf->__PVT__b_flag_isNaN = vlSelf->__PVT__fmul_1__DOT__nan_result;
        vlSelf->__PVT__b_flag_1_isNaN = vlSelf->__PVT__fmul_3__DOT__nan_result;
        vlSelf->__PVT__a_flag_1_isNaN = vlSelf->__PVT__fmul_2__DOT__nan_result;
        vlSelf->__PVT__a_flag_isInf = vlSelf->__PVT__fmul__DOT__hasInf;
        vlSelf->__PVT__b_flag_isInf = vlSelf->__PVT__fmul_1__DOT__hasInf;
        vlSelf->__PVT__faddModule_io_in_bits_a_r = 
            (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
              | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                 | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
              ? ((IData)(vlSelf->__PVT__fmul__DOT__nan_result)
                  ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                       << 0x1fU))) : 
             (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
               << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                               ? 0U : (0xffU & ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                   - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                             << 0x17U) | (((0x14U >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                            ? (0x1fffffU 
                                               & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                  << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                            : 0U) << 2U))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r = 
            (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                 | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
              ? ((IData)(vlSelf->__PVT__fmul_1__DOT__nan_result)
                  ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                       << 0x1fU))) : 
             (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
               << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                               ? 0U : (0xffU & ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                   - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                             << 0x17U) | (((0x14U >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                            ? (0x1fffffU 
                                               & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                  << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                            : 0U) << 2U))));
        vlSelf->__PVT__a_flag_1_isInf = vlSelf->__PVT__fmul_2__DOT__hasInf;
        vlSelf->__PVT__b_flag_1_isInf = vlSelf->__PVT__fmul_3__DOT__hasInf;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_1 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? ((IData)(vlSelf->__PVT__fmul_2__DOT__nan_result)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_2__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_2__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_2__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r_1 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? ((IData)(vlSelf->__PVT__fmul_3__DOT__nan_result)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_3__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_3__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_3__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
    }
    if (vlSelf->__PVT__prehandshaked_2) {
        vlSelf->__PVT__rm_this = vlSelf->__PVT__rm_s2;
        vlSelf->__PVT__rowtag_this = vlSelf->__PVT__rowtag_s2;
        vlSelf->__PVT__mixPc_this = vlSelf->__PVT__mixPc_s2;
    }
    vlSelf->__PVT__io_out_valid = ((IData)(vlSelf->__PVT__valid_4) 
                                   | ((IData)(vlSelf->__PVT__esValid) 
                                      & (IData)(vlSelf->__PVT__mixPc_es)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn 
        = ((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                   & (((0xffffU & ((IData)(1U) << (0xfU 
                                                   & ((IData)(1U) 
                                                      - 
                                                      (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                       >> 0x17U))))) 
                       - (IData)(1U)) | ((0xcU < (0xffU 
                                                  & ((IData)(0x71U) 
                                                     - 
                                                     (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                      >> 0x17U))))
                                          ? 0xfffU : 0U)))) 
           | (0U != (0xfffU & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT___GEN_49 = ((IData)(vlSelf->__PVT___T_15) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__rm_es))
                  ? (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                     >> 0xcU) : ((2U == (IData)(vlSelf->__PVT__rm_es))
                                  ? ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact) 
                                     & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                        >> 0x1fU)) : 
                                 ((3U == (IData)(vlSelf->__PVT__rm_es))
                                   ? ((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                          >> 0x1fU)) 
                                      & (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact))
                                   : ((1U != (IData)(vlSelf->__PVT__rm_es)) 
                                      & ((0U == (IData)(vlSelf->__PVT__rm_es)) 
                                         & ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                             >> 0xcU) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x2fffU 
                                                        & vlSelf->__PVT__fcvt_io_in_bits_in_r))))))))));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn 
        = ((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x17U)))) 
           & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T));
    if (vlSelf->__PVT__s1_handshaked_s2) {
        if (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_mixPcMode_r) {
            vlSelf->__PVT__firstAddResult_2_r = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c;
            vlSelf->__PVT__rm_s2 = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_roundingMode_r;
            vlSelf->__PVT__rowtag_s2 = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_rowtag;
            vlSelf->__PVT__mixPc_s2 = 1U;
        } else {
            vlSelf->__PVT__firstAddResult_2_r = (((
                                                   (~ 
                                                    ((0x1fU 
                                                      == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                                                     & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                                                   & (IData)(
                                                             (0xffff8000U 
                                                              == 
                                                              (0xffff8000U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c)))) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & (((((0x1fU 
                                                            == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                            ? 0xffU
                                                            : 0U) 
                                                          | (((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                                              & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))
                                                              ? 
                                                             ((IData)(0x70U) 
                                                              - (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out))
                                                              : 0U)) 
                                                         | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                                             ? 
                                                            ((IData)(0x70U) 
                                                             + (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                             : 0U)) 
                                                        << 0x17U)) 
                                                    | ((((0x1fU 
                                                          == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                                          << 0x16U)
                                                          : 0U) 
                                                        | ((0U 
                                                            != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                            ? 0U
                                                            : 
                                                           (0x7fc000U 
                                                            & ((((0xffffU 
                                                                  == 
                                                                  (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c 
                                                                   >> 0x10U))
                                                                  ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_3_io_in_bits_c
                                                                  : 0U) 
                                                                << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                               << 0xeU)))) 
                                                       | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                                           << 0xdU)
                                                           : 0U))));
            vlSelf->__PVT__rm_s2 = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_roundingMode_r;
            vlSelf->__PVT__rowtag_s2 = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_rowtag;
            vlSelf->__PVT__mixPc_s2 = 0U;
        }
    }
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_40 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_15)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn) 
           | (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = ((4U == (IData)(vlSelf->__PVT__rm_es)) ? (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn)
            : ((2U == (IData)(vlSelf->__PVT__rm_es))
                ? ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact) 
                   & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                      >> 0x1fU)) : ((3U == (IData)(vlSelf->__PVT__rm_es))
                                     ? ((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                            >> 0x1fU)) 
                                        & (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact))
                                     : ((1U != (IData)(vlSelf->__PVT__rm_es)) 
                                        & ((0U == (IData)(vlSelf->__PVT__rm_es)) 
                                           & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn) 
                                              & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn) 
                                                 | ((0xcU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(0x71U) 
                                                         - 
                                                         (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                          >> 0x17U)))) 
                                                    & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                                                       >> 1U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (IData)(
                                                   (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                     >> 0xfU) 
                                                    ^ 
                                                    (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                     >> 0x1fU)));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))))) 
                                        | (IData)((
                                                   (0x7c000000U 
                                                    == 
                                                    (0x7c000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                          >> 0x10U))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))))))) 
                                        | (IData)((
                                                   (0x7c000000U 
                                                    == 
                                                    (0x7c000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                                     >> 0x10U))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                                    >> 0x1aU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                            >> 0x10U)))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                                  >> 0x1aU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                                    >> 0x10U))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                ^ vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U]) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U]))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U])))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (IData)(
                                                     (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                       >> 0xfU) 
                                                      ^ 
                                                      (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                       >> 0x1fU)));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                            >> 0x10U))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                                       >> 0x10U))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                   >> 0x1aU)))) 
                          << 0xaU) | (0x3ffU & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                >> 0x10U)))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                                    >> 0x1aU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                                      >> 0x10U))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                ^ vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U]) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U]))));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_in_valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U])))))));
    vlSelf->__PVT___GEN_51 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
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
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                                << 6U) 
                                                               | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                                  >> 0x1aU)) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                                               >> 0x1aU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                                      >> 0x10U)))))))))));
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
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_1)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[1U]))))))))));
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
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_2)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                          >> 0x1aU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                                       >> 0x1aU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                              >> 0x10U)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_io_in_bits_vec_a_3)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_data[0U]))))))))));
    vlSelf->__PVT___GEN_32 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__mixPc_es)
                                          ? vlSelf->__PVT__atResult_es
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__fcvt_io_in_bits_in_r)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__fcvt_io_in_bits_in_r))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1)
                                                               ? 
                                                              ((IData)(vlSelf->__PVT__fcvt_1__DOT__rmin)
                                                                ? 0x1eU
                                                                : 0x1fU)
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                                >> 0x17U)) 
                                                                              - (IData)(0x70U)))) 
                                                               & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up) 
                                                                  & (0x3ffU 
                                                                     == (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in))))))) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & (((0xffU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__fcvt_io_in_bits_in_r))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            ((((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1)
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__fcvt_1__DOT__rmin)
                                                                 ? 0x3ffU
                                                                 : 0U)
                                                                : 0U) 
                                                              | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                  ? 
                                                                 ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                   >> 0xdU) 
                                                                  + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                                  : 0U)) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
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
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg__DOT__dp_in_valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
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

VL_INLINE_OPT void VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__0(VTop_DotProdUnit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__0\n"); );
    // Body
    vlSelf->__PVT__fmul__DOT__lzcRaw = (0xfU & (((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                      >> 0xaU)))
                                                  ? 0U
                                                  : 
                                                 ((0x200U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                   ? 1U
                                                   : 
                                                  ((0x100U 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                    ? 2U
                                                    : 
                                                   ((0x80U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                     ? 3U
                                                     : 
                                                    ((0x40U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                      ? 4U
                                                      : 
                                                     ((0x20U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                       ? 5U
                                                       : 
                                                      ((0x10U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                        ? 6U
                                                        : 
                                                       ((8U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                         ? 7U
                                                         : 
                                                        ((4U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                          ? 8U
                                                          : 
                                                         ((2U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))
                                                           ? 9U
                                                           : 0xaU)))))))))) 
                                                + (
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_1__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_2__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                        >> 0x1aU)))
                                                    ? 0U
                                                    : 
                                                   ((0x2000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                     ? 1U
                                                     : 
                                                    ((0x1000000U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                      ? 2U
                                                      : 
                                                     ((0x800000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                       ? 3U
                                                       : 
                                                      ((0x400000U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                        ? 4U
                                                        : 
                                                       ((0x200000U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                         ? 5U
                                                         : 
                                                        ((0x100000U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                          ? 6U
                                                          : 
                                                         ((0x80000U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                           ? 7U
                                                           : 
                                                          ((0x40000U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                            ? 8U
                                                            : 
                                                           ((0x20000U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzcRaw = (0xfU & ((
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))
                                                             ? 9U
                                                             : 0xaU)))))))))) 
                                                  + 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                        >> 0xaU)))
                                                    ? 0U
                                                    : 
                                                   ((0x200U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                     ? 1U
                                                     : 
                                                    ((0x100U 
                                                      & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                      ? 2U
                                                      : 
                                                     ((0x80U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                       ? 3U
                                                       : 
                                                      ((0x40U 
                                                        & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                        ? 4U
                                                        : 
                                                       ((0x20U 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                         ? 5U
                                                         : 
                                                        ((0x10U 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                          ? 6U
                                                          : 
                                                         ((8U 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                           ? 7U
                                                           : 
                                                          ((4U 
                                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                            ? 8U
                                                            : 
                                                           ((2U 
                                                             & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])
                                                             ? 9U
                                                             : 0xaU))))))))))));
    if (vlSelf->__PVT___T_15) {
        vlSelf->__PVT__atResult_es = vlSelf->__PVT__faddModule_3->__PVT__io_out_bits_result;
        vlSelf->__PVT__rowtag_es = vlSelf->__PVT__rowtag_sx;
        vlSelf->__PVT__mixPc_es = vlSelf->__PVT__mixPc_sx;
        vlSelf->__PVT__rm_es = vlSelf->__PVT__rm_sx;
    }
    vlSelf->__PVT__valid = ((~ (IData)(vlSymsp->TOP.reset)) 
                            & (IData)(vlSelf->__PVT___GEN_4));
    vlSelf->__PVT__valid_1 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_16));
    vlSelf->__PVT__valid_4 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_51));
    vlSelf->__PVT__esValid = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_49));
    vlSelf->__PVT__valid_2 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_32));
    vlSelf->__PVT__valid_3 = ((~ (IData)(vlSymsp->TOP.reset)) 
                              & (IData)(vlSelf->__PVT___GEN_40));
    if (vlSelf->__PVT__prehandshaked_5) {
        vlSelf->__PVT__fcvt_io_in_bits_in_r = vlSelf->__PVT__faddModule_3->__PVT__io_out_bits_result;
    }
    if (vlSelf->__PVT__posthandshaked) {
        vlSelf->__PVT__faddModule_io_in_bits_b_r_3 
            = vlSelf->__PVT__addResult_1_r;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_3 
            = (((IData)(vlSelf->__PVT__faddModule_2->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__faddModule_2->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__faddModule_2->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r_2 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule_2->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule_2->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule_2->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule_2->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__rowtag_sx = vlSelf->__PVT__rowtag_this;
        vlSelf->__PVT__mixPc_sx = vlSelf->__PVT__mixPc_this;
        vlSelf->__PVT__rm_sx = vlSelf->__PVT__rm_this;
    }
    vlSelf->__PVT___T_15 = ((IData)(vlSelf->__PVT__valid_3) 
                            & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__io_out_valid = ((IData)(vlSelf->__PVT__valid_4) 
                                   | ((IData)(vlSelf->__PVT__esValid) 
                                      & (IData)(vlSelf->__PVT__mixPc_es)));
    vlSelf->__PVT__fcvt_1__DOT__rmin = ((1U == (IData)(vlSelf->__PVT__rm_es)) 
                                        | (((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x1fU)) 
                                            & (2U == (IData)(vlSelf->__PVT__rm_es))) 
                                           | ((3U == (IData)(vlSelf->__PVT__rm_es)) 
                                              & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                 >> 0x1fU))));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact 
        = (IData)((0U != (0x1fffU & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                        >> 0xcU)));
    if (vlSelf->__PVT__prehandshaked_2) {
        vlSelf->__PVT__addResult_1_r = vlSelf->__PVT__firstAddResult_2_r;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_2 
            = (((IData)(vlSelf->__PVT__faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__a_flag_isInf) 
                   | (IData)(vlSelf->__PVT__b_flag_isInf)))
                ? (((IData)(vlSelf->__PVT__faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__a_flag_isInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__b_flag_isInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__a_flag_isInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r_2 
            = (((IData)(vlSelf->__PVT__faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__a_flag_1_isInf) 
                   | (IData)(vlSelf->__PVT__b_flag_1_isInf)))
                ? (((IData)(vlSelf->__PVT__faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__a_flag_1_isInf) 
                       & ((~ (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__b_flag_1_isInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__a_flag_1_isInf)
                                        ? (vlSelf->__PVT__faddModule_io_in_bits_a_r_1 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__faddModule_io_in_bits_b_r_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? ((((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)
                       ? (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___io_out_result_T_3)
                       : (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                     << 0x1fU) | ((((IData)(vlSelf->__PVT__faddModule_1->__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSelf->__PVT__faddModule_1->__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePathSel)
                     ? (((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                         >> 1U) + (IData)(vlSelf->__PVT__faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSelf->__PVT__faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    if (vlSelf->__PVT__prehandshaked_1) {
        vlSelf->__PVT__a_flag_isNaN = vlSelf->__PVT__fmul__DOT__nan_result;
        vlSelf->__PVT__b_flag_isNaN = vlSelf->__PVT__fmul_1__DOT__nan_result;
        vlSelf->__PVT__b_flag_1_isNaN = vlSelf->__PVT__fmul_3__DOT__nan_result;
        vlSelf->__PVT__a_flag_1_isNaN = vlSelf->__PVT__fmul_2__DOT__nan_result;
        vlSelf->__PVT__a_flag_isInf = vlSelf->__PVT__fmul__DOT__hasInf;
        vlSelf->__PVT__b_flag_isInf = vlSelf->__PVT__fmul_1__DOT__hasInf;
        vlSelf->__PVT__faddModule_io_in_bits_a_r = 
            (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
              | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                 | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
              ? ((IData)(vlSelf->__PVT__fmul__DOT__nan_result)
                  ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                       << 0x1fU))) : 
             (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
               << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                               ? 0U : (0xffU & ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                   - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                             << 0x17U) | (((0x14U >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                            ? (0x1fffffU 
                                               & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                  << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                            : 0U) << 2U))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r = 
            (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
              | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                 | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
              ? ((IData)(vlSelf->__PVT__fmul_1__DOT__nan_result)
                  ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                       << 0x1fU))) : 
             (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
               << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                               ? 0U : (0xffU & ((IData)(1U) 
                                                + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                   - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                             << 0x17U) | (((0x14U >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                            ? (0x1fffffU 
                                               & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                  << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                            : 0U) << 2U))));
        vlSelf->__PVT__a_flag_1_isInf = vlSelf->__PVT__fmul_2__DOT__hasInf;
        vlSelf->__PVT__b_flag_1_isInf = vlSelf->__PVT__fmul_3__DOT__hasInf;
        vlSelf->__PVT__faddModule_io_in_bits_a_r_1 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? ((IData)(vlSelf->__PVT__fmul_2__DOT__nan_result)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_2__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_2__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_2__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_2__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_2__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_2__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__faddModule_io_in_bits_b_r_1 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? ((IData)(vlSelf->__PVT__fmul_3__DOT__nan_result)
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_3__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_3__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_3__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_3__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_3__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
    }
    if (vlSelf->__PVT__prehandshaked_2) {
        vlSelf->__PVT__rowtag_this = vlSelf->__PVT__rowtag_s2;
        vlSelf->__PVT__mixPc_this = vlSelf->__PVT__mixPc_s2;
        vlSelf->__PVT__rm_this = vlSelf->__PVT__rm_s2;
    }
    vlSelf->__PVT___GEN_49 = ((IData)(vlSelf->__PVT___T_15) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__io_out_valid))) 
                                 & (IData)(vlSelf->__PVT__esValid)));
    vlSelf->__PVT__posthandshaked = ((IData)(vlSelf->__PVT__valid_2) 
                                     & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn 
        = ((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                   & (((0xffffU & ((IData)(1U) << (0xfU 
                                                   & ((IData)(1U) 
                                                      - 
                                                      (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                       >> 0x17U))))) 
                       - (IData)(1U)) | ((0xcU < (0xffU 
                                                  & ((IData)(0x71U) 
                                                     - 
                                                     (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                      >> 0x17U))))
                                          ? 0xfffU : 0U)))) 
           | (0U != (0xfffU & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__prehandshaked_5 = (((~ (IData)(vlSelf->__PVT__mixPc_sx)) 
                                       & (IData)(vlSelf->__PVT__valid_3)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT___GEN_40 = ((IData)(vlSelf->__PVT__posthandshaked) 
                              | ((~ (IData)(vlSelf->__PVT___T_15)) 
                                 & (IData)(vlSelf->__PVT__valid_3)));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = (1U & ((4U == (IData)(vlSelf->__PVT__rm_es))
                  ? (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                     >> 0xcU) : ((2U == (IData)(vlSelf->__PVT__rm_es))
                                  ? ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact) 
                                     & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                        >> 0x1fU)) : 
                                 ((3U == (IData)(vlSelf->__PVT__rm_es))
                                   ? ((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                          >> 0x1fU)) 
                                      & (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__inexact))
                                   : ((1U != (IData)(vlSelf->__PVT__rm_es)) 
                                      & ((0U == (IData)(vlSelf->__PVT__rm_es)) 
                                         & ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                             >> 0xcU) 
                                            & (IData)(
                                                      (0U 
                                                       != 
                                                       (0x2fffU 
                                                        & vlSelf->__PVT__fcvt_io_in_bits_in_r))))))))));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__fcvt_io_in_bits_in_r)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn 
        = ((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                >> 0x17U)))) 
           & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T));
    if (vlSelf->__PVT__s1_handshaked_s2) {
        if (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_mixPcMode_r_1) {
            vlSelf->__PVT__firstAddResult_2_r = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c;
            vlSelf->__PVT__rowtag_s2 = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_rowtag;
            vlSelf->__PVT__mixPc_s2 = 1U;
        } else {
            vlSelf->__PVT__firstAddResult_2_r = (((
                                                   (~ 
                                                    ((0x1fU 
                                                      == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                                                     & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                                                   & (IData)(
                                                             (0xffff8000U 
                                                              == 
                                                              (0xffff8000U 
                                                               & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c)))) 
                                                  << 0x1fU) 
                                                 | ((0x7f800000U 
                                                     & (((((0x1fU 
                                                            == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                            ? 0xffU
                                                            : 0U) 
                                                          | (((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)))) 
                                                              & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))
                                                              ? 
                                                             ((IData)(0x70U) 
                                                              - (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out))
                                                              : 0U)) 
                                                         | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                                             ? 
                                                            ((IData)(0x70U) 
                                                             + (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                             : 0U)) 
                                                        << 0x17U)) 
                                                    | ((((0x1fU 
                                                          == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                          ? 
                                                         ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                                          << 0x16U)
                                                          : 0U) 
                                                        | ((0U 
                                                            != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                            ? 0U
                                                            : 
                                                           (0x7fc000U 
                                                            & ((((0xffffU 
                                                                  == 
                                                                  (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c 
                                                                   >> 0x10U))
                                                                  ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_c
                                                                  : 0U) 
                                                                << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                               << 0xeU)))) 
                                                       | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                                           ? 
                                                          ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                                           << 0xdU)
                                                           : 0U))));
            vlSelf->__PVT__rowtag_s2 = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_rowtag;
            vlSelf->__PVT__mixPc_s2 = 0U;
        }
        vlSelf->__PVT__rm_s2 = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_roundingMode_r_1;
    }
    vlSelf->__PVT___GEN_51 = ((IData)(vlSelf->__PVT__prehandshaked_5) 
                              | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (IData)(vlSelf->__PVT__valid_4))) 
                                 & (IData)(vlSelf->__PVT__valid_4)));
    vlSelf->__PVT__prehandshaked_2 = (((IData)(vlSelf->__PVT__valid_1) 
                                       & (IData)(vlSelf->__PVT__valid)) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn) 
           | (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = ((4U == (IData)(vlSelf->__PVT__rm_es)) ? (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn)
            : ((2U == (IData)(vlSelf->__PVT__rm_es))
                ? ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact) 
                   & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                      >> 0x1fU)) : ((3U == (IData)(vlSelf->__PVT__rm_es))
                                     ? ((~ (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                            >> 0x1fU)) 
                                        & (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__inexact))
                                     : ((1U != (IData)(vlSelf->__PVT__rm_es)) 
                                        & ((0U == (IData)(vlSelf->__PVT__rm_es)) 
                                           & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_roundIn) 
                                              & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_stickyIn) 
                                                 | ((0xcU 
                                                     >= 
                                                     (0xffU 
                                                      & ((IData)(0x71U) 
                                                         - 
                                                         (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                          >> 0x17U)))) 
                                                    & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                                                       >> 1U)))))))));
    vlSelf->__PVT__fmul__DOT__resultSign = (IData)(
                                                   (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                     >> 0xfU) 
                                                    ^ 
                                                    (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                     >> 0x1fU)));
    vlSelf->__PVT__fmul__DOT__hasNaN = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))) 
                                                 & (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))))) 
                                        | (IData)((
                                                   (0x7c000000U 
                                                    == 
                                                    (0x7c000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                          >> 0x10U))))));
    vlSelf->__PVT__fmul__DOT__hasInf = ((IData)(((0x7c00U 
                                                  == 
                                                  (0x7c00U 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0x3ffU 
                                                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))))))) 
                                        | (IData)((
                                                   (0x7c000000U 
                                                    == 
                                                    (0x7c000000U 
                                                     & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                                     >> 0x10U))))))));
    vlSelf->__PVT__fmul__DOT__resultSigNoShift = (0x3fffffU 
                                                  & ((((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                                    >> 0xaU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0))) 
                                                     * 
                                                     (((IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                                    >> 0x1aU)))) 
                                                       << 0xaU) 
                                                      | (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                            >> 0x10U)))));
    vlSelf->__PVT__fmul__DOT__hasZero = (1U & (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                                >> 0xaU))))) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x3ffU 
                                                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0)))))) 
                                               | ((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                                  >> 0x1aU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                                    >> 0x10U))))))));
    vlSelf->__PVT__fmul_1__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                ^ vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U]) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_1__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])))));
    vlSelf->__PVT__fmul_1__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])))))));
    vlSelf->__PVT__fmul_1__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U]))));
    vlSelf->__PVT__fmul_1__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U])))))));
    vlSelf->__PVT__fmul_2__DOT__resultSign = (IData)(
                                                     (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                       >> 0xfU) 
                                                      ^ 
                                                      (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                       >> 0x1fU)));
    vlSelf->__PVT__fmul_2__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                            >> 0x10U))))));
    vlSelf->__PVT__fmul_2__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))))))) 
                                          | (IData)(
                                                    ((0x7c000000U 
                                                      == 
                                                      (0x7c000000U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                                       >> 0x10U))))))));
    vlSelf->__PVT__fmul_2__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                   >> 0x1aU)))) 
                          << 0xaU) | (0x3ffU & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                >> 0x10U)))));
    vlSelf->__PVT__fmul_2__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                                    >> 0x1aU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                                      >> 0x10U))))))));
    vlSelf->__PVT__fmul_3__DOT__resultSign = (1U & 
                                              (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                ^ vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U]) 
                                               >> 0xfU));
    vlSelf->__PVT__fmul_3__DOT__hasNaN = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))) 
                                                   & (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])))));
    vlSelf->__PVT__fmul_3__DOT__hasInf = ((IData)((
                                                   (0x7c00U 
                                                    == 
                                                    (0x7c00U 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x3ffU 
                                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))))))) 
                                          | (IData)(
                                                    ((0x7c00U 
                                                      == 
                                                      (0x7c00U 
                                                       & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x3ffU 
                                                                    & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])))))));
    vlSelf->__PVT__fmul_3__DOT__resultSigNoShift = 
        (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                 >> 0xaU)))) 
                        << 0xaU) | (0x3ffU & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3))) 
                      * (((IData)((0U != (0x1fU & (
                                                   vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U]))));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_in_valid) 
                                      & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__fmul_3__DOT__hasZero = (1U & (((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                                  >> 0xaU))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x3ffU 
                                                                 & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3)))))) 
                                                 | ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                                    >> 0xaU))))) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U])))))));
    vlSelf->__PVT___GEN_32 = ((IData)(vlSelf->__PVT__prehandshaked_2) 
                              | ((~ (IData)(vlSelf->__PVT__posthandshaked)) 
                                 & (IData)(vlSelf->__PVT__valid_2)));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
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
                                                           & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                               >> 0xaU) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0) 
                                                                               >> 0xaU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0)))))) 
                                                          + 
                                                          (0x1fU 
                                                           & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                                << 6U) 
                                                               | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                                  >> 0x1aU)) 
                                                              + 
                                                              ((~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x1fU 
                                                                            & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                                               >> 0x1aU))))) 
                                                               & (0U 
                                                                  != 
                                                                  (0x3ffU 
                                                                   & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                                      >> 0x10U)))))))))));
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
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[7U]))))))))));
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
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                        << 6U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                          >> 0x1aU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                                       >> 0x1aU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                              >> 0x10U)))))))))));
    vlSelf->__PVT__fmul_3__DOT__lzc = (0xfU & ((0U 
                                                != 
                                                (vlSelf->__PVT__fmul_3__DOT__resultSigNoShift 
                                                 & (0x200000U 
                                                    >> (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))))
                                                ? (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw)
                                                : ((IData)(1U) 
                                                   + (IData)(vlSelf->__PVT__fmul_3__DOT__lzcRaw))));
    vlSelf->__PVT___GEN_4 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                             | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                    & (IData)(vlSelf->__PVT__valid))) 
                                & (IData)(vlSelf->__PVT__valid)));
    vlSelf->__PVT___GEN_16 = ((IData)(vlSelf->__PVT__prehandshaked_1) 
                              | ((~ ((IData)(vlSelf->__PVT__valid_1) 
                                     & (IData)(vlSymsp->TOP.io_out_ready))) 
                                 & (IData)(vlSelf->__PVT__valid_1)));
    vlSelf->__PVT__fmul_3__DOT__nan_result = ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                                              | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                                                 & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)));
    vlSelf->__PVT__fmul_3__DOT__resultExpNoShift = 
        ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero)
          ? 0U : (0xffU & ((IData)(0x61U) + (0x3fU 
                                             & ((0x1fU 
                                                 & (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                     >> 0xaU) 
                                                    + 
                                                    ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3) 
                                                                     >> 0xaU))))) 
                                                     & (0U 
                                                        != 
                                                        (0x3ffU 
                                                         & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3)))))) 
                                                + (0x1fU 
                                                   & (((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                        << 0x16U) 
                                                       | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                          >> 0xaU)) 
                                                      + 
                                                      ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                                                                       >> 0xaU))))) 
                                                       & (0U 
                                                          != 
                                                          (0x3ffU 
                                                           & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_io_in_bits_matrix_b_r_1_data[6U]))))))))));
    vlSelf->__PVT__s1_handshaked_s2 = ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot.__PVT__tg_1__DOT__dp_in_valid) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__mixPc_es)
                                          ? vlSelf->__PVT__atResult_es
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__fcvt_io_in_bits_in_r)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__fcvt_io_in_bits_in_r))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1)
                                                               ? 
                                                              ((IData)(vlSelf->__PVT__fcvt_1__DOT__rmin)
                                                                ? 0x1eU
                                                                : 0x1fU)
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                                >> 0x17U)) 
                                                                              - (IData)(0x70U)))) 
                                                               & ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up) 
                                                                  & (0x3ffU 
                                                                     == (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in))))))) 
                                                       << 0xaU)) 
                                                   | (0x3ffU 
                                                      & (((0xffU 
                                                           == 
                                                           (0xffU 
                                                            & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__fcvt_io_in_bits_in_r))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            ((((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_1)
                                                                ? 
                                                               ((IData)(vlSelf->__PVT__fcvt_1__DOT__rmin)
                                                                 ? 0x3ffU
                                                                 : 0U)
                                                                : 0U) 
                                                              | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                  ? 
                                                                 ((vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                   >> 0xdU) 
                                                                  + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                                  : 0U)) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__fcvt_io_in_bits_in_r 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
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
