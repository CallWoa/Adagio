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

VL_INLINE_OPT void VTop___024root___ico_sequent__TOP__0(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___ico_sequent__TOP__0\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_15;
    VlWide<8>/*255:0*/ __Vtemp_30;
    VlWide<8>/*255:0*/ __Vtemp_45;
    VlWide<8>/*255:0*/ __Vtemp_60;
    // Body
    if (vlSelf->io_in_bits_ctrl_matBSel) {
        __Vtemp_15[1U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
                                                        | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[0U]) 
                                                                    | (0xffffU 
                                                                       & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[6U])))))) 
                             << 0x10U));
        __Vtemp_15[2U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
                                                      | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[0U]) 
                                                                  | (0xffffU 
                                                                     & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[6U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
                                                                    | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[6U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[6U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
                                                         | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[6U]))))) 
                                      >> 0x20U)) >> 0x10U));
        __Vtemp_15[5U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
                                                        | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[1U]) 
                                                                    | (0xffffU 
                                                                       & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[7U])))))) 
                             << 0x10U));
        __Vtemp_15[6U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
                                                      | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[1U]) 
                                                                  | (0xffffU 
                                                                     & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[7U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
                                                                    | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[7U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[7U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[7U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
                                                         | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[7U]))))) 
                                      >> 0x20U)) >> 0x10U));
        vlSelf->Top__DOT__tc__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[0U] 
            = ((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[0U]));
        vlSelf->Top__DOT__tc__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[1U] 
            = __Vtemp_15[1U];
        vlSelf->Top__DOT__tc__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[2U] 
            = __Vtemp_15[2U];
        vlSelf->Top__DOT__tc__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[3U] 
            = __Vtemp_15[3U];
        vlSelf->Top__DOT__tc__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[4U] 
            = ((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[1U]));
        vlSelf->Top__DOT__tc__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[5U] 
            = __Vtemp_15[5U];
        vlSelf->Top__DOT__tc__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[6U] 
            = __Vtemp_15[6U];
        vlSelf->Top__DOT__tc__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[7U] 
            = __Vtemp_15[7U];
        __Vtemp_30[1U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
                                                        | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[0U]) 
                                                                    | (0xffffU 
                                                                       & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[6U])))))) 
                             << 0x10U));
        __Vtemp_30[2U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
                                                      | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[0U]) 
                                                                  | (0xffffU 
                                                                     & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[6U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
                                                                    | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[6U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_30[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[6U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
                                                         | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[6U]))))) 
                                      >> 0x20U)) >> 0x10U));
        __Vtemp_30[5U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
                                                        | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[1U]) 
                                                                    | (0xffffU 
                                                                       & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[7U])))))) 
                             << 0x10U));
        __Vtemp_30[6U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
                                                      | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[1U]) 
                                                                  | (0xffffU 
                                                                     & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[7U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
                                                                    | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[7U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_30[7U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[7U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
                                                         | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[7U]))))) 
                                      >> 0x20U)) >> 0x10U));
        vlSelf->Top__DOT__tc__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[0U] 
            = ((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[0U]));
        vlSelf->Top__DOT__tc__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[1U] 
            = __Vtemp_30[1U];
        vlSelf->Top__DOT__tc__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[2U] 
            = __Vtemp_30[2U];
        vlSelf->Top__DOT__tc__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[3U] 
            = __Vtemp_30[3U];
        vlSelf->Top__DOT__tc__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[4U] 
            = ((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[1U]));
        vlSelf->Top__DOT__tc__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[5U] 
            = __Vtemp_30[5U];
        vlSelf->Top__DOT__tc__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[6U] 
            = __Vtemp_30[6U];
        vlSelf->Top__DOT__tc__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[7U] 
            = __Vtemp_30[7U];
        __Vtemp_45[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
                                                        | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[0U]) 
                                                                    | (0xffffU 
                                                                       & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[6U])))))) 
                             << 0x10U));
        __Vtemp_45[2U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
                                                      | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[0U]) 
                                                                  | (0xffffU 
                                                                     & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[6U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
                                                                    | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[6U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_45[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[6U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
                                                         | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[6U]))))) 
                                      >> 0x20U)) >> 0x10U));
        __Vtemp_45[5U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
                                                        | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[1U]) 
                                                                    | (0xffffU 
                                                                       & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[7U])))))) 
                             << 0x10U));
        __Vtemp_45[6U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
                                                      | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[1U]) 
                                                                  | (0xffffU 
                                                                     & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[7U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
                                                                    | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[7U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_45[7U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[7U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
                                                         | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[7U]))))) 
                                      >> 0x20U)) >> 0x10U));
        vlSelf->Top__DOT__tc_1__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[0U] 
            = ((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[0U]));
        vlSelf->Top__DOT__tc_1__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[1U] 
            = __Vtemp_45[1U];
        vlSelf->Top__DOT__tc_1__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[2U] 
            = __Vtemp_45[2U];
        vlSelf->Top__DOT__tc_1__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[3U] 
            = __Vtemp_45[3U];
        vlSelf->Top__DOT__tc_1__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[4U] 
            = ((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[1U]));
        vlSelf->Top__DOT__tc_1__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[5U] 
            = __Vtemp_45[5U];
        vlSelf->Top__DOT__tc_1__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[6U] 
            = __Vtemp_45[6U];
        vlSelf->Top__DOT__tc_1__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[7U] 
            = __Vtemp_45[7U];
        __Vtemp_60[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
                                                        | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U]) 
                                                                    | (0xffffU 
                                                                       & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U])))))) 
                             << 0x10U));
        __Vtemp_60[2U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
                                                      | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U]) 
                                                                  | (0xffffU 
                                                                     & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
                                                                    | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_60[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
                                                         | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U]))))) 
                                      >> 0x20U)) >> 0x10U));
        __Vtemp_60[5U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
                                                        | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U]) 
                                                                    | (0xffffU 
                                                                       & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U])))))) 
                             << 0x10U));
        __Vtemp_60[6U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
                                                      | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U]) 
                                                                  | (0xffffU 
                                                                     & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
                                                                    | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_60[7U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
                                                         | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U]))))) 
                                      >> 0x20U)) >> 0x10U));
        vlSelf->Top__DOT__tc_1__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[0U] 
            = ((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U]));
        vlSelf->Top__DOT__tc_1__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[1U] 
            = __Vtemp_60[1U];
        vlSelf->Top__DOT__tc_1__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[2U] 
            = __Vtemp_60[2U];
        vlSelf->Top__DOT__tc_1__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[3U] 
            = __Vtemp_60[3U];
        vlSelf->Top__DOT__tc_1__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[4U] 
            = ((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U]));
    } else {
        __Vtemp_15[1U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
                                                        | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[0U]) 
                                                                    | (0xffffU 
                                                                       & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[6U])))))) 
                             << 0x10U));
        __Vtemp_15[2U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
                                                      | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[0U]) 
                                                                  | (0xffffU 
                                                                     & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[6U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
                                                                    | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[6U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[6U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
                                                         | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[6U]))))) 
                                      >> 0x20U)) >> 0x10U));
        __Vtemp_15[5U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
                                                        | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[1U]) 
                                                                    | (0xffffU 
                                                                       & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[7U])))))) 
                             << 0x10U));
        __Vtemp_15[6U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
                                                      | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[1U]) 
                                                                  | (0xffffU 
                                                                     & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[7U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
                                                                    | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[7U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[7U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[7U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
                                                         | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[7U]))))) 
                                      >> 0x20U)) >> 0x10U));
        vlSelf->Top__DOT__tc__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[0U] 
            = ((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[0U]));
        vlSelf->Top__DOT__tc__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[1U] 
            = __Vtemp_15[1U];
        vlSelf->Top__DOT__tc__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[2U] 
            = __Vtemp_15[2U];
        vlSelf->Top__DOT__tc__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[3U] 
            = __Vtemp_15[3U];
        vlSelf->Top__DOT__tc__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[4U] 
            = ((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[1U]));
        vlSelf->Top__DOT__tc__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[5U] 
            = __Vtemp_15[5U];
        vlSelf->Top__DOT__tc__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[6U] 
            = __Vtemp_15[6U];
        vlSelf->Top__DOT__tc__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[7U] 
            = __Vtemp_15[7U];
        __Vtemp_30[1U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
                                                        | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[0U]) 
                                                                    | (0xffffU 
                                                                       & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[6U])))))) 
                             << 0x10U));
        __Vtemp_30[2U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
                                                      | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[0U]) 
                                                                  | (0xffffU 
                                                                     & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[6U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
                                                                    | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[6U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_30[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[6U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
                                                         | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[6U]))))) 
                                      >> 0x20U)) >> 0x10U));
        __Vtemp_30[5U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
                                                        | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[1U]) 
                                                                    | (0xffffU 
                                                                       & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[7U])))))) 
                             << 0x10U));
        __Vtemp_30[6U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
                                                      | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[1U]) 
                                                                  | (0xffffU 
                                                                     & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[7U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
                                                                    | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[7U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_30[7U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[7U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
                                                         | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[7U]))))) 
                                      >> 0x20U)) >> 0x10U));
        vlSelf->Top__DOT__tc__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[0U] 
            = ((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[0U]));
        vlSelf->Top__DOT__tc__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[1U] 
            = __Vtemp_30[1U];
        vlSelf->Top__DOT__tc__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[2U] 
            = __Vtemp_30[2U];
        vlSelf->Top__DOT__tc__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[3U] 
            = __Vtemp_30[3U];
        vlSelf->Top__DOT__tc__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[4U] 
            = ((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[1U]));
        vlSelf->Top__DOT__tc__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[5U] 
            = __Vtemp_30[5U];
        vlSelf->Top__DOT__tc__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[6U] 
            = __Vtemp_30[6U];
        vlSelf->Top__DOT__tc__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[7U] 
            = __Vtemp_30[7U];
        __Vtemp_45[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
                                                        | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[0U]) 
                                                                    | (0xffffU 
                                                                       & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[6U])))))) 
                             << 0x10U));
        __Vtemp_45[2U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
                                                      | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[0U]) 
                                                                  | (0xffffU 
                                                                     & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[6U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
                                                                    | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[6U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_45[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[6U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
                                                         | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[6U]))))) 
                                      >> 0x20U)) >> 0x10U));
        __Vtemp_45[5U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
                                                        | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[1U]) 
                                                                    | (0xffffU 
                                                                       & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[7U])))))) 
                             << 0x10U));
        __Vtemp_45[6U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
                                                      | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[1U]) 
                                                                  | (0xffffU 
                                                                     & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[7U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
                                                                    | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[7U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_45[7U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[7U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
                                                         | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[7U]))))) 
                                      >> 0x20U)) >> 0x10U));
        vlSelf->Top__DOT__tc_1__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[0U] 
            = ((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[0U]));
        vlSelf->Top__DOT__tc_1__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[1U] 
            = __Vtemp_45[1U];
        vlSelf->Top__DOT__tc_1__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[2U] 
            = __Vtemp_45[2U];
        vlSelf->Top__DOT__tc_1__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[3U] 
            = __Vtemp_45[3U];
        vlSelf->Top__DOT__tc_1__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[4U] 
            = ((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[1U]));
        vlSelf->Top__DOT__tc_1__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[5U] 
            = __Vtemp_45[5U];
        vlSelf->Top__DOT__tc_1__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[6U] 
            = __Vtemp_45[6U];
        vlSelf->Top__DOT__tc_1__DOT__ot__DOT__tg_io_in_bits_matrix_b_data[7U] 
            = __Vtemp_45[7U];
        __Vtemp_60[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
                                                        | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U]) 
                                                                    | (0xffffU 
                                                                       & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U])))))) 
                             << 0x10U));
        __Vtemp_60[2U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
                                                      | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U]) 
                                                                  | (0xffffU 
                                                                     & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
                                                                    | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_60[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
                                                         | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U]))))) 
                                      >> 0x20U)) >> 0x10U));
        __Vtemp_60[5U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
                                                        | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U]) 
                                                                    | (0xffffU 
                                                                       & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U])))))) 
                             << 0x10U));
        __Vtemp_60[6U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
                                                      | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U]) 
                                                                  | (0xffffU 
                                                                     & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
                                                                    | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_60[7U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
                                                         | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U]))))) 
                                      >> 0x20U)) >> 0x10U));
        vlSelf->Top__DOT__tc_1__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[0U] 
            = ((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U]));
        vlSelf->Top__DOT__tc_1__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[1U] 
            = __Vtemp_60[1U];
        vlSelf->Top__DOT__tc_1__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[2U] 
            = __Vtemp_60[2U];
        vlSelf->Top__DOT__tc_1__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[3U] 
            = __Vtemp_60[3U];
        vlSelf->Top__DOT__tc_1__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[4U] 
            = ((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U]));
    }
    vlSelf->Top__DOT__tc_1__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[5U] 
        = __Vtemp_60[5U];
    vlSelf->Top__DOT__tc_1__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[6U] 
        = __Vtemp_60[6U];
    vlSelf->Top__DOT__tc_1__DOT__ot_1__DOT__tg_io_in_bits_matrix_b_data[7U] 
        = __Vtemp_60[7U];
    vlSelf->io_in_ready = vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg.io_in_ready;
}

