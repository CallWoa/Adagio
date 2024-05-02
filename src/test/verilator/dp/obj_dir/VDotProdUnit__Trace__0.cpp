// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDotProdUnit__Syms.h"


void VDotProdUnit___024root__trace_chg_sub_0(VDotProdUnit___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VDotProdUnit___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root__trace_chg_top_0\n"); );
    // Init
    VDotProdUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDotProdUnit___024root*>(voidSelf);
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VDotProdUnit___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VDotProdUnit___024root__trace_chg_sub_0(VDotProdUnit___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__special_path_hasNaN) 
                                 | ((IData)(vlSelf->DotProdUnit__DOT__a_flag_isInf) 
                                    | (IData)(vlSelf->DotProdUnit__DOT__b_flag_isInf)))
                                 ? (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__special_path_hasNaN) 
                                     | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__special_path_inf_iv))
                                     ? 0x7fc00000U : 
                                    (0x7f800000U | 
                                     (((IData)(vlSelf->DotProdUnit__DOT__a_flag_isInf)
                                        ? (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r 
                                           >> 0x1fU)
                                        : (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
                                ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__common_overflow)
                                  ? ((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel)
                                        ? (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___io_out_result_T_3)
                                        : (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                      << 0x1fU) | (
                                                   (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__rmin)
                                                      ? 0xfeU
                                                      : 0xffU) 
                                                    << 0x17U) 
                                                   | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__rmin)
                                                       ? 0x7fffffU
                                                       : 0U)))
                                  : ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel)
                                      ? (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___io_out_result_T_3) 
                                          << 0x1fU) 
                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__near_path_exp_rounded) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                   >> 1U) 
                                                  + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                      : (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                                          << 0x1fU) 
                                         | ((0x7f800000U 
                                             & (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                 + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__resultExpNoRound)) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                   >> 3U) 
                                                  + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))))),32);
        bufp->chgIData(oldp+1,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__special_path_hasNaN) 
                                 | ((IData)(vlSelf->DotProdUnit__DOT__a_flag_1_isInf) 
                                    | (IData)(vlSelf->DotProdUnit__DOT__b_flag_1_isInf)))
                                 ? (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__special_path_hasNaN) 
                                     | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__special_path_inf_iv))
                                     ? 0x7fc00000U : 
                                    (0x7f800000U | 
                                     (((IData)(vlSelf->DotProdUnit__DOT__a_flag_1_isInf)
                                        ? (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1 
                                           >> 0x1fU)
                                        : (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
                                ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__common_overflow)
                                  ? ((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel)
                                        ? (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___io_out_result_T_3)
                                        : (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                      << 0x1fU) | (
                                                   (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__rmin)
                                                      ? 0xfeU
                                                      : 0xffU) 
                                                    << 0x17U) 
                                                   | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__rmin)
                                                       ? 0x7fffffU
                                                       : 0U)))
                                  : ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel)
                                      ? (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___io_out_result_T_3) 
                                          << 0x1fU) 
                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__near_path_exp_rounded) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                   >> 1U) 
                                                  + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                      : (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                                          << 0x1fU) 
                                         | ((0x7f800000U 
                                             & (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                 + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__resultExpNoRound)) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                   >> 3U) 
                                                  + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))))),32);
        bufp->chgIData(oldp+2,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__special_case_happen)
                                 ? (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__special_path_hasNaN) 
                                     | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__special_path_inf_iv))
                                     ? 0x7fc00000U : 
                                    (0x7f800000U | 
                                     (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_a___05FisInf)
                                        ? (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 
                                           >> 0x1fU)
                                        : (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
                                ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__common_overflow)
                                  ? ((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel)
                                        ? (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___io_out_result_T_3)
                                        : (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                      << 0x1fU) | (
                                                   (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__rmin)
                                                      ? 0xfeU
                                                      : 0xffU) 
                                                    << 0x17U) 
                                                   | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__rmin)
                                                       ? 0x7fffffU
                                                       : 0U)))
                                  : ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel)
                                      ? (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___io_out_result_T_3) 
                                          << 0x1fU) 
                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__near_path_exp_rounded) 
                                             << 0x17U) 
                                            | (0x7fffffU 
                                               & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                   >> 1U) 
                                                  + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                      : (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                                          << 0x1fU) 
                                         | ((0x7f800000U 
                                             & (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                 + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__resultExpNoRound)) 
                                                << 0x17U)) 
                                            | (0x7fffffU 
                                               & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                   >> 3U) 
                                                  + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))))),32);
        bufp->chgBit(oldp+3,(vlSelf->DotProdUnit__DOT__prehandshaked_2));
        bufp->chgIData(oldp+4,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                                 << 0x1fU) | ((0x7f800000U 
                                               & (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                   + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__resultExpNoRound)) 
                                                  << 0x17U)) 
                                              | (0x7fffffU 
                                                 & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                     >> 3U) 
                                                    + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_rounder__DOT__r_up)))))),32);
        bufp->chgBit(oldp+5,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_out_far_path_of));
        bufp->chgBit(oldp+6,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_out_far_path_ix));
        bufp->chgIData(oldp+7,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___io_out_result_T_3) 
                                 << 0x1fU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__near_path_exp_rounded) 
                                               << 0x17U) 
                                              | (0x7fffffU 
                                                 & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                     >> 1U) 
                                                    + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))),32);
        bufp->chgBit(oldp+8,((0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__near_path_exp_rounded))));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath_io_out_near_path_ix));
        bufp->chgBit(oldp+10,((((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                              >> 0x17U))) 
                                | (1U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                >> 0x17U)))) 
                               & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath_io_out_near_path_ix))));
        bufp->chgBit(oldp+11,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel)
                                ? (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___io_out_result_T_3)
                                : (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))));
        bufp->chgBit(oldp+12,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__rmin));
        bufp->chgCData(oldp+13,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__rmin)
                                  ? 0xfeU : 0xffU)),8);
        bufp->chgIData(oldp+14,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__rmin)
                                  ? 0x7fffffU : 0U)),23);
        bufp->chgBit(oldp+15,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__common_overflow));
        bufp->chgBit(oldp+16,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel)) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_out_far_path_ix)) 
                               | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel) 
                                  & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath_io_out_near_path_ix)))));
        bufp->chgIData(oldp+17,((0x7fffffU & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                               >> 1U) 
                                              + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))),23);
        bufp->chgBit(oldp+18,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__near_path_rounder__DOT__r_up) 
                               & (0xfffffeU == (0xfffffeU 
                                                & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T)))));
        bufp->chgCData(oldp+19,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__near_path_exp_rounded),8);
        bufp->chgSData(oldp+20,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___io_out_result_T_3) 
                                  << 8U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__near_path_exp_rounded))),9);
        bufp->chgBit(oldp+21,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__near_path_rounder__DOT__r_up));
        bufp->chgIData(oldp+22,((0x7fffffU & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                               >> 3U) 
                                              + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_rounder__DOT__r_up)))),23);
        bufp->chgBit(oldp+23,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_rounder_io_cout));
        bufp->chgCData(oldp+24,((0xffU & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                          + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__resultExpNoRound)))),8);
        bufp->chgBit(oldp+25,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                               & (0xfeU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__resultExpNoRound)))));
        bufp->chgSData(oldp+26,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                                  << 8U) | (0xffU & 
                                            ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                             + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__resultExpNoRound))))),9);
        bufp->chgBit(oldp+27,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_rounder__DOT__r_up));
        bufp->chgIData(oldp+28,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                                  << 0x1fU) | ((0x7f800000U 
                                                & (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                    + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__resultExpNoRound)) 
                                                   << 0x17U)) 
                                               | (0x7fffffU 
                                                  & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                      >> 3U) 
                                                     + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_rounder__DOT__r_up)))))),32);
        bufp->chgBit(oldp+29,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_out_far_path_of));
        bufp->chgBit(oldp+30,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_out_far_path_ix));
        bufp->chgIData(oldp+31,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___io_out_result_T_3) 
                                  << 0x1fU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__near_path_exp_rounded) 
                                                << 0x17U) 
                                               | (0x7fffffU 
                                                  & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                      >> 1U) 
                                                     + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))),32);
        bufp->chgBit(oldp+32,((0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__near_path_exp_rounded))));
        bufp->chgBit(oldp+33,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath_io_out_near_path_ix));
        bufp->chgBit(oldp+34,((((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                              >> 0x17U))) 
                                | (1U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                >> 0x17U)))) 
                               & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath_io_out_near_path_ix))));
        bufp->chgBit(oldp+35,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel)
                                ? (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___io_out_result_T_3)
                                : (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))));
        bufp->chgBit(oldp+36,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__rmin));
        bufp->chgCData(oldp+37,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__rmin)
                                  ? 0xfeU : 0xffU)),8);
        bufp->chgIData(oldp+38,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__rmin)
                                  ? 0x7fffffU : 0U)),23);
        bufp->chgBit(oldp+39,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__common_overflow));
        bufp->chgBit(oldp+40,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel)) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_out_far_path_ix)) 
                               | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel) 
                                  & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath_io_out_near_path_ix)))));
        bufp->chgIData(oldp+41,((0x7fffffU & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                               >> 1U) 
                                              + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))),23);
        bufp->chgBit(oldp+42,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__near_path_rounder__DOT__r_up) 
                               & (0xfffffeU == (0xfffffeU 
                                                & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T)))));
        bufp->chgCData(oldp+43,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__near_path_exp_rounded),8);
        bufp->chgSData(oldp+44,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___io_out_result_T_3) 
                                  << 8U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__near_path_exp_rounded))),9);
        bufp->chgBit(oldp+45,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__near_path_rounder__DOT__r_up));
        bufp->chgIData(oldp+46,((0x7fffffU & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                               >> 3U) 
                                              + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_rounder__DOT__r_up)))),23);
        bufp->chgBit(oldp+47,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_rounder_io_cout));
        bufp->chgCData(oldp+48,((0xffU & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                          + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__resultExpNoRound)))),8);
        bufp->chgBit(oldp+49,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                               & (0xfeU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__resultExpNoRound)))));
        bufp->chgSData(oldp+50,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                                  << 8U) | (0xffU & 
                                            ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                             + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__resultExpNoRound))))),9);
        bufp->chgBit(oldp+51,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_rounder__DOT__r_up));
        bufp->chgIData(oldp+52,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                                  << 0x1fU) | ((0x7f800000U 
                                                & (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                    + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__resultExpNoRound)) 
                                                   << 0x17U)) 
                                               | (0x7fffffU 
                                                  & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                      >> 3U) 
                                                     + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_rounder__DOT__r_up)))))),32);
        bufp->chgBit(oldp+53,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_out_far_path_of));
        bufp->chgBit(oldp+54,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_out_far_path_ix));
        bufp->chgIData(oldp+55,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___io_out_result_T_3) 
                                  << 0x1fU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__near_path_exp_rounded) 
                                                << 0x17U) 
                                               | (0x7fffffU 
                                                  & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                      >> 1U) 
                                                     + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))),32);
        bufp->chgBit(oldp+56,((0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__near_path_exp_rounded))));
        bufp->chgBit(oldp+57,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath_io_out_near_path_ix));
        bufp->chgBit(oldp+58,((((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                              >> 0x17U))) 
                                | (1U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                >> 0x17U)))) 
                               & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath_io_out_near_path_ix))));
        bufp->chgBit(oldp+59,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel)
                                ? (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___io_out_result_T_3)
                                : (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))));
        bufp->chgBit(oldp+60,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__rmin));
        bufp->chgCData(oldp+61,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__rmin)
                                  ? 0xfeU : 0xffU)),8);
        bufp->chgIData(oldp+62,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__rmin)
                                  ? 0x7fffffU : 0U)),23);
        bufp->chgBit(oldp+63,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__common_overflow));
        bufp->chgBit(oldp+64,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel)) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_out_far_path_ix)) 
                               | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel) 
                                  & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath_io_out_near_path_ix)))));
        bufp->chgIData(oldp+65,((0x7fffffU & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                               >> 1U) 
                                              + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))),23);
        bufp->chgBit(oldp+66,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__near_path_rounder__DOT__r_up) 
                               & (0xfffffeU == (0xfffffeU 
                                                & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T)))));
        bufp->chgCData(oldp+67,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__near_path_exp_rounded),8);
        bufp->chgSData(oldp+68,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___io_out_result_T_3) 
                                  << 8U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__near_path_exp_rounded))),9);
        bufp->chgBit(oldp+69,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__near_path_rounder__DOT__r_up));
        bufp->chgIData(oldp+70,((0x7fffffU & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                               >> 3U) 
                                              + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_rounder__DOT__r_up)))),23);
        bufp->chgBit(oldp+71,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_rounder_io_cout));
        bufp->chgCData(oldp+72,((0xffU & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                          + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__resultExpNoRound)))),8);
        bufp->chgBit(oldp+73,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                               & (0xfeU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__resultExpNoRound)))));
        bufp->chgSData(oldp+74,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                                  << 8U) | (0xffU & 
                                            ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                             + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__resultExpNoRound))))),9);
        bufp->chgBit(oldp+75,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_rounder__DOT__r_up));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgSData(oldp+76,(vlSelf->DotProdUnit__DOT__vec_a_0),16);
        bufp->chgSData(oldp+77,(vlSelf->DotProdUnit__DOT__vec_b_0),16);
        bufp->chgIData(oldp+78,((((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasZero) 
                                  | ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasNaN) 
                                     | (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasInf)))
                                  ? ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__nan_result)
                                      ? 0x7fc00000U
                                      : ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasInf)
                                          ? (0x7f800000U 
                                             | ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__resultSign) 
                                                << 0x1fU))
                                          : ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__resultSign) 
                                             << 0x1fU)))
                                  : (((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__resultSign) 
                                      << 0x1fU) | (
                                                   (((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__shiftLimit)
                                                      ? 0U
                                                      : 
                                                     (0xffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__resultExpNoShift) 
                                                          - (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__lzc))))) 
                                                    << 0x17U) 
                                                   | (((0x14U 
                                                        >= (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT___resultSigShifted_T))
                                                        ? 
                                                       (0x1fffffU 
                                                        & (vlSelf->DotProdUnit__DOT__fmul__DOT__resultSigNoShift 
                                                           << (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT___resultSigShifted_T)))
                                                        : 0U) 
                                                      << 2U))))),32);
        bufp->chgBit(oldp+79,(vlSelf->DotProdUnit__DOT__fmul__DOT__nan_result));
        bufp->chgBit(oldp+80,(vlSelf->DotProdUnit__DOT__fmul__DOT__hasInf));
        bufp->chgBit(oldp+81,(((((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                     >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__decode_a_isNaN)) 
                                | ((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                       >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__decode_b_isNaN))) 
                               | (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__zero_mul_inf))));
        bufp->chgSData(oldp+82,(vlSelf->DotProdUnit__DOT__vec_a_1),16);
        bufp->chgSData(oldp+83,(vlSelf->DotProdUnit__DOT__vec_b_1),16);
        bufp->chgIData(oldp+84,((((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasZero) 
                                  | ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasNaN) 
                                     | (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasInf)))
                                  ? ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__nan_result)
                                      ? 0x7fc00000U
                                      : ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasInf)
                                          ? (0x7f800000U 
                                             | ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSign) 
                                                << 0x1fU))
                                          : ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSign) 
                                             << 0x1fU)))
                                  : (((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSign) 
                                      << 0x1fU) | (
                                                   (((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__shiftLimit)
                                                      ? 0U
                                                      : 
                                                     (0xffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift) 
                                                          - (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzc))))) 
                                                    << 0x17U) 
                                                   | (((0x14U 
                                                        >= (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT___resultSigShifted_T))
                                                        ? 
                                                       (0x1fffffU 
                                                        & (vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSigNoShift 
                                                           << (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT___resultSigShifted_T)))
                                                        : 0U) 
                                                      << 2U))))),32);
        bufp->chgBit(oldp+85,(vlSelf->DotProdUnit__DOT__fmul_1__DOT__nan_result));
        bufp->chgBit(oldp+86,(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasInf));
        bufp->chgBit(oldp+87,(((((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                     >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_a_isNaN)) 
                                | ((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                       >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_b_isNaN))) 
                               | (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__zero_mul_inf))));
        bufp->chgSData(oldp+88,(vlSelf->DotProdUnit__DOT__vec_a_2),16);
        bufp->chgSData(oldp+89,(vlSelf->DotProdUnit__DOT__vec_b_2),16);
        bufp->chgIData(oldp+90,((((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasZero) 
                                  | ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasNaN) 
                                     | (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasInf)))
                                  ? ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__nan_result)
                                      ? 0x7fc00000U
                                      : ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasInf)
                                          ? (0x7f800000U 
                                             | ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSign) 
                                                << 0x1fU))
                                          : ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSign) 
                                             << 0x1fU)))
                                  : (((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSign) 
                                      << 0x1fU) | (
                                                   (((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__shiftLimit)
                                                      ? 0U
                                                      : 
                                                     (0xffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift) 
                                                          - (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzc))))) 
                                                    << 0x17U) 
                                                   | (((0x14U 
                                                        >= (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT___resultSigShifted_T))
                                                        ? 
                                                       (0x1fffffU 
                                                        & (vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSigNoShift 
                                                           << (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT___resultSigShifted_T)))
                                                        : 0U) 
                                                      << 2U))))),32);
        bufp->chgBit(oldp+91,(vlSelf->DotProdUnit__DOT__fmul_2__DOT__nan_result));
        bufp->chgBit(oldp+92,(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasInf));
        bufp->chgBit(oldp+93,(((((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                     >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_a_isNaN)) 
                                | ((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                       >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_b_isNaN))) 
                               | (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__zero_mul_inf))));
        bufp->chgSData(oldp+94,(vlSelf->DotProdUnit__DOT__vec_a_3),16);
        bufp->chgSData(oldp+95,(vlSelf->DotProdUnit__DOT__vec_b_3),16);
        bufp->chgIData(oldp+96,((((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasZero) 
                                  | ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasNaN) 
                                     | (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasInf)))
                                  ? ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__nan_result)
                                      ? 0x7fc00000U
                                      : ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasInf)
                                          ? (0x7f800000U 
                                             | ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSign) 
                                                << 0x1fU))
                                          : ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSign) 
                                             << 0x1fU)))
                                  : (((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSign) 
                                      << 0x1fU) | (
                                                   (((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__shiftLimit)
                                                      ? 0U
                                                      : 
                                                     (0xffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift) 
                                                          - (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzc))))) 
                                                    << 0x17U) 
                                                   | (((0x14U 
                                                        >= (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT___resultSigShifted_T))
                                                        ? 
                                                       (0x1fffffU 
                                                        & (vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSigNoShift 
                                                           << (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT___resultSigShifted_T)))
                                                        : 0U) 
                                                      << 2U))))),32);
        bufp->chgBit(oldp+97,(vlSelf->DotProdUnit__DOT__fmul_3__DOT__nan_result));
        bufp->chgBit(oldp+98,(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasInf));
        bufp->chgBit(oldp+99,(((((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                     >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_a_isNaN)) 
                                | ((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                       >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_b_isNaN))) 
                               | (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__zero_mul_inf))));
        bufp->chgBit(oldp+100,(vlSelf->DotProdUnit__DOT__valid));
        bufp->chgIData(oldp+101,(vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r),32);
        bufp->chgIData(oldp+102,(vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r),32);
        bufp->chgBit(oldp+103,(vlSelf->DotProdUnit__DOT__a_flag_isNaN));
        bufp->chgBit(oldp+104,(vlSelf->DotProdUnit__DOT__a_flag_isInf));
        bufp->chgBit(oldp+105,(vlSelf->DotProdUnit__DOT__a_flag_isInv));
        bufp->chgBit(oldp+106,(vlSelf->DotProdUnit__DOT__b_flag_isNaN));
        bufp->chgBit(oldp+107,(vlSelf->DotProdUnit__DOT__b_flag_isInf));
        bufp->chgBit(oldp+108,(vlSelf->DotProdUnit__DOT__b_flag_isInv));
        bufp->chgBit(oldp+109,(vlSelf->DotProdUnit__DOT__valid_1));
        bufp->chgIData(oldp+110,(vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1),32);
        bufp->chgIData(oldp+111,(vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1),32);
        bufp->chgBit(oldp+112,(vlSelf->DotProdUnit__DOT__a_flag_1_isNaN));
        bufp->chgBit(oldp+113,(vlSelf->DotProdUnit__DOT__a_flag_1_isInf));
        bufp->chgBit(oldp+114,(vlSelf->DotProdUnit__DOT__a_flag_1_isInv));
        bufp->chgBit(oldp+115,(vlSelf->DotProdUnit__DOT__b_flag_1_isNaN));
        bufp->chgBit(oldp+116,(vlSelf->DotProdUnit__DOT__b_flag_1_isInf));
        bufp->chgBit(oldp+117,(vlSelf->DotProdUnit__DOT__b_flag_1_isInv));
        bufp->chgBit(oldp+118,(vlSelf->DotProdUnit__DOT__valid_2));
        bufp->chgIData(oldp+119,(vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2),32);
        bufp->chgIData(oldp+120,(vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2),32);
        bufp->chgSData(oldp+121,((((IData)((0U != (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                                      >> 0xaU)))) 
                                   << 0xaU) | (0x3ffU 
                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0)))),11);
        bufp->chgCData(oldp+122,(((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                                   >> 0xaU)))
                                   ? 0U : ((0x200U 
                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                            ? 1U : 
                                           ((0x100U 
                                             & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                             ? 2U : 
                                            ((0x80U 
                                              & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                              ? 3U : 
                                             ((0x40U 
                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                               ? 4U
                                               : ((0x20U 
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
                                                       : 0xaU))))))))))),4);
        bufp->chgSData(oldp+123,((((IData)((0U != (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                                      >> 0xaU)))) 
                                   << 0xaU) | (0x3ffU 
                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0)))),11);
        bufp->chgCData(oldp+124,(((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                                   >> 0xaU)))
                                   ? 0U : ((0x200U 
                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                            ? 1U : 
                                           ((0x100U 
                                             & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                             ? 2U : 
                                            ((0x80U 
                                              & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                              ? 3U : 
                                             ((0x40U 
                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                               ? 4U
                                               : ((0x20U 
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
                                                       : 0xaU))))))))))),4);
        bufp->chgBit(oldp+125,((1U & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                      >> 0xfU))));
        bufp->chgCData(oldp+126,((0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+127,((0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))),10);
        bufp->chgBit(oldp+128,((1U & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                      >> 0xfU))));
        bufp->chgCData(oldp+129,((0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+130,((0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))),10);
        bufp->chgBit(oldp+131,((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+132,((0x1fU == (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                                   >> 0xaU)))));
        bufp->chgBit(oldp+133,((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0)))));
        bufp->chgBit(oldp+134,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                                     >> 0xaU))))))));
        bufp->chgBit(oldp+135,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))))))));
        bufp->chgBit(oldp+136,((IData)(((0x7c00U == 
                                         (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0)))))))));
        bufp->chgBit(oldp+137,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                                      >> 0xaU))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0)))))))));
        bufp->chgBit(oldp+138,(vlSelf->DotProdUnit__DOT__fmul__DOT__decode_a_isNaN));
        bufp->chgBit(oldp+139,(((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                    >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__decode_a_isNaN))));
        bufp->chgBit(oldp+140,((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+141,((0x1fU == (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                                   >> 0xaU)))));
        bufp->chgBit(oldp+142,((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0)))));
        bufp->chgBit(oldp+143,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                                     >> 0xaU))))))));
        bufp->chgBit(oldp+144,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))))))));
        bufp->chgBit(oldp+145,((IData)(((0x7c00U == 
                                         (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0)))))))));
        bufp->chgBit(oldp+146,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                                      >> 0xaU))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0)))))))));
        bufp->chgBit(oldp+147,(vlSelf->DotProdUnit__DOT__fmul__DOT__decode_b_isNaN));
        bufp->chgBit(oldp+148,(((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                    >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__decode_b_isNaN))));
        bufp->chgBit(oldp+149,(((~ (IData)((0U != (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                                      >> 0xaU))))) 
                                & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))))));
        bufp->chgCData(oldp+150,((0x1fU & (((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                            >> 0xaU) 
                                           + ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                                              >> 0xaU))))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))))))),5);
        bufp->chgBit(oldp+151,(((~ (IData)((0U != (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                                      >> 0xaU))))) 
                                & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))))));
        bufp->chgCData(oldp+152,((0x1fU & (((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                            >> 0xaU) 
                                           + ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                                              >> 0xaU))))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))))))),5);
        bufp->chgBit(oldp+153,(vlSelf->DotProdUnit__DOT__fmul__DOT__hasZero));
        bufp->chgBit(oldp+154,(vlSelf->DotProdUnit__DOT__fmul__DOT__resultSign));
        bufp->chgCData(oldp+155,((0x3fU & ((0x1fU & 
                                            (((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                              >> 0xaU) 
                                             + ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                                                >> 0xaU))))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0)))))) 
                                           + (0x1fU 
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
                                                      & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))))))))),6);
        bufp->chgCData(oldp+156,((0xffU & ((IData)(0x61U) 
                                           + (0x3fU 
                                              & ((0x1fU 
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
                                                          & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))))))))))),8);
        bufp->chgCData(oldp+157,(vlSelf->DotProdUnit__DOT__fmul__DOT__resultExpNoShift),8);
        bufp->chgIData(oldp+158,(vlSelf->DotProdUnit__DOT__fmul__DOT__resultSigNoShift),22);
        bufp->chgCData(oldp+159,(vlSelf->DotProdUnit__DOT__fmul__DOT__lzcRaw),4);
        bufp->chgIData(oldp+160,((0x3fffffU & (0x200000U 
                                               >> (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__lzcRaw)))),22);
        bufp->chgBit(oldp+161,((1U & (~ (IData)((0U 
                                                 != 
                                                 (vlSelf->DotProdUnit__DOT__fmul__DOT__resultSigNoShift 
                                                  & (0x200000U 
                                                     >> (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__lzcRaw)))))))));
        bufp->chgCData(oldp+162,(vlSelf->DotProdUnit__DOT__fmul__DOT__lzc),4);
        bufp->chgBit(oldp+163,(vlSelf->DotProdUnit__DOT__fmul__DOT__shiftLimit));
        bufp->chgIData(oldp+164,(((0x15U >= (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT___resultSigShifted_T))
                                   ? (0x3fffffU & (vlSelf->DotProdUnit__DOT__fmul__DOT__resultSigNoShift 
                                                   << (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT___resultSigShifted_T)))
                                   : 0U)),22);
        bufp->chgCData(oldp+165,(((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__shiftLimit)
                                   ? 0U : (0xffU & 
                                           ((IData)(1U) 
                                            + ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__resultExpNoShift) 
                                               - (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__lzc)))))),8);
        bufp->chgBit(oldp+166,(vlSelf->DotProdUnit__DOT__fmul__DOT__hasNaN));
        bufp->chgBit(oldp+167,((((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                     >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__decode_a_isNaN)) 
                                | ((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                       >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__decode_b_isNaN)))));
        bufp->chgBit(oldp+168,(((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasZero) 
                                | ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasNaN) 
                                   | (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasInf)))));
        bufp->chgBit(oldp+169,(vlSelf->DotProdUnit__DOT__fmul__DOT__zero_mul_inf));
        bufp->chgIData(oldp+170,(((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__nan_result)
                                   ? 0x7fc00000U : 
                                  ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__resultSign) 
                                       << 0x1fU)))),32);
        bufp->chgSData(oldp+171,((((IData)((0U != (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                                      >> 0xaU)))) 
                                   << 0xaU) | (0x3ffU 
                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1)))),11);
        bufp->chgCData(oldp+172,(((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                                   >> 0xaU)))
                                   ? 0U : ((0x200U 
                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))
                                            ? 1U : 
                                           ((0x100U 
                                             & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))
                                             ? 2U : 
                                            ((0x80U 
                                              & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))
                                              ? 3U : 
                                             ((0x40U 
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
                                                       : 0xaU))))))))))),4);
        bufp->chgSData(oldp+173,((((IData)((0U != (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                                      >> 0xaU)))) 
                                   << 0xaU) | (0x3ffU 
                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1)))),11);
        bufp->chgCData(oldp+174,(((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                                   >> 0xaU)))
                                   ? 0U : ((0x200U 
                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                                            ? 1U : 
                                           ((0x100U 
                                             & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                                             ? 2U : 
                                            ((0x80U 
                                              & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                                              ? 3U : 
                                             ((0x40U 
                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                                               ? 4U
                                               : ((0x20U 
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
                                                       : 0xaU))))))))))),4);
        bufp->chgBit(oldp+175,((1U & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                      >> 0xfU))));
        bufp->chgCData(oldp+176,((0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+177,((0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))),10);
        bufp->chgBit(oldp+178,((1U & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                      >> 0xfU))));
        bufp->chgCData(oldp+179,((0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+180,((0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))),10);
        bufp->chgBit(oldp+181,((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+182,((0x1fU == (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                                   >> 0xaU)))));
        bufp->chgBit(oldp+183,((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1)))));
        bufp->chgBit(oldp+184,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                                     >> 0xaU))))))));
        bufp->chgBit(oldp+185,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))))))));
        bufp->chgBit(oldp+186,((IData)(((0x7c00U == 
                                         (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1)))))))));
        bufp->chgBit(oldp+187,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                                      >> 0xaU))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1)))))))));
        bufp->chgBit(oldp+188,(vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_a_isNaN));
        bufp->chgBit(oldp+189,(((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                    >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_a_isNaN))));
        bufp->chgBit(oldp+190,((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+191,((0x1fU == (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                                   >> 0xaU)))));
        bufp->chgBit(oldp+192,((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1)))));
        bufp->chgBit(oldp+193,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                                     >> 0xaU))))))));
        bufp->chgBit(oldp+194,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))))))));
        bufp->chgBit(oldp+195,((IData)(((0x7c00U == 
                                         (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1)))))))));
        bufp->chgBit(oldp+196,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                                      >> 0xaU))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1)))))))));
        bufp->chgBit(oldp+197,(vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_b_isNaN));
        bufp->chgBit(oldp+198,(((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                    >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_b_isNaN))));
        bufp->chgBit(oldp+199,(((~ (IData)((0U != (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                                      >> 0xaU))))) 
                                & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))))));
        bufp->chgCData(oldp+200,((0x1fU & (((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                            >> 0xaU) 
                                           + ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                                              >> 0xaU))))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))))))),5);
        bufp->chgBit(oldp+201,(((~ (IData)((0U != (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                                      >> 0xaU))))) 
                                & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))))));
        bufp->chgCData(oldp+202,((0x1fU & (((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                            >> 0xaU) 
                                           + ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                                              >> 0xaU))))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))))))),5);
        bufp->chgBit(oldp+203,(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasZero));
        bufp->chgBit(oldp+204,(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSign));
        bufp->chgCData(oldp+205,((0x3fU & ((0x1fU & 
                                            (((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                              >> 0xaU) 
                                             + ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                                                >> 0xaU))))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1)))))) 
                                           + (0x1fU 
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
                                                      & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))))))))),6);
        bufp->chgCData(oldp+206,((0xffU & ((IData)(0x61U) 
                                           + (0x3fU 
                                              & ((0x1fU 
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
                                                          & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))))))))))),8);
        bufp->chgCData(oldp+207,(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift),8);
        bufp->chgIData(oldp+208,(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSigNoShift),22);
        bufp->chgCData(oldp+209,(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzcRaw),4);
        bufp->chgIData(oldp+210,((0x3fffffU & (0x200000U 
                                               >> (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzcRaw)))),22);
        bufp->chgBit(oldp+211,((1U & (~ (IData)((0U 
                                                 != 
                                                 (vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSigNoShift 
                                                  & (0x200000U 
                                                     >> (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzcRaw)))))))));
        bufp->chgCData(oldp+212,(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzc),4);
        bufp->chgBit(oldp+213,(vlSelf->DotProdUnit__DOT__fmul_1__DOT__shiftLimit));
        bufp->chgIData(oldp+214,(((0x15U >= (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT___resultSigShifted_T))
                                   ? (0x3fffffU & (vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSigNoShift 
                                                   << (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT___resultSigShifted_T)))
                                   : 0U)),22);
        bufp->chgCData(oldp+215,(((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__shiftLimit)
                                   ? 0U : (0xffU & 
                                           ((IData)(1U) 
                                            + ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift) 
                                               - (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzc)))))),8);
        bufp->chgBit(oldp+216,(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasNaN));
        bufp->chgBit(oldp+217,((((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                     >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_a_isNaN)) 
                                | ((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                       >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_b_isNaN)))));
        bufp->chgBit(oldp+218,(((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasZero) 
                                | ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasNaN) 
                                   | (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasInf)))));
        bufp->chgBit(oldp+219,(vlSelf->DotProdUnit__DOT__fmul_1__DOT__zero_mul_inf));
        bufp->chgIData(oldp+220,(((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__nan_result)
                                   ? 0x7fc00000U : 
                                  ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSign) 
                                       << 0x1fU)))),32);
        bufp->chgSData(oldp+221,((((IData)((0U != (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                                      >> 0xaU)))) 
                                   << 0xaU) | (0x3ffU 
                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2)))),11);
        bufp->chgCData(oldp+222,(((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                                   >> 0xaU)))
                                   ? 0U : ((0x200U 
                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))
                                            ? 1U : 
                                           ((0x100U 
                                             & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))
                                             ? 2U : 
                                            ((0x80U 
                                              & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))
                                              ? 3U : 
                                             ((0x40U 
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
                                                       : 0xaU))))))))))),4);
        bufp->chgSData(oldp+223,((((IData)((0U != (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                                      >> 0xaU)))) 
                                   << 0xaU) | (0x3ffU 
                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2)))),11);
        bufp->chgCData(oldp+224,(((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                                   >> 0xaU)))
                                   ? 0U : ((0x200U 
                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                                            ? 1U : 
                                           ((0x100U 
                                             & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                                             ? 2U : 
                                            ((0x80U 
                                              & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                                              ? 3U : 
                                             ((0x40U 
                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                                               ? 4U
                                               : ((0x20U 
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
                                                       : 0xaU))))))))))),4);
        bufp->chgBit(oldp+225,((1U & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                      >> 0xfU))));
        bufp->chgCData(oldp+226,((0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+227,((0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))),10);
        bufp->chgBit(oldp+228,((1U & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                      >> 0xfU))));
        bufp->chgCData(oldp+229,((0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+230,((0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))),10);
        bufp->chgBit(oldp+231,((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+232,((0x1fU == (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                                   >> 0xaU)))));
        bufp->chgBit(oldp+233,((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2)))));
        bufp->chgBit(oldp+234,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                                     >> 0xaU))))))));
        bufp->chgBit(oldp+235,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))))))));
        bufp->chgBit(oldp+236,((IData)(((0x7c00U == 
                                         (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2)))))))));
        bufp->chgBit(oldp+237,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                                      >> 0xaU))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2)))))))));
        bufp->chgBit(oldp+238,(vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_a_isNaN));
        bufp->chgBit(oldp+239,(((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                    >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_a_isNaN))));
        bufp->chgBit(oldp+240,((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+241,((0x1fU == (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                                   >> 0xaU)))));
        bufp->chgBit(oldp+242,((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2)))));
        bufp->chgBit(oldp+243,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                                     >> 0xaU))))))));
        bufp->chgBit(oldp+244,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))))))));
        bufp->chgBit(oldp+245,((IData)(((0x7c00U == 
                                         (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2)))))))));
        bufp->chgBit(oldp+246,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                                      >> 0xaU))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2)))))))));
        bufp->chgBit(oldp+247,(vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_b_isNaN));
        bufp->chgBit(oldp+248,(((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                    >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_b_isNaN))));
        bufp->chgBit(oldp+249,(((~ (IData)((0U != (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                                      >> 0xaU))))) 
                                & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))))));
        bufp->chgCData(oldp+250,((0x1fU & (((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                            >> 0xaU) 
                                           + ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                                              >> 0xaU))))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))))))),5);
        bufp->chgBit(oldp+251,(((~ (IData)((0U != (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                                      >> 0xaU))))) 
                                & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))))));
        bufp->chgCData(oldp+252,((0x1fU & (((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                            >> 0xaU) 
                                           + ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                                              >> 0xaU))))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))))))),5);
        bufp->chgBit(oldp+253,(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasZero));
        bufp->chgBit(oldp+254,(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSign));
        bufp->chgCData(oldp+255,((0x3fU & ((0x1fU & 
                                            (((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                              >> 0xaU) 
                                             + ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                                                >> 0xaU))))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2)))))) 
                                           + (0x1fU 
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
                                                      & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))))))))),6);
        bufp->chgCData(oldp+256,((0xffU & ((IData)(0x61U) 
                                           + (0x3fU 
                                              & ((0x1fU 
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
                                                          & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))))))))))),8);
        bufp->chgCData(oldp+257,(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift),8);
        bufp->chgIData(oldp+258,(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSigNoShift),22);
        bufp->chgCData(oldp+259,(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzcRaw),4);
        bufp->chgIData(oldp+260,((0x3fffffU & (0x200000U 
                                               >> (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzcRaw)))),22);
        bufp->chgBit(oldp+261,((1U & (~ (IData)((0U 
                                                 != 
                                                 (vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSigNoShift 
                                                  & (0x200000U 
                                                     >> (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzcRaw)))))))));
        bufp->chgCData(oldp+262,(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzc),4);
        bufp->chgBit(oldp+263,(vlSelf->DotProdUnit__DOT__fmul_2__DOT__shiftLimit));
        bufp->chgIData(oldp+264,(((0x15U >= (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT___resultSigShifted_T))
                                   ? (0x3fffffU & (vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSigNoShift 
                                                   << (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT___resultSigShifted_T)))
                                   : 0U)),22);
        bufp->chgCData(oldp+265,(((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__shiftLimit)
                                   ? 0U : (0xffU & 
                                           ((IData)(1U) 
                                            + ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift) 
                                               - (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzc)))))),8);
        bufp->chgBit(oldp+266,(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasNaN));
        bufp->chgBit(oldp+267,((((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                     >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_a_isNaN)) 
                                | ((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                       >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_b_isNaN)))));
        bufp->chgBit(oldp+268,(((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasZero) 
                                | ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasNaN) 
                                   | (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasInf)))));
        bufp->chgBit(oldp+269,(vlSelf->DotProdUnit__DOT__fmul_2__DOT__zero_mul_inf));
        bufp->chgIData(oldp+270,(((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__nan_result)
                                   ? 0x7fc00000U : 
                                  ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSign) 
                                       << 0x1fU)))),32);
        bufp->chgSData(oldp+271,((((IData)((0U != (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                                      >> 0xaU)))) 
                                   << 0xaU) | (0x3ffU 
                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3)))),11);
        bufp->chgCData(oldp+272,(((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                                   >> 0xaU)))
                                   ? 0U : ((0x200U 
                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))
                                            ? 1U : 
                                           ((0x100U 
                                             & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))
                                             ? 2U : 
                                            ((0x80U 
                                              & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))
                                              ? 3U : 
                                             ((0x40U 
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
                                                       : 0xaU))))))))))),4);
        bufp->chgSData(oldp+273,((((IData)((0U != (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                                      >> 0xaU)))) 
                                   << 0xaU) | (0x3ffU 
                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3)))),11);
        bufp->chgCData(oldp+274,(((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                                   >> 0xaU)))
                                   ? 0U : ((0x200U 
                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                                            ? 1U : 
                                           ((0x100U 
                                             & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                                             ? 2U : 
                                            ((0x80U 
                                              & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                                              ? 3U : 
                                             ((0x40U 
                                               & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                                               ? 4U
                                               : ((0x20U 
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
                                                       : 0xaU))))))))))),4);
        bufp->chgBit(oldp+275,((1U & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                      >> 0xfU))));
        bufp->chgCData(oldp+276,((0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+277,((0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))),10);
        bufp->chgBit(oldp+278,((1U & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                      >> 0xfU))));
        bufp->chgCData(oldp+279,((0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                           >> 0xaU))),5);
        bufp->chgSData(oldp+280,((0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))),10);
        bufp->chgBit(oldp+281,((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+282,((0x1fU == (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                                   >> 0xaU)))));
        bufp->chgBit(oldp+283,((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3)))));
        bufp->chgBit(oldp+284,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                                     >> 0xaU))))))));
        bufp->chgBit(oldp+285,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))))))));
        bufp->chgBit(oldp+286,((IData)(((0x7c00U == 
                                         (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3)))))))));
        bufp->chgBit(oldp+287,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                                      >> 0xaU))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3)))))))));
        bufp->chgBit(oldp+288,(vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_a_isNaN));
        bufp->chgBit(oldp+289,(((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                    >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_a_isNaN))));
        bufp->chgBit(oldp+290,((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                                >> 0xaU)))));
        bufp->chgBit(oldp+291,((0x1fU == (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                                   >> 0xaU)))));
        bufp->chgBit(oldp+292,((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3)))));
        bufp->chgBit(oldp+293,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                                     >> 0xaU))))))));
        bufp->chgBit(oldp+294,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))))))));
        bufp->chgBit(oldp+295,((IData)(((0x7c00U == 
                                         (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x3ffU 
                                                       & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3)))))))));
        bufp->chgBit(oldp+296,((1U & ((~ (IData)((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                                      >> 0xaU))))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x3ffU 
                                                     & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3)))))))));
        bufp->chgBit(oldp+297,(vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_b_isNaN));
        bufp->chgBit(oldp+298,(((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                    >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_b_isNaN))));
        bufp->chgBit(oldp+299,(((~ (IData)((0U != (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                                      >> 0xaU))))) 
                                & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))))));
        bufp->chgCData(oldp+300,((0x1fU & (((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                            >> 0xaU) 
                                           + ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                                              >> 0xaU))))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))))))),5);
        bufp->chgBit(oldp+301,(((~ (IData)((0U != (0x1fU 
                                                   & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                                      >> 0xaU))))) 
                                & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))))));
        bufp->chgCData(oldp+302,((0x1fU & (((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                            >> 0xaU) 
                                           + ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                                              >> 0xaU))))) 
                                              & (0U 
                                                 != 
                                                 (0x3ffU 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))))))),5);
        bufp->chgBit(oldp+303,(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasZero));
        bufp->chgBit(oldp+304,(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSign));
        bufp->chgCData(oldp+305,((0x3fU & ((0x1fU & 
                                            (((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                              >> 0xaU) 
                                             + ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                                                >> 0xaU))))) 
                                                & (0U 
                                                   != 
                                                   (0x3ffU 
                                                    & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3)))))) 
                                           + (0x1fU 
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
                                                      & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))))))))),6);
        bufp->chgCData(oldp+306,((0xffU & ((IData)(0x61U) 
                                           + (0x3fU 
                                              & ((0x1fU 
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
                                                          & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))))))))))),8);
        bufp->chgCData(oldp+307,(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift),8);
        bufp->chgIData(oldp+308,(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSigNoShift),22);
        bufp->chgCData(oldp+309,(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzcRaw),4);
        bufp->chgIData(oldp+310,((0x3fffffU & (0x200000U 
                                               >> (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzcRaw)))),22);
        bufp->chgBit(oldp+311,((1U & (~ (IData)((0U 
                                                 != 
                                                 (vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSigNoShift 
                                                  & (0x200000U 
                                                     >> (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzcRaw)))))))));
        bufp->chgCData(oldp+312,(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzc),4);
        bufp->chgBit(oldp+313,(vlSelf->DotProdUnit__DOT__fmul_3__DOT__shiftLimit));
        bufp->chgIData(oldp+314,(((0x15U >= (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT___resultSigShifted_T))
                                   ? (0x3fffffU & (vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSigNoShift 
                                                   << (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT___resultSigShifted_T)))
                                   : 0U)),22);
        bufp->chgCData(oldp+315,(((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__shiftLimit)
                                   ? 0U : (0xffU & 
                                           ((IData)(1U) 
                                            + ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift) 
                                               - (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzc)))))),8);
        bufp->chgBit(oldp+316,(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasNaN));
        bufp->chgBit(oldp+317,((((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                     >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_a_isNaN)) 
                                | ((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                       >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_b_isNaN)))));
        bufp->chgBit(oldp+318,(((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasZero) 
                                | ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasNaN) 
                                   | (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasInf)))));
        bufp->chgBit(oldp+319,(vlSelf->DotProdUnit__DOT__fmul_3__DOT__zero_mul_inf));
        bufp->chgIData(oldp+320,(((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__nan_result)
                                   ? 0x7fc00000U : 
                                  ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasInf)
                                    ? (0x7f800000U 
                                       | ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSign) 
                                          << 0x1fU))
                                    : ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSign) 
                                       << 0x1fU)))),32);
        bufp->chgBit(oldp+321,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn));
        bufp->chgCData(oldp+322,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_a_exp),8);
        bufp->chgIData(oldp+323,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_a_sig),24);
        bufp->chgCData(oldp+324,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_b_exp),8);
        bufp->chgIData(oldp+325,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_b_sig),24);
        bufp->chgBit(oldp+326,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_addSig));
        bufp->chgBit(oldp+327,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_tinyAdd));
        bufp->chgCData(oldp+328,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__shiftRightJam_io_shamt),5);
        bufp->chgBit(oldp+329,((1U == (0x1fU & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__diffExp)))));
        bufp->chgBit(oldp+330,((vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r 
                                >> 0x1fU)));
        bufp->chgCData(oldp+331,((0xffU & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+332,((0x7fffffU & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r)),23);
        bufp->chgBit(oldp+333,((vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r 
                                >> 0x1fU)));
        bufp->chgCData(oldp+334,((0xffU & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+335,((0x7fffffU & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r)),23);
        bufp->chgBit(oldp+336,((0U != (0xffU & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+337,((0xffU == (0xffU & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+338,((0U != (0x7fffffU & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r))));
        bufp->chgBit(oldp+339,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r 
                                                     >> 0x17U))))))));
        bufp->chgBit(oldp+340,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r)))))));
        bufp->chgBit(oldp+341,(((~ (IData)((0U != (0xffU 
                                                   & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r 
                                                      >> 0x17U))))) 
                                & (0U != (0x7fffffU 
                                          & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r)))));
        bufp->chgBit(oldp+342,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fffffU 
                                                       & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r))))))));
        bufp->chgBit(oldp+343,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r))))));
        bufp->chgBit(oldp+344,((IData)(((0x7f800000U 
                                         == (0x7fc00000U 
                                             & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r))))));
        bufp->chgBit(oldp+345,((0U != (0xffU & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+346,((0xffU == (0xffU & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+347,((0U != (0x7fffffU & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r))));
        bufp->chgBit(oldp+348,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r 
                                                     >> 0x17U))))))));
        bufp->chgBit(oldp+349,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r)))))));
        bufp->chgBit(oldp+350,(((~ (IData)((0U != (0xffU 
                                                   & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r 
                                                      >> 0x17U))))) 
                                & (0U != (0x7fffffU 
                                          & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r)))));
        bufp->chgBit(oldp+351,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fffffU 
                                                       & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r))))))));
        bufp->chgBit(oldp+352,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r))))));
        bufp->chgBit(oldp+353,((IData)(((0x7f800000U 
                                         == (0x7fc00000U 
                                             & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r))))));
        bufp->chgCData(oldp+354,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__raw_a_exp),8);
        bufp->chgIData(oldp+355,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__raw_a_sig),24);
        bufp->chgCData(oldp+356,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__raw_b_exp),8);
        bufp->chgIData(oldp+357,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__raw_b_sig),24);
        bufp->chgBit(oldp+358,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__needSwap));
        bufp->chgCData(oldp+359,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__diffExp),8);
        bufp->chgCData(oldp+360,((0x1fU & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__diffExp))),5);
        bufp->chgBit(oldp+361,((0x1aU < (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__diffExp))));
        bufp->chgBit(oldp+362,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel));
        bufp->chgBit(oldp+363,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__special_path_hasNaN));
        bufp->chgBit(oldp+364,(((IData)(vlSelf->DotProdUnit__DOT__a_flag_isInv) 
                                | (IData)(vlSelf->DotProdUnit__DOT__b_flag_isInv))));
        bufp->chgBit(oldp+365,(((IData)(vlSelf->DotProdUnit__DOT__a_flag_isInf) 
                                | (IData)(vlSelf->DotProdUnit__DOT__b_flag_isInf))));
        bufp->chgBit(oldp+366,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__special_path_inf_iv));
        bufp->chgBit(oldp+367,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__special_path_hasNaN) 
                                | ((IData)(vlSelf->DotProdUnit__DOT__a_flag_isInf) 
                                   | (IData)(vlSelf->DotProdUnit__DOT__b_flag_isInf)))));
        bufp->chgBit(oldp+368,((((IData)(vlSelf->DotProdUnit__DOT__a_flag_isInv) 
                                 | (IData)(vlSelf->DotProdUnit__DOT__b_flag_isInv)) 
                                | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__special_path_inf_iv))));
        bufp->chgIData(oldp+369,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__special_path_hasNaN) 
                                   | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__special_path_inf_iv))
                                   ? 0x7fc00000U : 
                                  (0x7f800000U | (((IData)(vlSelf->DotProdUnit__DOT__a_flag_isInf)
                                                    ? 
                                                   (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r 
                                                    >> 0x1fU)) 
                                                  << 0x1fU)))),32);
        bufp->chgCData(oldp+370,(((((IData)(vlSelf->DotProdUnit__DOT__a_flag_isInv) 
                                    | (IData)(vlSelf->DotProdUnit__DOT__b_flag_isInv)) 
                                   | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__special_path_inf_iv)) 
                                  << 4U)),5);
        bufp->chgIData(oldp+371,((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_a_sig 
                                  << 1U)),25);
        bufp->chgIData(oldp+372,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza_io_b),25);
        bufp->chgCData(oldp+373,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__io_lzc_lzc_io_out),5);
        bufp->chgBit(oldp+374,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector_io_y));
        bufp->chgBit(oldp+375,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder_io_f))))));
        bufp->chgBit(oldp+376,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__near_path_tininess_rounder__DOT__rounder_io_signIn));
        bufp->chgIData(oldp+377,((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                  << 2U)),27);
        bufp->chgBit(oldp+378,(((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                              >> 0x17U))) 
                                | (1U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                >> 0x17U))))));
        bufp->chgIData(oldp+379,((0x7fffffU & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                               >> 1U))),23);
        bufp->chgBit(oldp+380,((1U & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T)));
        bufp->chgBit(oldp+381,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_b_exp)))))));
        bufp->chgIData(oldp+382,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__resultSigComplementForm),26);
        bufp->chgBit(oldp+383,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__resultSigComplementForm 
                                      >> 0x19U))));
        bufp->chgIData(oldp+384,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__resultSigNoRound),25);
        bufp->chgCData(oldp+385,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__resultExpNoRound),8);
        bufp->chgBit(oldp+386,((0U == (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__resultExpNoRound))));
        bufp->chgBit(oldp+387,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__shiftLimit));
        bufp->chgCData(oldp+388,((0xffU & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__resultExpNoRound) 
                                           - (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__io_lzc_lzc_io_out)))),8);
        bufp->chgCData(oldp+389,((0xffU & (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__resultExpNoRound) 
                                            - (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__io_lzc_lzc_io_out)) 
                                           - (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector_io_y)))),8);
        bufp->chgCData(oldp+390,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__shiftLimit)
                                   ? 0U : (0xffU & 
                                           (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__resultExpNoRound) 
                                             - (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__io_lzc_lzc_io_out)) 
                                            - (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector_io_y))))),8);
        bufp->chgCData(oldp+391,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__sigShiftNum),8);
        bufp->chgIData(oldp+392,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__sig_s1),25);
        bufp->chgIData(oldp+393,((0x1ffffffU & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector_io_y)
                                                 ? 
                                                (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__sig_s1 
                                                 << 1U)
                                                 : vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__sig_s1))),25);
        bufp->chgIData(oldp+394,(((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0) 
                                    << 0x18U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1e5c2f4__0) 
                                                  << 0x17U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1de2a81__0) 
                                                     << 0x16U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ddae5e__0) 
                                                        << 0x15U) 
                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c186eb__0) 
                                                           << 0x14U) 
                                                          | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c59ef3__0) 
                                                              << 0x13U) 
                                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c9b7e6__0) 
                                                                 << 0x12U) 
                                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc133bf59__0) 
                                                                    << 0x11U) 
                                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc137964c__0) 
                                                                       << 0x10U) 
                                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13af6ea__0) 
                                                                          << 0xfU) 
                                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13ec59f__0) 
                                                                             << 0xeU) 
                                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1225580__0) 
                                                                                << 0xdU) 
                                                                               | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc126a535__0) 
                                                                                << 0xcU))))))))))))) 
                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12b80e9__0) 
                                      << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12fd1f4__0) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ece003__0) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc116b50e__0) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11a1021__0) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11f6654__0) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc103758b__0) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10742be__0) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ba7a6__0) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ff133__0) 
                                                                           << 2U) 
                                                                          | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc175800c__0) 
                                                                             << 1U))))))))))))),25);
        bufp->chgIData(oldp+395,(((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_h2dd0dfe3__0) 
                                    << 0x18U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dacef2f__0) 
                                                  << 0x17U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8119da__0) 
                                                     << 0x16U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d854375__0) 
                                                        << 0x15U) 
                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d88ba00__0) 
                                                           << 0x14U) 
                                                          | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8d732a__0) 
                                                              << 0x13U) 
                                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2db0aa3f__0) 
                                                                 << 0x12U) 
                                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0) 
                                                                    << 0x11U) 
                                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0) 
                                                                       << 0x10U) 
                                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0) 
                                                                          << 0xfU) 
                                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0) 
                                                                             << 0xeU) 
                                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0) 
                                                                                << 0xdU) 
                                                                               | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0) 
                                                                                << 0xcU))))))))))))) 
                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dec9530__0) 
                                      << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d10c4dd__0) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dd5f32a__0) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2ddfa237__0) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc36d7a__0) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc0558f__0) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d3c9525__0) 
                                                                              << 1U) 
                                                                             | (1U 
                                                                                & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza_io_b)))))))))))))),25);
        bufp->chgIData(oldp+396,((((0x1000000U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7)) 
                                                  << 0x18U)) 
                                   | ((0x800000U & 
                                       ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7)) 
                                        << 0x17U)) 
                                      | ((0x400000U 
                                          & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7)) 
                                             << 0x16U)) 
                                         | ((0x200000U 
                                             & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7)) 
                                                << 0x15U)) 
                                            | ((0x100000U 
                                                & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7)) 
                                                   << 0x14U)) 
                                               | ((0x80000U 
                                                   & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7)) 
                                                      << 0x13U)) 
                                                  | ((0x40000U 
                                                      & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7)) 
                                                         << 0x12U)) 
                                                     | ((0x20000U 
                                                         & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)) 
                                                            << 0x11U)) 
                                                        | ((0x10000U 
                                                            & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)) 
                                                               << 0x10U)) 
                                                           | ((0x8000U 
                                                               & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)) 
                                                                  << 0xfU)) 
                                                              | ((0x4000U 
                                                                  & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)) 
                                                                     << 0xeU)) 
                                                                 | ((0x2000U 
                                                                     & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)) 
                                                                        << 0xdU)) 
                                                                    | (0x1000U 
                                                                       & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7)) 
                                                                          << 0xcU)))))))))))))) 
                                  | ((0x800U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7)) 
                                                << 0xbU)) 
                                     | ((0x400U & (
                                                   (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7)) 
                                                   << 0xaU)) 
                                        | ((0x200U 
                                            & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7)) 
                                               << 9U)) 
                                           | ((0x100U 
                                               & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7)) 
                                                  << 8U)) 
                                              | ((0x80U 
                                                  & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7)) 
                                                     << 7U)) 
                                                 | ((0x40U 
                                                     & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7)) 
                                                        << 6U)) 
                                                    | ((0x20U 
                                                        & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)) 
                                                           << 5U)) 
                                                       | ((0x10U 
                                                           & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)) 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)) 
                                                                 << 3U)) 
                                                             | ((4U 
                                                                 & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_1_T_7)) 
                                                                    << 2U)) 
                                                                | ((2U 
                                                                    & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h8093e782__0)) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza_io_b))))))))))))))),25);
        bufp->chgIData(oldp+397,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder_io_f),25);
        bufp->chgBit(oldp+398,((1U & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza_io_b)));
        bufp->chgBit(oldp+399,((1U & (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza_io_b))));
        bufp->chgBit(oldp+400,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc175800c__0));
        bufp->chgBit(oldp+401,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d3c9525__0));
        bufp->chgBit(oldp+402,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h8093e782__0)))));
        bufp->chgBit(oldp+403,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ff133__0));
        bufp->chgBit(oldp+404,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0));
        bufp->chgBit(oldp+405,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_1_T_7)))));
        bufp->chgBit(oldp+406,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ba7a6__0));
        bufp->chgBit(oldp+407,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0));
        bufp->chgBit(oldp+408,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)))));
        bufp->chgBit(oldp+409,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10742be__0));
        bufp->chgBit(oldp+410,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0));
        bufp->chgBit(oldp+411,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)))));
        bufp->chgBit(oldp+412,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc103758b__0));
        bufp->chgBit(oldp+413,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0));
        bufp->chgBit(oldp+414,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)))));
        bufp->chgBit(oldp+415,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11f6654__0));
        bufp->chgBit(oldp+416,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc0558f__0));
        bufp->chgBit(oldp+417,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7)))));
        bufp->chgBit(oldp+418,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11a1021__0));
        bufp->chgBit(oldp+419,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc36d7a__0));
        bufp->chgBit(oldp+420,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7)))));
        bufp->chgBit(oldp+421,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc116b50e__0));
        bufp->chgBit(oldp+422,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2ddfa237__0));
        bufp->chgBit(oldp+423,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7)))));
        bufp->chgBit(oldp+424,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ece003__0));
        bufp->chgBit(oldp+425,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dd5f32a__0));
        bufp->chgBit(oldp+426,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7)))));
        bufp->chgBit(oldp+427,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12fd1f4__0));
        bufp->chgBit(oldp+428,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d10c4dd__0));
        bufp->chgBit(oldp+429,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7)))));
        bufp->chgBit(oldp+430,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12b80e9__0));
        bufp->chgBit(oldp+431,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dec9530__0));
        bufp->chgBit(oldp+432,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7)))));
        bufp->chgBit(oldp+433,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc126a535__0));
        bufp->chgBit(oldp+434,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0));
        bufp->chgBit(oldp+435,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7)))));
        bufp->chgBit(oldp+436,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1225580__0));
        bufp->chgBit(oldp+437,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0));
        bufp->chgBit(oldp+438,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)))));
        bufp->chgBit(oldp+439,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13ec59f__0));
        bufp->chgBit(oldp+440,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0));
        bufp->chgBit(oldp+441,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)))));
        bufp->chgBit(oldp+442,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13af6ea__0));
        bufp->chgBit(oldp+443,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0));
        bufp->chgBit(oldp+444,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)))));
        bufp->chgBit(oldp+445,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc137964c__0));
        bufp->chgBit(oldp+446,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0));
        bufp->chgBit(oldp+447,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)))));
        bufp->chgBit(oldp+448,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc133bf59__0));
        bufp->chgBit(oldp+449,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0));
        bufp->chgBit(oldp+450,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)))));
        bufp->chgBit(oldp+451,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c9b7e6__0));
        bufp->chgBit(oldp+452,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2db0aa3f__0));
        bufp->chgBit(oldp+453,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7)))));
        bufp->chgBit(oldp+454,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c59ef3__0));
        bufp->chgBit(oldp+455,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8d732a__0));
        bufp->chgBit(oldp+456,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7)))));
        bufp->chgBit(oldp+457,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c186eb__0));
        bufp->chgBit(oldp+458,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d88ba00__0));
        bufp->chgBit(oldp+459,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7)))));
        bufp->chgBit(oldp+460,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ddae5e__0));
        bufp->chgBit(oldp+461,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d854375__0));
        bufp->chgBit(oldp+462,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7)))));
        bufp->chgBit(oldp+463,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1de2a81__0));
        bufp->chgBit(oldp+464,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8119da__0));
        bufp->chgBit(oldp+465,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7)))));
        bufp->chgBit(oldp+466,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1e5c2f4__0));
        bufp->chgBit(oldp+467,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dacef2f__0));
        bufp->chgBit(oldp+468,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7)))));
        bufp->chgBit(oldp+469,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0));
        bufp->chgBit(oldp+470,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_h2dd0dfe3__0));
        bufp->chgBit(oldp+471,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7)))));
        bufp->chgCData(oldp+472,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc103758b__0) 
                                   << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10742be__0) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ba7a6__0) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ff133__0) 
                                                    << 2U) 
                                                   | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc175800c__0) 
                                                      << 1U)))))),6);
        bufp->chgSData(oldp+473,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12b80e9__0) 
                                   << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12fd1f4__0) 
                                                << 0xaU) 
                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ece003__0) 
                                                   << 9U) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc116b50e__0) 
                                                      << 8U) 
                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11a1021__0) 
                                                         << 7U) 
                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11f6654__0) 
                                                            << 6U) 
                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc103758b__0) 
                                                               << 5U) 
                                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10742be__0) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ba7a6__0) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ff133__0) 
                                                                        << 2U) 
                                                                       | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc175800c__0) 
                                                                          << 1U)))))))))))),12);
        bufp->chgCData(oldp+474,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc133bf59__0) 
                                   << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc137964c__0) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13af6ea__0) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13ec59f__0) 
                                                    << 2U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1225580__0) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc126a535__0))))))),6);
        bufp->chgSData(oldp+475,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0) 
                                   << 0xcU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1e5c2f4__0) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1de2a81__0) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ddae5e__0) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c186eb__0) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c59ef3__0) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c9b7e6__0) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc133bf59__0) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc137964c__0) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13af6ea__0) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13ec59f__0) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1225580__0) 
                                                                              << 1U) 
                                                                             | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc126a535__0)))))))))))))),13);
        bufp->chgCData(oldp+476,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0) 
                                   << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0) 
                                                    << 2U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d3c9525__0) 
                                                       << 1U) 
                                                      | (1U 
                                                         & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza_io_b))))))),6);
        bufp->chgSData(oldp+477,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dec9530__0) 
                                   << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d10c4dd__0) 
                                                << 0xaU) 
                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dd5f32a__0) 
                                                   << 9U) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2ddfa237__0) 
                                                      << 8U) 
                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc36d7a__0) 
                                                         << 7U) 
                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc0558f__0) 
                                                            << 6U) 
                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0) 
                                                               << 5U) 
                                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d3c9525__0) 
                                                                           << 1U) 
                                                                          | (1U 
                                                                             & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza_io_b))))))))))))),12);
        bufp->chgCData(oldp+478,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0) 
                                   << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0) 
                                                    << 2U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0))))))),6);
        bufp->chgSData(oldp+479,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_h2dd0dfe3__0) 
                                   << 0xcU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dacef2f__0) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8119da__0) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d854375__0) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d88ba00__0) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8d732a__0) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2db0aa3f__0) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0) 
                                                                              << 1U) 
                                                                             | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0)))))))))))))),13);
        bufp->chgCData(oldp+480,(((0x20U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)) 
                                            << 5U)) 
                                  | ((0x10U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)) 
                                               << 4U)) 
                                     | ((8U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)) 
                                               << 3U)) 
                                        | ((4U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_1_T_7)) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h8093e782__0)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza_io_b)))))))),6);
        bufp->chgSData(oldp+481,(((0x800U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7)) 
                                             << 0xbU)) 
                                  | ((0x400U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7)) 
                                                << 0xaU)) 
                                     | ((0x200U & (
                                                   (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7)) 
                                                   << 9U)) 
                                        | ((0x100U 
                                            & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7)) 
                                               << 8U)) 
                                           | ((0x80U 
                                               & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7)) 
                                                  << 7U)) 
                                              | ((0x40U 
                                                  & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7)) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_1_T_7)) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h8093e782__0)) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza_io_b)))))))))))))),12);
        bufp->chgCData(oldp+482,(((0x20U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)) 
                                            << 5U)) 
                                  | ((0x10U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)) 
                                               << 4U)) 
                                     | ((8U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)) 
                                               << 3U)) 
                                        | ((4U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)) 
                                                  << 2U)) 
                                           | ((2U & 
                                               ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)) 
                                                << 1U)) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7))))))))),6);
        bufp->chgSData(oldp+483,(((0x1000U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7)) 
                                              << 0xcU)) 
                                  | ((0x800U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7)) 
                                                << 0xbU)) 
                                     | ((0x400U & (
                                                   (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7)) 
                                                   << 0xaU)) 
                                        | ((0x200U 
                                            & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7)) 
                                               << 9U)) 
                                           | ((0x100U 
                                               & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7)) 
                                                  << 8U)) 
                                              | ((0x80U 
                                                  & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7)) 
                                                     << 7U)) 
                                                 | ((0x40U 
                                                     & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7)) 
                                                        << 6U)) 
                                                    | ((0x20U 
                                                        & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)) 
                                                           << 5U)) 
                                                       | ((0x10U 
                                                           & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)) 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)) 
                                                                 << 3U)) 
                                                             | ((4U 
                                                                 & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)) 
                                                                    << 2U)) 
                                                                | ((2U 
                                                                    & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7)))))))))))))))),13);
        bufp->chgCData(oldp+484,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_22) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h4b5b1e37__0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0)))),3);
        bufp->chgCData(oldp+485,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_22) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h2627e8d8__0) 
                                              << 1U) 
                                             | (1U 
                                                & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h4411a1c1__0)))))),3);
        bufp->chgCData(oldp+486,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_0),2);
        bufp->chgCData(oldp+487,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_2),2);
        bufp->chgCData(oldp+488,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_19) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h4b5b1e37__0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_21)))),3);
        bufp->chgCData(oldp+489,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_19) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h2627e8d8__0) 
                                              << 1U) 
                                             | (1U 
                                                & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_haa69a3db__0)))))),3);
        bufp->chgCData(oldp+490,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_0))),2);
        bufp->chgCData(oldp+491,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0))),2);
        bufp->chgCData(oldp+492,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_16) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h4b5b1e37__0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_18)))),3);
        bufp->chgCData(oldp+493,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_16) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h2627e8d8__0) 
                                              << 1U) 
                                             | (1U 
                                                & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h8a0d6673__0)))))),3);
        bufp->chgCData(oldp+494,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_0),2);
        bufp->chgCData(oldp+495,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_2),2);
        bufp->chgCData(oldp+496,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_13) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h4b5b1e37__0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_15)))),3);
        bufp->chgCData(oldp+497,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_13) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h2627e8d8__0) 
                                              << 1U) 
                                             | (1U 
                                                & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h27ccee37__0)))))),3);
        bufp->chgCData(oldp+498,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_0),2);
        bufp->chgCData(oldp+499,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_2),2);
        bufp->chgCData(oldp+500,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_10) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h4b5b1e37__0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_12)))),3);
        bufp->chgCData(oldp+501,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_10) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h2627e8d8__0) 
                                              << 1U) 
                                             | (1U 
                                                & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h803f76e4__0)))))),3);
        bufp->chgCData(oldp+502,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_0))),2);
        bufp->chgCData(oldp+503,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_0))),2);
        bufp->chgCData(oldp+504,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_7) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h4b5b1e37__0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_9)))),3);
        bufp->chgCData(oldp+505,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_7) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h2627e8d8__0) 
                                              << 1U) 
                                             | (1U 
                                                & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_ha74c8422__0)))))),3);
        bufp->chgCData(oldp+506,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4_io_out_0),2);
        bufp->chgCData(oldp+507,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4_io_out_2),2);
        bufp->chgCData(oldp+508,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_4) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h4b5b1e37__0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_6)))),3);
        bufp->chgCData(oldp+509,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_4) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h2627e8d8__0) 
                                              << 1U) 
                                             | (1U 
                                                & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h0133aff4__0)))))),3);
        bufp->chgCData(oldp+510,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_0),2);
        bufp->chgCData(oldp+511,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_2),2);
        bufp->chgCData(oldp+512,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_1) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h4b5b1e37__0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_3)))),3);
        bufp->chgCData(oldp+513,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_1) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h2627e8d8__0) 
                                              << 1U) 
                                             | (1U 
                                                & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_hb31c3312__0)))))),3);
        bufp->chgCData(oldp+514,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_0))),2);
        bufp->chgCData(oldp+515,(((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_1) 
                                    & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_hb31c3312__0)) 
                                       | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h2627e8d8__0))) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__zout_0))),2);
        bufp->chgCData(oldp+516,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_0) 
                                   << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_0))),3);
        bufp->chgCData(oldp+517,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0) 
                                   << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_2))),3);
        bufp->chgCData(oldp+518,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_0),2);
        bufp->chgCData(oldp+519,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_2),2);
        bufp->chgCData(oldp+520,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_1))),3);
        bufp->chgCData(oldp+521,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_2) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_1))),3);
        bufp->chgCData(oldp+522,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0))),2);
        bufp->chgCData(oldp+523,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0))),2);
        bufp->chgCData(oldp+524,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_0) 
                                   << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_0))),3);
        bufp->chgCData(oldp+525,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_0) 
                                   << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_2))),3);
        bufp->chgCData(oldp+526,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_0),2);
        bufp->chgCData(oldp+527,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_2),2);
        bufp->chgCData(oldp+528,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4_io_out_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_1))),3);
        bufp->chgCData(oldp+529,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4_io_out_2) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_1))),3);
        bufp->chgCData(oldp+530,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_0),2);
        bufp->chgCData(oldp+531,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_2),2);
        bufp->chgCData(oldp+532,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_0) 
                                   << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_0))),3);
        bufp->chgCData(oldp+533,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__zout_0) 
                                   << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_2))),3);
        bufp->chgCData(oldp+534,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_0))),2);
        bufp->chgCData(oldp+535,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_0))),2);
        bufp->chgCData(oldp+536,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0) 
                                   << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_0))),3);
        bufp->chgCData(oldp+537,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0) 
                                   << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_2))),3);
        bufp->chgCData(oldp+538,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_0),2);
        bufp->chgCData(oldp+539,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_2),2);
        bufp->chgCData(oldp+540,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_1))),3);
        bufp->chgCData(oldp+541,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_2) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_1))),3);
        bufp->chgCData(oldp+542,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_0))),2);
        bufp->chgCData(oldp+543,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_0))),2);
        bufp->chgCData(oldp+544,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_0) 
                                   << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_0))),3);
        bufp->chgCData(oldp+545,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_0) 
                                   << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_2))),3);
        bufp->chgCData(oldp+546,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12_io_out_0),2);
        bufp->chgCData(oldp+547,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12_io_out_2),2);
        bufp->chgCData(oldp+548,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_1))),3);
        bufp->chgCData(oldp+549,(((4U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__n_0)) 
                                         << 2U)) | 
                                  (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_1)))),3);
        bufp->chgCData(oldp+550,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13_io_out_0),2);
        bufp->chgCData(oldp+551,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_0))),2);
        bufp->chgCData(oldp+552,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_0) 
                                   << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_0))),3);
        bufp->chgCData(oldp+553,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_0) 
                                   << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_2))),3);
        bufp->chgCData(oldp+554,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_0),2);
        bufp->chgCData(oldp+555,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_2),2);
        bufp->chgCData(oldp+556,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12_io_out_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_1))),3);
        bufp->chgCData(oldp+557,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12_io_out_2) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_1))),3);
        bufp->chgCData(oldp+558,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_0))),2);
        bufp->chgCData(oldp+559,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_0))),2);
        bufp->chgCData(oldp+560,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_0) 
                                   << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_0))),3);
        bufp->chgCData(oldp+561,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_0) 
                                   << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_2))),3);
        bufp->chgCData(oldp+562,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_0),2);
        bufp->chgCData(oldp+563,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_2),2);
        bufp->chgCData(oldp+564,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13_io_out_0) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_1))),3);
        bufp->chgCData(oldp+565,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_1) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__pout_0) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_1)))),3);
        bufp->chgCData(oldp+566,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_0))),2);
        bufp->chgCData(oldp+567,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_0))),2);
        bufp->chgCData(oldp+568,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_0) 
                                   << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_0))),3);
        bufp->chgCData(oldp+569,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_0) 
                                   << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_2))),3);
        bufp->chgCData(oldp+570,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1) 
                                   << 1U) | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                                             | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1))))),2);
        bufp->chgCData(oldp+571,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0))),2);
        bufp->chgCData(oldp+572,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1) 
                                              << 1U) 
                                             | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                                                | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                                   & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1)))))),3);
        bufp->chgCData(oldp+573,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                                   << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1) 
                                              << 1U) 
                                             | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0)))),3);
        bufp->chgCData(oldp+574,((((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_6__DOT___pout_1_T_7))) 
                                   << 1U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                                              | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1))) 
                                             | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0) 
                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1))))),2);
        bufp->chgCData(oldp+575,(((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_6__DOT___pout_1_T_7)) 
                                   << 1U) | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0) 
                                             & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1)))),2);
        bufp->chgBit(oldp+576,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__n_0));
        bufp->chgBit(oldp+577,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__n_0)))));
        bufp->chgBit(oldp+578,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_1));
        bufp->chgBit(oldp+579,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_1_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ff133__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d3c9525__0))));
        bufp->chgBit(oldp+580,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_1));
        bufp->chgBit(oldp+581,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+582,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ba7a6__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0))));
        bufp->chgBit(oldp+583,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+584,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_3));
        bufp->chgBit(oldp+585,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10742be__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0))));
        bufp->chgBit(oldp+586,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_hb31c3312__0)))));
        bufp->chgBit(oldp+587,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_4));
        bufp->chgBit(oldp+588,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc103758b__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0))));
        bufp->chgBit(oldp+589,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_4));
        bufp->chgBit(oldp+590,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+591,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc0558f__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11f6654__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0))));
        bufp->chgBit(oldp+592,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+593,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_6));
        bufp->chgBit(oldp+594,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc36d7a__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11a1021__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc0558f__0))));
        bufp->chgBit(oldp+595,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h0133aff4__0)))));
        bufp->chgBit(oldp+596,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_7));
        bufp->chgBit(oldp+597,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2ddfa237__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc116b50e__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc36d7a__0))));
        bufp->chgBit(oldp+598,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_7));
        bufp->chgBit(oldp+599,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+600,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dd5f32a__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ece003__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2ddfa237__0))));
        bufp->chgBit(oldp+601,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+602,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_9));
        bufp->chgBit(oldp+603,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d10c4dd__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12fd1f4__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dd5f32a__0))));
        bufp->chgBit(oldp+604,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_ha74c8422__0)))));
        bufp->chgBit(oldp+605,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_10));
        bufp->chgBit(oldp+606,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dec9530__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12b80e9__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d10c4dd__0))));
        bufp->chgBit(oldp+607,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_10));
        bufp->chgBit(oldp+608,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+609,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc126a535__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dec9530__0))));
        bufp->chgBit(oldp+610,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+611,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_12));
        bufp->chgBit(oldp+612,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1225580__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0))));
        bufp->chgBit(oldp+613,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h803f76e4__0)))));
        bufp->chgBit(oldp+614,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_13));
        bufp->chgBit(oldp+615,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13ec59f__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0))));
        bufp->chgBit(oldp+616,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_13));
        bufp->chgBit(oldp+617,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+618,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13af6ea__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0))));
        bufp->chgBit(oldp+619,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+620,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_15));
        bufp->chgBit(oldp+621,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc137964c__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0))));
        bufp->chgBit(oldp+622,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h27ccee37__0)))));
        bufp->chgBit(oldp+623,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_16));
        bufp->chgBit(oldp+624,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc133bf59__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0))));
        bufp->chgBit(oldp+625,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_16));
        bufp->chgBit(oldp+626,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+627,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2db0aa3f__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c9b7e6__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0))));
        bufp->chgBit(oldp+628,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+629,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_18));
        bufp->chgBit(oldp+630,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8d732a__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c59ef3__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2db0aa3f__0))));
        bufp->chgBit(oldp+631,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h8a0d6673__0)))));
        bufp->chgBit(oldp+632,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_19));
        bufp->chgBit(oldp+633,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d88ba00__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c186eb__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8d732a__0))));
        bufp->chgBit(oldp+634,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_19));
        bufp->chgBit(oldp+635,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+636,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d854375__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ddae5e__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d88ba00__0))));
        bufp->chgBit(oldp+637,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+638,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_21));
        bufp->chgBit(oldp+639,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8119da__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1de2a81__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d854375__0))));
        bufp->chgBit(oldp+640,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_haa69a3db__0)))));
        bufp->chgBit(oldp+641,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_22));
        bufp->chgBit(oldp+642,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7)) 
                                 | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dacef2f__0)) 
                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7) 
                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1e5c2f4__0)))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8119da__0))));
        bufp->chgBit(oldp+643,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_22));
        bufp->chgBit(oldp+644,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+645,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7)) 
                                 | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_h2dd0dfe3__0)) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dacef2f__0))));
        bufp->chgBit(oldp+646,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+647,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h4411a1c1__0)))));
        bufp->chgCData(oldp+648,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_19) 
                                   << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h4b5b1e37__0) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_21) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_22) 
                                                    << 2U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h4b5b1e37__0) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0))))))),6);
        bufp->chgSData(oldp+649,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_13) 
                                   << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h4b5b1e37__0) 
                                                << 0xaU) 
                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_15) 
                                                   << 9U) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_16) 
                                                      << 8U) 
                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h4b5b1e37__0) 
                                                         << 7U) 
                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_18) 
                                                            << 6U) 
                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_19) 
                                                               << 5U) 
                                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h4b5b1e37__0) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_21) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_22) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h4b5b1e37__0) 
                                                                           << 1U) 
                                                                          | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0))))))))))))),12);
        bufp->chgCData(oldp+650,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_7) 
                                   << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h4b5b1e37__0) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_9) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_10) 
                                                    << 2U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h4b5b1e37__0) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_12))))))),6);
        bufp->chgCData(oldp+651,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_19) 
                                   << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h2627e8d8__0) 
                                              << 4U) 
                                             | ((8U 
                                                 & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_haa69a3db__0)) 
                                                    << 3U)) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_22) 
                                                    << 2U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h2627e8d8__0) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h4411a1c1__0))))))))),6);
        bufp->chgSData(oldp+652,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_13) 
                                   << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h2627e8d8__0) 
                                                << 0xaU) 
                                               | ((0x200U 
                                                   & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h27ccee37__0)) 
                                                      << 9U)) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_16) 
                                                      << 8U) 
                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h2627e8d8__0) 
                                                         << 7U) 
                                                        | ((0x40U 
                                                            & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h8a0d6673__0)) 
                                                               << 6U)) 
                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_19) 
                                                               << 5U) 
                                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h2627e8d8__0) 
                                                                  << 4U) 
                                                                 | ((8U 
                                                                     & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_haa69a3db__0)) 
                                                                        << 3U)) 
                                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_22) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h2627e8d8__0) 
                                                                           << 1U) 
                                                                          | (1U 
                                                                             & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h4411a1c1__0))))))))))))))),12);
        bufp->chgCData(oldp+653,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_7) 
                                   << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h2627e8d8__0) 
                                              << 4U) 
                                             | ((8U 
                                                 & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_ha74c8422__0)) 
                                                    << 3U)) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_10) 
                                                    << 2U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h2627e8d8__0) 
                                                       << 1U) 
                                                      | (1U 
                                                         & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h803f76e4__0))))))))),6);
        bufp->chgCData(oldp+654,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_22) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+655,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_22) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+656,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT__pout_0));
        bufp->chgBit(oldp+657,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT__pout_1));
        bufp->chgBit(oldp+658,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT__zout_0));
        bufp->chgBit(oldp+659,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT__zout_1));
        bufp->chgCData(oldp+660,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_19) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+661,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_19) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+662,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_0));
        bufp->chgBit(oldp+663,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_1));
        bufp->chgBit(oldp+664,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0));
        bufp->chgBit(oldp+665,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_1));
        bufp->chgCData(oldp+666,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_16) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+667,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_16) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+668,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT__pout_0));
        bufp->chgBit(oldp+669,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT__pout_1));
        bufp->chgBit(oldp+670,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT__zout_0));
        bufp->chgBit(oldp+671,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT__zout_1));
        bufp->chgCData(oldp+672,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_13) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+673,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_13) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+674,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT__pout_0));
        bufp->chgBit(oldp+675,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT__pout_1));
        bufp->chgBit(oldp+676,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT__zout_0));
        bufp->chgBit(oldp+677,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT__zout_1));
        bufp->chgCData(oldp+678,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_10) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+679,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_10) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+680,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_0));
        bufp->chgBit(oldp+681,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_1));
        bufp->chgBit(oldp+682,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_0));
        bufp->chgBit(oldp+683,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_1));
        bufp->chgCData(oldp+684,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_7) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+685,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_7) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+686,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT__pout_0));
        bufp->chgBit(oldp+687,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT__pout_1));
        bufp->chgBit(oldp+688,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT__zout_0));
        bufp->chgBit(oldp+689,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT__zout_1));
        bufp->chgCData(oldp+690,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_4) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+691,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_4) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+692,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT__pout_0));
        bufp->chgBit(oldp+693,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT__pout_1));
        bufp->chgBit(oldp+694,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT__zout_0));
        bufp->chgBit(oldp+695,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT__zout_1));
        bufp->chgCData(oldp+696,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+697,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+698,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_0));
        bufp->chgBit(oldp+699,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1));
        bufp->chgBit(oldp+700,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__zout_0));
        bufp->chgBit(oldp+701,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_1) 
                                & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_hb31c3312__0)) 
                                   | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h2627e8d8__0)))));
        bufp->chgCData(oldp+702,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_0) 
                                   << 6U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_0) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_1) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_0) 
                                                    << 2U) 
                                                   | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_0)))))),8);
        bufp->chgCData(oldp+703,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_2) 
                                   << 6U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_2) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_1) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0) 
                                                    << 2U) 
                                                   | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_2)))))),8);
        bufp->chgCData(oldp+704,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_0) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_0) 
                                                   >> 1U)))),2);
        bufp->chgCData(oldp+705,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_2) 
                                                   >> 1U)))),2);
        bufp->chgBit(oldp+706,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1__DOT__pout_0));
        bufp->chgBit(oldp+707,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1__DOT__pout_1));
        bufp->chgBit(oldp+708,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1__DOT__zout_0));
        bufp->chgBit(oldp+709,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1__DOT__zout_1));
        bufp->chgBit(oldp+710,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0));
        bufp->chgBit(oldp+711,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_1));
        bufp->chgBit(oldp+712,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0));
        bufp->chgBit(oldp+713,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_1));
        bufp->chgCData(oldp+714,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_0) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_0) 
                                                   >> 1U)))),2);
        bufp->chgCData(oldp+715,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_0) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_2) 
                                                   >> 1U)))),2);
        bufp->chgBit(oldp+716,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8__DOT__pout_0));
        bufp->chgBit(oldp+717,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8__DOT__pout_1));
        bufp->chgBit(oldp+718,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8__DOT__zout_0));
        bufp->chgBit(oldp+719,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8__DOT__zout_1));
        bufp->chgBit(oldp+720,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9__DOT__pout_0));
        bufp->chgBit(oldp+721,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9__DOT__pout_1));
        bufp->chgBit(oldp+722,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9__DOT__zout_0));
        bufp->chgBit(oldp+723,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9__DOT__zout_1));
        bufp->chgCData(oldp+724,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_0) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_0) 
                                                   >> 1U)))),2);
        bufp->chgCData(oldp+725,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__zout_0) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_2) 
                                                   >> 1U)))),2);
        bufp->chgBit(oldp+726,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_0));
        bufp->chgBit(oldp+727,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_1));
        bufp->chgBit(oldp+728,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_0));
        bufp->chgBit(oldp+729,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_1));
        bufp->chgCData(oldp+730,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_0) 
                                   << 4U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_1) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0) 
                                                 << 2U) 
                                                | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_0))))),6);
        bufp->chgCData(oldp+731,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_2) 
                                   << 4U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_1) 
                                              << 3U) 
                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0) 
                                                 << 2U) 
                                                | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_2))))),6);
        bufp->chgCData(oldp+732,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_0) 
                                                   >> 1U)))),2);
        bufp->chgCData(oldp+733,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_2) 
                                                   >> 1U)))),2);
        bufp->chgBit(oldp+734,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2__DOT__pout_0));
        bufp->chgBit(oldp+735,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2__DOT__pout_1));
        bufp->chgBit(oldp+736,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2__DOT__zout_0));
        bufp->chgBit(oldp+737,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2__DOT__zout_1));
        bufp->chgBit(oldp+738,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_0));
        bufp->chgBit(oldp+739,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_1));
        bufp->chgBit(oldp+740,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_0));
        bufp->chgBit(oldp+741,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_1));
        bufp->chgCData(oldp+742,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_0) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_0) 
                                                   >> 1U)))),2);
        bufp->chgCData(oldp+743,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_0) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_2) 
                                                   >> 1U)))),2);
        bufp->chgBit(oldp+744,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12__DOT__pout_0));
        bufp->chgBit(oldp+745,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12__DOT__pout_1));
        bufp->chgBit(oldp+746,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12__DOT__zout_0));
        bufp->chgBit(oldp+747,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12__DOT__zout_1));
        bufp->chgCData(oldp+748,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1),2);
        bufp->chgCData(oldp+749,(((2U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__n_0)) 
                                         << 1U)) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1))),2);
        bufp->chgBit(oldp+750,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__pout_0));
        bufp->chgBit(oldp+751,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__pout_1));
        bufp->chgBit(oldp+752,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_0));
        bufp->chgBit(oldp+753,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_1));
        bufp->chgCData(oldp+754,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_0) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_0) 
                                                   >> 1U)))),2);
        bufp->chgCData(oldp+755,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_0) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_2) 
                                                   >> 1U)))),2);
        bufp->chgBit(oldp+756,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3__DOT__pout_0));
        bufp->chgBit(oldp+757,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3__DOT__pout_1));
        bufp->chgBit(oldp+758,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3__DOT__zout_0));
        bufp->chgBit(oldp+759,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3__DOT__zout_1));
        bufp->chgBit(oldp+760,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_0));
        bufp->chgBit(oldp+761,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_1));
        bufp->chgBit(oldp+762,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_0));
        bufp->chgBit(oldp+763,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_1));
        bufp->chgCData(oldp+764,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_0) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_0) 
                                                   >> 1U)))),2);
        bufp->chgCData(oldp+765,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_0) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_2) 
                                                   >> 1U)))),2);
        bufp->chgBit(oldp+766,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0));
        bufp->chgBit(oldp+767,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1));
        bufp->chgBit(oldp+768,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0));
        bufp->chgBit(oldp+769,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_1));
        bufp->chgCData(oldp+770,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__pout_0))),2);
        bufp->chgBit(oldp+771,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_0));
        bufp->chgBit(oldp+772,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1));
        bufp->chgBit(oldp+773,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_0));
        bufp->chgBit(oldp+774,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1));
        bufp->chgCData(oldp+775,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_0) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_0) 
                                                   >> 1U)))),2);
        bufp->chgCData(oldp+776,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_0) 
                                   << 1U) | (1U & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_2) 
                                                   >> 1U)))),2);
        bufp->chgBit(oldp+777,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                                | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                   & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1)))));
        bufp->chgBit(oldp+778,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1));
        bufp->chgBit(oldp+779,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0));
        bufp->chgBit(oldp+780,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1));
        bufp->chgCData(oldp+781,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1))),2);
        bufp->chgCData(oldp+782,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                                   << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1))),2);
        bufp->chgBit(oldp+783,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                                 | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1))) 
                                | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0) 
                                   & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1)))));
        bufp->chgBit(oldp+784,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0)) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1)) 
                                | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                   & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_6__DOT___pout_1_T_7)))));
        bufp->chgBit(oldp+785,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1))));
        bufp->chgBit(oldp+786,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_6__DOT___pout_1_T_7))));
        bufp->chgBit(oldp+787,(((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h8093e782__0) 
                                  & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza_io_b) 
                                 | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)) 
                                | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10))));
        bufp->chgBit(oldp+788,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_1));
        bufp->chgBit(oldp+789,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_2));
        bufp->chgBit(oldp+790,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_3));
        bufp->chgBit(oldp+791,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_4));
        bufp->chgBit(oldp+792,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_5));
        bufp->chgBit(oldp+793,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_6));
        bufp->chgBit(oldp+794,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_7));
        bufp->chgBit(oldp+795,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_8));
        bufp->chgBit(oldp+796,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_9));
        bufp->chgBit(oldp+797,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_10));
        bufp->chgBit(oldp+798,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_11));
        bufp->chgBit(oldp+799,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_12));
        bufp->chgBit(oldp+800,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_13));
        bufp->chgBit(oldp+801,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_14));
        bufp->chgBit(oldp+802,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_15));
        bufp->chgBit(oldp+803,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_16));
        bufp->chgBit(oldp+804,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_17));
        bufp->chgBit(oldp+805,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_18));
        bufp->chgBit(oldp+806,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_19));
        bufp->chgBit(oldp+807,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_20));
        bufp->chgBit(oldp+808,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_21));
        bufp->chgBit(oldp+809,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_22));
        bufp->chgBit(oldp+810,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_23));
        bufp->chgBit(oldp+811,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_24));
        bufp->chgCData(oldp+812,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_5) 
                                   << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_4) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_3) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_2) 
                                                    << 2U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_1) 
                                                       << 1U) 
                                                      | ((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h8093e782__0) 
                                                           & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza_io_b) 
                                                          | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)) 
                                                         | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)))))))),6);
        bufp->chgSData(oldp+813,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_11) 
                                   << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_10) 
                                                << 0xaU) 
                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_9) 
                                                   << 9U) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_8) 
                                                      << 8U) 
                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_7) 
                                                         << 7U) 
                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_6) 
                                                            << 6U) 
                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_5) 
                                                               << 5U) 
                                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_4) 
                                                                  << 4U) 
                                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_3) 
                                                                     << 3U) 
                                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_2) 
                                                                        << 2U) 
                                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_1) 
                                                                           << 1U) 
                                                                          | ((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__VdfgTmp_h8093e782__0) 
                                                                               & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza_io_b) 
                                                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)) 
                                                                             | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)))))))))))))),12);
        bufp->chgCData(oldp+814,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_17) 
                                   << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_16) 
                                              << 4U) 
                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_15) 
                                                 << 3U) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_14) 
                                                    << 2U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_13) 
                                                       << 1U) 
                                                      | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_12))))))),6);
        bufp->chgSData(oldp+815,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_24) 
                                   << 0xcU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_23) 
                                                << 0xbU) 
                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_22) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_21) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_20) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_19) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_18) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_17) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_16) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_15) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_14) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_13) 
                                                                              << 1U) 
                                                                             | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_12)))))))))))))),13);
        bufp->chgBit(oldp+816,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                      >> 1U))));
        bufp->chgIData(oldp+817,((0x7fffffU & ((IData)(1U) 
                                               + (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                  >> 1U)))),23);
        bufp->chgIData(oldp+818,((0x7fffffU & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T)),23);
        bufp->chgIData(oldp+819,((0x7fffffU & ((IData)(1U) 
                                               + vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T))),23);
        bufp->chgIData(oldp+820,((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_b_sig 
                                  << 2U)),26);
        bufp->chgIData(oldp+821,(((0x1aU < (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__shiftRightJam_io_shamt))
                                   ? 0U : (0x3ffffffU 
                                           & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_b_sig 
                                               << 2U) 
                                              >> (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__shiftRightJam_io_shamt))))),26);
        bufp->chgBit(oldp+822,((0U != ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_b_sig 
                                        << 2U) & ((
                                                   ((IData)(1U) 
                                                    << (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__shiftRightJam_io_shamt)) 
                                                   - (IData)(1U)) 
                                                  | ((0x1aU 
                                                      < (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__shiftRightJam_io_shamt))
                                                      ? 0x3ffffffU
                                                      : 0U))))));
        bufp->chgIData(oldp+823,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig),27);
        bufp->chgIData(oldp+824,((0x7fffffU & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                               >> 3U))),23);
        bufp->chgBit(oldp+825,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                      >> 2U))));
        bufp->chgBit(oldp+826,((0U != (3U & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig))));
        bufp->chgBit(oldp+827,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_rounder__DOT__inexact));
        bufp->chgBit(oldp+828,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_a_exp)))))));
        bufp->chgBit(oldp+829,((1U & ((~ (IData)((0U 
                                                  != (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_a_exp)))) 
                                      & (~ (IData)(
                                                   (0U 
                                                    != (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_b_exp))))))));
        bufp->chgIData(oldp+830,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT___neg_sigB_T),28);
        bufp->chgIData(oldp+831,((0x8000000U | (0x7ffffffU 
                                                & ((IData)(1U) 
                                                   + 
                                                   (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT___neg_sigB_T))))),28);
        bufp->chgIData(oldp+832,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_addSig)
                                   ? vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT___neg_sigB_T
                                   : (0x8000000U | 
                                      (0x7ffffffU & 
                                       ((IData)(1U) 
                                        + (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT___neg_sigB_T)))))),28);
        bufp->chgIData(oldp+833,((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_a_sig 
                                  << 3U)),28);
        bufp->chgIData(oldp+834,((0xfffffffU & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_a_sig 
                                                 << 3U) 
                                                + ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_addSig)
                                                    ? vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT___neg_sigB_T
                                                    : 
                                                   (0x8000000U 
                                                    | (0x7ffffffU 
                                                       & ((IData)(1U) 
                                                          + 
                                                          (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT___neg_sigB_T)))))))),28);
        bufp->chgIData(oldp+835,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__result_sig_raw),28);
        bufp->chgBit(oldp+836,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__result_sig_raw 
                                      >> 0x1bU))));
        bufp->chgBit(oldp+837,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__result_sig_raw 
                                      >> 0x1aU))));
        bufp->chgCData(oldp+838,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__resultExpNoRound),8);
        bufp->chgBit(oldp+839,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_may_of));
        bufp->chgBit(oldp+840,((0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__resultExpNoRound))));
        bufp->chgBit(oldp+841,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                      >> 3U))));
        bufp->chgIData(oldp+842,((0x7fffffU & ((IData)(1U) 
                                               + (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                  >> 3U)))),23);
        bufp->chgIData(oldp+843,((0x7fffffU & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                               >> 2U))),23);
        bufp->chgBit(oldp+844,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                      >> 1U))));
        bufp->chgBit(oldp+845,((1U & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)));
        bufp->chgBit(oldp+846,(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact));
        bufp->chgIData(oldp+847,((0x7fffffU & ((IData)(1U) 
                                               + (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                  >> 2U)))),23);
        bufp->chgBit(oldp+848,((0x1aU < (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__shiftRightJam_io_shamt))));
        bufp->chgIData(oldp+849,((0x3ffffffU & ((((IData)(1U) 
                                                  << (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__shiftRightJam_io_shamt)) 
                                                 - (IData)(1U)) 
                                                | ((0x1aU 
                                                    < (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__shiftRightJam_io_shamt))
                                                    ? 0x3ffffffU
                                                    : 0U)))),26);
        bufp->chgBit(oldp+850,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn));
        bufp->chgCData(oldp+851,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_a_exp),8);
        bufp->chgIData(oldp+852,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_a_sig),24);
        bufp->chgCData(oldp+853,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_b_exp),8);
        bufp->chgIData(oldp+854,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_b_sig),24);
        bufp->chgBit(oldp+855,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_addSig));
        bufp->chgBit(oldp+856,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_tinyAdd));
        bufp->chgCData(oldp+857,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__shiftRightJam_io_shamt),5);
        bufp->chgBit(oldp+858,((1U == (0x1fU & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__diffExp)))));
        bufp->chgBit(oldp+859,((vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1 
                                >> 0x1fU)));
        bufp->chgCData(oldp+860,((0xffU & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+861,((0x7fffffU & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1)),23);
        bufp->chgBit(oldp+862,((vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1 
                                >> 0x1fU)));
        bufp->chgCData(oldp+863,((0xffU & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1 
                                           >> 0x17U))),8);
        bufp->chgIData(oldp+864,((0x7fffffU & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1)),23);
        bufp->chgBit(oldp+865,((0U != (0xffU & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+866,((0xffU == (0xffU & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+867,((0U != (0x7fffffU & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1))));
        bufp->chgBit(oldp+868,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1 
                                                     >> 0x17U))))))));
        bufp->chgBit(oldp+869,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1)))))));
        bufp->chgBit(oldp+870,(((~ (IData)((0U != (0xffU 
                                                   & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1 
                                                      >> 0x17U))))) 
                                & (0U != (0x7fffffU 
                                          & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1)))));
        bufp->chgBit(oldp+871,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fffffU 
                                                       & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1))))))));
        bufp->chgBit(oldp+872,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1))))));
        bufp->chgBit(oldp+873,((IData)(((0x7f800000U 
                                         == (0x7fc00000U 
                                             & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1))))));
        bufp->chgBit(oldp+874,((0U != (0xffU & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1 
                                                >> 0x17U)))));
        bufp->chgBit(oldp+875,((0xffU == (0xffU & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1 
                                                   >> 0x17U)))));
        bufp->chgBit(oldp+876,((0U != (0x7fffffU & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1))));
        bufp->chgBit(oldp+877,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0xffU 
                                                  & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1 
                                                     >> 0x17U))))))));
        bufp->chgBit(oldp+878,((1U & (~ (IData)((0U 
                                                 != 
                                                 (0x7fffffU 
                                                  & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1)))))));
        bufp->chgBit(oldp+879,(((~ (IData)((0U != (0xffU 
                                                   & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1 
                                                      >> 0x17U))))) 
                                & (0U != (0x7fffffU 
                                          & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1)))));
        bufp->chgBit(oldp+880,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fffffU 
                                                       & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1))))))));
        bufp->chgBit(oldp+881,((IData)(((0x7f800000U 
                                         == (0x7f800000U 
                                             & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1))))));
        bufp->chgBit(oldp+882,((IData)(((0x7f800000U 
                                         == (0x7fc00000U 
                                             & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1)) 
                                        & (0U != (0x7fffffU 
                                                  & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1))))));
        bufp->chgCData(oldp+883,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__raw_a_exp),8);
        bufp->chgIData(oldp+884,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__raw_a_sig),24);
        bufp->chgCData(oldp+885,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__raw_b_exp),8);
        bufp->chgIData(oldp+886,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__raw_b_sig),24);
        bufp->chgBit(oldp+887,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__needSwap));
        bufp->chgCData(oldp+888,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__diffExp),8);
        bufp->chgCData(oldp+889,((0x1fU & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__diffExp))),5);
        bufp->chgBit(oldp+890,((0x1aU < (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__diffExp))));
        bufp->chgBit(oldp+891,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel));
        bufp->chgBit(oldp+892,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__special_path_hasNaN));
        bufp->chgBit(oldp+893,(((IData)(vlSelf->DotProdUnit__DOT__a_flag_1_isInv) 
                                | (IData)(vlSelf->DotProdUnit__DOT__b_flag_1_isInv))));
        bufp->chgBit(oldp+894,(((IData)(vlSelf->DotProdUnit__DOT__a_flag_1_isInf) 
                                | (IData)(vlSelf->DotProdUnit__DOT__b_flag_1_isInf))));
        bufp->chgBit(oldp+895,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__special_path_inf_iv));
        bufp->chgBit(oldp+896,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__special_path_hasNaN) 
                                | ((IData)(vlSelf->DotProdUnit__DOT__a_flag_1_isInf) 
                                   | (IData)(vlSelf->DotProdUnit__DOT__b_flag_1_isInf)))));
        bufp->chgBit(oldp+897,((((IData)(vlSelf->DotProdUnit__DOT__a_flag_1_isInv) 
                                 | (IData)(vlSelf->DotProdUnit__DOT__b_flag_1_isInv)) 
                                | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__special_path_inf_iv))));
        bufp->chgIData(oldp+898,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__special_path_hasNaN) 
                                   | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__special_path_inf_iv))
                                   ? 0x7fc00000U : 
                                  (0x7f800000U | (((IData)(vlSelf->DotProdUnit__DOT__a_flag_1_isInf)
                                                    ? 
                                                   (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1 
                                                    >> 0x1fU)
                                                    : 
                                                   (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1 
                                                    >> 0x1fU)) 
                                                  << 0x1fU)))),32);
        bufp->chgCData(oldp+899,(((((IData)(vlSelf->DotProdUnit__DOT__a_flag_1_isInv) 
                                    | (IData)(vlSelf->DotProdUnit__DOT__b_flag_1_isInv)) 
                                   | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__special_path_inf_iv)) 
                                  << 4U)),5);
        bufp->chgIData(oldp+900,((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_a_sig 
                                  << 1U)),25);
        bufp->chgIData(oldp+901,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza_io_b),25);
        bufp->chgCData(oldp+902,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__io_lzc_lzc_io_out),5);
        bufp->chgBit(oldp+903,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector_io_y));
        bufp->chgBit(oldp+904,((1U & (~ (IData)((0U 
                                                 != vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder_io_f))))));
        bufp->chgBit(oldp+905,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__near_path_tininess_rounder__DOT__rounder_io_signIn));
        bufp->chgIData(oldp+906,((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                  << 2U)),27);
        bufp->chgBit(oldp+907,(((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                              >> 0x17U))) 
                                | (1U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                >> 0x17U))))));
        bufp->chgIData(oldp+908,((0x7fffffU & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                               >> 1U))),23);
        bufp->chgBit(oldp+909,((1U & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T)));
        bufp->chgBit(oldp+910,((1U & (~ (IData)((0U 
                                                 != (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_b_exp)))))));
        bufp->chgIData(oldp+911,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__resultSigComplementForm),26);
        bufp->chgBit(oldp+912,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__resultSigComplementForm 
                                      >> 0x19U))));
        bufp->chgIData(oldp+913,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__resultSigNoRound),25);
        bufp->chgCData(oldp+914,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__resultExpNoRound),8);
        bufp->chgBit(oldp+915,((0U == (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__resultExpNoRound))));
        bufp->chgBit(oldp+916,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__shiftLimit));
        bufp->chgCData(oldp+917,((0xffU & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__resultExpNoRound) 
                                           - (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__io_lzc_lzc_io_out)))),8);
        bufp->chgCData(oldp+918,((0xffU & (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__resultExpNoRound) 
                                            - (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__io_lzc_lzc_io_out)) 
                                           - (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector_io_y)))),8);
        bufp->chgCData(oldp+919,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__shiftLimit)
                                   ? 0U : (0xffU & 
                                           (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__resultExpNoRound) 
                                             - (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__io_lzc_lzc_io_out)) 
                                            - (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector_io_y))))),8);
        bufp->chgCData(oldp+920,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__sigShiftNum),8);
        bufp->chgIData(oldp+921,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__sig_s1),25);
        bufp->chgIData(oldp+922,((0x1ffffffU & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector_io_y)
                                                 ? 
                                                (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__sig_s1 
                                                 << 1U)
                                                 : vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__sig_s1))),25);
        bufp->chgIData(oldp+923,(((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0) 
                                    << 0x18U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1e5c2f4__0) 
                                                  << 0x17U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1de2a81__0) 
                                                     << 0x16U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ddae5e__0) 
                                                        << 0x15U) 
                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c186eb__0) 
                                                           << 0x14U) 
                                                          | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c59ef3__0) 
                                                              << 0x13U) 
                                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c9b7e6__0) 
                                                                 << 0x12U) 
                                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc133bf59__0) 
                                                                    << 0x11U) 
                                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc137964c__0) 
                                                                       << 0x10U) 
                                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13af6ea__0) 
                                                                          << 0xfU) 
                                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13ec59f__0) 
                                                                             << 0xeU) 
                                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1225580__0) 
                                                                                << 0xdU) 
                                                                               | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc126a535__0) 
                                                                                << 0xcU))))))))))))) 
                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12b80e9__0) 
                                      << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12fd1f4__0) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ece003__0) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc116b50e__0) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11a1021__0) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11f6654__0) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc103758b__0) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10742be__0) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ba7a6__0) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ff133__0) 
                                                                           << 2U) 
                                                                          | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc175800c__0) 
                                                                             << 1U))))))))))))),25);
        bufp->chgIData(oldp+924,(((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_h2dd0dfe3__0) 
                                    << 0x18U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dacef2f__0) 
                                                  << 0x17U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8119da__0) 
                                                     << 0x16U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d854375__0) 
                                                        << 0x15U) 
                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d88ba00__0) 
                                                           << 0x14U) 
                                                          | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8d732a__0) 
                                                              << 0x13U) 
                                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2db0aa3f__0) 
                                                                 << 0x12U) 
                                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0) 
                                                                    << 0x11U) 
                                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0) 
                                                                       << 0x10U) 
                                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0) 
                                                                          << 0xfU) 
                                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0) 
                                                                             << 0xeU) 
                                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0) 
                                                                                << 0xdU) 
                                                                               | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0) 
                                                                                << 0xcU))))))))))))) 
                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dec9530__0) 
                                      << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d10c4dd__0) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dd5f32a__0) 
                                                      << 9U) 
                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2ddfa237__0) 
                                                         << 8U) 
                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc36d7a__0) 
                                                            << 7U) 
                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc0558f__0) 
                                                               << 6U) 
                                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d3c9525__0) 
                                                                              << 1U) 
                                                                             | (1U 
                                                                                & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza_io_b)))))))))))))),25);
        bufp->chgIData(oldp+925,((((0x1000000U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7)) 
                                                  << 0x18U)) 
                                   | ((0x800000U & 
                                       ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7)) 
                                        << 0x17U)) 
                                      | ((0x400000U 
                                          & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7)) 
                                             << 0x16U)) 
                                         | ((0x200000U 
                                             & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7)) 
                                                << 0x15U)) 
                                            | ((0x100000U 
                                                & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7)) 
                                                   << 0x14U)) 
                                               | ((0x80000U 
                                                   & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7)) 
                                                      << 0x13U)) 
                                                  | ((0x40000U 
                                                      & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7)) 
                                                         << 0x12U)) 
                                                     | ((0x20000U 
                                                         & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)) 
                                                            << 0x11U)) 
                                                        | ((0x10000U 
                                                            & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)) 
                                                               << 0x10U)) 
                                                           | ((0x8000U 
                                                               & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)) 
                                                                  << 0xfU)) 
                                                              | ((0x4000U 
                                                                  & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)) 
                                                                     << 0xeU)) 
                                                                 | ((0x2000U 
                                                                     & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)) 
                                                                        << 0xdU)) 
                                                                    | (0x1000U 
                                                                       & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7)) 
                                                                          << 0xcU)))))))))))))) 
                                  | ((0x800U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7)) 
                                                << 0xbU)) 
                                     | ((0x400U & (
                                                   (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7)) 
                                                   << 0xaU)) 
                                        | ((0x200U 
                                            & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7)) 
                                               << 9U)) 
                                           | ((0x100U 
                                               & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7)) 
                                                  << 8U)) 
                                              | ((0x80U 
                                                  & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7)) 
                                                     << 7U)) 
                                                 | ((0x40U 
                                                     & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7)) 
                                                        << 6U)) 
                                                    | ((0x20U 
                                                        & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)) 
                                                           << 5U)) 
                                                       | ((0x10U 
                                                           & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)) 
                                                              << 4U)) 
                                                          | ((8U 
                                                              & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)) 
                                                                 << 3U)) 
                                                             | ((4U 
                                                                 & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_1_T_7)) 
                                                                    << 2U)) 
                                                                | ((2U 
                                                                    & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h8093e782__0)) 
                                                                       << 1U)) 
                                                                   | (1U 
                                                                      & (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza_io_b))))))))))))))),25);
        bufp->chgIData(oldp+926,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder_io_f),25);
        bufp->chgBit(oldp+927,((1U & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza_io_b)));
        bufp->chgBit(oldp+928,((1U & (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza_io_b))));
        bufp->chgBit(oldp+929,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc175800c__0));
        bufp->chgBit(oldp+930,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d3c9525__0));
        bufp->chgBit(oldp+931,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h8093e782__0)))));
        bufp->chgBit(oldp+932,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ff133__0));
        bufp->chgBit(oldp+933,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0));
        bufp->chgBit(oldp+934,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_1_T_7)))));
        bufp->chgBit(oldp+935,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ba7a6__0));
        bufp->chgBit(oldp+936,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0));
        bufp->chgBit(oldp+937,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)))));
        bufp->chgBit(oldp+938,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10742be__0));
        bufp->chgBit(oldp+939,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0));
        bufp->chgBit(oldp+940,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)))));
        bufp->chgBit(oldp+941,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc103758b__0));
        bufp->chgBit(oldp+942,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0));
        bufp->chgBit(oldp+943,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)))));
        bufp->chgBit(oldp+944,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11f6654__0));
        bufp->chgBit(oldp+945,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc0558f__0));
        bufp->chgBit(oldp+946,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7)))));
        bufp->chgBit(oldp+947,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11a1021__0));
        bufp->chgBit(oldp+948,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc36d7a__0));
        bufp->chgBit(oldp+949,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7)))));
        bufp->chgBit(oldp+950,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc116b50e__0));
        bufp->chgBit(oldp+951,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2ddfa237__0));
        bufp->chgBit(oldp+952,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7)))));
        bufp->chgBit(oldp+953,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ece003__0));
        bufp->chgBit(oldp+954,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dd5f32a__0));
        bufp->chgBit(oldp+955,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7)))));
        bufp->chgBit(oldp+956,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12fd1f4__0));
        bufp->chgBit(oldp+957,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d10c4dd__0));
        bufp->chgBit(oldp+958,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7)))));
        bufp->chgBit(oldp+959,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12b80e9__0));
        bufp->chgBit(oldp+960,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dec9530__0));
        bufp->chgBit(oldp+961,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7)))));
        bufp->chgBit(oldp+962,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc126a535__0));
        bufp->chgBit(oldp+963,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0));
        bufp->chgBit(oldp+964,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7)))));
        bufp->chgBit(oldp+965,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1225580__0));
        bufp->chgBit(oldp+966,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0));
        bufp->chgBit(oldp+967,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)))));
        bufp->chgBit(oldp+968,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13ec59f__0));
        bufp->chgBit(oldp+969,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0));
        bufp->chgBit(oldp+970,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)))));
        bufp->chgBit(oldp+971,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13af6ea__0));
        bufp->chgBit(oldp+972,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0));
        bufp->chgBit(oldp+973,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)))));
        bufp->chgBit(oldp+974,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc137964c__0));
        bufp->chgBit(oldp+975,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0));
        bufp->chgBit(oldp+976,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)))));
        bufp->chgBit(oldp+977,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc133bf59__0));
        bufp->chgBit(oldp+978,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0));
        bufp->chgBit(oldp+979,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)))));
        bufp->chgBit(oldp+980,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c9b7e6__0));
        bufp->chgBit(oldp+981,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2db0aa3f__0));
        bufp->chgBit(oldp+982,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7)))));
        bufp->chgBit(oldp+983,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c59ef3__0));
        bufp->chgBit(oldp+984,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8d732a__0));
        bufp->chgBit(oldp+985,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7)))));
        bufp->chgBit(oldp+986,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c186eb__0));
        bufp->chgBit(oldp+987,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d88ba00__0));
        bufp->chgBit(oldp+988,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7)))));
        bufp->chgBit(oldp+989,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ddae5e__0));
        bufp->chgBit(oldp+990,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d854375__0));
        bufp->chgBit(oldp+991,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7)))));
        bufp->chgBit(oldp+992,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1de2a81__0));
        bufp->chgBit(oldp+993,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8119da__0));
        bufp->chgBit(oldp+994,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7)))));
        bufp->chgBit(oldp+995,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1e5c2f4__0));
        bufp->chgBit(oldp+996,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dacef2f__0));
        bufp->chgBit(oldp+997,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7)))));
        bufp->chgBit(oldp+998,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0));
        bufp->chgBit(oldp+999,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_h2dd0dfe3__0));
        bufp->chgBit(oldp+1000,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7)))));
        bufp->chgCData(oldp+1001,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc103758b__0) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10742be__0) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ba7a6__0) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ff133__0) 
                                                     << 2U) 
                                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc175800c__0) 
                                                       << 1U)))))),6);
        bufp->chgSData(oldp+1002,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12b80e9__0) 
                                    << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12fd1f4__0) 
                                                 << 0xaU) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ece003__0) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc116b50e__0) 
                                                       << 8U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11a1021__0) 
                                                          << 7U) 
                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11f6654__0) 
                                                             << 6U) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc103758b__0) 
                                                                << 5U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10742be__0) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ba7a6__0) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ff133__0) 
                                                                         << 2U) 
                                                                        | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc175800c__0) 
                                                                           << 1U)))))))))))),12);
        bufp->chgCData(oldp+1003,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc133bf59__0) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc137964c__0) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13af6ea__0) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13ec59f__0) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1225580__0) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc126a535__0))))))),6);
        bufp->chgSData(oldp+1004,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0) 
                                    << 0xcU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1e5c2f4__0) 
                                                 << 0xbU) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1de2a81__0) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ddae5e__0) 
                                                       << 9U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c186eb__0) 
                                                          << 8U) 
                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c59ef3__0) 
                                                             << 7U) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c9b7e6__0) 
                                                                << 6U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc133bf59__0) 
                                                                   << 5U) 
                                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc137964c__0) 
                                                                      << 4U) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13af6ea__0) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13ec59f__0) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1225580__0) 
                                                                               << 1U) 
                                                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc126a535__0)))))))))))))),13);
        bufp->chgCData(oldp+1005,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d3c9525__0) 
                                                        << 1U) 
                                                       | (1U 
                                                          & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza_io_b))))))),6);
        bufp->chgSData(oldp+1006,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dec9530__0) 
                                    << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d10c4dd__0) 
                                                 << 0xaU) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dd5f32a__0) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2ddfa237__0) 
                                                       << 8U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc36d7a__0) 
                                                          << 7U) 
                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc0558f__0) 
                                                             << 6U) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0) 
                                                                << 5U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d3c9525__0) 
                                                                            << 1U) 
                                                                           | (1U 
                                                                              & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza_io_b))))))))))))),12);
        bufp->chgCData(oldp+1007,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0))))))),6);
        bufp->chgSData(oldp+1008,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_h2dd0dfe3__0) 
                                    << 0xcU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dacef2f__0) 
                                                 << 0xbU) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8119da__0) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d854375__0) 
                                                       << 9U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d88ba00__0) 
                                                          << 8U) 
                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8d732a__0) 
                                                             << 7U) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2db0aa3f__0) 
                                                                << 6U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0) 
                                                                   << 5U) 
                                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0) 
                                                                      << 4U) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0) 
                                                                               << 1U) 
                                                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0)))))))))))))),13);
        bufp->chgCData(oldp+1009,(((0x20U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)) 
                                             << 5U)) 
                                   | ((0x10U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)) 
                                                << 4U)) 
                                      | ((8U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_1_T_7)) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h8093e782__0)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza_io_b)))))))),6);
        bufp->chgSData(oldp+1010,(((0x800U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7)) 
                                              << 0xbU)) 
                                   | ((0x400U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7)) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7)) 
                                           << 9U)) 
                                         | ((0x100U 
                                             & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7)) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7)) 
                                                   << 7U)) 
                                               | ((0x40U 
                                                   & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7)) 
                                                      << 6U)) 
                                                  | ((0x20U 
                                                      & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_1_T_7)) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h8093e782__0)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza_io_b)))))))))))))),12);
        bufp->chgCData(oldp+1011,(((0x20U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)) 
                                             << 5U)) 
                                   | ((0x10U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)) 
                                                << 4U)) 
                                      | ((8U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7))))))))),6);
        bufp->chgSData(oldp+1012,(((0x1000U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7)) 
                                               << 0xcU)) 
                                   | ((0x800U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7)) 
                                                 << 0xbU)) 
                                      | ((0x400U & 
                                          ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7)) 
                                           << 0xaU)) 
                                         | ((0x200U 
                                             & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7)) 
                                                << 9U)) 
                                            | ((0x100U 
                                                & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7)) 
                                                   << 8U)) 
                                               | ((0x80U 
                                                   & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7)) 
                                                      << 7U)) 
                                                  | ((0x40U 
                                                      & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7)) 
                                                         << 6U)) 
                                                     | ((0x20U 
                                                         & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)) 
                                                            << 5U)) 
                                                        | ((0x10U 
                                                            & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)) 
                                                               << 4U)) 
                                                           | ((8U 
                                                               & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)) 
                                                                  << 3U)) 
                                                              | ((4U 
                                                                  & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)) 
                                                                     << 2U)) 
                                                                 | ((2U 
                                                                     & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7)))))))))))))))),13);
        bufp->chgCData(oldp+1013,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_22) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0)))),3);
        bufp->chgCData(oldp+1014,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_22) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h4411a1c1__0)))))),3);
        bufp->chgCData(oldp+1015,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_0),2);
        bufp->chgCData(oldp+1016,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_2),2);
        bufp->chgCData(oldp+1017,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_19) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_21)))),3);
        bufp->chgCData(oldp+1018,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_19) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_haa69a3db__0)))))),3);
        bufp->chgCData(oldp+1019,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_0))),2);
        bufp->chgCData(oldp+1020,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0))),2);
        bufp->chgCData(oldp+1021,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_16) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_18)))),3);
        bufp->chgCData(oldp+1022,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_16) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h8a0d6673__0)))))),3);
        bufp->chgCData(oldp+1023,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_0),2);
        bufp->chgCData(oldp+1024,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_2),2);
        bufp->chgCData(oldp+1025,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_13) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_15)))),3);
        bufp->chgCData(oldp+1026,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_13) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h27ccee37__0)))))),3);
        bufp->chgCData(oldp+1027,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_0),2);
        bufp->chgCData(oldp+1028,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_2),2);
        bufp->chgCData(oldp+1029,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_10) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_12)))),3);
        bufp->chgCData(oldp+1030,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_10) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h803f76e4__0)))))),3);
        bufp->chgCData(oldp+1031,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_0))),2);
        bufp->chgCData(oldp+1032,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_0))),2);
        bufp->chgCData(oldp+1033,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_7) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_9)))),3);
        bufp->chgCData(oldp+1034,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_7) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_ha74c8422__0)))))),3);
        bufp->chgCData(oldp+1035,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4_io_out_0),2);
        bufp->chgCData(oldp+1036,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4_io_out_2),2);
        bufp->chgCData(oldp+1037,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_4) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_6)))),3);
        bufp->chgCData(oldp+1038,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_4) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h0133aff4__0)))))),3);
        bufp->chgCData(oldp+1039,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_0),2);
        bufp->chgCData(oldp+1040,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_2),2);
        bufp->chgCData(oldp+1041,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_1) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_3)))),3);
        bufp->chgCData(oldp+1042,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_1) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_hb31c3312__0)))))),3);
        bufp->chgCData(oldp+1043,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_0))),2);
        bufp->chgCData(oldp+1044,(((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_1) 
                                     & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_hb31c3312__0)) 
                                        | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h2627e8d8__0))) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__zout_0))),2);
        bufp->chgCData(oldp+1045,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_0))),3);
        bufp->chgCData(oldp+1046,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_2))),3);
        bufp->chgCData(oldp+1047,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_0),2);
        bufp->chgCData(oldp+1048,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_2),2);
        bufp->chgCData(oldp+1049,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_1))),3);
        bufp->chgCData(oldp+1050,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_2) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_1))),3);
        bufp->chgCData(oldp+1051,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0))),2);
        bufp->chgCData(oldp+1052,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0))),2);
        bufp->chgCData(oldp+1053,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_0))),3);
        bufp->chgCData(oldp+1054,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_2))),3);
        bufp->chgCData(oldp+1055,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_0),2);
        bufp->chgCData(oldp+1056,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_2),2);
        bufp->chgCData(oldp+1057,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4_io_out_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_1))),3);
        bufp->chgCData(oldp+1058,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4_io_out_2) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_1))),3);
        bufp->chgCData(oldp+1059,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_0),2);
        bufp->chgCData(oldp+1060,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_2),2);
        bufp->chgCData(oldp+1061,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_0))),3);
        bufp->chgCData(oldp+1062,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__zout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_2))),3);
        bufp->chgCData(oldp+1063,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_0))),2);
        bufp->chgCData(oldp+1064,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_0))),2);
        bufp->chgCData(oldp+1065,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_0))),3);
        bufp->chgCData(oldp+1066,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_2))),3);
        bufp->chgCData(oldp+1067,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_0),2);
        bufp->chgCData(oldp+1068,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_2),2);
        bufp->chgCData(oldp+1069,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_1))),3);
        bufp->chgCData(oldp+1070,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_2) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_1))),3);
        bufp->chgCData(oldp+1071,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_0))),2);
        bufp->chgCData(oldp+1072,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_0))),2);
        bufp->chgCData(oldp+1073,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_0))),3);
        bufp->chgCData(oldp+1074,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_2))),3);
        bufp->chgCData(oldp+1075,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12_io_out_0),2);
        bufp->chgCData(oldp+1076,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12_io_out_2),2);
        bufp->chgCData(oldp+1077,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_1))),3);
        bufp->chgCData(oldp+1078,(((4U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__n_0)) 
                                          << 2U)) | 
                                   (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1) 
                                     << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_1)))),3);
        bufp->chgCData(oldp+1079,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13_io_out_0),2);
        bufp->chgCData(oldp+1080,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_0))),2);
        bufp->chgCData(oldp+1081,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_0))),3);
        bufp->chgCData(oldp+1082,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_2))),3);
        bufp->chgCData(oldp+1083,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_0),2);
        bufp->chgCData(oldp+1084,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_2),2);
        bufp->chgCData(oldp+1085,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12_io_out_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_1))),3);
        bufp->chgCData(oldp+1086,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12_io_out_2) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_1))),3);
        bufp->chgCData(oldp+1087,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_0))),2);
        bufp->chgCData(oldp+1088,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_0))),2);
        bufp->chgCData(oldp+1089,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_0))),3);
        bufp->chgCData(oldp+1090,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_2))),3);
        bufp->chgCData(oldp+1091,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_0),2);
        bufp->chgCData(oldp+1092,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_2),2);
        bufp->chgCData(oldp+1093,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13_io_out_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_1))),3);
        bufp->chgCData(oldp+1094,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_1) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__pout_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_1)))),3);
        bufp->chgCData(oldp+1095,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_0))),2);
        bufp->chgCData(oldp+1096,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_0))),2);
        bufp->chgCData(oldp+1097,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_0))),3);
        bufp->chgCData(oldp+1098,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_2))),3);
        bufp->chgCData(oldp+1099,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1) 
                                    << 1U) | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                                              | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1))))),2);
        bufp->chgCData(oldp+1100,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0))),2);
        bufp->chgCData(oldp+1101,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                                                 | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1)))))),3);
        bufp->chgCData(oldp+1102,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0)))),3);
        bufp->chgCData(oldp+1103,((((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_6__DOT___pout_1_T_7))) 
                                    << 1U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                                               | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                                  & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1))) 
                                              | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0) 
                                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1))))),2);
        bufp->chgCData(oldp+1104,(((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_6__DOT___pout_1_T_7)) 
                                    << 1U) | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0) 
                                              & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1)))),2);
        bufp->chgBit(oldp+1105,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__n_0));
        bufp->chgBit(oldp+1106,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__n_0)))));
        bufp->chgBit(oldp+1107,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_1));
        bufp->chgBit(oldp+1108,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_1_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ff133__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d3c9525__0))));
        bufp->chgBit(oldp+1109,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_1));
        bufp->chgBit(oldp+1110,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+1111,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ba7a6__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0))));
        bufp->chgBit(oldp+1112,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+1113,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_3));
        bufp->chgBit(oldp+1114,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10742be__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0))));
        bufp->chgBit(oldp+1115,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_hb31c3312__0)))));
        bufp->chgBit(oldp+1116,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_4));
        bufp->chgBit(oldp+1117,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc103758b__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0))));
        bufp->chgBit(oldp+1118,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_4));
        bufp->chgBit(oldp+1119,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+1120,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc0558f__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11f6654__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0))));
        bufp->chgBit(oldp+1121,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+1122,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_6));
        bufp->chgBit(oldp+1123,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc36d7a__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11a1021__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc0558f__0))));
        bufp->chgBit(oldp+1124,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h0133aff4__0)))));
        bufp->chgBit(oldp+1125,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_7));
        bufp->chgBit(oldp+1126,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2ddfa237__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc116b50e__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc36d7a__0))));
        bufp->chgBit(oldp+1127,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_7));
        bufp->chgBit(oldp+1128,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+1129,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dd5f32a__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ece003__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2ddfa237__0))));
        bufp->chgBit(oldp+1130,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+1131,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_9));
        bufp->chgBit(oldp+1132,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d10c4dd__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12fd1f4__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dd5f32a__0))));
        bufp->chgBit(oldp+1133,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_ha74c8422__0)))));
        bufp->chgBit(oldp+1134,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_10));
        bufp->chgBit(oldp+1135,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dec9530__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12b80e9__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d10c4dd__0))));
        bufp->chgBit(oldp+1136,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_10));
        bufp->chgBit(oldp+1137,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+1138,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc126a535__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dec9530__0))));
        bufp->chgBit(oldp+1139,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+1140,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_12));
        bufp->chgBit(oldp+1141,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1225580__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0))));
        bufp->chgBit(oldp+1142,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h803f76e4__0)))));
        bufp->chgBit(oldp+1143,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_13));
        bufp->chgBit(oldp+1144,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13ec59f__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0))));
        bufp->chgBit(oldp+1145,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_13));
        bufp->chgBit(oldp+1146,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+1147,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13af6ea__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0))));
        bufp->chgBit(oldp+1148,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+1149,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_15));
        bufp->chgBit(oldp+1150,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc137964c__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0))));
        bufp->chgBit(oldp+1151,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h27ccee37__0)))));
        bufp->chgBit(oldp+1152,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_16));
        bufp->chgBit(oldp+1153,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc133bf59__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0))));
        bufp->chgBit(oldp+1154,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_16));
        bufp->chgBit(oldp+1155,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+1156,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2db0aa3f__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c9b7e6__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0))));
        bufp->chgBit(oldp+1157,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+1158,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_18));
        bufp->chgBit(oldp+1159,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8d732a__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c59ef3__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2db0aa3f__0))));
        bufp->chgBit(oldp+1160,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h8a0d6673__0)))));
        bufp->chgBit(oldp+1161,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_19));
        bufp->chgBit(oldp+1162,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d88ba00__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c186eb__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8d732a__0))));
        bufp->chgBit(oldp+1163,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_19));
        bufp->chgBit(oldp+1164,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+1165,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d854375__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ddae5e__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d88ba00__0))));
        bufp->chgBit(oldp+1166,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+1167,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_21));
        bufp->chgBit(oldp+1168,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8119da__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1de2a81__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d854375__0))));
        bufp->chgBit(oldp+1169,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_haa69a3db__0)))));
        bufp->chgBit(oldp+1170,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_22));
        bufp->chgBit(oldp+1171,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dacef2f__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1e5c2f4__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8119da__0))));
        bufp->chgBit(oldp+1172,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_22));
        bufp->chgBit(oldp+1173,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+1174,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7)) 
                                  | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_h2dd0dfe3__0)) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dacef2f__0))));
        bufp->chgBit(oldp+1175,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+1176,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h4411a1c1__0)))));
        bufp->chgCData(oldp+1177,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_19) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_21) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_22) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h4b5b1e37__0) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0))))))),6);
        bufp->chgSData(oldp+1178,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_13) 
                                    << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h4b5b1e37__0) 
                                                 << 0xaU) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_15) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_16) 
                                                       << 8U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h4b5b1e37__0) 
                                                          << 7U) 
                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_18) 
                                                             << 6U) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_19) 
                                                                << 5U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h4b5b1e37__0) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_21) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_22) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h4b5b1e37__0) 
                                                                            << 1U) 
                                                                           | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0))))))))))))),12);
        bufp->chgCData(oldp+1179,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_7) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_9) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_10) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h4b5b1e37__0) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_12))))))),6);
        bufp->chgCData(oldp+1180,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_19) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 4U) 
                                              | ((8U 
                                                  & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_haa69a3db__0)) 
                                                     << 3U)) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_22) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h2627e8d8__0) 
                                                        << 1U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h4411a1c1__0))))))))),6);
        bufp->chgSData(oldp+1181,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_13) 
                                    << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h2627e8d8__0) 
                                                 << 0xaU) 
                                                | ((0x200U 
                                                    & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h27ccee37__0)) 
                                                       << 9U)) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_16) 
                                                       << 8U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h2627e8d8__0) 
                                                          << 7U) 
                                                         | ((0x40U 
                                                             & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h8a0d6673__0)) 
                                                                << 6U)) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_19) 
                                                                << 5U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h2627e8d8__0) 
                                                                   << 4U) 
                                                                  | ((8U 
                                                                      & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_haa69a3db__0)) 
                                                                         << 3U)) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_22) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h2627e8d8__0) 
                                                                            << 1U) 
                                                                           | (1U 
                                                                              & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h4411a1c1__0))))))))))))))),12);
        bufp->chgCData(oldp+1182,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_7) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 4U) 
                                              | ((8U 
                                                  & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_ha74c8422__0)) 
                                                     << 3U)) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_10) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h2627e8d8__0) 
                                                        << 1U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h803f76e4__0))))))))),6);
        bufp->chgCData(oldp+1183,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_22) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+1184,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_22) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+1185,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT__pout_0));
        bufp->chgBit(oldp+1186,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT__pout_1));
        bufp->chgBit(oldp+1187,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT__zout_0));
        bufp->chgBit(oldp+1188,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT__zout_1));
        bufp->chgCData(oldp+1189,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_19) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+1190,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_19) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+1191,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_0));
        bufp->chgBit(oldp+1192,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_1));
        bufp->chgBit(oldp+1193,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0));
        bufp->chgBit(oldp+1194,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_1));
        bufp->chgCData(oldp+1195,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_16) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+1196,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_16) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+1197,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT__pout_0));
        bufp->chgBit(oldp+1198,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT__pout_1));
        bufp->chgBit(oldp+1199,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT__zout_0));
        bufp->chgBit(oldp+1200,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT__zout_1));
        bufp->chgCData(oldp+1201,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_13) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+1202,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_13) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+1203,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT__pout_0));
        bufp->chgBit(oldp+1204,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT__pout_1));
        bufp->chgBit(oldp+1205,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT__zout_0));
        bufp->chgBit(oldp+1206,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT__zout_1));
        bufp->chgCData(oldp+1207,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_10) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+1208,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_10) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+1209,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_0));
        bufp->chgBit(oldp+1210,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_1));
        bufp->chgBit(oldp+1211,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_0));
        bufp->chgBit(oldp+1212,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_1));
        bufp->chgCData(oldp+1213,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_7) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+1214,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_7) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+1215,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT__pout_0));
        bufp->chgBit(oldp+1216,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT__pout_1));
        bufp->chgBit(oldp+1217,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT__zout_0));
        bufp->chgBit(oldp+1218,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT__zout_1));
        bufp->chgCData(oldp+1219,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_4) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+1220,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_4) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+1221,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT__pout_0));
        bufp->chgBit(oldp+1222,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT__pout_1));
        bufp->chgBit(oldp+1223,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT__zout_0));
        bufp->chgBit(oldp+1224,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT__zout_1));
        bufp->chgCData(oldp+1225,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+1226,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+1227,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_0));
        bufp->chgBit(oldp+1228,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1));
        bufp->chgBit(oldp+1229,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__zout_0));
        bufp->chgBit(oldp+1230,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_1) 
                                 & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_hb31c3312__0)) 
                                    | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h2627e8d8__0)))));
        bufp->chgCData(oldp+1231,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_0) 
                                    << 6U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_0) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_1) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_0) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_0)))))),8);
        bufp->chgCData(oldp+1232,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_2) 
                                    << 6U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_2) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_1) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_2)))))),8);
        bufp->chgCData(oldp+1233,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_0) 
                                               >> 1U)))),2);
        bufp->chgCData(oldp+1234,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_2) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+1235,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1__DOT__pout_0));
        bufp->chgBit(oldp+1236,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1__DOT__pout_1));
        bufp->chgBit(oldp+1237,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1__DOT__zout_0));
        bufp->chgBit(oldp+1238,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1__DOT__zout_1));
        bufp->chgBit(oldp+1239,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0));
        bufp->chgBit(oldp+1240,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_1));
        bufp->chgBit(oldp+1241,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0));
        bufp->chgBit(oldp+1242,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_1));
        bufp->chgCData(oldp+1243,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_0) 
                                               >> 1U)))),2);
        bufp->chgCData(oldp+1244,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_2) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+1245,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8__DOT__pout_0));
        bufp->chgBit(oldp+1246,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8__DOT__pout_1));
        bufp->chgBit(oldp+1247,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8__DOT__zout_0));
        bufp->chgBit(oldp+1248,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8__DOT__zout_1));
        bufp->chgBit(oldp+1249,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9__DOT__pout_0));
        bufp->chgBit(oldp+1250,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9__DOT__pout_1));
        bufp->chgBit(oldp+1251,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9__DOT__zout_0));
        bufp->chgBit(oldp+1252,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9__DOT__zout_1));
        bufp->chgCData(oldp+1253,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_0) 
                                               >> 1U)))),2);
        bufp->chgCData(oldp+1254,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__zout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_2) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+1255,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_0));
        bufp->chgBit(oldp+1256,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_1));
        bufp->chgBit(oldp+1257,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_0));
        bufp->chgBit(oldp+1258,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_1));
        bufp->chgCData(oldp+1259,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_0) 
                                    << 4U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_1) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0) 
                                                  << 2U) 
                                                 | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_0))))),6);
        bufp->chgCData(oldp+1260,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_2) 
                                    << 4U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_1) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0) 
                                                  << 2U) 
                                                 | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_2))))),6);
        bufp->chgCData(oldp+1261,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_0) 
                                               >> 1U)))),2);
        bufp->chgCData(oldp+1262,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_2) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+1263,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2__DOT__pout_0));
        bufp->chgBit(oldp+1264,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2__DOT__pout_1));
        bufp->chgBit(oldp+1265,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2__DOT__zout_0));
        bufp->chgBit(oldp+1266,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2__DOT__zout_1));
        bufp->chgBit(oldp+1267,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_0));
        bufp->chgBit(oldp+1268,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_1));
        bufp->chgBit(oldp+1269,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_0));
        bufp->chgBit(oldp+1270,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_1));
        bufp->chgCData(oldp+1271,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_0) 
                                               >> 1U)))),2);
        bufp->chgCData(oldp+1272,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_2) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+1273,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12__DOT__pout_0));
        bufp->chgBit(oldp+1274,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12__DOT__pout_1));
        bufp->chgBit(oldp+1275,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12__DOT__zout_0));
        bufp->chgBit(oldp+1276,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12__DOT__zout_1));
        bufp->chgCData(oldp+1277,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1),2);
        bufp->chgCData(oldp+1278,(((2U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__n_0)) 
                                          << 1U)) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1))),2);
        bufp->chgBit(oldp+1279,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__pout_0));
        bufp->chgBit(oldp+1280,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__pout_1));
        bufp->chgBit(oldp+1281,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_0));
        bufp->chgBit(oldp+1282,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_1));
        bufp->chgCData(oldp+1283,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_0) 
                                               >> 1U)))),2);
        bufp->chgCData(oldp+1284,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_2) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+1285,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3__DOT__pout_0));
        bufp->chgBit(oldp+1286,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3__DOT__pout_1));
        bufp->chgBit(oldp+1287,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3__DOT__zout_0));
        bufp->chgBit(oldp+1288,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3__DOT__zout_1));
        bufp->chgBit(oldp+1289,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_0));
        bufp->chgBit(oldp+1290,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_1));
        bufp->chgBit(oldp+1291,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_0));
        bufp->chgBit(oldp+1292,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_1));
        bufp->chgCData(oldp+1293,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_0) 
                                               >> 1U)))),2);
        bufp->chgCData(oldp+1294,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_2) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+1295,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0));
        bufp->chgBit(oldp+1296,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1));
        bufp->chgBit(oldp+1297,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0));
        bufp->chgBit(oldp+1298,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_1));
        bufp->chgCData(oldp+1299,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__pout_0))),2);
        bufp->chgBit(oldp+1300,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_0));
        bufp->chgBit(oldp+1301,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1));
        bufp->chgBit(oldp+1302,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_0));
        bufp->chgBit(oldp+1303,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1));
        bufp->chgCData(oldp+1304,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_0) 
                                               >> 1U)))),2);
        bufp->chgCData(oldp+1305,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_2) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+1306,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                                 | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1)))));
        bufp->chgBit(oldp+1307,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1));
        bufp->chgBit(oldp+1308,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0));
        bufp->chgBit(oldp+1309,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1));
        bufp->chgCData(oldp+1310,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1))),2);
        bufp->chgCData(oldp+1311,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1))),2);
        bufp->chgBit(oldp+1312,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                                  | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1))) 
                                 | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0) 
                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1)))));
        bufp->chgBit(oldp+1313,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0)) 
                                  & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1)) 
                                 | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_6__DOT___pout_1_T_7)))));
        bufp->chgBit(oldp+1314,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1))));
        bufp->chgBit(oldp+1315,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_6__DOT___pout_1_T_7))));
        bufp->chgBit(oldp+1316,(((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h8093e782__0) 
                                   & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza_io_b) 
                                  | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)) 
                                 | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10))));
        bufp->chgBit(oldp+1317,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_1));
        bufp->chgBit(oldp+1318,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_2));
        bufp->chgBit(oldp+1319,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_3));
        bufp->chgBit(oldp+1320,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_4));
        bufp->chgBit(oldp+1321,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_5));
        bufp->chgBit(oldp+1322,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_6));
        bufp->chgBit(oldp+1323,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_7));
        bufp->chgBit(oldp+1324,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_8));
        bufp->chgBit(oldp+1325,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_9));
        bufp->chgBit(oldp+1326,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_10));
        bufp->chgBit(oldp+1327,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_11));
        bufp->chgBit(oldp+1328,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_12));
        bufp->chgBit(oldp+1329,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_13));
        bufp->chgBit(oldp+1330,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_14));
        bufp->chgBit(oldp+1331,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_15));
        bufp->chgBit(oldp+1332,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_16));
        bufp->chgBit(oldp+1333,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_17));
        bufp->chgBit(oldp+1334,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_18));
        bufp->chgBit(oldp+1335,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_19));
        bufp->chgBit(oldp+1336,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_20));
        bufp->chgBit(oldp+1337,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_21));
        bufp->chgBit(oldp+1338,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_22));
        bufp->chgBit(oldp+1339,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_23));
        bufp->chgBit(oldp+1340,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_24));
        bufp->chgCData(oldp+1341,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_5) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_4) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_3) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_2) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_1) 
                                                        << 1U) 
                                                       | ((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h8093e782__0) 
                                                            & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza_io_b) 
                                                           | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)) 
                                                          | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)))))))),6);
        bufp->chgSData(oldp+1342,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_11) 
                                    << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_10) 
                                                 << 0xaU) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_9) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_8) 
                                                       << 8U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_7) 
                                                          << 7U) 
                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_6) 
                                                             << 6U) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_5) 
                                                                << 5U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_4) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_3) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_2) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_1) 
                                                                            << 1U) 
                                                                           | ((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__VdfgTmp_h8093e782__0) 
                                                                                & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza_io_b) 
                                                                               | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)) 
                                                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)))))))))))))),12);
        bufp->chgCData(oldp+1343,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_17) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_16) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_15) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_14) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_13) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_12))))))),6);
        bufp->chgSData(oldp+1344,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_24) 
                                    << 0xcU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_23) 
                                                 << 0xbU) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_22) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_21) 
                                                       << 9U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_20) 
                                                          << 8U) 
                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_19) 
                                                             << 7U) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_18) 
                                                                << 6U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_17) 
                                                                   << 5U) 
                                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_16) 
                                                                      << 4U) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_15) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_14) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_13) 
                                                                               << 1U) 
                                                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_12)))))))))))))),13);
        bufp->chgBit(oldp+1345,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                       >> 1U))));
        bufp->chgIData(oldp+1346,((0x7fffffU & ((IData)(1U) 
                                                + (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                   >> 1U)))),23);
        bufp->chgIData(oldp+1347,((0x7fffffU & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T)),23);
        bufp->chgIData(oldp+1348,((0x7fffffU & ((IData)(1U) 
                                                + vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T))),23);
        bufp->chgIData(oldp+1349,((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_b_sig 
                                   << 2U)),26);
        bufp->chgIData(oldp+1350,(((0x1aU < (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__shiftRightJam_io_shamt))
                                    ? 0U : (0x3ffffffU 
                                            & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_b_sig 
                                                << 2U) 
                                               >> (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__shiftRightJam_io_shamt))))),26);
        bufp->chgBit(oldp+1351,((0U != ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_b_sig 
                                         << 2U) & (
                                                   (((IData)(1U) 
                                                     << (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__shiftRightJam_io_shamt)) 
                                                    - (IData)(1U)) 
                                                   | ((0x1aU 
                                                       < (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__shiftRightJam_io_shamt))
                                                       ? 0x3ffffffU
                                                       : 0U))))));
        bufp->chgIData(oldp+1352,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig),27);
        bufp->chgIData(oldp+1353,((0x7fffffU & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                >> 3U))),23);
        bufp->chgBit(oldp+1354,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                       >> 2U))));
        bufp->chgBit(oldp+1355,((0U != (3U & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig))));
        bufp->chgBit(oldp+1356,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_rounder__DOT__inexact));
        bufp->chgBit(oldp+1357,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_a_exp)))))));
        bufp->chgBit(oldp+1358,((1U & ((~ (IData)((0U 
                                                   != (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_a_exp)))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_b_exp))))))));
        bufp->chgIData(oldp+1359,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT___neg_sigB_T),28);
        bufp->chgIData(oldp+1360,((0x8000000U | (0x7ffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT___neg_sigB_T))))),28);
        bufp->chgIData(oldp+1361,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_addSig)
                                    ? vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT___neg_sigB_T
                                    : (0x8000000U | 
                                       (0x7ffffffU 
                                        & ((IData)(1U) 
                                           + (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT___neg_sigB_T)))))),28);
        bufp->chgIData(oldp+1362,((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_a_sig 
                                   << 3U)),28);
        bufp->chgIData(oldp+1363,((0xfffffffU & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_a_sig 
                                                  << 3U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_addSig)
                                                   ? vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT___neg_sigB_T
                                                   : 
                                                  (0x8000000U 
                                                   | (0x7ffffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT___neg_sigB_T)))))))),28);
        bufp->chgIData(oldp+1364,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__result_sig_raw),28);
        bufp->chgBit(oldp+1365,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__result_sig_raw 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1366,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__result_sig_raw 
                                       >> 0x1aU))));
        bufp->chgCData(oldp+1367,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__resultExpNoRound),8);
        bufp->chgBit(oldp+1368,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_may_of));
        bufp->chgBit(oldp+1369,((0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__resultExpNoRound))));
        bufp->chgBit(oldp+1370,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                       >> 3U))));
        bufp->chgIData(oldp+1371,((0x7fffffU & ((IData)(1U) 
                                                + (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                   >> 3U)))),23);
        bufp->chgIData(oldp+1372,((0x7fffffU & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                >> 2U))),23);
        bufp->chgBit(oldp+1373,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                       >> 1U))));
        bufp->chgBit(oldp+1374,((1U & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)));
        bufp->chgBit(oldp+1375,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact));
        bufp->chgIData(oldp+1376,((0x7fffffU & ((IData)(1U) 
                                                + (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                   >> 2U)))),23);
        bufp->chgBit(oldp+1377,((0x1aU < (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__shiftRightJam_io_shamt))));
        bufp->chgIData(oldp+1378,((0x3ffffffU & ((((IData)(1U) 
                                                   << (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__shiftRightJam_io_shamt)) 
                                                  - (IData)(1U)) 
                                                 | ((0x1aU 
                                                     < (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__shiftRightJam_io_shamt))
                                                     ? 0x3ffffffU
                                                     : 0U)))),26);
        bufp->chgBit(oldp+1379,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn));
        bufp->chgCData(oldp+1380,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_a_exp),8);
        bufp->chgIData(oldp+1381,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_a_sig),24);
        bufp->chgCData(oldp+1382,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_b_exp),8);
        bufp->chgIData(oldp+1383,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_b_sig),24);
        bufp->chgBit(oldp+1384,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_addSig));
        bufp->chgBit(oldp+1385,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_tinyAdd));
        bufp->chgCData(oldp+1386,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__shiftRightJam_io_shamt),5);
        bufp->chgBit(oldp+1387,((1U == (0x1fU & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__diffExp)))));
        bufp->chgBit(oldp+1388,((vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 
                                 >> 0x1fU)));
        bufp->chgCData(oldp+1389,((0xffU & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 
                                            >> 0x17U))),8);
        bufp->chgIData(oldp+1390,((0x7fffffU & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2)),23);
        bufp->chgBit(oldp+1391,((vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 
                                 >> 0x1fU)));
        bufp->chgCData(oldp+1392,((0xffU & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 
                                            >> 0x17U))),8);
        bufp->chgIData(oldp+1393,((0x7fffffU & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2)),23);
        bufp->chgBit(oldp+1394,((0U != (0xffU & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 
                                                 >> 0x17U)))));
        bufp->chgBit(oldp+1395,((0xffU == (0xffU & 
                                           (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 
                                            >> 0x17U)))));
        bufp->chgBit(oldp+1396,((0U != (0x7fffffU & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2))));
        bufp->chgBit(oldp+1397,((1U & (~ (IData)((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 
                                                      >> 0x17U))))))));
        bufp->chgBit(oldp+1398,((1U & (~ (IData)((0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2)))))));
        bufp->chgBit(oldp+1399,(((~ (IData)((0U != 
                                             (0xffU 
                                              & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 
                                                 >> 0x17U))))) 
                                 & (0U != (0x7fffffU 
                                           & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2)))));
        bufp->chgBit(oldp+1400,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_a___05FisInf));
        bufp->chgBit(oldp+1401,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_a___05FisNaN));
        bufp->chgBit(oldp+1402,(((~ (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 
                                     >> 0x16U)) & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_a___05FisNaN))));
        bufp->chgBit(oldp+1403,((0U != (0xffU & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 
                                                 >> 0x17U)))));
        bufp->chgBit(oldp+1404,((0xffU == (0xffU & 
                                           (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 
                                            >> 0x17U)))));
        bufp->chgBit(oldp+1405,((0U != (0x7fffffU & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2))));
        bufp->chgBit(oldp+1406,((1U & (~ (IData)((0U 
                                                  != 
                                                  (0xffU 
                                                   & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 
                                                      >> 0x17U))))))));
        bufp->chgBit(oldp+1407,((1U & (~ (IData)((0U 
                                                  != 
                                                  (0x7fffffU 
                                                   & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2)))))));
        bufp->chgBit(oldp+1408,(((~ (IData)((0U != 
                                             (0xffU 
                                              & (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 
                                                 >> 0x17U))))) 
                                 & (0U != (0x7fffffU 
                                           & vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2)))));
        bufp->chgBit(oldp+1409,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_b___05FisInf));
        bufp->chgBit(oldp+1410,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_b___05FisNaN));
        bufp->chgBit(oldp+1411,(((~ (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 
                                     >> 0x16U)) & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_b___05FisNaN))));
        bufp->chgCData(oldp+1412,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__raw_a_exp),8);
        bufp->chgIData(oldp+1413,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__raw_a_sig),24);
        bufp->chgCData(oldp+1414,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__raw_b_exp),8);
        bufp->chgIData(oldp+1415,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__raw_b_sig),24);
        bufp->chgBit(oldp+1416,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__needSwap));
        bufp->chgCData(oldp+1417,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__diffExp),8);
        bufp->chgCData(oldp+1418,((0x1fU & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__diffExp))),5);
        bufp->chgBit(oldp+1419,((0x1aU < (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__diffExp))));
        bufp->chgBit(oldp+1420,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel));
        bufp->chgBit(oldp+1421,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__special_path_hasNaN));
        bufp->chgBit(oldp+1422,((((~ (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 
                                      >> 0x16U)) & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_a___05FisNaN)) 
                                 | ((~ (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 
                                        >> 0x16U)) 
                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_b___05FisNaN)))));
        bufp->chgBit(oldp+1423,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_a___05FisInf) 
                                 | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_b___05FisInf))));
        bufp->chgBit(oldp+1424,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__special_path_inf_iv));
        bufp->chgBit(oldp+1425,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__special_case_happen));
        bufp->chgBit(oldp+1426,(((((~ (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 
                                       >> 0x16U)) & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_a___05FisNaN)) 
                                  | ((~ (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 
                                         >> 0x16U)) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_b___05FisNaN))) 
                                 | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__special_path_inf_iv))));
        bufp->chgIData(oldp+1427,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__special_path_hasNaN) 
                                    | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__special_path_inf_iv))
                                    ? 0x7fc00000U : 
                                   (0x7f800000U | (
                                                   ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_a___05FisInf)
                                                     ? 
                                                    (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 
                                                     >> 0x1fU)
                                                     : 
                                                    (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 
                                                     >> 0x1fU)) 
                                                   << 0x1fU)))),32);
        bufp->chgCData(oldp+1428,((((((~ (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 
                                          >> 0x16U)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_a___05FisNaN)) 
                                     | ((~ (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 
                                            >> 0x16U)) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_b___05FisNaN))) 
                                    | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__special_path_inf_iv)) 
                                   << 4U)),5);
        bufp->chgIData(oldp+1429,((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_a_sig 
                                   << 1U)),25);
        bufp->chgIData(oldp+1430,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza_io_b),25);
        bufp->chgCData(oldp+1431,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__io_lzc_lzc_io_out),5);
        bufp->chgBit(oldp+1432,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector_io_y));
        bufp->chgBit(oldp+1433,((1U & (~ (IData)((0U 
                                                  != vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder_io_f))))));
        bufp->chgBit(oldp+1434,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__near_path_tininess_rounder__DOT__rounder_io_signIn));
        bufp->chgIData(oldp+1435,((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                   << 2U)),27);
        bufp->chgBit(oldp+1436,(((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                               >> 0x17U))) 
                                 | (1U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                 >> 0x17U))))));
        bufp->chgIData(oldp+1437,((0x7fffffU & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                >> 1U))),23);
        bufp->chgBit(oldp+1438,((1U & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T)));
        bufp->chgBit(oldp+1439,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_b_exp)))))));
        bufp->chgIData(oldp+1440,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__resultSigComplementForm),26);
        bufp->chgBit(oldp+1441,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__resultSigComplementForm 
                                       >> 0x19U))));
        bufp->chgIData(oldp+1442,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__resultSigNoRound),25);
        bufp->chgCData(oldp+1443,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__resultExpNoRound),8);
        bufp->chgBit(oldp+1444,((0U == (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__resultExpNoRound))));
        bufp->chgBit(oldp+1445,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__shiftLimit));
        bufp->chgCData(oldp+1446,((0xffU & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__resultExpNoRound) 
                                            - (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__io_lzc_lzc_io_out)))),8);
        bufp->chgCData(oldp+1447,((0xffU & (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__resultExpNoRound) 
                                             - (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__io_lzc_lzc_io_out)) 
                                            - (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector_io_y)))),8);
        bufp->chgCData(oldp+1448,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__resultExpNoRound) 
                                              - (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__io_lzc_lzc_io_out)) 
                                             - (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector_io_y))))),8);
        bufp->chgCData(oldp+1449,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__sigShiftNum),8);
        bufp->chgIData(oldp+1450,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__sig_s1),25);
        bufp->chgIData(oldp+1451,((0x1ffffffU & ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector_io_y)
                                                  ? 
                                                 (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__sig_s1 
                                                  << 1U)
                                                  : vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__sig_s1))),25);
        bufp->chgIData(oldp+1452,(((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0) 
                                     << 0x18U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1e5c2f4__0) 
                                                   << 0x17U) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1de2a81__0) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ddae5e__0) 
                                                         << 0x15U) 
                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c186eb__0) 
                                                            << 0x14U) 
                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c59ef3__0) 
                                                               << 0x13U) 
                                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c9b7e6__0) 
                                                                  << 0x12U) 
                                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc133bf59__0) 
                                                                     << 0x11U) 
                                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc137964c__0) 
                                                                        << 0x10U) 
                                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13af6ea__0) 
                                                                           << 0xfU) 
                                                                          | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13ec59f__0) 
                                                                              << 0xeU) 
                                                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1225580__0) 
                                                                                << 0xdU) 
                                                                                | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc126a535__0) 
                                                                                << 0xcU))))))))))))) 
                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12b80e9__0) 
                                       << 0xbU) | (
                                                   ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12fd1f4__0) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ece003__0) 
                                                       << 9U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc116b50e__0) 
                                                          << 8U) 
                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11a1021__0) 
                                                             << 7U) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11f6654__0) 
                                                                << 6U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc103758b__0) 
                                                                   << 5U) 
                                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10742be__0) 
                                                                      << 4U) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ba7a6__0) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ff133__0) 
                                                                            << 2U) 
                                                                           | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc175800c__0) 
                                                                              << 1U))))))))))))),25);
        bufp->chgIData(oldp+1453,(((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_h2dd0dfe3__0) 
                                     << 0x18U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dacef2f__0) 
                                                   << 0x17U) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8119da__0) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d854375__0) 
                                                         << 0x15U) 
                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d88ba00__0) 
                                                            << 0x14U) 
                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8d732a__0) 
                                                               << 0x13U) 
                                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2db0aa3f__0) 
                                                                  << 0x12U) 
                                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0) 
                                                                     << 0x11U) 
                                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0) 
                                                                        << 0x10U) 
                                                                       | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0) 
                                                                           << 0xfU) 
                                                                          | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0) 
                                                                              << 0xeU) 
                                                                             | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0) 
                                                                                << 0xdU) 
                                                                                | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0) 
                                                                                << 0xcU))))))))))))) 
                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dec9530__0) 
                                       << 0xbU) | (
                                                   ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d10c4dd__0) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dd5f32a__0) 
                                                       << 9U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2ddfa237__0) 
                                                          << 8U) 
                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc36d7a__0) 
                                                             << 7U) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc0558f__0) 
                                                                << 6U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0) 
                                                                   << 5U) 
                                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0) 
                                                                      << 4U) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d3c9525__0) 
                                                                               << 1U) 
                                                                              | (1U 
                                                                                & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza_io_b)))))))))))))),25);
        bufp->chgIData(oldp+1454,((((0x1000000U & (
                                                   (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7)) 
                                                   << 0x18U)) 
                                    | ((0x800000U & 
                                        ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7)) 
                                         << 0x17U)) 
                                       | ((0x400000U 
                                           & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7)) 
                                              << 0x16U)) 
                                          | ((0x200000U 
                                              & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7)) 
                                                 << 0x15U)) 
                                             | ((0x100000U 
                                                 & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7)) 
                                                    << 0x14U)) 
                                                | ((0x80000U 
                                                    & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7)) 
                                                       << 0x13U)) 
                                                   | ((0x40000U 
                                                       & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7)) 
                                                          << 0x12U)) 
                                                      | ((0x20000U 
                                                          & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)) 
                                                             << 0x11U)) 
                                                         | ((0x10000U 
                                                             & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)) 
                                                                << 0x10U)) 
                                                            | ((0x8000U 
                                                                & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)) 
                                                                   << 0xfU)) 
                                                               | ((0x4000U 
                                                                   & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)) 
                                                                      << 0xeU)) 
                                                                  | ((0x2000U 
                                                                      & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)) 
                                                                         << 0xdU)) 
                                                                     | (0x1000U 
                                                                        & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7)) 
                                                                           << 0xcU)))))))))))))) 
                                   | ((0x800U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7)) 
                                                 << 0xbU)) 
                                      | ((0x400U & 
                                          ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7)) 
                                           << 0xaU)) 
                                         | ((0x200U 
                                             & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7)) 
                                                << 9U)) 
                                            | ((0x100U 
                                                & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7)) 
                                                   << 8U)) 
                                               | ((0x80U 
                                                   & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7)) 
                                                      << 7U)) 
                                                  | ((0x40U 
                                                      & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7)) 
                                                         << 6U)) 
                                                     | ((0x20U 
                                                         & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)) 
                                                            << 5U)) 
                                                        | ((0x10U 
                                                            & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)) 
                                                               << 4U)) 
                                                           | ((8U 
                                                               & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)) 
                                                                  << 3U)) 
                                                              | ((4U 
                                                                  & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_1_T_7)) 
                                                                     << 2U)) 
                                                                 | ((2U 
                                                                     & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h8093e782__0)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza_io_b))))))))))))))),25);
        bufp->chgIData(oldp+1455,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder_io_f),25);
        bufp->chgBit(oldp+1456,((1U & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza_io_b)));
        bufp->chgBit(oldp+1457,((1U & (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza_io_b))));
        bufp->chgBit(oldp+1458,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc175800c__0));
        bufp->chgBit(oldp+1459,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d3c9525__0));
        bufp->chgBit(oldp+1460,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h8093e782__0)))));
        bufp->chgBit(oldp+1461,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ff133__0));
        bufp->chgBit(oldp+1462,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0));
        bufp->chgBit(oldp+1463,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_1_T_7)))));
        bufp->chgBit(oldp+1464,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ba7a6__0));
        bufp->chgBit(oldp+1465,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0));
        bufp->chgBit(oldp+1466,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)))));
        bufp->chgBit(oldp+1467,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10742be__0));
        bufp->chgBit(oldp+1468,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0));
        bufp->chgBit(oldp+1469,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)))));
        bufp->chgBit(oldp+1470,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc103758b__0));
        bufp->chgBit(oldp+1471,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0));
        bufp->chgBit(oldp+1472,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)))));
        bufp->chgBit(oldp+1473,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11f6654__0));
        bufp->chgBit(oldp+1474,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc0558f__0));
        bufp->chgBit(oldp+1475,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7)))));
        bufp->chgBit(oldp+1476,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11a1021__0));
        bufp->chgBit(oldp+1477,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc36d7a__0));
        bufp->chgBit(oldp+1478,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7)))));
        bufp->chgBit(oldp+1479,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc116b50e__0));
        bufp->chgBit(oldp+1480,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2ddfa237__0));
        bufp->chgBit(oldp+1481,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7)))));
        bufp->chgBit(oldp+1482,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ece003__0));
        bufp->chgBit(oldp+1483,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dd5f32a__0));
        bufp->chgBit(oldp+1484,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7)))));
        bufp->chgBit(oldp+1485,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12fd1f4__0));
        bufp->chgBit(oldp+1486,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d10c4dd__0));
        bufp->chgBit(oldp+1487,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7)))));
        bufp->chgBit(oldp+1488,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12b80e9__0));
        bufp->chgBit(oldp+1489,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dec9530__0));
        bufp->chgBit(oldp+1490,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7)))));
        bufp->chgBit(oldp+1491,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc126a535__0));
        bufp->chgBit(oldp+1492,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0));
        bufp->chgBit(oldp+1493,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7)))));
        bufp->chgBit(oldp+1494,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1225580__0));
        bufp->chgBit(oldp+1495,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0));
        bufp->chgBit(oldp+1496,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)))));
        bufp->chgBit(oldp+1497,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13ec59f__0));
        bufp->chgBit(oldp+1498,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0));
        bufp->chgBit(oldp+1499,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)))));
        bufp->chgBit(oldp+1500,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13af6ea__0));
        bufp->chgBit(oldp+1501,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0));
        bufp->chgBit(oldp+1502,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)))));
        bufp->chgBit(oldp+1503,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc137964c__0));
        bufp->chgBit(oldp+1504,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0));
        bufp->chgBit(oldp+1505,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)))));
        bufp->chgBit(oldp+1506,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc133bf59__0));
        bufp->chgBit(oldp+1507,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0));
        bufp->chgBit(oldp+1508,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)))));
        bufp->chgBit(oldp+1509,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c9b7e6__0));
        bufp->chgBit(oldp+1510,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2db0aa3f__0));
        bufp->chgBit(oldp+1511,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7)))));
        bufp->chgBit(oldp+1512,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c59ef3__0));
        bufp->chgBit(oldp+1513,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8d732a__0));
        bufp->chgBit(oldp+1514,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7)))));
        bufp->chgBit(oldp+1515,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c186eb__0));
        bufp->chgBit(oldp+1516,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d88ba00__0));
        bufp->chgBit(oldp+1517,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7)))));
        bufp->chgBit(oldp+1518,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ddae5e__0));
        bufp->chgBit(oldp+1519,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d854375__0));
        bufp->chgBit(oldp+1520,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7)))));
        bufp->chgBit(oldp+1521,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1de2a81__0));
        bufp->chgBit(oldp+1522,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8119da__0));
        bufp->chgBit(oldp+1523,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7)))));
        bufp->chgBit(oldp+1524,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1e5c2f4__0));
        bufp->chgBit(oldp+1525,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dacef2f__0));
        bufp->chgBit(oldp+1526,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7)))));
        bufp->chgBit(oldp+1527,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0));
        bufp->chgBit(oldp+1528,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_h2dd0dfe3__0));
        bufp->chgBit(oldp+1529,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7)))));
        bufp->chgCData(oldp+1530,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc103758b__0) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10742be__0) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ba7a6__0) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ff133__0) 
                                                     << 2U) 
                                                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc175800c__0) 
                                                       << 1U)))))),6);
        bufp->chgSData(oldp+1531,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12b80e9__0) 
                                    << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12fd1f4__0) 
                                                 << 0xaU) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ece003__0) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc116b50e__0) 
                                                       << 8U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11a1021__0) 
                                                          << 7U) 
                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11f6654__0) 
                                                             << 6U) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc103758b__0) 
                                                                << 5U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10742be__0) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ba7a6__0) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ff133__0) 
                                                                         << 2U) 
                                                                        | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc175800c__0) 
                                                                           << 1U)))))))))))),12);
        bufp->chgCData(oldp+1532,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc133bf59__0) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc137964c__0) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13af6ea__0) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13ec59f__0) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1225580__0) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc126a535__0))))))),6);
        bufp->chgSData(oldp+1533,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0) 
                                    << 0xcU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1e5c2f4__0) 
                                                 << 0xbU) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1de2a81__0) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ddae5e__0) 
                                                       << 9U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c186eb__0) 
                                                          << 8U) 
                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c59ef3__0) 
                                                             << 7U) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c9b7e6__0) 
                                                                << 6U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc133bf59__0) 
                                                                   << 5U) 
                                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc137964c__0) 
                                                                      << 4U) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13af6ea__0) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13ec59f__0) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1225580__0) 
                                                                               << 1U) 
                                                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc126a535__0)))))))))))))),13);
        bufp->chgCData(oldp+1534,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d3c9525__0) 
                                                        << 1U) 
                                                       | (1U 
                                                          & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza_io_b))))))),6);
        bufp->chgSData(oldp+1535,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dec9530__0) 
                                    << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d10c4dd__0) 
                                                 << 0xaU) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dd5f32a__0) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2ddfa237__0) 
                                                       << 8U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc36d7a__0) 
                                                          << 7U) 
                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc0558f__0) 
                                                             << 6U) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0) 
                                                                << 5U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d3c9525__0) 
                                                                            << 1U) 
                                                                           | (1U 
                                                                              & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza_io_b))))))))))))),12);
        bufp->chgCData(oldp+1536,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0))))))),6);
        bufp->chgSData(oldp+1537,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_h2dd0dfe3__0) 
                                    << 0xcU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dacef2f__0) 
                                                 << 0xbU) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8119da__0) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d854375__0) 
                                                       << 9U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d88ba00__0) 
                                                          << 8U) 
                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8d732a__0) 
                                                             << 7U) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2db0aa3f__0) 
                                                                << 6U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0) 
                                                                   << 5U) 
                                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0) 
                                                                      << 4U) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0) 
                                                                               << 1U) 
                                                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0)))))))))))))),13);
        bufp->chgCData(oldp+1538,(((0x20U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)) 
                                             << 5U)) 
                                   | ((0x10U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)) 
                                                << 4U)) 
                                      | ((8U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_1_T_7)) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h8093e782__0)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza_io_b)))))))),6);
        bufp->chgSData(oldp+1539,(((0x800U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7)) 
                                              << 0xbU)) 
                                   | ((0x400U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7)) 
                                                 << 0xaU)) 
                                      | ((0x200U & 
                                          ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7)) 
                                           << 9U)) 
                                         | ((0x100U 
                                             & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7)) 
                                                << 8U)) 
                                            | ((0x80U 
                                                & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7)) 
                                                   << 7U)) 
                                               | ((0x40U 
                                                   & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7)) 
                                                      << 6U)) 
                                                  | ((0x20U 
                                                      & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)) 
                                                         << 5U)) 
                                                     | ((0x10U 
                                                         & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)) 
                                                            << 4U)) 
                                                        | ((8U 
                                                            & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)) 
                                                               << 3U)) 
                                                           | ((4U 
                                                               & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_1_T_7)) 
                                                                  << 2U)) 
                                                              | ((2U 
                                                                  & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h8093e782__0)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza_io_b)))))))))))))),12);
        bufp->chgCData(oldp+1540,(((0x20U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)) 
                                             << 5U)) 
                                   | ((0x10U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)) 
                                                << 4U)) 
                                      | ((8U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)) 
                                                << 3U)) 
                                         | ((4U & (
                                                   (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)) 
                                                   << 2U)) 
                                            | ((2U 
                                                & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)) 
                                                   << 1U)) 
                                               | (1U 
                                                  & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7))))))))),6);
        bufp->chgSData(oldp+1541,(((0x1000U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7)) 
                                               << 0xcU)) 
                                   | ((0x800U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7)) 
                                                 << 0xbU)) 
                                      | ((0x400U & 
                                          ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7)) 
                                           << 0xaU)) 
                                         | ((0x200U 
                                             & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7)) 
                                                << 9U)) 
                                            | ((0x100U 
                                                & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7)) 
                                                   << 8U)) 
                                               | ((0x80U 
                                                   & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7)) 
                                                      << 7U)) 
                                                  | ((0x40U 
                                                      & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7)) 
                                                         << 6U)) 
                                                     | ((0x20U 
                                                         & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)) 
                                                            << 5U)) 
                                                        | ((0x10U 
                                                            & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)) 
                                                               << 4U)) 
                                                           | ((8U 
                                                               & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)) 
                                                                  << 3U)) 
                                                              | ((4U 
                                                                  & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)) 
                                                                     << 2U)) 
                                                                 | ((2U 
                                                                     & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7)))))))))))))))),13);
        bufp->chgCData(oldp+1542,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_22) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0)))),3);
        bufp->chgCData(oldp+1543,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_22) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h4411a1c1__0)))))),3);
        bufp->chgCData(oldp+1544,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_0),2);
        bufp->chgCData(oldp+1545,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_2),2);
        bufp->chgCData(oldp+1546,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_19) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_21)))),3);
        bufp->chgCData(oldp+1547,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_19) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_haa69a3db__0)))))),3);
        bufp->chgCData(oldp+1548,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_0))),2);
        bufp->chgCData(oldp+1549,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0))),2);
        bufp->chgCData(oldp+1550,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_16) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_18)))),3);
        bufp->chgCData(oldp+1551,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_16) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h8a0d6673__0)))))),3);
        bufp->chgCData(oldp+1552,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_0),2);
        bufp->chgCData(oldp+1553,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_2),2);
        bufp->chgCData(oldp+1554,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_13) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_15)))),3);
        bufp->chgCData(oldp+1555,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_13) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h27ccee37__0)))))),3);
        bufp->chgCData(oldp+1556,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_0),2);
        bufp->chgCData(oldp+1557,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_2),2);
        bufp->chgCData(oldp+1558,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_10) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_12)))),3);
        bufp->chgCData(oldp+1559,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_10) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h803f76e4__0)))))),3);
        bufp->chgCData(oldp+1560,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_0))),2);
        bufp->chgCData(oldp+1561,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_0))),2);
        bufp->chgCData(oldp+1562,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_7) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_9)))),3);
        bufp->chgCData(oldp+1563,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_7) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_ha74c8422__0)))))),3);
        bufp->chgCData(oldp+1564,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4_io_out_0),2);
        bufp->chgCData(oldp+1565,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4_io_out_2),2);
        bufp->chgCData(oldp+1566,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_4) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_6)))),3);
        bufp->chgCData(oldp+1567,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_4) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h0133aff4__0)))))),3);
        bufp->chgCData(oldp+1568,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_0),2);
        bufp->chgCData(oldp+1569,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_2),2);
        bufp->chgCData(oldp+1570,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_1) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_3)))),3);
        bufp->chgCData(oldp+1571,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_1) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_hb31c3312__0)))))),3);
        bufp->chgCData(oldp+1572,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_0))),2);
        bufp->chgCData(oldp+1573,(((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_1) 
                                     & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_hb31c3312__0)) 
                                        | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h2627e8d8__0))) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__zout_0))),2);
        bufp->chgCData(oldp+1574,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_0))),3);
        bufp->chgCData(oldp+1575,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_2))),3);
        bufp->chgCData(oldp+1576,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_0),2);
        bufp->chgCData(oldp+1577,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_2),2);
        bufp->chgCData(oldp+1578,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_1))),3);
        bufp->chgCData(oldp+1579,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_2) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_1))),3);
        bufp->chgCData(oldp+1580,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0))),2);
        bufp->chgCData(oldp+1581,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0))),2);
        bufp->chgCData(oldp+1582,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_0))),3);
        bufp->chgCData(oldp+1583,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_2))),3);
        bufp->chgCData(oldp+1584,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_0),2);
        bufp->chgCData(oldp+1585,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_2),2);
        bufp->chgCData(oldp+1586,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4_io_out_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_1))),3);
        bufp->chgCData(oldp+1587,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4_io_out_2) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_1))),3);
        bufp->chgCData(oldp+1588,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_0),2);
        bufp->chgCData(oldp+1589,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_2),2);
        bufp->chgCData(oldp+1590,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_0))),3);
        bufp->chgCData(oldp+1591,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__zout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_2))),3);
        bufp->chgCData(oldp+1592,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_0))),2);
        bufp->chgCData(oldp+1593,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_0))),2);
        bufp->chgCData(oldp+1594,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_0))),3);
        bufp->chgCData(oldp+1595,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_2))),3);
        bufp->chgCData(oldp+1596,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_0),2);
        bufp->chgCData(oldp+1597,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_2),2);
        bufp->chgCData(oldp+1598,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_1))),3);
        bufp->chgCData(oldp+1599,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_2) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_1))),3);
        bufp->chgCData(oldp+1600,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_0))),2);
        bufp->chgCData(oldp+1601,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_0))),2);
        bufp->chgCData(oldp+1602,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_0))),3);
        bufp->chgCData(oldp+1603,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_2))),3);
        bufp->chgCData(oldp+1604,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12_io_out_0),2);
        bufp->chgCData(oldp+1605,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12_io_out_2),2);
        bufp->chgCData(oldp+1606,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_1))),3);
        bufp->chgCData(oldp+1607,(((4U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__n_0)) 
                                          << 2U)) | 
                                   (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1) 
                                     << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_1)))),3);
        bufp->chgCData(oldp+1608,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13_io_out_0),2);
        bufp->chgCData(oldp+1609,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_0))),2);
        bufp->chgCData(oldp+1610,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_0))),3);
        bufp->chgCData(oldp+1611,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_2))),3);
        bufp->chgCData(oldp+1612,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_0),2);
        bufp->chgCData(oldp+1613,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_2),2);
        bufp->chgCData(oldp+1614,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12_io_out_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_1))),3);
        bufp->chgCData(oldp+1615,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12_io_out_2) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_1))),3);
        bufp->chgCData(oldp+1616,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_0))),2);
        bufp->chgCData(oldp+1617,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_0))),2);
        bufp->chgCData(oldp+1618,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_0))),3);
        bufp->chgCData(oldp+1619,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_2))),3);
        bufp->chgCData(oldp+1620,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_0),2);
        bufp->chgCData(oldp+1621,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_2),2);
        bufp->chgCData(oldp+1622,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13_io_out_0) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_1))),3);
        bufp->chgCData(oldp+1623,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_1) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__pout_0) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_1)))),3);
        bufp->chgCData(oldp+1624,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_0))),2);
        bufp->chgCData(oldp+1625,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_0))),2);
        bufp->chgCData(oldp+1626,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_0))),3);
        bufp->chgCData(oldp+1627,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_0) 
                                    << 2U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_2))),3);
        bufp->chgCData(oldp+1628,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1) 
                                    << 1U) | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                                              | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1))))),2);
        bufp->chgCData(oldp+1629,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0))),2);
        bufp->chgCData(oldp+1630,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1) 
                                               << 1U) 
                                              | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                                                 | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1)))))),3);
        bufp->chgCData(oldp+1631,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                                    << 2U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1) 
                                               << 1U) 
                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0)))),3);
        bufp->chgCData(oldp+1632,((((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_6__DOT___pout_1_T_7))) 
                                    << 1U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                                               | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                                  & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1))) 
                                              | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0) 
                                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1))))),2);
        bufp->chgCData(oldp+1633,(((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_6__DOT___pout_1_T_7)) 
                                    << 1U) | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0) 
                                              & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1)))),2);
        bufp->chgBit(oldp+1634,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__n_0));
        bufp->chgBit(oldp+1635,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__n_0)))));
        bufp->chgBit(oldp+1636,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_1));
        bufp->chgBit(oldp+1637,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_1_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ff133__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d3c9525__0))));
        bufp->chgBit(oldp+1638,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_1));
        bufp->chgBit(oldp+1639,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+1640,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_2_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10ba7a6__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df0e46a__0))));
        bufp->chgBit(oldp+1641,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+1642,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_3));
        bufp->chgBit(oldp+1643,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_3_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc10742be__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dccb4ff__0))));
        bufp->chgBit(oldp+1644,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_hb31c3312__0)))));
        bufp->chgBit(oldp+1645,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_4));
        bufp->chgBit(oldp+1646,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_4_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc103758b__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc877d5__0))));
        bufp->chgBit(oldp+1647,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_4));
        bufp->chgBit(oldp+1648,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+1649,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_5_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc0558f__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11f6654__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc406a0__0))));
        bufp->chgBit(oldp+1650,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+1651,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_6));
        bufp->chgBit(oldp+1652,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_6_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc36d7a__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc11a1021__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc0558f__0))));
        bufp->chgBit(oldp+1653,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h0133aff4__0)))));
        bufp->chgBit(oldp+1654,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_7));
        bufp->chgBit(oldp+1655,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_7_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2ddfa237__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc116b50e__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dc36d7a__0))));
        bufp->chgBit(oldp+1656,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_7));
        bufp->chgBit(oldp+1657,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+1658,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_8_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dd5f32a__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ece003__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2ddfa237__0))));
        bufp->chgBit(oldp+1659,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+1660,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_9));
        bufp->chgBit(oldp+1661,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_9_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d10c4dd__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12fd1f4__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dd5f32a__0))));
        bufp->chgBit(oldp+1662,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_ha74c8422__0)))));
        bufp->chgBit(oldp+1663,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_10));
        bufp->chgBit(oldp+1664,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_10_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dec9530__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc12b80e9__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d10c4dd__0))));
        bufp->chgBit(oldp+1665,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_10));
        bufp->chgBit(oldp+1666,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+1667,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_11_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc126a535__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dec9530__0))));
        bufp->chgBit(oldp+1668,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+1669,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_12));
        bufp->chgBit(oldp+1670,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_12_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1225580__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2def5052__0))));
        bufp->chgBit(oldp+1671,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h803f76e4__0)))));
        bufp->chgBit(oldp+1672,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_13));
        bufp->chgBit(oldp+1673,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_13_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13ec59f__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2deb60af__0))));
        bufp->chgBit(oldp+1674,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_13));
        bufp->chgBit(oldp+1675,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+1676,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_14_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc13af6ea__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de730f8__0))));
        bufp->chgBit(oldp+1677,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+1678,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_15));
        bufp->chgBit(oldp+1679,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_15_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc137964c__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2de3c335__0))));
        bufp->chgBit(oldp+1680,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h27ccee37__0)))));
        bufp->chgBit(oldp+1681,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_16));
        bufp->chgBit(oldp+1682,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_16_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc133bf59__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df88965__0))));
        bufp->chgBit(oldp+1683,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_16));
        bufp->chgBit(oldp+1684,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+1685,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_17_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2db0aa3f__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c9b7e6__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2df4d070__0))));
        bufp->chgBit(oldp+1686,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+1687,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_18));
        bufp->chgBit(oldp+1688,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_18_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8d732a__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c59ef3__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2db0aa3f__0))));
        bufp->chgBit(oldp+1689,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h8a0d6673__0)))));
        bufp->chgBit(oldp+1690,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_19));
        bufp->chgBit(oldp+1691,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_19_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d88ba00__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1c186eb__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8d732a__0))));
        bufp->chgBit(oldp+1692,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_19));
        bufp->chgBit(oldp+1693,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+1694,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_20_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d854375__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1ddae5e__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d88ba00__0))));
        bufp->chgBit(oldp+1695,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+1696,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_21));
        bufp->chgBit(oldp+1697,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_21_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8119da__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1de2a81__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d854375__0))));
        bufp->chgBit(oldp+1698,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_haa69a3db__0)))));
        bufp->chgBit(oldp+1699,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_22));
        bufp->chgBit(oldp+1700,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_22_T_7)) 
                                  | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dacef2f__0)) 
                                     | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_hc1e5c2f4__0)))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2d8119da__0))));
        bufp->chgBit(oldp+1701,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_22));
        bufp->chgBit(oldp+1702,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h4b5b1e37__0));
        bufp->chgBit(oldp+1703,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_23_T_7)) 
                                  | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_h2dd0dfe3__0)) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__preEncoder__DOT____VdfgTmp_h2dacef2f__0))));
        bufp->chgBit(oldp+1704,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h2627e8d8__0));
        bufp->chgBit(oldp+1705,((1U & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h4411a1c1__0)))));
        bufp->chgCData(oldp+1706,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_19) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_21) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_22) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h4b5b1e37__0) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0))))))),6);
        bufp->chgSData(oldp+1707,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_13) 
                                    << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h4b5b1e37__0) 
                                                 << 0xaU) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_15) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_16) 
                                                       << 8U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h4b5b1e37__0) 
                                                          << 7U) 
                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_18) 
                                                             << 6U) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_19) 
                                                                << 5U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h4b5b1e37__0) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_21) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_22) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h4b5b1e37__0) 
                                                                            << 1U) 
                                                                           | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT____VdfgTmp_hc1e9f2c8__0))))))))))))),12);
        bufp->chgCData(oldp+1708,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_7) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h4b5b1e37__0) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_9) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_10) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h4b5b1e37__0) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_12))))))),6);
        bufp->chgCData(oldp+1709,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_19) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 4U) 
                                              | ((8U 
                                                  & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_haa69a3db__0)) 
                                                     << 3U)) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_22) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h2627e8d8__0) 
                                                        << 1U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h4411a1c1__0))))))))),6);
        bufp->chgSData(oldp+1710,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_13) 
                                    << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h2627e8d8__0) 
                                                 << 0xaU) 
                                                | ((0x200U 
                                                    & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h27ccee37__0)) 
                                                       << 9U)) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_16) 
                                                       << 8U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h2627e8d8__0) 
                                                          << 7U) 
                                                         | ((0x40U 
                                                             & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h8a0d6673__0)) 
                                                                << 6U)) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_19) 
                                                                << 5U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h2627e8d8__0) 
                                                                   << 4U) 
                                                                  | ((8U 
                                                                      & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_haa69a3db__0)) 
                                                                         << 3U)) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_22) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h2627e8d8__0) 
                                                                            << 1U) 
                                                                           | (1U 
                                                                              & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h4411a1c1__0))))))))))))))),12);
        bufp->chgCData(oldp+1711,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_7) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h2627e8d8__0) 
                                               << 4U) 
                                              | ((8U 
                                                  & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_ha74c8422__0)) 
                                                     << 3U)) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_10) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h2627e8d8__0) 
                                                        << 1U) 
                                                       | (1U 
                                                          & (~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h803f76e4__0))))))))),6);
        bufp->chgCData(oldp+1712,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_22) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+1713,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_22) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+1714,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT__pout_0));
        bufp->chgBit(oldp+1715,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT__pout_1));
        bufp->chgBit(oldp+1716,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT__zout_0));
        bufp->chgBit(oldp+1717,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0__DOT__zout_1));
        bufp->chgCData(oldp+1718,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_19) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+1719,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_19) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+1720,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_0));
        bufp->chgBit(oldp+1721,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_1));
        bufp->chgBit(oldp+1722,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0));
        bufp->chgBit(oldp+1723,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_1));
        bufp->chgCData(oldp+1724,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_16) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+1725,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_16) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+1726,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT__pout_0));
        bufp->chgBit(oldp+1727,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT__pout_1));
        bufp->chgBit(oldp+1728,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT__zout_0));
        bufp->chgBit(oldp+1729,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1__DOT__zout_1));
        bufp->chgCData(oldp+1730,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_13) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+1731,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_13) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+1732,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT__pout_0));
        bufp->chgBit(oldp+1733,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT__pout_1));
        bufp->chgBit(oldp+1734,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT__zout_0));
        bufp->chgBit(oldp+1735,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2__DOT__zout_1));
        bufp->chgCData(oldp+1736,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_10) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+1737,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_10) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+1738,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_0));
        bufp->chgBit(oldp+1739,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_1));
        bufp->chgBit(oldp+1740,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_0));
        bufp->chgBit(oldp+1741,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_1));
        bufp->chgCData(oldp+1742,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_7) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+1743,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_7) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+1744,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT__pout_0));
        bufp->chgBit(oldp+1745,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT__pout_1));
        bufp->chgBit(oldp+1746,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT__zout_0));
        bufp->chgBit(oldp+1747,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_4__DOT__zout_1));
        bufp->chgCData(oldp+1748,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_4) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+1749,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_4) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+1750,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT__pout_0));
        bufp->chgBit(oldp+1751,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT__pout_1));
        bufp->chgBit(oldp+1752,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT__zout_0));
        bufp->chgBit(oldp+1753,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5__DOT__zout_1));
        bufp->chgCData(oldp+1754,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__p_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h4b5b1e37__0))),2);
        bufp->chgCData(oldp+1755,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h2627e8d8__0))),2);
        bufp->chgBit(oldp+1756,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_0));
        bufp->chgBit(oldp+1757,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1));
        bufp->chgBit(oldp+1758,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__zout_0));
        bufp->chgBit(oldp+1759,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__z_1) 
                                 & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_hb31c3312__0)) 
                                    | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT____VdfgTmp_h2627e8d8__0)))));
        bufp->chgCData(oldp+1760,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_0) 
                                    << 6U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_0) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_1) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_0) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_0)))))),8);
        bufp->chgCData(oldp+1761,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_2) 
                                    << 6U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_1_io_out_2) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_1) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0) 
                                                     << 2U) 
                                                    | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_2)))))),8);
        bufp->chgCData(oldp+1762,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__pout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_0) 
                                               >> 1U)))),2);
        bufp->chgCData(oldp+1763,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node__DOT__zout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_io_out_2) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+1764,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1__DOT__pout_0));
        bufp->chgBit(oldp+1765,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1__DOT__pout_1));
        bufp->chgBit(oldp+1766,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1__DOT__zout_0));
        bufp->chgBit(oldp+1767,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1__DOT__zout_1));
        bufp->chgBit(oldp+1768,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0));
        bufp->chgBit(oldp+1769,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_1));
        bufp->chgBit(oldp+1770,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0));
        bufp->chgBit(oldp+1771,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_1));
        bufp->chgCData(oldp+1772,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__pout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_0) 
                                               >> 1U)))),2);
        bufp->chgCData(oldp+1773,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_3__DOT__zout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_2_io_out_2) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+1774,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8__DOT__pout_0));
        bufp->chgBit(oldp+1775,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8__DOT__pout_1));
        bufp->chgBit(oldp+1776,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8__DOT__zout_0));
        bufp->chgBit(oldp+1777,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8__DOT__zout_1));
        bufp->chgBit(oldp+1778,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9__DOT__pout_0));
        bufp->chgBit(oldp+1779,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9__DOT__pout_1));
        bufp->chgBit(oldp+1780,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9__DOT__zout_0));
        bufp->chgBit(oldp+1781,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9__DOT__zout_1));
        bufp->chgCData(oldp+1782,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_0) 
                                               >> 1U)))),2);
        bufp->chgCData(oldp+1783,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__zout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_5_io_out_2) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+1784,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_0));
        bufp->chgBit(oldp+1785,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_1));
        bufp->chgBit(oldp+1786,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_0));
        bufp->chgBit(oldp+1787,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_1));
        bufp->chgCData(oldp+1788,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_0) 
                                    << 4U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_1) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0) 
                                                  << 2U) 
                                                 | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_0))))),6);
        bufp->chgCData(oldp+1789,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_8_io_out_2) 
                                    << 4U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_1) 
                                               << 3U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0) 
                                                  << 2U) 
                                                 | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_2))))),6);
        bufp->chgCData(oldp+1790,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__pout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_0) 
                                               >> 1U)))),2);
        bufp->chgCData(oldp+1791,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_7__DOT__zout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_1_io_out_2) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+1792,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2__DOT__pout_0));
        bufp->chgBit(oldp+1793,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2__DOT__pout_1));
        bufp->chgBit(oldp+1794,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2__DOT__zout_0));
        bufp->chgBit(oldp+1795,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2__DOT__zout_1));
        bufp->chgBit(oldp+1796,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_0));
        bufp->chgBit(oldp+1797,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_1));
        bufp->chgBit(oldp+1798,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_0));
        bufp->chgBit(oldp+1799,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_1));
        bufp->chgCData(oldp+1800,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__pout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_0) 
                                               >> 1U)))),2);
        bufp->chgCData(oldp+1801,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_10__DOT__zout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_9_io_out_2) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+1802,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12__DOT__pout_0));
        bufp->chgBit(oldp+1803,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12__DOT__pout_1));
        bufp->chgBit(oldp+1804,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12__DOT__zout_0));
        bufp->chgBit(oldp+1805,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_12__DOT__zout_1));
        bufp->chgCData(oldp+1806,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1),2);
        bufp->chgCData(oldp+1807,(((2U & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__n_0)) 
                                          << 1U)) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_6__DOT__pout_1))),2);
        bufp->chgBit(oldp+1808,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__pout_0));
        bufp->chgBit(oldp+1809,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__pout_1));
        bufp->chgBit(oldp+1810,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_0));
        bufp->chgBit(oldp+1811,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_1));
        bufp->chgCData(oldp+1812,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__pout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_0) 
                                               >> 1U)))),2);
        bufp->chgCData(oldp+1813,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_11__DOT__zout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_2_io_out_2) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+1814,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3__DOT__pout_0));
        bufp->chgBit(oldp+1815,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3__DOT__pout_1));
        bufp->chgBit(oldp+1816,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3__DOT__zout_0));
        bufp->chgBit(oldp+1817,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3__DOT__zout_1));
        bufp->chgBit(oldp+1818,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_0));
        bufp->chgBit(oldp+1819,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_1));
        bufp->chgBit(oldp+1820,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_0));
        bufp->chgBit(oldp+1821,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_1));
        bufp->chgCData(oldp+1822,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__pout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_0) 
                                               >> 1U)))),2);
        bufp->chgCData(oldp+1823,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_14__DOT__zout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_3_io_out_2) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+1824,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0));
        bufp->chgBit(oldp+1825,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1));
        bufp->chgBit(oldp+1826,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0));
        bufp->chgBit(oldp+1827,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_1));
        bufp->chgCData(oldp+1828,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_13__DOT__pout_0))),2);
        bufp->chgBit(oldp+1829,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_0));
        bufp->chgBit(oldp+1830,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1));
        bufp->chgBit(oldp+1831,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_0));
        bufp->chgBit(oldp+1832,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1));
        bufp->chgCData(oldp+1833,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_0) 
                                               >> 1U)))),2);
        bufp->chgCData(oldp+1834,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_0) 
                                    << 1U) | (1U & 
                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4_io_out_2) 
                                               >> 1U)))),2);
        bufp->chgBit(oldp+1835,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                                 | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1)))));
        bufp->chgBit(oldp+1836,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1));
        bufp->chgBit(oldp+1837,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0));
        bufp->chgBit(oldp+1838,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1));
        bufp->chgCData(oldp+1839,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1))),2);
        bufp->chgCData(oldp+1840,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                                    << 1U) | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1))),2);
        bufp->chgBit(oldp+1841,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_0) 
                                  | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__zout_0) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_4__DOT__pout_1))) 
                                 | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0) 
                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1)))));
        bufp->chgBit(oldp+1842,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0)) 
                                  & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__pout_1)) 
                                 | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__pout_1) 
                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_6__DOT___pout_1_T_7)))));
        bufp->chgBit(oldp+1843,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_0) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_5__DOT__zout_1))));
        bufp->chgBit(oldp+1844,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node_15__DOT__zout_1) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__errorDetector__DOT__y_node0_6__DOT___pout_1_T_7))));
        bufp->chgBit(oldp+1845,(((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h8093e782__0) 
                                   & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza_io_b) 
                                  | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)) 
                                 | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10))));
        bufp->chgBit(oldp+1846,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_1));
        bufp->chgBit(oldp+1847,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_2));
        bufp->chgBit(oldp+1848,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_3));
        bufp->chgBit(oldp+1849,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_4));
        bufp->chgBit(oldp+1850,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_5));
        bufp->chgBit(oldp+1851,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_6));
        bufp->chgBit(oldp+1852,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_7));
        bufp->chgBit(oldp+1853,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_8));
        bufp->chgBit(oldp+1854,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_9));
        bufp->chgBit(oldp+1855,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_10));
        bufp->chgBit(oldp+1856,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_11));
        bufp->chgBit(oldp+1857,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_12));
        bufp->chgBit(oldp+1858,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_13));
        bufp->chgBit(oldp+1859,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_14));
        bufp->chgBit(oldp+1860,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_15));
        bufp->chgBit(oldp+1861,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_16));
        bufp->chgBit(oldp+1862,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_17));
        bufp->chgBit(oldp+1863,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_18));
        bufp->chgBit(oldp+1864,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_19));
        bufp->chgBit(oldp+1865,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_20));
        bufp->chgBit(oldp+1866,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_21));
        bufp->chgBit(oldp+1867,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_22));
        bufp->chgBit(oldp+1868,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_23));
        bufp->chgBit(oldp+1869,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_24));
        bufp->chgCData(oldp+1870,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_5) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_4) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_3) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_2) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_1) 
                                                        << 1U) 
                                                       | ((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h8093e782__0) 
                                                            & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza_io_b) 
                                                           | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)) 
                                                          | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)))))))),6);
        bufp->chgSData(oldp+1871,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_11) 
                                    << 0xbU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_10) 
                                                 << 0xaU) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_9) 
                                                    << 9U) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_8) 
                                                       << 8U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_7) 
                                                          << 7U) 
                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_6) 
                                                             << 6U) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_5) 
                                                                << 5U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_4) 
                                                                   << 4U) 
                                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_3) 
                                                                      << 3U) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_2) 
                                                                         << 2U) 
                                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_1) 
                                                                            << 1U) 
                                                                           | ((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__VdfgTmp_h8093e782__0) 
                                                                                & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza_io_b) 
                                                                               | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)) 
                                                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT___f_0_T_10)))))))))))))),12);
        bufp->chgCData(oldp+1872,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_17) 
                                    << 5U) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_16) 
                                               << 4U) 
                                              | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_15) 
                                                  << 3U) 
                                                 | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_14) 
                                                     << 2U) 
                                                    | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_13) 
                                                        << 1U) 
                                                       | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_12))))))),6);
        bufp->chgSData(oldp+1873,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_24) 
                                    << 0xcU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_23) 
                                                 << 0xbU) 
                                                | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_22) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_21) 
                                                       << 9U) 
                                                      | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_20) 
                                                          << 8U) 
                                                         | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_19) 
                                                             << 7U) 
                                                            | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_18) 
                                                                << 6U) 
                                                               | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_17) 
                                                                   << 5U) 
                                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_16) 
                                                                      << 4U) 
                                                                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_15) 
                                                                         << 3U) 
                                                                        | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_14) 
                                                                            << 2U) 
                                                                           | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_13) 
                                                                               << 1U) 
                                                                              | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT__lza__DOT__preEncoder__DOT__f_12)))))))))))))),13);
        bufp->chgBit(oldp+1874,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                       >> 1U))));
        bufp->chgIData(oldp+1875,((0x7fffffU & ((IData)(1U) 
                                                + (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                   >> 1U)))),23);
        bufp->chgIData(oldp+1876,((0x7fffffU & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T)),23);
        bufp->chgIData(oldp+1877,((0x7fffffU & ((IData)(1U) 
                                                + vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T))),23);
        bufp->chgIData(oldp+1878,((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_b_sig 
                                   << 2U)),26);
        bufp->chgIData(oldp+1879,(((0x1aU < (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__shiftRightJam_io_shamt))
                                    ? 0U : (0x3ffffffU 
                                            & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_b_sig 
                                                << 2U) 
                                               >> (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__shiftRightJam_io_shamt))))),26);
        bufp->chgBit(oldp+1880,((0U != ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_b_sig 
                                         << 2U) & (
                                                   (((IData)(1U) 
                                                     << (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__shiftRightJam_io_shamt)) 
                                                    - (IData)(1U)) 
                                                   | ((0x1aU 
                                                       < (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__shiftRightJam_io_shamt))
                                                       ? 0x3ffffffU
                                                       : 0U))))));
        bufp->chgIData(oldp+1881,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig),27);
        bufp->chgIData(oldp+1882,((0x7fffffU & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                >> 3U))),23);
        bufp->chgBit(oldp+1883,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                       >> 2U))));
        bufp->chgBit(oldp+1884,((0U != (3U & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig))));
        bufp->chgBit(oldp+1885,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_rounder__DOT__inexact));
        bufp->chgBit(oldp+1886,((1U & (~ (IData)((0U 
                                                  != (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_a_exp)))))));
        bufp->chgBit(oldp+1887,((1U & ((~ (IData)((0U 
                                                   != (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_a_exp)))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_b_exp))))))));
        bufp->chgIData(oldp+1888,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT___neg_sigB_T),28);
        bufp->chgIData(oldp+1889,((0x8000000U | (0x7ffffffU 
                                                 & ((IData)(1U) 
                                                    + 
                                                    (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT___neg_sigB_T))))),28);
        bufp->chgIData(oldp+1890,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_addSig)
                                    ? vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT___neg_sigB_T
                                    : (0x8000000U | 
                                       (0x7ffffffU 
                                        & ((IData)(1U) 
                                           + (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT___neg_sigB_T)))))),28);
        bufp->chgIData(oldp+1891,((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_a_sig 
                                   << 3U)),28);
        bufp->chgIData(oldp+1892,((0xfffffffU & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_a_sig 
                                                  << 3U) 
                                                 + 
                                                 ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_addSig)
                                                   ? vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT___neg_sigB_T
                                                   : 
                                                  (0x8000000U 
                                                   | (0x7ffffffU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         (~ vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT___neg_sigB_T)))))))),28);
        bufp->chgIData(oldp+1893,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__result_sig_raw),28);
        bufp->chgBit(oldp+1894,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__result_sig_raw 
                                       >> 0x1bU))));
        bufp->chgBit(oldp+1895,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__result_sig_raw 
                                       >> 0x1aU))));
        bufp->chgCData(oldp+1896,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__resultExpNoRound),8);
        bufp->chgBit(oldp+1897,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_may_of));
        bufp->chgBit(oldp+1898,((0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__resultExpNoRound))));
        bufp->chgBit(oldp+1899,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                       >> 3U))));
        bufp->chgIData(oldp+1900,((0x7fffffU & ((IData)(1U) 
                                                + (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                   >> 3U)))),23);
        bufp->chgIData(oldp+1901,((0x7fffffU & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                >> 2U))),23);
        bufp->chgBit(oldp+1902,((1U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                       >> 1U))));
        bufp->chgBit(oldp+1903,((1U & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)));
        bufp->chgBit(oldp+1904,(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact));
        bufp->chgIData(oldp+1905,((0x7fffffU & ((IData)(1U) 
                                                + (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                   >> 2U)))),23);
        bufp->chgBit(oldp+1906,((0x1aU < (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__shiftRightJam_io_shamt))));
        bufp->chgIData(oldp+1907,((0x3ffffffU & ((((IData)(1U) 
                                                   << (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__shiftRightJam_io_shamt)) 
                                                  - (IData)(1U)) 
                                                 | ((0x1aU 
                                                     < (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__shiftRightJam_io_shamt))
                                                     ? 0x3ffffffU
                                                     : 0U)))),26);
    }
    bufp->chgBit(oldp+1908,(vlSelf->clock));
    bufp->chgBit(oldp+1909,(vlSelf->reset));
    bufp->chgBit(oldp+1910,(vlSelf->io_in_ready));
    bufp->chgBit(oldp+1911,(vlSelf->io_in_valid));
    bufp->chgSData(oldp+1912,(vlSelf->io_in_bits_vec_a_0),16);
    bufp->chgSData(oldp+1913,(vlSelf->io_in_bits_vec_a_1),16);
    bufp->chgSData(oldp+1914,(vlSelf->io_in_bits_vec_a_2),16);
    bufp->chgSData(oldp+1915,(vlSelf->io_in_bits_vec_a_3),16);
    bufp->chgSData(oldp+1916,(vlSelf->io_in_bits_vec_b_0),16);
    bufp->chgSData(oldp+1917,(vlSelf->io_in_bits_vec_b_1),16);
    bufp->chgSData(oldp+1918,(vlSelf->io_in_bits_vec_b_2),16);
    bufp->chgSData(oldp+1919,(vlSelf->io_in_bits_vec_b_3),16);
    bufp->chgCData(oldp+1920,(vlSelf->io_in_bits_roundingMode),3);
    bufp->chgBit(oldp+1921,(vlSelf->io_out_ready));
    bufp->chgBit(oldp+1922,(vlSelf->io_out_valid));
    bufp->chgCData(oldp+1923,(vlSelf->io_out_bits_fflags),5);
    bufp->chgIData(oldp+1924,(vlSelf->io_out_bits_result),32);
    bufp->chgCData(oldp+1925,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__special_path_hasNaN) 
                                | ((IData)(vlSelf->DotProdUnit__DOT__a_flag_isInf) 
                                   | (IData)(vlSelf->DotProdUnit__DOT__b_flag_isInf)))
                                ? ((((IData)(vlSelf->DotProdUnit__DOT__a_flag_isInv) 
                                     | (IData)(vlSelf->DotProdUnit__DOT__b_flag_isInv)) 
                                    | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__special_path_inf_iv)) 
                                   << 4U) : (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__common_overflow) 
                                              << 2U) 
                                             | (((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel)) 
                                                   & (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_may_of)) 
                                                       & (((0U 
                                                            == 
                                                            (3U 
                                                             & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                >> 0x19U))) 
                                                           | (IData)(
                                                                     ((0x2000000U 
                                                                       == 
                                                                       (0x6000000U 
                                                                        & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                                      & (~ (IData)(
                                                                                ((0x1fffffcU 
                                                                                == 
                                                                                (0x1fffffcU 
                                                                                & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                                                & ((4U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                                                 : 
                                                                                ((1U 
                                                                                != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                                & ((0U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                                & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 1U) 
                                                                                & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                | (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 2U)))))))))))))) 
                                                          & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_tinyAdd))) 
                                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_out_far_path_ix))) 
                                                  | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel) 
                                                     & (((0U 
                                                          == 
                                                          (3U 
                                                           & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                              >> 0x17U))) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                                >> 0x17U)))) 
                                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath_io_out_near_path_ix)))) 
                                                 << 1U) 
                                                | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel)) 
                                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_out_far_path_ix)) 
                                                   | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel) 
                                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath_io_out_near_path_ix))))))),5);
    bufp->chgCData(oldp+1926,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__special_path_hasNaN) 
                                | ((IData)(vlSelf->DotProdUnit__DOT__a_flag_1_isInf) 
                                   | (IData)(vlSelf->DotProdUnit__DOT__b_flag_1_isInf)))
                                ? ((((IData)(vlSelf->DotProdUnit__DOT__a_flag_1_isInv) 
                                     | (IData)(vlSelf->DotProdUnit__DOT__b_flag_1_isInv)) 
                                    | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__special_path_inf_iv)) 
                                   << 4U) : (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__common_overflow) 
                                              << 2U) 
                                             | (((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel)) 
                                                   & (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_may_of)) 
                                                       & (((0U 
                                                            == 
                                                            (3U 
                                                             & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                >> 0x19U))) 
                                                           | (IData)(
                                                                     ((0x2000000U 
                                                                       == 
                                                                       (0x6000000U 
                                                                        & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                                      & (~ (IData)(
                                                                                ((0x1fffffcU 
                                                                                == 
                                                                                (0x1fffffcU 
                                                                                & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                                                & ((4U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                                                 : 
                                                                                ((1U 
                                                                                != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                                & ((0U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                                & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 1U) 
                                                                                & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 2U)))))))))))))) 
                                                          & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_tinyAdd))) 
                                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_out_far_path_ix))) 
                                                  | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel) 
                                                     & (((0U 
                                                          == 
                                                          (3U 
                                                           & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                              >> 0x17U))) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                                >> 0x17U)))) 
                                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath_io_out_near_path_ix)))) 
                                                 << 1U) 
                                                | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel)) 
                                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_out_far_path_ix)) 
                                                   | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel) 
                                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath_io_out_near_path_ix))))))),5);
    bufp->chgCData(oldp+1927,(((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__special_case_happen)
                                ? (((((~ (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 
                                          >> 0x16U)) 
                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_a___05FisNaN)) 
                                     | ((~ (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 
                                            >> 0x16U)) 
                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_b___05FisNaN))) 
                                    | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__special_path_inf_iv)) 
                                   << 4U) : (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__common_overflow) 
                                              << 2U) 
                                             | (((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel)) 
                                                   & (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_may_of)) 
                                                       & (((0U 
                                                            == 
                                                            (3U 
                                                             & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                >> 0x19U))) 
                                                           | (IData)(
                                                                     ((0x2000000U 
                                                                       == 
                                                                       (0x6000000U 
                                                                        & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                                      & (~ (IData)(
                                                                                ((0x1fffffcU 
                                                                                == 
                                                                                (0x1fffffcU 
                                                                                & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                                                & ((4U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                                                 : 
                                                                                ((1U 
                                                                                != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                                & ((0U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                                & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 1U) 
                                                                                & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 2U)))))))))))))) 
                                                          & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_tinyAdd))) 
                                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_out_far_path_ix))) 
                                                  | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel) 
                                                     & (((0U 
                                                          == 
                                                          (3U 
                                                           & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                              >> 0x17U))) 
                                                         | (1U 
                                                            == 
                                                            (3U 
                                                             & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                                >> 0x17U)))) 
                                                        & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath_io_out_near_path_ix)))) 
                                                 << 1U) 
                                                | (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel)) 
                                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_out_far_path_ix)) 
                                                   | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel) 
                                                      & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath_io_out_near_path_ix))))))),5);
    bufp->chgBit(oldp+1928,(vlSelf->DotProdUnit__DOT__handshaked));
    bufp->chgBit(oldp+1929,(vlSelf->DotProdUnit__DOT__prehandshaked_1));
    bufp->chgBit(oldp+1930,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_may_of)) 
                              & (((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                >> 0x19U))) 
                                  | (IData)(((0x2000000U 
                                              == (0x6000000U 
                                                  & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                             & (~ (IData)(
                                                          ((0x1fffffcU 
                                                            == 
                                                            (0x1fffffcU 
                                                             & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                           & ((4U 
                                                               == (IData)(vlSelf->io_in_bits_roundingMode))
                                                               ? 
                                                              (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                               >> 1U)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                ? 
                                                               ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                 ? 
                                                                ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                                 : 
                                                                ((1U 
                                                                  != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                 & ((0U 
                                                                     == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                    & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                        >> 1U) 
                                                                       & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                          | (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                             >> 2U)))))))))))))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_tinyAdd))) 
                             & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_out_far_path_ix))));
    bufp->chgBit(oldp+1931,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel)) 
                              & (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_may_of)) 
                                  & (((0U == (3U & 
                                              (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                               >> 0x19U))) 
                                      | (IData)(((0x2000000U 
                                                  == 
                                                  (0x6000000U 
                                                   & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                 & (~ (IData)(
                                                              ((0x1fffffcU 
                                                                == 
                                                                (0x1fffffcU 
                                                                 & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                               & ((4U 
                                                                   == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                   ? 
                                                                  (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                   >> 1U)
                                                                   : 
                                                                  ((2U 
                                                                    == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                    ? 
                                                                   ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                     ? 
                                                                    ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                                     : 
                                                                    ((1U 
                                                                      != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                     & ((0U 
                                                                         == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                        & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                            >> 1U) 
                                                                           & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                              | (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 2U)))))))))))))) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_tinyAdd))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_out_far_path_ix))) 
                             | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel) 
                                & (((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                  >> 0x17U))) 
                                    | (1U == (3U & 
                                              (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                               >> 0x17U)))) 
                                   & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath_io_out_near_path_ix))))));
    bufp->chgCData(oldp+1932,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__common_overflow) 
                                << 2U) | (((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel)) 
                                             & (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_may_of)) 
                                                 & (((0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                          >> 0x19U))) 
                                                     | (IData)(
                                                               ((0x2000000U 
                                                                 == 
                                                                 (0x6000000U 
                                                                  & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                                & (~ (IData)(
                                                                             ((0x1fffffcU 
                                                                               == 
                                                                               (0x1fffffcU 
                                                                                & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                                              & ((4U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                                                 : 
                                                                                ((1U 
                                                                                != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                                & ((0U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                                & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 1U) 
                                                                                & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                | (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 2U)))))))))))))) 
                                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_tinyAdd))) 
                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_out_far_path_ix))) 
                                            | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel) 
                                               & (((0U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                        >> 0x17U))) 
                                                   | (1U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                          >> 0x17U)))) 
                                                  & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath_io_out_near_path_ix)))) 
                                           << 1U) | 
                                          (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel)) 
                                            & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_out_far_path_ix)) 
                                           | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel) 
                                              & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath_io_out_near_path_ix)))))),5);
    bufp->chgBit(oldp+1933,((2U == (IData)(vlSelf->io_in_bits_roundingMode))));
    bufp->chgBit(oldp+1934,(((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                           >> 0x19U))) 
                             | (IData)(((0x2000000U 
                                         == (0x6000000U 
                                             & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                        & (~ (IData)(
                                                     ((0x1fffffcU 
                                                       == 
                                                       (0x1fffffcU 
                                                        & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                      & ((4U 
                                                          == (IData)(vlSelf->io_in_bits_roundingMode))
                                                          ? 
                                                         (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                          >> 1U)
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->io_in_bits_roundingMode))
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                           & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->io_in_bits_roundingMode))
                                                            ? 
                                                           ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                            & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                            : 
                                                           ((1U 
                                                             != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                            & ((0U 
                                                                == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                               & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                   >> 1U) 
                                                                  & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                     | (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                        >> 2U))))))))))))))));
    bufp->chgBit(oldp+1935,((((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                            >> 0x19U))) 
                              | (IData)(((0x2000000U 
                                          == (0x6000000U 
                                              & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                         & (~ (IData)(
                                                      ((0x1fffffcU 
                                                        == 
                                                        (0x1fffffcU 
                                                         & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                       & ((4U 
                                                           == (IData)(vlSelf->io_in_bits_roundingMode))
                                                           ? 
                                                          (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                           >> 1U)
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->io_in_bits_roundingMode))
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                            & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                            : 
                                                           ((3U 
                                                             == (IData)(vlSelf->io_in_bits_roundingMode))
                                                             ? 
                                                            ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                             & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                             : 
                                                            ((1U 
                                                              != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                             & ((0U 
                                                                 == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                      | (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                         >> 2U)))))))))))))) 
                             & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_tinyAdd))));
    bufp->chgBit(oldp+1936,(((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_may_of)) 
                             & (((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                               >> 0x19U))) 
                                 | (IData)(((0x2000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                            & (~ (IData)(
                                                         ((0x1fffffcU 
                                                           == 
                                                           (0x1fffffcU 
                                                            & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                          & ((4U 
                                                              == (IData)(vlSelf->io_in_bits_roundingMode))
                                                              ? 
                                                             (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                              >> 1U)
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->io_in_bits_roundingMode))
                                                               ? 
                                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                               & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                ? 
                                                               ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                                : 
                                                               ((1U 
                                                                 != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                & ((0U 
                                                                    == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                   & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                       >> 1U) 
                                                                      & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                         | (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                            >> 2U)))))))))))))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath_io_in_tinyAdd)))));
    bufp->chgIData(oldp+1937,((0x7fffffU & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 2U) 
                                            + (1U & 
                                               ((4U 
                                                 == (IData)(vlSelf->io_in_bits_roundingMode))
                                                 ? 
                                                (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                 >> 1U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_in_bits_roundingMode))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                  & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_in_bits_roundingMode))
                                                   ? 
                                                  ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                   & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                   : 
                                                  ((1U 
                                                    != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                      & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                          >> 1U) 
                                                         & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                            | (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                               >> 2U)))))))))))),23);
    bufp->chgBit(oldp+1938,((IData)(((0x1fffffcU == 
                                      (0x1fffffcU & vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                     & ((4U == (IData)(vlSelf->io_in_bits_roundingMode))
                                         ? (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                            >> 1U) : 
                                        ((2U == (IData)(vlSelf->io_in_bits_roundingMode))
                                          ? ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                             & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                          : ((3U == (IData)(vlSelf->io_in_bits_roundingMode))
                                              ? ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                              : ((1U 
                                                  != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                 & ((0U 
                                                     == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                    & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                        >> 1U) 
                                                       & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                          | (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                             >> 2U))))))))))));
    bufp->chgBit(oldp+1939,((1U & ((4U == (IData)(vlSelf->io_in_bits_roundingMode))
                                    ? (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                       >> 1U) : ((2U 
                                                  == (IData)(vlSelf->io_in_bits_roundingMode))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                  & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_in_bits_roundingMode))
                                                   ? 
                                                  ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                   & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                   : 
                                                  ((1U 
                                                    != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                      & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                          >> 1U) 
                                                         & (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                            | (vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                               >> 2U)))))))))));
    bufp->chgBit(oldp+1940,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_may_of)) 
                              & (((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                >> 0x19U))) 
                                  | (IData)(((0x2000000U 
                                              == (0x6000000U 
                                                  & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                             & (~ (IData)(
                                                          ((0x1fffffcU 
                                                            == 
                                                            (0x1fffffcU 
                                                             & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                           & ((4U 
                                                               == (IData)(vlSelf->io_in_bits_roundingMode))
                                                               ? 
                                                              (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                               >> 1U)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                ? 
                                                               ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                 ? 
                                                                ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                                 : 
                                                                ((1U 
                                                                  != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                 & ((0U 
                                                                     == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                    & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                        >> 1U) 
                                                                       & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                          | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                             >> 2U)))))))))))))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_tinyAdd))) 
                             & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_out_far_path_ix))));
    bufp->chgBit(oldp+1941,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel)) 
                              & (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_may_of)) 
                                  & (((0U == (3U & 
                                              (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                               >> 0x19U))) 
                                      | (IData)(((0x2000000U 
                                                  == 
                                                  (0x6000000U 
                                                   & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                 & (~ (IData)(
                                                              ((0x1fffffcU 
                                                                == 
                                                                (0x1fffffcU 
                                                                 & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                               & ((4U 
                                                                   == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                   ? 
                                                                  (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                   >> 1U)
                                                                   : 
                                                                  ((2U 
                                                                    == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                    ? 
                                                                   ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                     ? 
                                                                    ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                                     : 
                                                                    ((1U 
                                                                      != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                     & ((0U 
                                                                         == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                        & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                            >> 1U) 
                                                                           & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                              | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 2U)))))))))))))) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_tinyAdd))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_out_far_path_ix))) 
                             | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel) 
                                & (((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                  >> 0x17U))) 
                                    | (1U == (3U & 
                                              (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                               >> 0x17U)))) 
                                   & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath_io_out_near_path_ix))))));
    bufp->chgCData(oldp+1942,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__common_overflow) 
                                << 2U) | (((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel)) 
                                             & (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_may_of)) 
                                                 & (((0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                          >> 0x19U))) 
                                                     | (IData)(
                                                               ((0x2000000U 
                                                                 == 
                                                                 (0x6000000U 
                                                                  & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                                & (~ (IData)(
                                                                             ((0x1fffffcU 
                                                                               == 
                                                                               (0x1fffffcU 
                                                                                & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                                              & ((4U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                                                 : 
                                                                                ((1U 
                                                                                != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                                & ((0U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                                & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 1U) 
                                                                                & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 2U)))))))))))))) 
                                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_tinyAdd))) 
                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_out_far_path_ix))) 
                                            | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel) 
                                               & (((0U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                        >> 0x17U))) 
                                                   | (1U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                          >> 0x17U)))) 
                                                  & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath_io_out_near_path_ix)))) 
                                           << 1U) | 
                                          (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel)) 
                                            & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_out_far_path_ix)) 
                                           | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel) 
                                              & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath_io_out_near_path_ix)))))),5);
    bufp->chgBit(oldp+1943,(((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                           >> 0x19U))) 
                             | (IData)(((0x2000000U 
                                         == (0x6000000U 
                                             & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                        & (~ (IData)(
                                                     ((0x1fffffcU 
                                                       == 
                                                       (0x1fffffcU 
                                                        & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                      & ((4U 
                                                          == (IData)(vlSelf->io_in_bits_roundingMode))
                                                          ? 
                                                         (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                          >> 1U)
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->io_in_bits_roundingMode))
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                           & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->io_in_bits_roundingMode))
                                                            ? 
                                                           ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                            & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                            : 
                                                           ((1U 
                                                             != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                            & ((0U 
                                                                == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                               & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                   >> 1U) 
                                                                  & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                     | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                        >> 2U))))))))))))))));
    bufp->chgBit(oldp+1944,((((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                            >> 0x19U))) 
                              | (IData)(((0x2000000U 
                                          == (0x6000000U 
                                              & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                         & (~ (IData)(
                                                      ((0x1fffffcU 
                                                        == 
                                                        (0x1fffffcU 
                                                         & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                       & ((4U 
                                                           == (IData)(vlSelf->io_in_bits_roundingMode))
                                                           ? 
                                                          (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                           >> 1U)
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->io_in_bits_roundingMode))
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                            & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                            : 
                                                           ((3U 
                                                             == (IData)(vlSelf->io_in_bits_roundingMode))
                                                             ? 
                                                            ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                             & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                             : 
                                                            ((1U 
                                                              != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                             & ((0U 
                                                                 == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                      | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                         >> 2U)))))))))))))) 
                             & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_tinyAdd))));
    bufp->chgBit(oldp+1945,(((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_may_of)) 
                             & (((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                               >> 0x19U))) 
                                 | (IData)(((0x2000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                            & (~ (IData)(
                                                         ((0x1fffffcU 
                                                           == 
                                                           (0x1fffffcU 
                                                            & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                          & ((4U 
                                                              == (IData)(vlSelf->io_in_bits_roundingMode))
                                                              ? 
                                                             (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                              >> 1U)
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->io_in_bits_roundingMode))
                                                               ? 
                                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                               & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                ? 
                                                               ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                                : 
                                                               ((1U 
                                                                 != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                & ((0U 
                                                                    == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                   & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                       >> 1U) 
                                                                      & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                         | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                            >> 2U)))))))))))))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath_io_in_tinyAdd)))));
    bufp->chgIData(oldp+1946,((0x7fffffU & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 2U) 
                                            + (1U & 
                                               ((4U 
                                                 == (IData)(vlSelf->io_in_bits_roundingMode))
                                                 ? 
                                                (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                 >> 1U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_in_bits_roundingMode))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                  & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_in_bits_roundingMode))
                                                   ? 
                                                  ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                   & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                   : 
                                                  ((1U 
                                                    != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                      & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                          >> 1U) 
                                                         & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                            | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                               >> 2U)))))))))))),23);
    bufp->chgBit(oldp+1947,((IData)(((0x1fffffcU == 
                                      (0x1fffffcU & vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                     & ((4U == (IData)(vlSelf->io_in_bits_roundingMode))
                                         ? (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                            >> 1U) : 
                                        ((2U == (IData)(vlSelf->io_in_bits_roundingMode))
                                          ? ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                             & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                          : ((3U == (IData)(vlSelf->io_in_bits_roundingMode))
                                              ? ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                              : ((1U 
                                                  != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                 & ((0U 
                                                     == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                    & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                        >> 1U) 
                                                       & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                          | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                             >> 2U))))))))))));
    bufp->chgBit(oldp+1948,((1U & ((4U == (IData)(vlSelf->io_in_bits_roundingMode))
                                    ? (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                       >> 1U) : ((2U 
                                                  == (IData)(vlSelf->io_in_bits_roundingMode))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                  & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_in_bits_roundingMode))
                                                   ? 
                                                  ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                   & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                   : 
                                                  ((1U 
                                                    != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                      & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                          >> 1U) 
                                                         & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                            | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                               >> 2U)))))))))));
    bufp->chgBit(oldp+1949,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_may_of)) 
                              & (((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                >> 0x19U))) 
                                  | (IData)(((0x2000000U 
                                              == (0x6000000U 
                                                  & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                             & (~ (IData)(
                                                          ((0x1fffffcU 
                                                            == 
                                                            (0x1fffffcU 
                                                             & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                           & ((4U 
                                                               == (IData)(vlSelf->io_in_bits_roundingMode))
                                                               ? 
                                                              (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                               >> 1U)
                                                               : 
                                                              ((2U 
                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                ? 
                                                               ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                                : 
                                                               ((3U 
                                                                 == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                 ? 
                                                                ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                                 : 
                                                                ((1U 
                                                                  != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                 & ((0U 
                                                                     == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                    & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                        >> 1U) 
                                                                       & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                          | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                             >> 2U)))))))))))))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_tinyAdd))) 
                             & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_out_far_path_ix))));
    bufp->chgBit(oldp+1950,((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel)) 
                              & (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_may_of)) 
                                  & (((0U == (3U & 
                                              (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                               >> 0x19U))) 
                                      | (IData)(((0x2000000U 
                                                  == 
                                                  (0x6000000U 
                                                   & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                 & (~ (IData)(
                                                              ((0x1fffffcU 
                                                                == 
                                                                (0x1fffffcU 
                                                                 & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                               & ((4U 
                                                                   == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                   ? 
                                                                  (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                   >> 1U)
                                                                   : 
                                                                  ((2U 
                                                                    == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                    ? 
                                                                   ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                                    : 
                                                                   ((3U 
                                                                     == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                     ? 
                                                                    ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                                     : 
                                                                    ((1U 
                                                                      != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                     & ((0U 
                                                                         == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                        & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                            >> 1U) 
                                                                           & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                              | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 2U)))))))))))))) 
                                     & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_tinyAdd))) 
                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_out_far_path_ix))) 
                             | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel) 
                                & (((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                  >> 0x17U))) 
                                    | (1U == (3U & 
                                              (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                               >> 0x17U)))) 
                                   & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath_io_out_near_path_ix))))));
    bufp->chgCData(oldp+1951,((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__common_overflow) 
                                << 2U) | (((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel)) 
                                             & (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_may_of)) 
                                                 & (((0U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                          >> 0x19U))) 
                                                     | (IData)(
                                                               ((0x2000000U 
                                                                 == 
                                                                 (0x6000000U 
                                                                  & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                                & (~ (IData)(
                                                                             ((0x1fffffcU 
                                                                               == 
                                                                               (0x1fffffcU 
                                                                                & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                                              & ((4U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 1U)
                                                                                 : 
                                                                                ((2U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                                                 : 
                                                                                ((3U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                                 ? 
                                                                                ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                                                 : 
                                                                                ((1U 
                                                                                != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                                & ((0U 
                                                                                == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                                & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 1U) 
                                                                                & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                                >> 2U)))))))))))))) 
                                                    & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_tinyAdd))) 
                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_out_far_path_ix))) 
                                            | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel) 
                                               & (((0U 
                                                    == 
                                                    (3U 
                                                     & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                        >> 0x17U))) 
                                                   | (1U 
                                                      == 
                                                      (3U 
                                                       & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___near_path_sig_cor_T 
                                                          >> 0x17U)))) 
                                                  & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath_io_out_near_path_ix)))) 
                                           << 1U) | 
                                          (((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel)) 
                                            & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_out_far_path_ix)) 
                                           | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel) 
                                              & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath_io_out_near_path_ix)))))),5);
    bufp->chgBit(oldp+1952,(((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                           >> 0x19U))) 
                             | (IData)(((0x2000000U 
                                         == (0x6000000U 
                                             & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                        & (~ (IData)(
                                                     ((0x1fffffcU 
                                                       == 
                                                       (0x1fffffcU 
                                                        & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                      & ((4U 
                                                          == (IData)(vlSelf->io_in_bits_roundingMode))
                                                          ? 
                                                         (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                          >> 1U)
                                                          : 
                                                         ((2U 
                                                           == (IData)(vlSelf->io_in_bits_roundingMode))
                                                           ? 
                                                          ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                           & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                           : 
                                                          ((3U 
                                                            == (IData)(vlSelf->io_in_bits_roundingMode))
                                                            ? 
                                                           ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                            & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                            : 
                                                           ((1U 
                                                             != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                            & ((0U 
                                                                == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                               & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                   >> 1U) 
                                                                  & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                     | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                        >> 2U))))))))))))))));
    bufp->chgBit(oldp+1953,((((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                            >> 0x19U))) 
                              | (IData)(((0x2000000U 
                                          == (0x6000000U 
                                              & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                         & (~ (IData)(
                                                      ((0x1fffffcU 
                                                        == 
                                                        (0x1fffffcU 
                                                         & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                       & ((4U 
                                                           == (IData)(vlSelf->io_in_bits_roundingMode))
                                                           ? 
                                                          (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                           >> 1U)
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->io_in_bits_roundingMode))
                                                            ? 
                                                           ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                            & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                            : 
                                                           ((3U 
                                                             == (IData)(vlSelf->io_in_bits_roundingMode))
                                                             ? 
                                                            ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                             & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                             : 
                                                            ((1U 
                                                              != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                             & ((0U 
                                                                 == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                    >> 1U) 
                                                                   & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                      | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                         >> 2U)))))))))))))) 
                             & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_tinyAdd))));
    bufp->chgBit(oldp+1954,(((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_may_of)) 
                             & (((0U == (3U & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                               >> 0x19U))) 
                                 | (IData)(((0x2000000U 
                                             == (0x6000000U 
                                                 & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                            & (~ (IData)(
                                                         ((0x1fffffcU 
                                                           == 
                                                           (0x1fffffcU 
                                                            & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                                          & ((4U 
                                                              == (IData)(vlSelf->io_in_bits_roundingMode))
                                                              ? 
                                                             (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                              >> 1U)
                                                              : 
                                                             ((2U 
                                                               == (IData)(vlSelf->io_in_bits_roundingMode))
                                                               ? 
                                                              ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                               & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                               : 
                                                              ((3U 
                                                                == (IData)(vlSelf->io_in_bits_roundingMode))
                                                                ? 
                                                               ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                                : 
                                                               ((1U 
                                                                 != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                & ((0U 
                                                                    == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                                   & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                       >> 1U) 
                                                                      & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                         | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                                            >> 2U)))))))))))))) 
                                & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath_io_in_tinyAdd)))));
    bufp->chgIData(oldp+1955,((0x7fffffU & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 2U) 
                                            + (1U & 
                                               ((4U 
                                                 == (IData)(vlSelf->io_in_bits_roundingMode))
                                                 ? 
                                                (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                 >> 1U)
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->io_in_bits_roundingMode))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                  & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_in_bits_roundingMode))
                                                   ? 
                                                  ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                   & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                   : 
                                                  ((1U 
                                                    != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                      & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                          >> 1U) 
                                                         & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                            | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                               >> 2U)))))))))))),23);
    bufp->chgBit(oldp+1956,((IData)(((0x1fffffcU == 
                                      (0x1fffffcU & vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig)) 
                                     & ((4U == (IData)(vlSelf->io_in_bits_roundingMode))
                                         ? (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                            >> 1U) : 
                                        ((2U == (IData)(vlSelf->io_in_bits_roundingMode))
                                          ? ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                             & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                          : ((3U == (IData)(vlSelf->io_in_bits_roundingMode))
                                              ? ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                 & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                              : ((1U 
                                                  != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                 & ((0U 
                                                     == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                    & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                        >> 1U) 
                                                       & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                          | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                             >> 2U))))))))))));
    bufp->chgBit(oldp+1957,((1U & ((4U == (IData)(vlSelf->io_in_bits_roundingMode))
                                    ? (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                       >> 1U) : ((2U 
                                                  == (IData)(vlSelf->io_in_bits_roundingMode))
                                                  ? 
                                                 ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact) 
                                                  & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->io_in_bits_roundingMode))
                                                   ? 
                                                  ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                                   & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder__DOT__inexact))
                                                   : 
                                                  ((1U 
                                                    != (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                   & ((0U 
                                                       == (IData)(vlSelf->io_in_bits_roundingMode)) 
                                                      & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                          >> 1U) 
                                                         & (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                            | (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                                               >> 2U)))))))))));
}
