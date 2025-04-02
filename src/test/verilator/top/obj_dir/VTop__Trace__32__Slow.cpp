// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


VL_ATTR_COLD void VTop___024root__trace_full_sub_23(VTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTop___024root__trace_full_sub_23\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<8>/*255:0*/ __Vtemp_7;
    VlWide<8>/*255:0*/ __Vtemp_14;
    VlWide<8>/*255:0*/ __Vtemp_21;
    VlWide<8>/*255:0*/ __Vtemp_28;
    VlWide<8>/*255:0*/ __Vtemp_35;
    VlWide<8>/*255:0*/ __Vtemp_42;
    VlWide<8>/*255:0*/ __Vtemp_49;
    VlWide<8>/*255:0*/ __Vtemp_56;
    VlWide<4>/*127:0*/ __Vtemp_59;
    VlWide<4>/*127:0*/ __Vtemp_62;
    VlWide<4>/*127:0*/ __Vtemp_65;
    VlWide<4>/*127:0*/ __Vtemp_68;
    VlWide<4>/*127:0*/ __Vtemp_71;
    VlWide<4>/*127:0*/ __Vtemp_74;
    VlWide<4>/*127:0*/ __Vtemp_77;
    VlWide<4>/*127:0*/ __Vtemp_80;
    VlWide<4>/*127:0*/ __Vtemp_83;
    VlWide<4>/*127:0*/ __Vtemp_86;
    VlWide<4>/*127:0*/ __Vtemp_89;
    VlWide<4>/*127:0*/ __Vtemp_92;
    VlWide<4>/*127:0*/ __Vtemp_95;
    VlWide<4>/*127:0*/ __Vtemp_98;
    VlWide<4>/*127:0*/ __Vtemp_101;
    VlWide<4>/*127:0*/ __Vtemp_104;
    // Body
    bufp->fullCData(oldp+77545,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_2) 
                                  << 6U) | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_2) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_1) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0) 
                                                   << 2U) 
                                                  | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_2)))))),8);
    bufp->fullCData(oldp+77546,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_0) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_0) 
                                                  >> 1U)))),2);
    bufp->fullCData(oldp+77547,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_2) 
                                                  >> 1U)))),2);
    bufp->fullBit(oldp+77548,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1__DOT__pout_0));
    bufp->fullBit(oldp+77549,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1__DOT__pout_1));
    bufp->fullBit(oldp+77550,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1__DOT__zout_0));
    bufp->fullBit(oldp+77551,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1__DOT__zout_1));
    bufp->fullBit(oldp+77552,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0));
    bufp->fullBit(oldp+77553,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_1));
    bufp->fullBit(oldp+77554,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0));
    bufp->fullBit(oldp+77555,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_1));
    bufp->fullCData(oldp+77556,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_0) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_0) 
                                                  >> 1U)))),2);
    bufp->fullCData(oldp+77557,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_0) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_2) 
                                                  >> 1U)))),2);
    bufp->fullBit(oldp+77558,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8__DOT__pout_0));
    bufp->fullBit(oldp+77559,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8__DOT__pout_1));
    bufp->fullBit(oldp+77560,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8__DOT__zout_0));
    bufp->fullBit(oldp+77561,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8__DOT__zout_1));
    bufp->fullBit(oldp+77562,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9__DOT__pout_0));
    bufp->fullBit(oldp+77563,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9__DOT__pout_1));
    bufp->fullBit(oldp+77564,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9__DOT__zout_0));
    bufp->fullBit(oldp+77565,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9__DOT__zout_1));
    bufp->fullCData(oldp+77566,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_0) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_0) 
                                                  >> 1U)))),2);
    bufp->fullCData(oldp+77567,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__zout_0) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_2) 
                                                  >> 1U)))),2);
    bufp->fullBit(oldp+77568,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_0));
    bufp->fullBit(oldp+77569,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_1));
    bufp->fullBit(oldp+77570,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_0));
    bufp->fullBit(oldp+77571,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_1));
    bufp->fullCData(oldp+77572,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_0) 
                                  << 4U) | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_1) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0) 
                                                << 2U) 
                                               | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_0))))),6);
    bufp->fullCData(oldp+77573,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_2) 
                                  << 4U) | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_1) 
                                             << 3U) 
                                            | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0) 
                                                << 2U) 
                                               | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_2))))),6);
    bufp->fullCData(oldp+77574,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_0) 
                                                  >> 1U)))),2);
    bufp->fullCData(oldp+77575,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_2) 
                                                  >> 1U)))),2);
    bufp->fullBit(oldp+77576,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2__DOT__pout_0));
    bufp->fullBit(oldp+77577,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2__DOT__pout_1));
    bufp->fullBit(oldp+77578,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2__DOT__zout_0));
    bufp->fullBit(oldp+77579,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2__DOT__zout_1));
    bufp->fullBit(oldp+77580,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_0));
    bufp->fullBit(oldp+77581,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_1));
    bufp->fullBit(oldp+77582,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_0));
    bufp->fullBit(oldp+77583,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_1));
    bufp->fullCData(oldp+77584,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_0) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_0) 
                                                  >> 1U)))),2);
    bufp->fullCData(oldp+77585,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_0) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_2) 
                                                  >> 1U)))),2);
    bufp->fullBit(oldp+77586,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12__DOT__pout_0));
    bufp->fullBit(oldp+77587,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12__DOT__pout_1));
    bufp->fullBit(oldp+77588,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12__DOT__zout_0));
    bufp->fullBit(oldp+77589,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12__DOT__zout_1));
    bufp->fullCData(oldp+77590,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1),2);
    bufp->fullCData(oldp+77591,(((2U & ((~ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__n_0)) 
                                        << 1U)) | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__zout_1))),2);
    bufp->fullBit(oldp+77592,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__pout_0));
    bufp->fullBit(oldp+77593,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__pout_1));
    bufp->fullBit(oldp+77594,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_0));
    bufp->fullBit(oldp+77595,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_1));
    bufp->fullCData(oldp+77596,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_0) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_0) 
                                                  >> 1U)))),2);
    bufp->fullCData(oldp+77597,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_0) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_2) 
                                                  >> 1U)))),2);
    bufp->fullBit(oldp+77598,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3__DOT__pout_0));
    bufp->fullBit(oldp+77599,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3__DOT__pout_1));
    bufp->fullBit(oldp+77600,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3__DOT__zout_0));
    bufp->fullBit(oldp+77601,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3__DOT__zout_1));
    bufp->fullBit(oldp+77602,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_0));
    bufp->fullBit(oldp+77603,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_1));
    bufp->fullBit(oldp+77604,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_0));
    bufp->fullBit(oldp+77605,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_1));
    bufp->fullCData(oldp+77606,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_0) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_0) 
                                                  >> 1U)))),2);
    bufp->fullCData(oldp+77607,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_0) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_2) 
                                                  >> 1U)))),2);
    bufp->fullBit(oldp+77608,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0));
    bufp->fullBit(oldp+77609,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1));
    bufp->fullBit(oldp+77610,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0));
    bufp->fullBit(oldp+77611,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_1));
    bufp->fullBit(oldp+77612,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_0));
    bufp->fullBit(oldp+77613,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1));
    bufp->fullBit(oldp+77614,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_0));
    bufp->fullBit(oldp+77615,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1));
    bufp->fullCData(oldp+77616,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_0) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_0) 
                                                  >> 1U)))),2);
    bufp->fullCData(oldp+77617,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_0) 
                                  << 1U) | (1U & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_2) 
                                                  >> 1U)))),2);
    bufp->fullBit(oldp+77618,(((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                               | ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1)))));
    bufp->fullBit(oldp+77619,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1));
    bufp->fullBit(oldp+77620,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0));
    bufp->fullBit(oldp+77621,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1));
    bufp->fullCData(oldp+77622,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                  << 1U) | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1))),2);
    bufp->fullCData(oldp+77623,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                                  << 1U) | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1))),2);
    bufp->fullBit(oldp+77624,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                                | ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1))) 
                               | ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0) 
                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1)))));
    bufp->fullBit(oldp+77625,((((~ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0)) 
                                & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1)) 
                               | ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_6__DOT___pout_1_T_7)))));
    bufp->fullBit(oldp+77626,(((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0) 
                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1))));
    bufp->fullBit(oldp+77627,(((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_6__DOT___pout_1_T_7))));
    bufp->fullBit(oldp+77628,(((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__VdfgTmp_h8093e782__0) 
                                 & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza_io_b) 
                                | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)) 
                               | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10))));
    bufp->fullBit(oldp+77629,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_1));
    bufp->fullBit(oldp+77630,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_2));
    bufp->fullBit(oldp+77631,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_3));
    bufp->fullBit(oldp+77632,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_4));
    bufp->fullBit(oldp+77633,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_5));
    bufp->fullBit(oldp+77634,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_6));
    bufp->fullBit(oldp+77635,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_7));
    bufp->fullBit(oldp+77636,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_8));
    bufp->fullBit(oldp+77637,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_9));
    bufp->fullBit(oldp+77638,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_10));
    bufp->fullBit(oldp+77639,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_11));
    bufp->fullBit(oldp+77640,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_12));
    bufp->fullBit(oldp+77641,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_13));
    bufp->fullBit(oldp+77642,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_14));
    bufp->fullBit(oldp+77643,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_15));
    bufp->fullBit(oldp+77644,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_16));
    bufp->fullBit(oldp+77645,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_17));
    bufp->fullBit(oldp+77646,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_18));
    bufp->fullBit(oldp+77647,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_19));
    bufp->fullBit(oldp+77648,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_20));
    bufp->fullBit(oldp+77649,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_21));
    bufp->fullBit(oldp+77650,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_22));
    bufp->fullBit(oldp+77651,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_23));
    bufp->fullBit(oldp+77652,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_24));
    bufp->fullCData(oldp+77653,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_5) 
                                  << 5U) | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_4) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_3) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_2) 
                                                   << 2U) 
                                                  | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_1) 
                                                      << 1U) 
                                                     | ((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__VdfgTmp_h8093e782__0) 
                                                          & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza_io_b) 
                                                         | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)) 
                                                        | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)))))))),6);
    bufp->fullSData(oldp+77654,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_11) 
                                  << 0xbU) | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_10) 
                                               << 0xaU) 
                                              | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_9) 
                                                  << 9U) 
                                                 | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_8) 
                                                     << 8U) 
                                                    | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_7) 
                                                        << 7U) 
                                                       | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_6) 
                                                           << 6U) 
                                                          | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_5) 
                                                              << 5U) 
                                                             | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_4) 
                                                                 << 4U) 
                                                                | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_3) 
                                                                    << 3U) 
                                                                   | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_2) 
                                                                       << 2U) 
                                                                      | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_1) 
                                                                          << 1U) 
                                                                         | ((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__VdfgTmp_h8093e782__0) 
                                                                              & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza_io_b) 
                                                                             | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)) 
                                                                            | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)))))))))))))),12);
    bufp->fullCData(oldp+77655,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_17) 
                                  << 5U) | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_16) 
                                             << 4U) 
                                            | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_15) 
                                                << 3U) 
                                               | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_14) 
                                                   << 2U) 
                                                  | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_13) 
                                                      << 1U) 
                                                     | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_12))))))),6);
    bufp->fullSData(oldp+77656,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_24) 
                                  << 0xcU) | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_23) 
                                               << 0xbU) 
                                              | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_22) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_21) 
                                                     << 9U) 
                                                    | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_20) 
                                                        << 8U) 
                                                       | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_19) 
                                                           << 7U) 
                                                          | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_18) 
                                                              << 6U) 
                                                             | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_17) 
                                                                 << 5U) 
                                                                | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_16) 
                                                                    << 4U) 
                                                                   | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_15) 
                                                                       << 3U) 
                                                                      | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_14) 
                                                                          << 2U) 
                                                                         | (((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_13) 
                                                                             << 1U) 
                                                                            | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_12)))))))))))))),13);
    bufp->fullBit(oldp+77657,((1U & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT___sig_s3_T 
                                     >> 1U))));
    bufp->fullBit(oldp+77658,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT__near_path_rounder__DOT__r_up));
    bufp->fullIData(oldp+77659,((0x7fffffU & ((IData)(1U) 
                                              + (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT___sig_s3_T 
                                                 >> 1U)))),23);
    bufp->fullIData(oldp+77660,((0x7fffffU & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT___sig_s3_T)),23);
    bufp->fullIData(oldp+77661,((0x7fffffU & ((IData)(1U) 
                                              + vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__closePath__DOT___sig_s3_T))),23);
    bufp->fullIData(oldp+77662,((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath_io_in_b_sig 
                                 << 2U)),26);
    bufp->fullIData(oldp+77663,(((0x1aU < (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__shiftRightJam_io_shamt))
                                  ? 0U : (0x3ffffffU 
                                          & ((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath_io_in_b_sig 
                                              << 2U) 
                                             >> (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__shiftRightJam_io_shamt))))),26);
    bufp->fullBit(oldp+77664,((0U != ((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath_io_in_b_sig 
                                       << 2U) & ((((IData)(1U) 
                                                   << (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__shiftRightJam_io_shamt)) 
                                                  - (IData)(1U)) 
                                                 | ((0x1aU 
                                                     < (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__shiftRightJam_io_shamt))
                                                     ? 0x3ffffffU
                                                     : 0U))))));
    bufp->fullIData(oldp+77665,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig),27);
    bufp->fullIData(oldp+77666,((0x7fffffU & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                              >> 3U))),23);
    bufp->fullBit(oldp+77667,((1U & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                     >> 2U))));
    bufp->fullBit(oldp+77668,((0U != (3U & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig))));
    bufp->fullIData(oldp+77669,((0x7fffffU & ((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                               >> 3U) 
                                              + (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_rounder__DOT__r_up)))),23);
    bufp->fullBit(oldp+77670,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_rounder_io_cout));
    bufp->fullBit(oldp+77671,((1U & (~ (IData)((0U 
                                                != (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath_io_in_a_exp)))))));
    bufp->fullBit(oldp+77672,((1U & ((~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath_io_in_a_exp)))) 
                                     & (~ (IData)((0U 
                                                   != (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath_io_in_b_exp))))))));
    bufp->fullIData(oldp+77673,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT___neg_sigB_T),28);
    bufp->fullIData(oldp+77674,((0x8000000U | (0x7ffffffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  (~ vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT___neg_sigB_T))))),28);
    bufp->fullIData(oldp+77675,(((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath_io_in_addSig)
                                  ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT___neg_sigB_T
                                  : (0x8000000U | (0x7ffffffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (~ vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT___neg_sigB_T)))))),28);
    bufp->fullIData(oldp+77676,((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath_io_in_a_sig 
                                 << 3U)),28);
    bufp->fullIData(oldp+77677,((0xfffffffU & ((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath_io_in_a_sig 
                                                << 3U) 
                                               + ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath_io_in_addSig)
                                                   ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT___neg_sigB_T
                                                   : 
                                                  (0x8000000U 
                                                   | (0x7ffffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT___neg_sigB_T)))))))),28);
    bufp->fullIData(oldp+77678,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__result_sig_raw),28);
    bufp->fullBit(oldp+77679,((1U & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__result_sig_raw 
                                     >> 0x1bU))));
    bufp->fullBit(oldp+77680,((1U & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__result_sig_raw 
                                     >> 0x1aU))));
    bufp->fullCData(oldp+77681,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__resultExpNoRound),8);
    bufp->fullCData(oldp+77682,((0xffU & ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                          + (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__resultExpNoRound)))),8);
    bufp->fullBit(oldp+77683,(((0xffU == (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath_io_in_b_exp)) 
                               & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath_io_in_addSig))));
    bufp->fullBit(oldp+77684,((0xffU == (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__resultExpNoRound))));
    bufp->fullBit(oldp+77685,(((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                               & (0xfeU == (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__resultExpNoRound)))));
    bufp->fullSData(oldp+77686,((((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                                  << 8U) | (0xffU & 
                                            ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                             + (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__resultExpNoRound))))),9);
    bufp->fullBit(oldp+77687,((1U & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                     >> 3U))));
    bufp->fullBit(oldp+77688,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_rounder__DOT__inexact));
    bufp->fullBit(oldp+77689,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_rounder__DOT__r_up));
    bufp->fullIData(oldp+77690,((0x7fffffU & ((IData)(1U) 
                                              + (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                 >> 3U)))),23);
    bufp->fullIData(oldp+77691,((0x7fffffU & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                              >> 2U))),23);
    bufp->fullBit(oldp+77692,((1U & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                     >> 1U))));
    bufp->fullBit(oldp+77693,((1U & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)));
    bufp->fullIData(oldp+77694,((0x7fffffU & ((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                               >> 2U) 
                                              + (1U 
                                                 & ((4U 
                                                     == (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3.__PVT__rm_sx))
                                                     ? 
                                                    (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                     >> 1U)
                                                     : 
                                                    ((2U 
                                                      == (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3.__PVT__rm_sx))
                                                      ? 
                                                     ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                      & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                      : 
                                                     ((3U 
                                                       == (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3.__PVT__rm_sx))
                                                       ? 
                                                      ((~ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                       & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                       : 
                                                      ((1U 
                                                        != (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3.__PVT__rm_sx)) 
                                                       & ((0U 
                                                           == (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3.__PVT__rm_sx)) 
                                                          & ((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                              >> 1U) 
                                                             & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                   >> 2U)))))))))))),23);
    bufp->fullBit(oldp+77695,((IData)(((0x1fffffcU 
                                        == (0x1fffffcU 
                                            & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                       & ((4U == (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3.__PVT__rm_sx))
                                           ? (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                              >> 1U)
                                           : ((2U == (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3.__PVT__rm_sx))
                                               ? ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                  & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                               : ((3U 
                                                   == (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3.__PVT__rm_sx))
                                                   ? 
                                                  ((~ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                   & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                   : 
                                                  ((1U 
                                                    != (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3.__PVT__rm_sx)) 
                                                   & ((0U 
                                                       == (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3.__PVT__rm_sx)) 
                                                      & ((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                          >> 1U) 
                                                         & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                            | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                               >> 2U))))))))))));
    bufp->fullBit(oldp+77696,(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact));
    bufp->fullBit(oldp+77697,((1U & ((4U == (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3.__PVT__rm_sx))
                                      ? (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                         >> 1U) : (
                                                   (2U 
                                                    == (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3.__PVT__rm_sx))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                    & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3.__PVT__rm_sx))
                                                     ? 
                                                    ((~ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                     & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                     : 
                                                    ((1U 
                                                      != (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3.__PVT__rm_sx)) 
                                                     & ((0U 
                                                         == (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3.__PVT__rm_sx)) 
                                                        & ((vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                            >> 1U) 
                                                           & (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                              | (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                 >> 2U)))))))))));
    bufp->fullIData(oldp+77698,((0x7fffffU & ((IData)(1U) 
                                              + (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                 >> 2U)))),23);
    bufp->fullBit(oldp+77699,((0x1aU < (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__shiftRightJam_io_shamt))));
    bufp->fullIData(oldp+77700,((0x3ffffffU & ((((IData)(1U) 
                                                 << (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__shiftRightJam_io_shamt)) 
                                                - (IData)(1U)) 
                                               | ((0x1aU 
                                                   < (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3.__PVT__farPath__DOT__shiftRightJam_io_shamt))
                                                   ? 0x3ffffffU
                                                   : 0U)))),26);
    bufp->fullBit(oldp+77701,(vlSelf->clock));
    bufp->fullBit(oldp+77702,(vlSelf->reset));
    bufp->fullBit(oldp+77703,(vlSelf->io_in_ready));
    bufp->fullBit(oldp+77704,(vlSelf->io_in_valid));
    bufp->fullWData(oldp+77705,(vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a),256);
    bufp->fullWData(oldp+77713,(vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b),256);
    bufp->fullWData(oldp+77721,(vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c),256);
    bufp->fullWData(oldp+77729,(vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a),256);
    bufp->fullWData(oldp+77737,(vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b),256);
    bufp->fullWData(oldp+77745,(vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c),256);
    bufp->fullWData(oldp+77753,(vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a),256);
    bufp->fullWData(oldp+77761,(vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b),256);
    bufp->fullWData(oldp+77769,(vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c),256);
    bufp->fullWData(oldp+77777,(vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a),256);
    bufp->fullWData(oldp+77785,(vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b),256);
    bufp->fullWData(oldp+77793,(vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c),256);
    bufp->fullWData(oldp+77801,(vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a),256);
    bufp->fullWData(oldp+77809,(vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b),256);
    bufp->fullWData(oldp+77817,(vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c),256);
    bufp->fullWData(oldp+77825,(vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a),256);
    bufp->fullWData(oldp+77833,(vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b),256);
    bufp->fullWData(oldp+77841,(vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c),256);
    bufp->fullWData(oldp+77849,(vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a),256);
    bufp->fullWData(oldp+77857,(vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b),256);
    bufp->fullWData(oldp+77865,(vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c),256);
    bufp->fullWData(oldp+77873,(vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a),256);
    bufp->fullWData(oldp+77881,(vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b),256);
    bufp->fullWData(oldp+77889,(vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c),256);
    bufp->fullBit(oldp+77897,(vlSelf->io_in_bits_ctrl_matBSel));
    bufp->fullBit(oldp+77898,(vlSelf->io_in_bits_ctrl_mixPcMode));
    bufp->fullCData(oldp+77899,(vlSelf->io_in_bits_ctrl_roundingMode),3);
    bufp->fullBit(oldp+77900,(vlSelf->io_out_ready));
    bufp->fullBit(oldp+77901,(vlSelf->io_out_valid));
    bufp->fullWData(oldp+77902,(vlSelf->io_out_bits_tc0_octet0_threadgroup0_matrix_d_data),256);
    bufp->fullWData(oldp+77910,(vlSelf->io_out_bits_tc0_octet0_threadgroup4_matrix_d_data),256);
    bufp->fullWData(oldp+77918,(vlSelf->io_out_bits_tc0_octet1_threadgroup0_matrix_d_data),256);
    bufp->fullWData(oldp+77926,(vlSelf->io_out_bits_tc0_octet1_threadgroup4_matrix_d_data),256);
    bufp->fullWData(oldp+77934,(vlSelf->io_out_bits_tc1_octet0_threadgroup0_matrix_d_data),256);
    bufp->fullWData(oldp+77942,(vlSelf->io_out_bits_tc1_octet0_threadgroup4_matrix_d_data),256);
    bufp->fullWData(oldp+77950,(vlSelf->io_out_bits_tc1_octet1_threadgroup0_matrix_d_data),256);
    bufp->fullWData(oldp+77958,(vlSelf->io_out_bits_tc1_octet1_threadgroup4_matrix_d_data),256);
    __Vtemp_7[0U] = ((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                      << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[0U]));
    __Vtemp_7[1U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
                     | ((IData)((((QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
                                                   | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                                                      >> 0x10U)))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((0xffff0000U 
                                                                & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[0U]) 
                                                               | (0xffffU 
                                                                  & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[6U])))))) 
                        << 0x10U));
    __Vtemp_7[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_7[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[6U]) 
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
    __Vtemp_7[4U] = ((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                      << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[1U]));
    __Vtemp_7[5U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
                     | ((IData)((((QData)((IData)((
                                                   (0xffff0000U 
                                                    & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
                                                   | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                                                      >> 0x10U)))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((0xffff0000U 
                                                                & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[1U]) 
                                                               | (0xffffU 
                                                                  & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[7U])))))) 
                        << 0x10U));
    __Vtemp_7[6U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_7[7U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[7U]) 
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
    bufp->fullWData(oldp+77966,(__Vtemp_7),256);
    __Vtemp_14[0U] = ((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[0U]));
    __Vtemp_14[1U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
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
    __Vtemp_14[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_14[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[6U]) 
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
    __Vtemp_14[4U] = ((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[1U]));
    __Vtemp_14[5U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
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
    __Vtemp_14[6U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_14[7U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[7U]) 
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
    bufp->fullWData(oldp+77974,(__Vtemp_14),256);
    __Vtemp_21[0U] = ((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[0U]));
    __Vtemp_21[1U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
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
    __Vtemp_21[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_21[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[6U]) 
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
    __Vtemp_21[4U] = ((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[1U]));
    __Vtemp_21[5U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
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
    __Vtemp_21[6U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_21[7U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[7U]) 
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
    bufp->fullWData(oldp+77982,(__Vtemp_21),256);
    __Vtemp_28[0U] = ((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[0U]));
    __Vtemp_28[1U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
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
    __Vtemp_28[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_28[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[6U]) 
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
    __Vtemp_28[4U] = ((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[1U]));
    __Vtemp_28[5U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
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
    __Vtemp_28[6U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_28[7U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[7U]) 
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
    bufp->fullWData(oldp+77990,(__Vtemp_28),256);
    __Vtemp_35[0U] = ((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[0U]));
    __Vtemp_35[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
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
    __Vtemp_35[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_35[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[6U]) 
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
    __Vtemp_35[4U] = ((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[1U]));
    __Vtemp_35[5U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
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
    __Vtemp_35[6U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_35[7U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[7U]) 
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
    bufp->fullWData(oldp+77998,(__Vtemp_35),256);
    __Vtemp_42[0U] = ((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[0U]));
    __Vtemp_42[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
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
    __Vtemp_42[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_42[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[6U]) 
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
    __Vtemp_42[4U] = ((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[1U]));
    __Vtemp_42[5U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
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
    __Vtemp_42[6U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_42[7U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[7U]) 
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
    bufp->fullWData(oldp+78006,(__Vtemp_42),256);
    __Vtemp_49[0U] = ((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U]));
    __Vtemp_49[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
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
    __Vtemp_49[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_49[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U]) 
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
    __Vtemp_49[4U] = ((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U]));
    __Vtemp_49[5U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
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
    __Vtemp_49[6U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_49[7U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U]) 
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
    bufp->fullWData(oldp+78014,(__Vtemp_49),256);
    __Vtemp_56[0U] = ((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U]));
    __Vtemp_56[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
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
    __Vtemp_56[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_56[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U]) 
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
    __Vtemp_56[4U] = ((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U]));
    __Vtemp_56[5U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
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
    __Vtemp_56[6U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_56[7U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U]) 
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
    bufp->fullWData(oldp+78022,(__Vtemp_56),256);
    bufp->fullSData(oldp+78030,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[0U])),16);
    bufp->fullSData(oldp+78031,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78032,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[1U])),16);
    bufp->fullSData(oldp+78033,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[1U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78034,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[2U])),16);
    bufp->fullSData(oldp+78035,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78036,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[3U])),16);
    bufp->fullSData(oldp+78037,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78038,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[4U])),16);
    bufp->fullSData(oldp+78039,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78040,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[5U])),16);
    bufp->fullSData(oldp+78041,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78042,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[6U])),16);
    bufp->fullSData(oldp+78043,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78044,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[7U])),16);
    bufp->fullSData(oldp+78045,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[7U] 
                                 >> 0x10U)),16);
    __Vtemp_59[0U] = ((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[0U]));
    __Vtemp_59[1U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
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
    __Vtemp_59[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_59[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[6U]) 
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
    bufp->fullWData(oldp+78046,(__Vtemp_59),128);
    __Vtemp_62[0U] = ((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[1U]));
    __Vtemp_62[1U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
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
    __Vtemp_62[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_62[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_b[7U]) 
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
    bufp->fullWData(oldp+78050,(__Vtemp_62),128);
    bufp->fullSData(oldp+78054,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[0U])),16);
    bufp->fullSData(oldp+78055,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78056,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[1U])),16);
    bufp->fullSData(oldp+78057,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[1U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78058,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[2U])),16);
    bufp->fullSData(oldp+78059,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78060,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[3U])),16);
    bufp->fullSData(oldp+78061,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78062,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[4U])),16);
    bufp->fullSData(oldp+78063,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78064,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[5U])),16);
    bufp->fullSData(oldp+78065,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78066,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[6U])),16);
    bufp->fullSData(oldp+78067,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78068,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[7U])),16);
    bufp->fullSData(oldp+78069,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[7U] 
                                 >> 0x10U)),16);
    __Vtemp_65[0U] = ((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[0U]));
    __Vtemp_65[1U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
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
    __Vtemp_65[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_65[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[6U]) 
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
    bufp->fullWData(oldp+78070,(__Vtemp_65),128);
    __Vtemp_68[0U] = ((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[1U]));
    __Vtemp_68[1U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
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
    __Vtemp_68[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_68[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_b[7U]) 
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
    bufp->fullWData(oldp+78074,(__Vtemp_68),128);
    bufp->fullSData(oldp+78078,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[0U])),16);
    bufp->fullSData(oldp+78079,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78080,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[1U])),16);
    bufp->fullSData(oldp+78081,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[1U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78082,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[2U])),16);
    bufp->fullSData(oldp+78083,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78084,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[3U])),16);
    bufp->fullSData(oldp+78085,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78086,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[4U])),16);
    bufp->fullSData(oldp+78087,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78088,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[5U])),16);
    bufp->fullSData(oldp+78089,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78090,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[6U])),16);
    bufp->fullSData(oldp+78091,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78092,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[7U])),16);
    bufp->fullSData(oldp+78093,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[7U] 
                                 >> 0x10U)),16);
    __Vtemp_71[0U] = ((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[0U]));
    __Vtemp_71[1U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
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
    __Vtemp_71[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_71[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[6U]) 
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
    bufp->fullWData(oldp+78094,(__Vtemp_71),128);
    __Vtemp_74[0U] = ((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[1U]));
    __Vtemp_74[1U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
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
    __Vtemp_74[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_74[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_b[7U]) 
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
    bufp->fullWData(oldp+78098,(__Vtemp_74),128);
    bufp->fullSData(oldp+78102,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[0U])),16);
    bufp->fullSData(oldp+78103,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78104,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[1U])),16);
    bufp->fullSData(oldp+78105,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[1U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78106,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[2U])),16);
    bufp->fullSData(oldp+78107,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78108,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[3U])),16);
    bufp->fullSData(oldp+78109,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78110,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[4U])),16);
    bufp->fullSData(oldp+78111,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78112,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[5U])),16);
    bufp->fullSData(oldp+78113,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78114,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[6U])),16);
    bufp->fullSData(oldp+78115,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78116,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[7U])),16);
    bufp->fullSData(oldp+78117,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[7U] 
                                 >> 0x10U)),16);
    __Vtemp_77[0U] = ((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[0U]));
    __Vtemp_77[1U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
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
    __Vtemp_77[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_77[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[6U]) 
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
    bufp->fullWData(oldp+78118,(__Vtemp_77),128);
    __Vtemp_80[0U] = ((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[1U]));
    __Vtemp_80[1U] = ((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
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
    __Vtemp_80[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_80[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_b[7U]) 
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
    bufp->fullWData(oldp+78122,(__Vtemp_80),128);
    bufp->fullSData(oldp+78126,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[0U])),16);
    bufp->fullSData(oldp+78127,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78128,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[1U])),16);
    bufp->fullSData(oldp+78129,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[1U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78130,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[2U])),16);
    bufp->fullSData(oldp+78131,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78132,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[3U])),16);
    bufp->fullSData(oldp+78133,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78134,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[4U])),16);
    bufp->fullSData(oldp+78135,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78136,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[5U])),16);
    bufp->fullSData(oldp+78137,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78138,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[6U])),16);
    bufp->fullSData(oldp+78139,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78140,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[7U])),16);
    bufp->fullSData(oldp+78141,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[7U] 
                                 >> 0x10U)),16);
    __Vtemp_83[0U] = ((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[0U]));
    __Vtemp_83[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
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
    __Vtemp_83[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_83[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[6U]) 
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
    bufp->fullWData(oldp+78142,(__Vtemp_83),128);
    __Vtemp_86[0U] = ((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[1U]));
    __Vtemp_86[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
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
    __Vtemp_86[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_86[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_b[7U]) 
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
    bufp->fullWData(oldp+78146,(__Vtemp_86),128);
    bufp->fullSData(oldp+78150,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[0U])),16);
    bufp->fullSData(oldp+78151,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78152,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[1U])),16);
    bufp->fullSData(oldp+78153,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[1U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78154,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[2U])),16);
    bufp->fullSData(oldp+78155,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78156,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[3U])),16);
    bufp->fullSData(oldp+78157,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78158,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[4U])),16);
    bufp->fullSData(oldp+78159,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78160,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[5U])),16);
    bufp->fullSData(oldp+78161,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78162,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[6U])),16);
    bufp->fullSData(oldp+78163,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78164,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[7U])),16);
    bufp->fullSData(oldp+78165,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[7U] 
                                 >> 0x10U)),16);
    __Vtemp_89[0U] = ((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[0U]));
    __Vtemp_89[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
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
    __Vtemp_89[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_89[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[6U]) 
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
    bufp->fullWData(oldp+78166,(__Vtemp_89),128);
    __Vtemp_92[0U] = ((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[1U]));
    __Vtemp_92[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
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
    __Vtemp_92[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_92[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_b[7U]) 
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
    bufp->fullWData(oldp+78170,(__Vtemp_92),128);
    bufp->fullSData(oldp+78174,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U])),16);
    bufp->fullSData(oldp+78175,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78176,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U])),16);
    bufp->fullSData(oldp+78177,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78178,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U])),16);
    bufp->fullSData(oldp+78179,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78180,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U])),16);
    bufp->fullSData(oldp+78181,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78182,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U])),16);
    bufp->fullSData(oldp+78183,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78184,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U])),16);
    bufp->fullSData(oldp+78185,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78186,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U])),16);
    bufp->fullSData(oldp+78187,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78188,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U])),16);
    bufp->fullSData(oldp+78189,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U] 
                                 >> 0x10U)),16);
    __Vtemp_95[0U] = ((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[0U]));
    __Vtemp_95[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
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
    __Vtemp_95[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_95[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[6U]) 
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
    bufp->fullWData(oldp+78190,(__Vtemp_95),128);
    __Vtemp_98[0U] = ((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                       << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[1U]));
    __Vtemp_98[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
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
    __Vtemp_98[2U] = (((IData)((((QData)((IData)(((0xffff0000U 
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
    __Vtemp_98[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_b[7U]) 
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
    bufp->fullWData(oldp+78194,(__Vtemp_98),128);
    bufp->fullSData(oldp+78198,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U])),16);
    bufp->fullSData(oldp+78199,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78200,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U])),16);
    bufp->fullSData(oldp+78201,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78202,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U])),16);
    bufp->fullSData(oldp+78203,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78204,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U])),16);
    bufp->fullSData(oldp+78205,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78206,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U])),16);
    bufp->fullSData(oldp+78207,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78208,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U])),16);
    bufp->fullSData(oldp+78209,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78210,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U])),16);
    bufp->fullSData(oldp+78211,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78212,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U])),16);
    bufp->fullSData(oldp+78213,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U] 
                                 >> 0x10U)),16);
    __Vtemp_101[0U] = ((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                        << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[0U]));
    __Vtemp_101[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
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
    __Vtemp_101[2U] = (((IData)((((QData)((IData)((
                                                   (0xffff0000U 
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
    __Vtemp_101[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[6U]) 
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
    bufp->fullWData(oldp+78214,(__Vtemp_101),128);
    __Vtemp_104[0U] = ((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                        << 0x10U) | (0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[1U]));
    __Vtemp_104[1U] = ((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
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
    __Vtemp_104[2U] = (((IData)((((QData)((IData)((
                                                   (0xffff0000U 
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
    __Vtemp_104[3U] = ((0xffff0000U & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_b[7U]) 
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
    bufp->fullWData(oldp+78218,(__Vtemp_104),128);
    bufp->fullSData(oldp+78222,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a[0U])),16);
    bufp->fullSData(oldp+78223,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78224,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a[1U])),16);
    bufp->fullSData(oldp+78225,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a[1U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78226,(vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[0U]),32);
    bufp->fullIData(oldp+78227,(vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[1U]),32);
    bufp->fullIData(oldp+78228,(vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[2U]),32);
    bufp->fullIData(oldp+78229,(vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[3U]),32);
    bufp->fullSData(oldp+78230,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[0U])),16);
    bufp->fullSData(oldp+78231,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78232,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[1U])),16);
    bufp->fullSData(oldp+78233,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[1U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78234,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[0U]))),32);
    bufp->fullIData(oldp+78235,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[0U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78236,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[1U]))),32);
    bufp->fullIData(oldp+78237,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[1U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78238,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a[2U])),16);
    bufp->fullSData(oldp+78239,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78240,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a[3U])),16);
    bufp->fullSData(oldp+78241,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a[3U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78242,(vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[4U]),32);
    bufp->fullIData(oldp+78243,(vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[5U]),32);
    bufp->fullIData(oldp+78244,(vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[6U]),32);
    bufp->fullIData(oldp+78245,(vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[7U]),32);
    bufp->fullSData(oldp+78246,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[2U])),16);
    bufp->fullSData(oldp+78247,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78248,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[3U])),16);
    bufp->fullSData(oldp+78249,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[3U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78250,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[2U]))),32);
    bufp->fullIData(oldp+78251,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[2U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78252,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[3U]))),32);
    bufp->fullIData(oldp+78253,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[3U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78254,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a[4U])),16);
    bufp->fullSData(oldp+78255,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78256,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a[5U])),16);
    bufp->fullSData(oldp+78257,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78258,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[4U])),16);
    bufp->fullSData(oldp+78259,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78260,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[5U])),16);
    bufp->fullSData(oldp+78261,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[5U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78262,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[4U]))),32);
    bufp->fullIData(oldp+78263,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[4U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78264,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[5U]))),32);
    bufp->fullIData(oldp+78265,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[5U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78266,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a[6U])),16);
    bufp->fullSData(oldp+78267,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78268,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a[7U])),16);
    bufp->fullSData(oldp+78269,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_a[7U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78270,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[6U])),16);
    bufp->fullSData(oldp+78271,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78272,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[7U])),16);
    bufp->fullSData(oldp+78273,((vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[7U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78274,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[6U]))),32);
    bufp->fullIData(oldp+78275,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[6U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78276,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[7U]))),32);
    bufp->fullIData(oldp+78277,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot0_tg0_matrix_c[7U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78278,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a[0U])),16);
    bufp->fullSData(oldp+78279,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78280,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a[1U])),16);
    bufp->fullSData(oldp+78281,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a[1U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78282,(vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[0U]),32);
    bufp->fullIData(oldp+78283,(vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[1U]),32);
    bufp->fullIData(oldp+78284,(vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[2U]),32);
    bufp->fullIData(oldp+78285,(vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[3U]),32);
    bufp->fullSData(oldp+78286,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[0U])),16);
    bufp->fullSData(oldp+78287,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78288,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[1U])),16);
    bufp->fullSData(oldp+78289,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[1U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78290,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[0U]))),32);
    bufp->fullIData(oldp+78291,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[0U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78292,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[1U]))),32);
    bufp->fullIData(oldp+78293,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[1U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78294,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a[2U])),16);
    bufp->fullSData(oldp+78295,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78296,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a[3U])),16);
    bufp->fullSData(oldp+78297,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a[3U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78298,(vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[4U]),32);
    bufp->fullIData(oldp+78299,(vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[5U]),32);
    bufp->fullIData(oldp+78300,(vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[6U]),32);
    bufp->fullIData(oldp+78301,(vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[7U]),32);
    bufp->fullSData(oldp+78302,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[2U])),16);
    bufp->fullSData(oldp+78303,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78304,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[3U])),16);
    bufp->fullSData(oldp+78305,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[3U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78306,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[2U]))),32);
    bufp->fullIData(oldp+78307,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[2U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78308,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[3U]))),32);
    bufp->fullIData(oldp+78309,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[3U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78310,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a[4U])),16);
    bufp->fullSData(oldp+78311,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78312,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a[5U])),16);
    bufp->fullSData(oldp+78313,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78314,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[4U])),16);
    bufp->fullSData(oldp+78315,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78316,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[5U])),16);
    bufp->fullSData(oldp+78317,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[5U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78318,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[4U]))),32);
    bufp->fullIData(oldp+78319,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[4U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78320,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[5U]))),32);
    bufp->fullIData(oldp+78321,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[5U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78322,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a[6U])),16);
    bufp->fullSData(oldp+78323,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78324,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a[7U])),16);
    bufp->fullSData(oldp+78325,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_a[7U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78326,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[6U])),16);
    bufp->fullSData(oldp+78327,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78328,((0xffffU & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[7U])),16);
    bufp->fullSData(oldp+78329,((vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[7U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78330,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[6U]))),32);
    bufp->fullIData(oldp+78331,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[6U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78332,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[7U]))),32);
    bufp->fullIData(oldp+78333,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot0_tg4_matrix_c[7U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78334,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a[0U])),16);
    bufp->fullSData(oldp+78335,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78336,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a[1U])),16);
    bufp->fullSData(oldp+78337,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a[1U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78338,(vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[0U]),32);
    bufp->fullIData(oldp+78339,(vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[1U]),32);
    bufp->fullIData(oldp+78340,(vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[2U]),32);
    bufp->fullIData(oldp+78341,(vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[3U]),32);
    bufp->fullSData(oldp+78342,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[0U])),16);
    bufp->fullSData(oldp+78343,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78344,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[1U])),16);
    bufp->fullSData(oldp+78345,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[1U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78346,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[0U]))),32);
    bufp->fullIData(oldp+78347,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[0U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78348,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[1U]))),32);
    bufp->fullIData(oldp+78349,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[1U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78350,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a[2U])),16);
    bufp->fullSData(oldp+78351,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78352,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a[3U])),16);
    bufp->fullSData(oldp+78353,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a[3U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78354,(vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[4U]),32);
    bufp->fullIData(oldp+78355,(vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[5U]),32);
    bufp->fullIData(oldp+78356,(vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[6U]),32);
    bufp->fullIData(oldp+78357,(vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[7U]),32);
    bufp->fullSData(oldp+78358,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[2U])),16);
    bufp->fullSData(oldp+78359,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78360,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[3U])),16);
    bufp->fullSData(oldp+78361,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[3U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78362,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[2U]))),32);
    bufp->fullIData(oldp+78363,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[2U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78364,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[3U]))),32);
    bufp->fullIData(oldp+78365,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[3U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78366,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a[4U])),16);
    bufp->fullSData(oldp+78367,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78368,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a[5U])),16);
    bufp->fullSData(oldp+78369,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78370,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[4U])),16);
    bufp->fullSData(oldp+78371,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78372,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[5U])),16);
    bufp->fullSData(oldp+78373,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[5U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78374,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[4U]))),32);
    bufp->fullIData(oldp+78375,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[4U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78376,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[5U]))),32);
    bufp->fullIData(oldp+78377,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[5U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78378,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a[6U])),16);
    bufp->fullSData(oldp+78379,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78380,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a[7U])),16);
    bufp->fullSData(oldp+78381,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_a[7U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78382,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[6U])),16);
    bufp->fullSData(oldp+78383,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78384,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[7U])),16);
    bufp->fullSData(oldp+78385,((vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[7U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78386,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[6U]))),32);
    bufp->fullIData(oldp+78387,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[6U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78388,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[7U]))),32);
    bufp->fullIData(oldp+78389,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot1_tg0_matrix_c[7U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78390,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a[0U])),16);
    bufp->fullSData(oldp+78391,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78392,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a[1U])),16);
    bufp->fullSData(oldp+78393,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a[1U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78394,(vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[0U]),32);
    bufp->fullIData(oldp+78395,(vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[1U]),32);
    bufp->fullIData(oldp+78396,(vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[2U]),32);
    bufp->fullIData(oldp+78397,(vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[3U]),32);
    bufp->fullSData(oldp+78398,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[0U])),16);
    bufp->fullSData(oldp+78399,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78400,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[1U])),16);
    bufp->fullSData(oldp+78401,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[1U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78402,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[0U]))),32);
    bufp->fullIData(oldp+78403,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[0U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78404,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[1U]))),32);
    bufp->fullIData(oldp+78405,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[1U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78406,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a[2U])),16);
    bufp->fullSData(oldp+78407,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78408,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a[3U])),16);
    bufp->fullSData(oldp+78409,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a[3U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78410,(vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[4U]),32);
    bufp->fullIData(oldp+78411,(vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[5U]),32);
    bufp->fullIData(oldp+78412,(vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[6U]),32);
    bufp->fullIData(oldp+78413,(vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[7U]),32);
    bufp->fullSData(oldp+78414,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[2U])),16);
    bufp->fullSData(oldp+78415,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78416,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[3U])),16);
    bufp->fullSData(oldp+78417,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[3U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78418,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[2U]))),32);
    bufp->fullIData(oldp+78419,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[2U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78420,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[3U]))),32);
    bufp->fullIData(oldp+78421,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[3U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78422,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a[4U])),16);
    bufp->fullSData(oldp+78423,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78424,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a[5U])),16);
    bufp->fullSData(oldp+78425,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78426,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[4U])),16);
    bufp->fullSData(oldp+78427,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78428,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[5U])),16);
    bufp->fullSData(oldp+78429,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[5U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78430,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[4U]))),32);
    bufp->fullIData(oldp+78431,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[4U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78432,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[5U]))),32);
    bufp->fullIData(oldp+78433,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[5U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78434,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a[6U])),16);
    bufp->fullSData(oldp+78435,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78436,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a[7U])),16);
    bufp->fullSData(oldp+78437,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_a[7U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78438,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[6U])),16);
    bufp->fullSData(oldp+78439,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78440,((0xffffU & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[7U])),16);
    bufp->fullSData(oldp+78441,((vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[7U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78442,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[6U]))),32);
    bufp->fullIData(oldp+78443,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[6U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78444,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[7U]))),32);
    bufp->fullIData(oldp+78445,((0xffff0000U | (vlSelf->io_in_bits_tc0_ot1_tg4_matrix_c[7U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78446,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a[0U])),16);
    bufp->fullSData(oldp+78447,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78448,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a[1U])),16);
    bufp->fullSData(oldp+78449,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a[1U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78450,(vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[0U]),32);
    bufp->fullIData(oldp+78451,(vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[1U]),32);
    bufp->fullIData(oldp+78452,(vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[2U]),32);
    bufp->fullIData(oldp+78453,(vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[3U]),32);
    bufp->fullSData(oldp+78454,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[0U])),16);
    bufp->fullSData(oldp+78455,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78456,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[1U])),16);
    bufp->fullSData(oldp+78457,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[1U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78458,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[0U]))),32);
    bufp->fullIData(oldp+78459,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[0U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78460,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[1U]))),32);
    bufp->fullIData(oldp+78461,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[1U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78462,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a[2U])),16);
    bufp->fullSData(oldp+78463,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78464,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a[3U])),16);
    bufp->fullSData(oldp+78465,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a[3U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78466,(vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[4U]),32);
    bufp->fullIData(oldp+78467,(vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[5U]),32);
    bufp->fullIData(oldp+78468,(vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[6U]),32);
    bufp->fullIData(oldp+78469,(vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[7U]),32);
    bufp->fullSData(oldp+78470,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[2U])),16);
    bufp->fullSData(oldp+78471,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78472,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[3U])),16);
    bufp->fullSData(oldp+78473,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[3U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78474,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[2U]))),32);
    bufp->fullIData(oldp+78475,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[2U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78476,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[3U]))),32);
    bufp->fullIData(oldp+78477,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[3U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78478,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a[4U])),16);
    bufp->fullSData(oldp+78479,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78480,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a[5U])),16);
    bufp->fullSData(oldp+78481,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78482,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[4U])),16);
    bufp->fullSData(oldp+78483,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78484,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[5U])),16);
    bufp->fullSData(oldp+78485,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[5U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78486,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[4U]))),32);
    bufp->fullIData(oldp+78487,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[4U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78488,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[5U]))),32);
    bufp->fullIData(oldp+78489,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[5U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78490,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a[6U])),16);
    bufp->fullSData(oldp+78491,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78492,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a[7U])),16);
    bufp->fullSData(oldp+78493,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_a[7U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78494,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[6U])),16);
    bufp->fullSData(oldp+78495,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78496,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[7U])),16);
    bufp->fullSData(oldp+78497,((vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[7U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78498,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[6U]))),32);
    bufp->fullIData(oldp+78499,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[6U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78500,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[7U]))),32);
    bufp->fullIData(oldp+78501,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot0_tg0_matrix_c[7U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78502,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a[0U])),16);
    bufp->fullSData(oldp+78503,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78504,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a[1U])),16);
    bufp->fullSData(oldp+78505,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a[1U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78506,(vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[0U]),32);
    bufp->fullIData(oldp+78507,(vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[1U]),32);
    bufp->fullIData(oldp+78508,(vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[2U]),32);
    bufp->fullIData(oldp+78509,(vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[3U]),32);
    bufp->fullSData(oldp+78510,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[0U])),16);
    bufp->fullSData(oldp+78511,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78512,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[1U])),16);
    bufp->fullSData(oldp+78513,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[1U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78514,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[0U]))),32);
    bufp->fullIData(oldp+78515,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[0U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78516,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[1U]))),32);
    bufp->fullIData(oldp+78517,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[1U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78518,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a[2U])),16);
    bufp->fullSData(oldp+78519,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78520,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a[3U])),16);
    bufp->fullSData(oldp+78521,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a[3U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78522,(vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[4U]),32);
    bufp->fullIData(oldp+78523,(vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[5U]),32);
    bufp->fullIData(oldp+78524,(vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[6U]),32);
    bufp->fullIData(oldp+78525,(vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[7U]),32);
    bufp->fullSData(oldp+78526,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[2U])),16);
    bufp->fullSData(oldp+78527,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78528,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[3U])),16);
    bufp->fullSData(oldp+78529,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[3U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78530,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[2U]))),32);
    bufp->fullIData(oldp+78531,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[2U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78532,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[3U]))),32);
    bufp->fullIData(oldp+78533,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[3U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78534,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a[4U])),16);
    bufp->fullSData(oldp+78535,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78536,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a[5U])),16);
    bufp->fullSData(oldp+78537,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78538,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[4U])),16);
    bufp->fullSData(oldp+78539,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78540,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[5U])),16);
    bufp->fullSData(oldp+78541,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[5U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78542,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[4U]))),32);
    bufp->fullIData(oldp+78543,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[4U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78544,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[5U]))),32);
    bufp->fullIData(oldp+78545,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[5U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78546,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a[6U])),16);
    bufp->fullSData(oldp+78547,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78548,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a[7U])),16);
    bufp->fullSData(oldp+78549,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_a[7U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78550,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[6U])),16);
    bufp->fullSData(oldp+78551,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78552,((0xffffU & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[7U])),16);
    bufp->fullSData(oldp+78553,((vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[7U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78554,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[6U]))),32);
    bufp->fullIData(oldp+78555,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[6U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78556,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[7U]))),32);
    bufp->fullIData(oldp+78557,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot0_tg4_matrix_c[7U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78558,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a[0U])),16);
    bufp->fullSData(oldp+78559,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78560,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a[1U])),16);
    bufp->fullSData(oldp+78561,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a[1U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78562,(vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[0U]),32);
    bufp->fullIData(oldp+78563,(vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[1U]),32);
    bufp->fullIData(oldp+78564,(vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[2U]),32);
    bufp->fullIData(oldp+78565,(vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[3U]),32);
    bufp->fullSData(oldp+78566,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[0U])),16);
    bufp->fullSData(oldp+78567,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78568,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[1U])),16);
    bufp->fullSData(oldp+78569,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[1U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78570,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[0U]))),32);
    bufp->fullIData(oldp+78571,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[0U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78572,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[1U]))),32);
    bufp->fullIData(oldp+78573,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[1U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78574,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a[2U])),16);
    bufp->fullSData(oldp+78575,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78576,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a[3U])),16);
    bufp->fullSData(oldp+78577,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a[3U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78578,(vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[4U]),32);
    bufp->fullIData(oldp+78579,(vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[5U]),32);
    bufp->fullIData(oldp+78580,(vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[6U]),32);
    bufp->fullIData(oldp+78581,(vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[7U]),32);
    bufp->fullSData(oldp+78582,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[2U])),16);
    bufp->fullSData(oldp+78583,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78584,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[3U])),16);
    bufp->fullSData(oldp+78585,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[3U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78586,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[2U]))),32);
    bufp->fullIData(oldp+78587,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[2U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78588,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[3U]))),32);
    bufp->fullIData(oldp+78589,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[3U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78590,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a[4U])),16);
    bufp->fullSData(oldp+78591,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78592,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a[5U])),16);
    bufp->fullSData(oldp+78593,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78594,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[4U])),16);
    bufp->fullSData(oldp+78595,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78596,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[5U])),16);
    bufp->fullSData(oldp+78597,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[5U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78598,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[4U]))),32);
    bufp->fullIData(oldp+78599,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[4U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78600,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[5U]))),32);
    bufp->fullIData(oldp+78601,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[5U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78602,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a[6U])),16);
    bufp->fullSData(oldp+78603,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78604,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a[7U])),16);
    bufp->fullSData(oldp+78605,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_a[7U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78606,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[6U])),16);
    bufp->fullSData(oldp+78607,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78608,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[7U])),16);
    bufp->fullSData(oldp+78609,((vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[7U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78610,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[6U]))),32);
    bufp->fullIData(oldp+78611,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[6U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78612,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[7U]))),32);
    bufp->fullIData(oldp+78613,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot1_tg0_matrix_c[7U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78614,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a[0U])),16);
    bufp->fullSData(oldp+78615,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78616,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a[1U])),16);
    bufp->fullSData(oldp+78617,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a[1U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78618,(vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[0U]),32);
    bufp->fullIData(oldp+78619,(vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[1U]),32);
    bufp->fullIData(oldp+78620,(vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[2U]),32);
    bufp->fullIData(oldp+78621,(vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[3U]),32);
    bufp->fullSData(oldp+78622,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[0U])),16);
    bufp->fullSData(oldp+78623,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[0U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78624,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[1U])),16);
    bufp->fullSData(oldp+78625,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[1U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78626,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[0U]))),32);
    bufp->fullIData(oldp+78627,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[0U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78628,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[1U]))),32);
    bufp->fullIData(oldp+78629,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[1U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78630,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a[2U])),16);
    bufp->fullSData(oldp+78631,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78632,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a[3U])),16);
    bufp->fullSData(oldp+78633,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a[3U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78634,(vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[4U]),32);
    bufp->fullIData(oldp+78635,(vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[5U]),32);
    bufp->fullIData(oldp+78636,(vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[6U]),32);
    bufp->fullIData(oldp+78637,(vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[7U]),32);
    bufp->fullSData(oldp+78638,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[2U])),16);
    bufp->fullSData(oldp+78639,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[2U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78640,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[3U])),16);
    bufp->fullSData(oldp+78641,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[3U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78642,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[2U]))),32);
    bufp->fullIData(oldp+78643,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[2U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78644,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[3U]))),32);
    bufp->fullIData(oldp+78645,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[3U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78646,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a[4U])),16);
    bufp->fullSData(oldp+78647,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78648,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a[5U])),16);
    bufp->fullSData(oldp+78649,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a[5U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78650,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[4U])),16);
    bufp->fullSData(oldp+78651,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[4U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78652,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[5U])),16);
    bufp->fullSData(oldp+78653,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[5U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78654,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[4U]))),32);
    bufp->fullIData(oldp+78655,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[4U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78656,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[5U]))),32);
    bufp->fullIData(oldp+78657,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[5U] 
                                                >> 0x10U))),32);
    bufp->fullSData(oldp+78658,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a[6U])),16);
    bufp->fullSData(oldp+78659,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78660,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a[7U])),16);
    bufp->fullSData(oldp+78661,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_a[7U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78662,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[6U])),16);
    bufp->fullSData(oldp+78663,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[6U] 
                                 >> 0x10U)),16);
    bufp->fullSData(oldp+78664,((0xffffU & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[7U])),16);
    bufp->fullSData(oldp+78665,((vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[7U] 
                                 >> 0x10U)),16);
    bufp->fullIData(oldp+78666,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[6U]))),32);
    bufp->fullIData(oldp+78667,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[6U] 
                                                >> 0x10U))),32);
    bufp->fullIData(oldp+78668,((0xffff0000U | (0xffffU 
                                                & vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[7U]))),32);
    bufp->fullIData(oldp+78669,((0xffff0000U | (vlSelf->io_in_bits_tc1_ot1_tg4_matrix_c[7U] 
                                                >> 0x10U))),32);
    bufp->fullBit(oldp+78670,(1U));
    bufp->fullBit(oldp+78671,(0U));
}
