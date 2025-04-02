// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDotProdUnit.h for the primary calling header

#include "verilated.h"

#include "VDotProdUnit__Syms.h"
#include "VDotProdUnit__Syms.h"
#include "VDotProdUnit___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VDotProdUnit___024root___dump_triggers__ico(VDotProdUnit___024root* vlSelf);
#endif  // VL_DEBUG

void VDotProdUnit___024root___eval_triggers__ico(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VDotProdUnit___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VDotProdUnit___024root___dump_triggers__act(VDotProdUnit___024root* vlSelf);
#endif  // VL_DEBUG

void VDotProdUnit___024root___eval_triggers__act(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))));
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VDotProdUnit___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VDotProdUnit___024root___nba_sequent__TOP__0(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__validReg 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->io_in_bits_flush)) 
                                         & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg__DOT___GEN_1)));
    vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__validReg 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->io_in_bits_flush)) 
                                         & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT___GEN_1)));
    if (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT___T) {
        vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag 
            = vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag;
        vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src 
            = vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src;
        vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc 
            = vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc;
        vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
            = (((IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__special_path_hasNaN) 
                | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__decode_a___05FisInf) 
                   | (IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__special_path_hasNaN) 
                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__decode_a___05FisInf)
                                        ? (vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_add_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_add_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__closePathSel)
                                     ? (IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__validReg 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->io_in_bits_flush)) 
                                         & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT___GEN_1)));
    vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__validReg 
        = ((~ (IData)(vlSelf->reset)) & ((~ (IData)(vlSelf->io_in_bits_flush)) 
                                         & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT___GEN_1)));
    vlSelf->io_out_bits_ctrl_rowtag = vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag;
    if (vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT___T) {
        vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag 
            = vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag;
        vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src 
            = vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src;
        vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc 
            = vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc;
        vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_add_res_1 
            = vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_add_res_2;
        vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_add_res_0 
            = (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__special_path_hasNaN) 
                | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__decode_a___05FisInf) 
                   | (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__special_path_hasNaN) 
                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__decode_a___05FisInf)
                                        ? (vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_add_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_add_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__closePathSel)
                                     ? (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->io_out_bits_ctrl_decode_src = vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src;
    vlSelf->io_out_bits_ctrl_mixPc = vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc;
    vlSelf->io_out_valid = vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__validReg;
    vlSelf->DotProdUnit__DOT__pipeline_reg_2_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__validReg)) 
                 | (IData)(vlSelf->io_out_ready)));
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                        >> 0xcU)));
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = ((vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
            >> 0xcU) & (0U != (0x2fffU & vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT___T 
        = ((IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2_io_out_ready) 
           & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__validReg));
    vlSelf->DotProdUnit__DOT__pipeline_reg_1_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__validReg)) 
                 | (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2_io_out_ready)));
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
    if (vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT___T) {
        vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag 
            = vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_ctrl_rowtag;
        vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src 
            = vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_ctrl_decode_src;
        vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc 
            = vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_ctrl_mixPc;
        vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_add_res_2 
            = vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_4;
        vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_add_res_0 
            = (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__special_path_hasNaN) 
                | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__decode_a___05FisInf) 
                   | (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__special_path_hasNaN) 
                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__decode_a___05FisInf)
                                        ? (vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__closePathSel)
                                     ? (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule.__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_add_res_1 
            = (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__special_path_hasNaN) 
                | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__decode_a___05FisInf) 
                   | (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__special_path_hasNaN) 
                    | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__decode_a___05FisInf)
                                        ? (vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_2 
                                           >> 0x1fU)
                                        : (vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_3 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__closePathSel)
                                     ? (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule.__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT___GEN_1 
        = ((IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT___T) 
           | ((~ (IData)(vlSelf->io_out_ready)) & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__validReg)));
    vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT___T 
        = ((IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_1_io_out_ready) 
           & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__validReg));
    vlSelf->DotProdUnit__DOT__pipeline_reg_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT__validReg)) 
                 | (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_1_io_out_ready)));
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
    vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT___GEN_1 
        = ((IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT___T) 
           | ((~ (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2_io_out_ready)) 
              & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_2__DOT__validReg)));
    vlSelf->io_in_ready = (1U & ((~ (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__validReg)) 
                                 | (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_io_out_ready)));
    vlSelf->DotProdUnit__DOT__fcvt_1__DOT___common_exp_T_4 
        = (VL_LTES_III(9, 1U, (0x1ffU & ((0xffU & (vlSelf->DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res 
                                                   >> 0x17U)) 
                                         - (IData)(0x70U)))) 
           & (~ (IData)(vlSelf->DotProdUnit__DOT__fcvt_1__DOT__expOverflow)));
    vlSelf->DotProdUnit__DOT__pipeline_reg_1__DOT___T 
        = ((IData)(vlSelf->DotProdUnit__DOT__pipeline_reg_io_out_ready) 
           & (IData)(vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__validReg));
    if (vlSelf->DotProdUnit__DOT__pipeline_reg__DOT___T) {
        vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_ctrl_rowtag 
            = vlSelf->io_in_bits_ctrl_rowtag;
        vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_ctrl_decode_src 
            = vlSelf->io_in_bits_ctrl_decode_src;
        if (vlSelf->io_in_bits_ctrl_mixPc) {
            vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 1U;
            vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_4 
                = vlSelf->io_in_bits_c;
        } else {
            vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 0U;
            vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_4 
                = ((((~ ((0x1fU == (IData)(vlSelf->DotProdUnit__DOT__fcvt__DOT__fp_in_exp)) 
                         & (IData)(vlSelf->DotProdUnit__DOT__fcvt__DOT__decode_in_sigNotZero))) 
                     & (IData)((0xffff8000U == (0xffff8000U 
                                                & vlSelf->io_in_bits_c)))) 
                    << 0x1fU) | ((0x7f800000U & (((
                                                   ((0x1fU 
                                                     == (IData)(vlSelf->DotProdUnit__DOT__fcvt__DOT__fp_in_exp))
                                                     ? 0xffU
                                                     : 0U) 
                                                   | (((~ (IData)(
                                                                  (0U 
                                                                   != (IData)(vlSelf->DotProdUnit__DOT__fcvt__DOT__fp_in_exp)))) 
                                                       & (IData)(vlSelf->DotProdUnit__DOT__fcvt__DOT__decode_in_sigNotZero))
                                                       ? 
                                                      ((IData)(0x70U) 
                                                       - (IData)(vlSelf->DotProdUnit__DOT__fcvt__DOT__subnormal_shamt_lzc_io_out))
                                                       : 0U)) 
                                                  | ((IData)(vlSelf->DotProdUnit__DOT__fcvt__DOT___result_T_4)
                                                      ? 
                                                     ((IData)(0x70U) 
                                                      + (IData)(vlSelf->DotProdUnit__DOT__fcvt__DOT__fp_in_exp))
                                                      : 0U)) 
                                                 << 0x17U)) 
                                 | ((((0x1fU == (IData)(vlSelf->DotProdUnit__DOT__fcvt__DOT__fp_in_exp))
                                       ? ((IData)(vlSelf->DotProdUnit__DOT__fcvt__DOT__decode_in_sigNotZero) 
                                          << 0x16U)
                                       : 0U) | ((0U 
                                                 != (IData)(vlSelf->DotProdUnit__DOT__fcvt__DOT__fp_in_exp))
                                                 ? 0U
                                                 : 
                                                (0x7fc000U 
                                                 & ((((0xffffU 
                                                       == 
                                                       (vlSelf->io_in_bits_c 
                                                        >> 0x10U))
                                                       ? vlSelf->io_in_bits_c
                                                       : 0U) 
                                                     << (IData)(vlSelf->DotProdUnit__DOT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                    << 0xeU)))) 
                                    | ((IData)(vlSelf->DotProdUnit__DOT__fcvt__DOT___result_T_4)
                                        ? ((IData)(vlSelf->DotProdUnit__DOT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                           << 0xdU)
                                        : 0U))));
        }
        vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_0 
            = (((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasZero) 
                | ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasNaN) 
                   | (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasInf)))
                ? (((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasNaN) 
                    | ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasZero) 
                       & (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->DotProdUnit__DOT__fmul__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_1 
            = (((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasZero) 
                | ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasNaN) 
                   | (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasInf)))
                ? (((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasNaN) 
                    | ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasZero) 
                       & (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_2 
            = (((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasInf)))
                ? (((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasNaN) 
                    | ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasZero) 
                       & (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_3 
            = (((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasInf)))
                ? (((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasNaN) 
                    | ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasZero) 
                       & (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
    }
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

void VDotProdUnit_FADD___nba_sequent__TOP__DotProdUnit__DOT__fadd_final_res_faddModule__0(VDotProdUnit_FADD* vlSelf);
void VDotProdUnit_FADD___nba_sequent__TOP__DotProdUnit__DOT__addResult_0_faddModule_1__0(VDotProdUnit_FADD* vlSelf);
void VDotProdUnit_FADD___nba_sequent__TOP__DotProdUnit__DOT__addResult_0_faddModule__0(VDotProdUnit_FADD* vlSelf);
void VDotProdUnit_FADD___nba_sequent__TOP__DotProdUnit__DOT__addResult_1_faddModule__0(VDotProdUnit_FADD* vlSelf);

void VDotProdUnit___024root___eval_nba(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDotProdUnit___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VDotProdUnit_FADD___nba_sequent__TOP__DotProdUnit__DOT__fadd_final_res_faddModule__0((&vlSymsp->TOP__DotProdUnit__DOT__fadd_final_res_faddModule));
        VDotProdUnit_FADD___nba_sequent__TOP__DotProdUnit__DOT__addResult_0_faddModule_1__0((&vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule_1));
        VDotProdUnit_FADD___nba_sequent__TOP__DotProdUnit__DOT__addResult_0_faddModule__0((&vlSymsp->TOP__DotProdUnit__DOT__addResult_0_faddModule));
        VDotProdUnit_FADD___nba_sequent__TOP__DotProdUnit__DOT__addResult_1_faddModule__0((&vlSymsp->TOP__DotProdUnit__DOT__addResult_1_faddModule));
    }
}