void VTop_Threadgroup___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__0(VTop_Threadgroup* vlSelf);
void VTop_Threadgroup___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__0(VTop_Threadgroup* vlSelf);
void VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__0(VTop_DotProdUnit_1* vlSelf);

void VTop___024root___eval_ico(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VTop_Threadgroup___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VTop_Threadgroup___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1));
        VTop_Threadgroup___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg));
        VTop_Threadgroup___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1));
        VTop_Threadgroup___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg));
        VTop_Threadgroup___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1));
        VTop_Threadgroup___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg));
        VTop_Threadgroup___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1));
        VTop___024root___ico_sequent__TOP__0(vlSelf);
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2));
        VTop_DotProdUnit_1___ico_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3));
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
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1.__PVT__matrix_d_buffer_0);
    vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[1U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1.__PVT__matrix_d_buffer_0 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[2U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1.__PVT__matrix_d_buffer_1);
    vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[3U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1.__PVT__matrix_d_buffer_1 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[4U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1.__PVT__matrix_d_buffer_2);
    vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[5U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1.__PVT__matrix_d_buffer_2 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[6U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1.__PVT__matrix_d_buffer_3);
    vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data[7U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1.__PVT__matrix_d_buffer_3 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[0U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg.__PVT__matrix_d_buffer_0);
    vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[1U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg.__PVT__matrix_d_buffer_0 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[2U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg.__PVT__matrix_d_buffer_1);
    vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[3U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg.__PVT__matrix_d_buffer_1 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[4U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg.__PVT__matrix_d_buffer_2);
    vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[5U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg.__PVT__matrix_d_buffer_2 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[6U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg.__PVT__matrix_d_buffer_3);
    vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data[7U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg.__PVT__matrix_d_buffer_3 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[0U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1.__PVT__matrix_d_buffer_0);
    vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[1U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1.__PVT__matrix_d_buffer_0 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[2U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1.__PVT__matrix_d_buffer_1);
    vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[3U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1.__PVT__matrix_d_buffer_1 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[4U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1.__PVT__matrix_d_buffer_2);
    vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[5U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1.__PVT__matrix_d_buffer_2 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[6U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1.__PVT__matrix_d_buffer_3);
    vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data[7U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1.__PVT__matrix_d_buffer_3 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[0U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg.__PVT__matrix_d_buffer_0);
    vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[1U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg.__PVT__matrix_d_buffer_0 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[2U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg.__PVT__matrix_d_buffer_1);
    vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[3U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg.__PVT__matrix_d_buffer_1 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[4U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg.__PVT__matrix_d_buffer_2);
    vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[5U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg.__PVT__matrix_d_buffer_2 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[6U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg.__PVT__matrix_d_buffer_3);
    vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data[7U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg.__PVT__matrix_d_buffer_3 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[0U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__matrix_d_buffer_0);
    vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[1U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__matrix_d_buffer_0 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[2U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__matrix_d_buffer_1);
    vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[3U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__matrix_d_buffer_1 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[4U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__matrix_d_buffer_2);
    vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[5U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__matrix_d_buffer_2 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[6U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__matrix_d_buffer_3);
    vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data[7U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__matrix_d_buffer_3 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[0U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__matrix_d_buffer_0);
    vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[1U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__matrix_d_buffer_0 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[2U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__matrix_d_buffer_1);
    vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[3U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__matrix_d_buffer_1 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[4U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__matrix_d_buffer_2);
    vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[5U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__matrix_d_buffer_2 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[6U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__matrix_d_buffer_3);
    vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data[7U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__matrix_d_buffer_3 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[0U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__matrix_d_buffer_0);
    vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[1U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__matrix_d_buffer_0 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[2U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__matrix_d_buffer_1);
    vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[3U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__matrix_d_buffer_1 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[4U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__matrix_d_buffer_2);
    vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[5U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__matrix_d_buffer_2 
                   >> 0x20U));
    vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[6U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__matrix_d_buffer_3);
    vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data[7U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__matrix_d_buffer_3 
                   >> 0x20U));
    vlSelf->io_out_bits_decode_src = vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg.__PVT__decode_out_buffer_src;
    vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[0U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg.__PVT__matrix_d_buffer_0);
    vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[1U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg.__PVT__matrix_d_buffer_0 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[2U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg.__PVT__matrix_d_buffer_1);
    vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[3U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg.__PVT__matrix_d_buffer_1 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[4U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg.__PVT__matrix_d_buffer_2);
    vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[5U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg.__PVT__matrix_d_buffer_2 
                   >> 0x20U));
    vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[6U] 
        = (IData)(vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg.__PVT__matrix_d_buffer_3);
    vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data[7U] 
        = (IData)((vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg.__PVT__matrix_d_buffer_3 
                   >> 0x20U));
    vlSelf->io_out_valid = vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg.__PVT__tg_out_valid;
}

VL_INLINE_OPT void VTop___024root___nba_sequent__TOP__1(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->io_in_ready = vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg.io_in_ready;
}

void VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__0(VTop_Threadgroup* vlSelf);
void VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__0(VTop_Threadgroup* vlSelf);
void VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__0(VTop_Threadgroup* vlSelf);
void VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__0(VTop_Threadgroup* vlSelf);
void VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__0(VTop_Threadgroup* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__0(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__0(VTop_DotProdUnit_1* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp__DOT__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp__DOT__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp__DOT__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp__DOT__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp__DOT__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp__DOT__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp__DOT__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp__DOT__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp__DOT__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp__DOT__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp__DOT__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp__DOT__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp__DOT__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp__DOT__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp__DOT__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp__DOT__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp__DOT__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp__DOT__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp__DOT__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp__DOT__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp__DOT__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp__DOT__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp__DOT__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp__DOT__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp__DOT__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp__DOT__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__1(VTop_Threadgroup* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__1(VTop_Threadgroup* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__1(VTop_Threadgroup* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__1(VTop_Threadgroup* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__1(VTop_Threadgroup* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__1(VTop_Threadgroup* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__1(VTop_Threadgroup* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__1(VTop_Threadgroup* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__final_fadd_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__addResult_0_faddModule_1__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__addResult_0_faddModule__0(VTop_FADD* vlSelf);
void VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__addResult_1_faddModule__0(VTop_FADD* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__1(VTop_DotProdUnit_1* vlSelf);
void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__1(VTop_DotProdUnit_1* vlSelf);

void VTop___024root___eval_nba(VTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1));
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg));
        VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1));
        VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg));
        VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1));
        VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg));
        VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1));
        VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3));
        VTop___024root___nba_sequent__TOP__0(vlSelf);
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp__DOT__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp__DOT__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp__DOT__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp__DOT__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp__DOT__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp__DOT__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp__DOT__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp__DOT__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp__DOT__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp__DOT__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp__DOT__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp__DOT__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp__DOT__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp__DOT__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp__DOT__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp__DOT__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp__DOT__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp__DOT__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp__DOT__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp__DOT__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp__DOT__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp__DOT__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp__DOT__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp__DOT__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp__DOT__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp__DOT__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp__DOT__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp__DOT__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp__DOT__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp__DOT__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp__DOT__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp__DOT__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp__DOT__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp__DOT__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp__DOT__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp__DOT__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp__DOT__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp__DOT__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp__DOT__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp__DOT__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp__DOT__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp__DOT__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp__DOT__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp__DOT__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp__DOT__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp__DOT__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp__DOT__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp__DOT__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp__DOT__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp__DOT__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp__DOT__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp__DOT__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__addResult_0_faddModule_1));
        VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__addResult_0_faddModule_1));
        VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__addResult_0_faddModule_1));
        VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__addResult_0_faddModule_1));
        VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__addResult_0_faddModule_1));
        VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__addResult_0_faddModule_1));
        VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__addResult_0_faddModule_1));
        VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__addResult_0_faddModule_1));
        VTop_Threadgroup___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__addResult_1_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__final_fadd_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__final_fadd_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__addResult_0_faddModule_1__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__addResult_0_faddModule_1));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__addResult_0_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__addResult_0_faddModule));
        VTop_FADD___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__addResult_1_faddModule__0((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__addResult_1_faddModule));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3));
        VTop___024root___nba_sequent__TOP__1(vlSelf);
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__1((&vlSymsp->TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2));
        VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__1((&vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3));
    }
}
