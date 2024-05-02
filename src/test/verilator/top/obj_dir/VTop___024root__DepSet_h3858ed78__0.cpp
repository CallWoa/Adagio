// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop___024root.h"

VL_INLINE_OPT void VTop___024root___ico_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[0U] 
        = ((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
            << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[0U]));
    vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[1U] 
        = ((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
           | ((IData)((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
                                         | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                                            >> 0x10U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[0U]) 
                                                     | (0xffffU 
                                                        & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[6U])))))) 
              << 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[2U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
                                       | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                                          >> 0x10U)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[0U]) 
                                                   | (0xffffU 
                                                      & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[6U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
                                                     | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                                                        >> 0x10U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[0U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[6U]))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[3U] 
        = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[6U]) 
           | ((IData)(((((QData)((IData)(((0xffff0000U 
                                           & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
                                          | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                                             >> 0x10U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[0U]) 
                                                      | (0xffffU 
                                                         & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[6U]))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[4U] 
        = ((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
            << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[1U]));
    vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[5U] 
        = ((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
           | ((IData)((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
                                         | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                                            >> 0x10U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[1U]) 
                                                     | (0xffffU 
                                                        & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[7U])))))) 
              << 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[6U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
                                       | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                                          >> 0x10U)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[1U]) 
                                                   | (0xffffU 
                                                      & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[7U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
                                                     | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                                                        >> 0x10U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[1U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[7U]))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[7U] 
        = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[7U]) 
           | ((IData)(((((QData)((IData)(((0xffff0000U 
                                           & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
                                          | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                                             >> 0x10U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[1U]) 
                                                      | (0xffffU 
                                                         & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[7U]))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[0U] 
        = ((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
            << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[0U]));
    vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[1U] 
        = ((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
           | ((IData)((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
                                         | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                                            >> 0x10U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[0U]) 
                                                     | (0xffffU 
                                                        & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[6U])))))) 
              << 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[2U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
                                       | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                                          >> 0x10U)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[0U]) 
                                                   | (0xffffU 
                                                      & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[6U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
                                                     | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                                                        >> 0x10U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[0U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[6U]))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[3U] 
        = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[6U]) 
           | ((IData)(((((QData)((IData)(((0xffff0000U 
                                           & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
                                          | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                                             >> 0x10U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[0U]) 
                                                      | (0xffffU 
                                                         & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[6U]))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[4U] 
        = ((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
            << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[1U]));
    vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[5U] 
        = ((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
           | ((IData)((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
                                         | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                                            >> 0x10U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[1U]) 
                                                     | (0xffffU 
                                                        & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[7U])))))) 
              << 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[6U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
                                       | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                                          >> 0x10U)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[1U]) 
                                                   | (0xffffU 
                                                      & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[7U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
                                                     | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                                                        >> 0x10U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[1U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[7U]))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[7U] 
        = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[7U]) 
           | ((IData)(((((QData)((IData)(((0xffff0000U 
                                           & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
                                          | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                                             >> 0x10U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[1U]) 
                                                      | (0xffffU 
                                                         & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[7U]))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data[0U] 
        = ((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
            << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[0U]));
    vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data[1U] 
        = ((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
           | ((IData)((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
                                         | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                                            >> 0x10U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[0U]) 
                                                     | (0xffffU 
                                                        & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[6U])))))) 
              << 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data[2U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
                                       | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                                          >> 0x10U)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[0U]) 
                                                   | (0xffffU 
                                                      & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[6U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
                                                     | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                                                        >> 0x10U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[0U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[6U]))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data[3U] 
        = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[6U]) 
           | ((IData)(((((QData)((IData)(((0xffff0000U 
                                           & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
                                          | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                                             >> 0x10U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[0U]) 
                                                      | (0xffffU 
                                                         & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[6U]))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data[4U] 
        = ((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
            << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[1U]));
    vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data[5U] 
        = ((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
           | ((IData)((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
                                         | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                                            >> 0x10U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[1U]) 
                                                     | (0xffffU 
                                                        & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[7U])))))) 
              << 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data[6U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
                                       | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                                          >> 0x10U)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[1U]) 
                                                   | (0xffffU 
                                                      & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[7U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
                                                     | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                                                        >> 0x10U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[1U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[7U]))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data[7U] 
        = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[7U]) 
           | ((IData)(((((QData)((IData)(((0xffff0000U 
                                           & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
                                          | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                                             >> 0x10U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[1U]) 
                                                      | (0xffffU 
                                                         & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[7U]))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data[0U] 
        = ((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
            << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[0U]));
    vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data[1U] 
        = ((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
           | ((IData)((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
                                         | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                                            >> 0x10U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[0U]) 
                                                     | (0xffffU 
                                                        & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[6U])))))) 
              << 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data[2U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
                                       | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                                          >> 0x10U)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[0U]) 
                                                   | (0xffffU 
                                                      & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[6U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
                                                     | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                                                        >> 0x10U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[0U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[6U]))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data[3U] 
        = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[6U]) 
           | ((IData)(((((QData)((IData)(((0xffff0000U 
                                           & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
                                          | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                                             >> 0x10U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[0U]) 
                                                      | (0xffffU 
                                                         & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[6U]))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data[4U] 
        = ((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
            << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[1U]));
    vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data[5U] 
        = ((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
           | ((IData)((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
                                         | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                                            >> 0x10U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[1U]) 
                                                     | (0xffffU 
                                                        & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[7U])))))) 
              << 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data[6U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
                                       | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                                          >> 0x10U)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[1U]) 
                                                   | (0xffffU 
                                                      & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[7U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
                                                     | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                                                        >> 0x10U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[1U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[7U]))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data[7U] 
        = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[7U]) 
           | ((IData)(((((QData)((IData)(((0xffff0000U 
                                           & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
                                          | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                                             >> 0x10U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[1U]) 
                                                      | (0xffffU 
                                                         & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[7U]))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[0U] 
        = ((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
            << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[0U]));
    vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[1U] 
        = ((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
           | ((IData)((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
                                         | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                                            >> 0x10U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[0U]) 
                                                     | (0xffffU 
                                                        & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[6U])))))) 
              << 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[2U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
                                       | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                                          >> 0x10U)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[0U]) 
                                                   | (0xffffU 
                                                      & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[6U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
                                                     | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                                                        >> 0x10U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[0U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[6U]))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[3U] 
        = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[6U]) 
           | ((IData)(((((QData)((IData)(((0xffff0000U 
                                           & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
                                          | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                                             >> 0x10U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[0U]) 
                                                      | (0xffffU 
                                                         & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[6U]))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[4U] 
        = ((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
            << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[1U]));
    vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[5U] 
        = ((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
           | ((IData)((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
                                         | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                                            >> 0x10U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[1U]) 
                                                     | (0xffffU 
                                                        & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[7U])))))) 
              << 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[6U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
                                       | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                                          >> 0x10U)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[1U]) 
                                                   | (0xffffU 
                                                      & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[7U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
                                                     | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                                                        >> 0x10U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[1U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[7U]))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[7U] 
        = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[7U]) 
           | ((IData)(((((QData)((IData)(((0xffff0000U 
                                           & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
                                          | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                                             >> 0x10U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[1U]) 
                                                      | (0xffffU 
                                                         & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[7U]))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[0U] 
        = ((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
            << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[0U]));
    vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[1U] 
        = ((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
           | ((IData)((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
                                         | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                                            >> 0x10U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[0U]) 
                                                     | (0xffffU 
                                                        & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[6U])))))) 
              << 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[2U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
                                       | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                                          >> 0x10U)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[0U]) 
                                                   | (0xffffU 
                                                      & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[6U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
                                                     | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                                                        >> 0x10U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[0U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[6U]))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[3U] 
        = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[6U]) 
           | ((IData)(((((QData)((IData)(((0xffff0000U 
                                           & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
                                          | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                                             >> 0x10U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[0U]) 
                                                      | (0xffffU 
                                                         & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[6U]))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[4U] 
        = ((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
            << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[1U]));
    vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[5U] 
        = ((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
           | ((IData)((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
                                         | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                                            >> 0x10U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[1U]) 
                                                     | (0xffffU 
                                                        & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[7U])))))) 
              << 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[6U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
                                       | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                                          >> 0x10U)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[1U]) 
                                                   | (0xffffU 
                                                      & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[7U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
                                                     | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                                                        >> 0x10U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[1U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[7U]))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[7U] 
        = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[7U]) 
           | ((IData)(((((QData)((IData)(((0xffff0000U 
                                           & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
                                          | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                                             >> 0x10U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[1U]) 
                                                      | (0xffffU 
                                                         & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[7U]))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data[0U] 
        = ((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
            << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U]));
    vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data[1U] 
        = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
           | ((IData)((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
                                         | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                                            >> 0x10U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U]) 
                                                     | (0xffffU 
                                                        & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U])))))) 
              << 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data[2U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
                                       | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                                          >> 0x10U)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U]) 
                                                   | (0xffffU 
                                                      & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
                                                     | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                                                        >> 0x10U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U]))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data[3U] 
        = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U]) 
           | ((IData)(((((QData)((IData)(((0xffff0000U 
                                           & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
                                          | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                                             >> 0x10U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U]) 
                                                      | (0xffffU 
                                                         & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U]))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data[4U] 
        = ((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
            << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U]));
    vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data[5U] 
        = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
           | ((IData)((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
                                         | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                                            >> 0x10U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U]) 
                                                     | (0xffffU 
                                                        & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U])))))) 
              << 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data[6U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
                                       | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                                          >> 0x10U)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U]) 
                                                   | (0xffffU 
                                                      & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
                                                     | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                                                        >> 0x10U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U]))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data[7U] 
        = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U]) 
           | ((IData)(((((QData)((IData)(((0xffff0000U 
                                           & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
                                          | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                                             >> 0x10U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U]) 
                                                      | (0xffffU 
                                                         & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U]))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data[0U] 
        = ((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
            << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U]));
    vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data[1U] 
        = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
           | ((IData)((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
                                         | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                                            >> 0x10U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U]) 
                                                     | (0xffffU 
                                                        & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U])))))) 
              << 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data[2U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
                                       | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                                          >> 0x10U)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U]) 
                                                   | (0xffffU 
                                                      & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
                                                     | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                                                        >> 0x10U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U]))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data[3U] 
        = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U]) 
           | ((IData)(((((QData)((IData)(((0xffff0000U 
                                           & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
                                          | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                                             >> 0x10U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U]) 
                                                      | (0xffffU 
                                                         & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U]))))) 
                       >> 0x20U)) >> 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data[4U] 
        = ((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
            << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U]));
    vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data[5U] 
        = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
           | ((IData)((((QData)((IData)(((0xffff0000U 
                                          & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
                                         | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                                            >> 0x10U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U]) 
                                                     | (0xffffU 
                                                        & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U])))))) 
              << 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data[6U] 
        = (((IData)((((QData)((IData)(((0xffff0000U 
                                        & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
                                       | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                                          >> 0x10U)))) 
                      << 0x20U) | (QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U]) 
                                                   | (0xffffU 
                                                      & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U])))))) 
            >> 0x10U) | ((IData)(((((QData)((IData)(
                                                    ((0xffff0000U 
                                                      & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
                                                     | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                                                        >> 0x10U)))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((0xffff0000U 
                                                                  & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U]) 
                                                                 | (0xffffU 
                                                                    & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U]))))) 
                                  >> 0x20U)) << 0x10U));
    vlSelf->Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data[7U] 
        = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U]) 
           | ((IData)(((((QData)((IData)(((0xffff0000U 
                                           & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
                                          | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                                             >> 0x10U)))) 
                         << 0x20U) | (QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U]) 
                                                      | (0xffffU 
                                                         & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U]))))) 
                       >> 0x20U)) >> 0x10U));
}

void VTop___024root___eval_act(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_act\n"); );
}

void VTop___024root___eval_triggers__ico(VTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__ico(VTop___024root* vlSelf);
#endif  // VL_DEBUG
void VTop___024root___eval_ico(VTop___024root* vlSelf);
void VTop___024root___eval_triggers__act(VTop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__act(VTop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VTop___024root___dump_triggers__nba(VTop___024root* vlSelf);
#endif  // VL_DEBUG
void VTop___024root___eval_nba(VTop___024root* vlSelf);

void VTop___024root___eval(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval\n"); );
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
        VTop___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("Top.v", 3305, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VTop___024root___eval_ico(vlSelf);
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
            VTop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VTop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("Top.v", 3305, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                VTop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VTop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("Top.v", 3305, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VTop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VTop___024root___eval_debug_assertions(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_in_valid & 0xfeU))) {
        Verilated::overWidthError("io_in_valid");}
    if (VL_UNLIKELY((vlSelf->io_in_bits_ctrl_matBSel 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_ctrl_matBSel");}
    if (VL_UNLIKELY((vlSelf->io_in_bits_ctrl_mixPcMode 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_ctrl_mixPcMode");}
    if (VL_UNLIKELY((vlSelf->io_in_bits_ctrl_roundingMode 
                     & 0xfeU))) {
        Verilated::overWidthError("io_in_bits_ctrl_roundingMode");}
    if (VL_UNLIKELY((vlSelf->io_out_ready & 0xfeU))) {
        Verilated::overWidthError("io_out_ready");}
}
#endif  // VL_DEBUG
