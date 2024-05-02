// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


VL_ATTR_COLD void VTop___024root__trace_full_sub_24(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_sub_24\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<4>/*127:0*/ __Vtemp_3;
    VlWide<4>/*127:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_9;
    VlWide<4>/*127:0*/ __Vtemp_12;
    // Body
    bufp->fullSData(oldp+79966,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+79967,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U])),16);
    bufp->fullSData(oldp+79968,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+79969,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U])),16);
    bufp->fullSData(oldp+79970,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+79971,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U])),16);
    bufp->fullSData(oldp+79972,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+79973,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U])),16);
    bufp->fullSData(oldp+79974,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+79975,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U])),16);
    bufp->fullSData(oldp+79976,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+79977,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U])),16);
    bufp->fullSData(oldp+79978,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+79979,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U])),16);
    bufp->fullSData(oldp+79980,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+79981,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U])),16);
    __Vtemp_3[0U] = ((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                      << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U]));
    __Vtemp_3[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
                     | ((IData)((((QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
                                                   | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                                                      >> 0x10U)))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((0xffff0000U 
                                                                & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U]) 
                                                               | (0xffffU 
                                                                  & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U])))))) 
                        << 0x10U));
    __Vtemp_3[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_3[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U]) 
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
    bufp->fullWData(oldp+79982,(__Vtemp_3),128);
    __Vtemp_6[0U] = ((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                      << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U]));
    __Vtemp_6[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
                     | ((IData)((((QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
                                                   | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                                                      >> 0x10U)))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((0xffff0000U 
                                                                & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U]) 
                                                               | (0xffffU 
                                                                  & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U])))))) 
                        << 0x10U));
    __Vtemp_6[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_6[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U]) 
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
    bufp->fullWData(oldp+79986,(__Vtemp_6),128);
    bufp->fullSData(oldp+79990,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+79991,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U])),16);
    bufp->fullSData(oldp+79992,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+79993,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U])),16);
    bufp->fullSData(oldp+79994,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+79995,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U])),16);
    bufp->fullSData(oldp+79996,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+79997,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U])),16);
    bufp->fullSData(oldp+79998,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+79999,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U])),16);
    bufp->fullSData(oldp+80000,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+80001,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U])),16);
    bufp->fullSData(oldp+80002,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+80003,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U])),16);
    bufp->fullSData(oldp+80004,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+80005,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U])),16);
    __Vtemp_9[0U] = ((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                      << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U]));
    __Vtemp_9[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
                     | ((IData)((((QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
                                                   | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                                                      >> 0x10U)))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((0xffff0000U 
                                                                & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U]) 
                                                               | (0xffffU 
                                                                  & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U])))))) 
                        << 0x10U));
    __Vtemp_9[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_9[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U]) 
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
    bufp->fullWData(oldp+80006,(__Vtemp_9),128);
    __Vtemp_12[0U] = ((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U]));
    __Vtemp_12[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
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
    __Vtemp_12[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_12[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U]) 
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
    bufp->fullWData(oldp+80010,(__Vtemp_12),128);
    bufp->fullBit(oldp+80014,(1U));
    bufp->fullBit(oldp+80015,(0U));
}
