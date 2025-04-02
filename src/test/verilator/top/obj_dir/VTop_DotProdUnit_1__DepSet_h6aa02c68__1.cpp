// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_DotProdUnit_1.h"
#include "VTop_FADD.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__0(VTop_DotProdUnit_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__0\n"); );
    // Body
    if (vlSelf->__PVT__pipeline_reg_3__DOT___T) {
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            = (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg__DOT__validReg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                  & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_1__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_2__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_3__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1)));
    if (vlSelf->__PVT__pipeline_reg_2__DOT___T) {
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_2_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)) 
                                                     | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                        >> 0xcU)));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            >> 0xcU) & (0U != (0x2fffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->__PVT__pipeline_reg_3__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_1_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)) 
                                                     | (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    if (vlSelf->__PVT__pipeline_reg_1__DOT___T) {
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT___T) 
                                                  | ((~ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg_2__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_io_out_ready = (1U 
                                                & ((~ (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)) 
                                                   | (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = (((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                 >> 0x17U)))) 
            & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T)) 
           & (((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                       & (((0xffffU & ((IData)(1U) 
                                       << (0xfU & ((IData)(1U) 
                                                   - 
                                                   (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                    >> 0x17U))))) 
                           - (IData)(1U)) | ((0xcU 
                                              < (0xffU 
                                                 & ((IData)(0x71U) 
                                                    - 
                                                    (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x17U))))
                                              ? 0xfffU
                                              : 0U)))) 
               | (0U != (0xfffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
              | ((0xcU >= (0xffU & ((IData)(0x71U) 
                                    - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                       >> 0x17U)))) 
                 & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                    >> 1U))));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_2__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
    vlSelf->__PVT__pipeline_reg_1__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg));
    if (vlSelf->__PVT__pipeline_reg__DOT___T) {
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag = 0U;
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src = 0U;
        if (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg.__PVT__dp_in_ctrl_mixPc_REG) {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 1U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg.__PVT__dp_in_c_3;
        } else {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 0U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = ((((~ ((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                         & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                     & (IData)((0xffff8000U == (0xffff8000U 
                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg.__PVT__dp_in_c_3)))) 
                    << 0x1fU) | ((0x7f800000U & (((
                                                   ((0x1fU 
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
                                 | ((((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                       ? ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                          << 0x16U)
                                       : 0U) | ((0U 
                                                 != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                 ? 0U
                                                 : 
                                                (0x7fc000U 
                                                 & ((((0xffffU 
                                                       == 
                                                       (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg.__PVT__dp_in_c_3 
                                                        >> 0x10U))
                                                       ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg.__PVT__dp_in_c_3
                                                       : 0U) 
                                                     << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                    << 0xeU)))) 
                                    | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                        ? ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                           << 0xdU)
                                        : 0U))));
        }
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
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
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
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
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc)
                                          ? vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((VL_LTES_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U)))) 
                                                               & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow))
                                                               ? 0x1fU
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
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
                                                            & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            (((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                               ? 
                                                              ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0xdU) 
                                                               + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                               : 0U) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
    vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_1__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg__DOT___T = (((~ (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)) 
                                             | (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg.__PVT__dp_in_valid));
    vlSelf->__PVT__pipeline_reg__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg__DOT___T) 
                                                | ((~ (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                                   & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)));
}

VL_INLINE_OPT void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__0(VTop_DotProdUnit_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__0\n"); );
    // Body
    if (vlSelf->__PVT__pipeline_reg_3__DOT___T) {
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            = (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg__DOT__validReg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                  & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_1__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_2__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_3__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1)));
    if (vlSelf->__PVT__pipeline_reg_2__DOT___T) {
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_2_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)) 
                                                     | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                        >> 0xcU)));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            >> 0xcU) & (0U != (0x2fffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->__PVT__pipeline_reg_3__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_1_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)) 
                                                     | (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    if (vlSelf->__PVT__pipeline_reg_1__DOT___T) {
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT___T) 
                                                  | ((~ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg_2__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_io_out_ready = (1U 
                                                & ((~ (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)) 
                                                   | (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = (((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                 >> 0x17U)))) 
            & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T)) 
           & (((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                       & (((0xffffU & ((IData)(1U) 
                                       << (0xfU & ((IData)(1U) 
                                                   - 
                                                   (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                    >> 0x17U))))) 
                           - (IData)(1U)) | ((0xcU 
                                              < (0xffU 
                                                 & ((IData)(0x71U) 
                                                    - 
                                                    (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x17U))))
                                              ? 0xfffU
                                              : 0U)))) 
               | (0U != (0xfffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
              | ((0xcU >= (0xffU & ((IData)(0x71U) 
                                    - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                       >> 0x17U)))) 
                 & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                    >> 1U))));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_2__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
    vlSelf->__PVT__pipeline_reg_1__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg));
    if (vlSelf->__PVT__pipeline_reg__DOT___T) {
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag = 0U;
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src = 0U;
        if (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_ctrl_mixPc_REG) {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 1U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_c_1;
        } else {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 0U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = ((((~ ((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                         & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                     & (IData)((0xffff8000U == (0xffff8000U 
                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_c_1)))) 
                    << 0x1fU) | ((0x7f800000U & (((
                                                   ((0x1fU 
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
                                 | ((((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                       ? ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                          << 0x16U)
                                       : 0U) | ((0U 
                                                 != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                 ? 0U
                                                 : 
                                                (0x7fc000U 
                                                 & ((((0xffffU 
                                                       == 
                                                       (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_c_1 
                                                        >> 0x10U))
                                                       ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_c_1
                                                       : 0U) 
                                                     << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                    << 0xeU)))) 
                                    | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                        ? ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                           << 0xdU)
                                        : 0U))));
        }
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
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
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
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
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc)
                                          ? vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((VL_LTES_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U)))) 
                                                               & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow))
                                                               ? 0x1fU
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
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
                                                            & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            (((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                               ? 
                                                              ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0xdU) 
                                                               + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                               : 0U) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
    vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_1__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg__DOT___T = (((~ (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)) 
                                             | (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_valid));
    vlSelf->__PVT__pipeline_reg__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg__DOT___T) 
                                                | ((~ (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                                   & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)));
}

VL_INLINE_OPT void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__0(VTop_DotProdUnit_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__0\n"); );
    // Body
    if (vlSelf->__PVT__pipeline_reg_3__DOT___T) {
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            = (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg__DOT__validReg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                  & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_1__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_2__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_3__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1)));
    if (vlSelf->__PVT__pipeline_reg_2__DOT___T) {
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_2_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)) 
                                                     | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                        >> 0xcU)));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            >> 0xcU) & (0U != (0x2fffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->__PVT__pipeline_reg_3__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_1_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)) 
                                                     | (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    if (vlSelf->__PVT__pipeline_reg_1__DOT___T) {
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT___T) 
                                                  | ((~ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg_2__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_io_out_ready = (1U 
                                                & ((~ (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)) 
                                                   | (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = (((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                 >> 0x17U)))) 
            & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T)) 
           & (((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                       & (((0xffffU & ((IData)(1U) 
                                       << (0xfU & ((IData)(1U) 
                                                   - 
                                                   (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                    >> 0x17U))))) 
                           - (IData)(1U)) | ((0xcU 
                                              < (0xffU 
                                                 & ((IData)(0x71U) 
                                                    - 
                                                    (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x17U))))
                                              ? 0xfffU
                                              : 0U)))) 
               | (0U != (0xfffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
              | ((0xcU >= (0xffU & ((IData)(0x71U) 
                                    - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                       >> 0x17U)))) 
                 & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                    >> 1U))));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_2__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
    vlSelf->__PVT__pipeline_reg_1__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg));
    if (vlSelf->__PVT__pipeline_reg__DOT___T) {
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag = 0U;
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src = 0U;
        if (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_ctrl_mixPc_REG) {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 1U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_c_2;
        } else {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 0U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = ((((~ ((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                         & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                     & (IData)((0xffff8000U == (0xffff8000U 
                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_c_2)))) 
                    << 0x1fU) | ((0x7f800000U & (((
                                                   ((0x1fU 
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
                                 | ((((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                       ? ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                          << 0x16U)
                                       : 0U) | ((0U 
                                                 != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                 ? 0U
                                                 : 
                                                (0x7fc000U 
                                                 & ((((0xffffU 
                                                       == 
                                                       (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_c_2 
                                                        >> 0x10U))
                                                       ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_c_2
                                                       : 0U) 
                                                     << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                    << 0xeU)))) 
                                    | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                        ? ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                           << 0xdU)
                                        : 0U))));
        }
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
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
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
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
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc)
                                          ? vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((VL_LTES_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U)))) 
                                                               & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow))
                                                               ? 0x1fU
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
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
                                                            & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            (((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                               ? 
                                                              ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0xdU) 
                                                               + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                               : 0U) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
    vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_1__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg__DOT___T = (((~ (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)) 
                                             | (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_valid));
    vlSelf->__PVT__pipeline_reg__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg__DOT___T) 
                                                | ((~ (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                                   & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)));
}

VL_INLINE_OPT void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__0(VTop_DotProdUnit_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__0\n"); );
    // Body
    if (vlSelf->__PVT__pipeline_reg_3__DOT___T) {
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            = (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg__DOT__validReg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                  & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_1__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_2__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_3__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1)));
    if (vlSelf->__PVT__pipeline_reg_2__DOT___T) {
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_2_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)) 
                                                     | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                        >> 0xcU)));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            >> 0xcU) & (0U != (0x2fffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->__PVT__pipeline_reg_3__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_1_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)) 
                                                     | (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    if (vlSelf->__PVT__pipeline_reg_1__DOT___T) {
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT___T) 
                                                  | ((~ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg_2__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_io_out_ready = (1U 
                                                & ((~ (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)) 
                                                   | (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = (((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                 >> 0x17U)))) 
            & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T)) 
           & (((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                       & (((0xffffU & ((IData)(1U) 
                                       << (0xfU & ((IData)(1U) 
                                                   - 
                                                   (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                    >> 0x17U))))) 
                           - (IData)(1U)) | ((0xcU 
                                              < (0xffU 
                                                 & ((IData)(0x71U) 
                                                    - 
                                                    (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x17U))))
                                              ? 0xfffU
                                              : 0U)))) 
               | (0U != (0xfffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
              | ((0xcU >= (0xffU & ((IData)(0x71U) 
                                    - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                       >> 0x17U)))) 
                 & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                    >> 1U))));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_2__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
    vlSelf->__PVT__pipeline_reg_1__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg));
    if (vlSelf->__PVT__pipeline_reg__DOT___T) {
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag = 0U;
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src = 0U;
        if (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_ctrl_mixPc_REG) {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 1U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_c_3;
        } else {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 0U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = ((((~ ((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                         & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                     & (IData)((0xffff8000U == (0xffff8000U 
                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_c_3)))) 
                    << 0x1fU) | ((0x7f800000U & (((
                                                   ((0x1fU 
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
                                 | ((((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                       ? ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                          << 0x16U)
                                       : 0U) | ((0U 
                                                 != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                 ? 0U
                                                 : 
                                                (0x7fc000U 
                                                 & ((((0xffffU 
                                                       == 
                                                       (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_c_3 
                                                        >> 0x10U))
                                                       ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_c_3
                                                       : 0U) 
                                                     << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                    << 0xeU)))) 
                                    | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                        ? ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                           << 0xdU)
                                        : 0U))));
        }
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
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
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
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
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc)
                                          ? vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((VL_LTES_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U)))) 
                                                               & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow))
                                                               ? 0x1fU
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
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
                                                            & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            (((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                               ? 
                                                              ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0xdU) 
                                                               + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                               : 0U) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
    vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_1__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg__DOT___T = (((~ (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)) 
                                             | (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1.__PVT__dp_in_valid));
    vlSelf->__PVT__pipeline_reg__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg__DOT___T) 
                                                | ((~ (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                                   & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)));
}

VL_INLINE_OPT void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__0(VTop_DotProdUnit_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__0\n"); );
    // Body
    if (vlSelf->__PVT__pipeline_reg_3__DOT___T) {
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            = (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg__DOT__validReg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                  & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_1__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_2__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_3__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1)));
    if (vlSelf->__PVT__pipeline_reg_2__DOT___T) {
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_2_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)) 
                                                     | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                        >> 0xcU)));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            >> 0xcU) & (0U != (0x2fffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->__PVT__pipeline_reg_3__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_1_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)) 
                                                     | (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    if (vlSelf->__PVT__pipeline_reg_1__DOT___T) {
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT___T) 
                                                  | ((~ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg_2__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_io_out_ready = (1U 
                                                & ((~ (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)) 
                                                   | (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = (((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                 >> 0x17U)))) 
            & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T)) 
           & (((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                       & (((0xffffU & ((IData)(1U) 
                                       << (0xfU & ((IData)(1U) 
                                                   - 
                                                   (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                    >> 0x17U))))) 
                           - (IData)(1U)) | ((0xcU 
                                              < (0xffU 
                                                 & ((IData)(0x71U) 
                                                    - 
                                                    (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x17U))))
                                              ? 0xfffU
                                              : 0U)))) 
               | (0U != (0xfffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
              | ((0xcU >= (0xffU & ((IData)(0x71U) 
                                    - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                       >> 0x17U)))) 
                 & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                    >> 1U))));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_2__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
    vlSelf->__PVT__pipeline_reg_1__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg));
    if (vlSelf->__PVT__pipeline_reg__DOT___T) {
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag = 0U;
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src = 0U;
        if (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_ctrl_mixPc_REG) {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 1U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_c_1;
        } else {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 0U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = ((((~ ((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                         & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                     & (IData)((0xffff8000U == (0xffff8000U 
                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_c_1)))) 
                    << 0x1fU) | ((0x7f800000U & (((
                                                   ((0x1fU 
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
                                 | ((((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                       ? ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                          << 0x16U)
                                       : 0U) | ((0U 
                                                 != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                 ? 0U
                                                 : 
                                                (0x7fc000U 
                                                 & ((((0xffffU 
                                                       == 
                                                       (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_c_1 
                                                        >> 0x10U))
                                                       ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_c_1
                                                       : 0U) 
                                                     << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                    << 0xeU)))) 
                                    | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                        ? ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                           << 0xdU)
                                        : 0U))));
        }
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
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
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
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
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc)
                                          ? vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((VL_LTES_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U)))) 
                                                               & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow))
                                                               ? 0x1fU
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
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
                                                            & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            (((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                               ? 
                                                              ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0xdU) 
                                                               + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                               : 0U) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
    vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_1__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg__DOT___T = (((~ (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)) 
                                             | (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_valid));
    vlSelf->__PVT__pipeline_reg__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg__DOT___T) 
                                                | ((~ (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                                   & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)));
}

VL_INLINE_OPT void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__0(VTop_DotProdUnit_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__0\n"); );
    // Body
    if (vlSelf->__PVT__pipeline_reg_3__DOT___T) {
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            = (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg__DOT__validReg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                  & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_1__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_2__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_3__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1)));
    if (vlSelf->__PVT__pipeline_reg_2__DOT___T) {
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_2_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)) 
                                                     | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                        >> 0xcU)));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            >> 0xcU) & (0U != (0x2fffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->__PVT__pipeline_reg_3__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_1_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)) 
                                                     | (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    if (vlSelf->__PVT__pipeline_reg_1__DOT___T) {
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT___T) 
                                                  | ((~ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg_2__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_io_out_ready = (1U 
                                                & ((~ (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)) 
                                                   | (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = (((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                 >> 0x17U)))) 
            & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T)) 
           & (((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                       & (((0xffffU & ((IData)(1U) 
                                       << (0xfU & ((IData)(1U) 
                                                   - 
                                                   (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                    >> 0x17U))))) 
                           - (IData)(1U)) | ((0xcU 
                                              < (0xffU 
                                                 & ((IData)(0x71U) 
                                                    - 
                                                    (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x17U))))
                                              ? 0xfffU
                                              : 0U)))) 
               | (0U != (0xfffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
              | ((0xcU >= (0xffU & ((IData)(0x71U) 
                                    - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                       >> 0x17U)))) 
                 & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                    >> 1U))));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_2__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
    vlSelf->__PVT__pipeline_reg_1__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg));
    if (vlSelf->__PVT__pipeline_reg__DOT___T) {
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag = 0U;
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src = 0U;
        if (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_ctrl_mixPc_REG) {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 1U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_c_2;
        } else {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 0U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = ((((~ ((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                         & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                     & (IData)((0xffff8000U == (0xffff8000U 
                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_c_2)))) 
                    << 0x1fU) | ((0x7f800000U & (((
                                                   ((0x1fU 
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
                                 | ((((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                       ? ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                          << 0x16U)
                                       : 0U) | ((0U 
                                                 != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                 ? 0U
                                                 : 
                                                (0x7fc000U 
                                                 & ((((0xffffU 
                                                       == 
                                                       (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_c_2 
                                                        >> 0x10U))
                                                       ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_c_2
                                                       : 0U) 
                                                     << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                    << 0xeU)))) 
                                    | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                        ? ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                           << 0xdU)
                                        : 0U))));
        }
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
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
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
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
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc)
                                          ? vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((VL_LTES_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U)))) 
                                                               & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow))
                                                               ? 0x1fU
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
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
                                                            & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            (((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                               ? 
                                                              ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0xdU) 
                                                               + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                               : 0U) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
    vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_1__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg__DOT___T = (((~ (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)) 
                                             | (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_valid));
    vlSelf->__PVT__pipeline_reg__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg__DOT___T) 
                                                | ((~ (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                                   & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)));
}

VL_INLINE_OPT void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__0(VTop_DotProdUnit_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__0\n"); );
    // Body
    if (vlSelf->__PVT__pipeline_reg_3__DOT___T) {
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            = (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg__DOT__validReg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                  & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_1__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_2__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_3__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1)));
    if (vlSelf->__PVT__pipeline_reg_2__DOT___T) {
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_2_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)) 
                                                     | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                        >> 0xcU)));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            >> 0xcU) & (0U != (0x2fffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->__PVT__pipeline_reg_3__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_1_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)) 
                                                     | (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    if (vlSelf->__PVT__pipeline_reg_1__DOT___T) {
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT___T) 
                                                  | ((~ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg_2__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_io_out_ready = (1U 
                                                & ((~ (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)) 
                                                   | (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = (((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                 >> 0x17U)))) 
            & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T)) 
           & (((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                       & (((0xffffU & ((IData)(1U) 
                                       << (0xfU & ((IData)(1U) 
                                                   - 
                                                   (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                    >> 0x17U))))) 
                           - (IData)(1U)) | ((0xcU 
                                              < (0xffU 
                                                 & ((IData)(0x71U) 
                                                    - 
                                                    (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x17U))))
                                              ? 0xfffU
                                              : 0U)))) 
               | (0U != (0xfffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
              | ((0xcU >= (0xffU & ((IData)(0x71U) 
                                    - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                       >> 0x17U)))) 
                 & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                    >> 1U))));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_2__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
    vlSelf->__PVT__pipeline_reg_1__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg));
    if (vlSelf->__PVT__pipeline_reg__DOT___T) {
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag = 0U;
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src = 0U;
        if (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_ctrl_mixPc_REG) {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 1U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_c_3;
        } else {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 0U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = ((((~ ((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                         & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                     & (IData)((0xffff8000U == (0xffff8000U 
                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_c_3)))) 
                    << 0x1fU) | ((0x7f800000U & (((
                                                   ((0x1fU 
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
                                 | ((((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                       ? ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                          << 0x16U)
                                       : 0U) | ((0U 
                                                 != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                 ? 0U
                                                 : 
                                                (0x7fc000U 
                                                 & ((((0xffffU 
                                                       == 
                                                       (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_c_3 
                                                        >> 0x10U))
                                                       ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_c_3
                                                       : 0U) 
                                                     << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                    << 0xeU)))) 
                                    | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                        ? ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                           << 0xdU)
                                        : 0U))));
        }
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
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
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
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
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc)
                                          ? vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((VL_LTES_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U)))) 
                                                               & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow))
                                                               ? 0x1fU
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
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
                                                            & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            (((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                               ? 
                                                              ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0xdU) 
                                                               + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                               : 0U) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
    vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_1__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg__DOT___T = (((~ (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)) 
                                             | (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg.__PVT__dp_in_valid));
    vlSelf->__PVT__pipeline_reg__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg__DOT___T) 
                                                | ((~ (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                                   & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)));
}

VL_INLINE_OPT void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__0(VTop_DotProdUnit_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__0\n"); );
    // Body
    if (vlSelf->__PVT__pipeline_reg_3__DOT___T) {
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            = (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg__DOT__validReg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                  & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_1__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_2__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_3__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1)));
    if (vlSelf->__PVT__pipeline_reg_2__DOT___T) {
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_2_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)) 
                                                     | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                        >> 0xcU)));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            >> 0xcU) & (0U != (0x2fffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->__PVT__pipeline_reg_3__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_1_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)) 
                                                     | (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    if (vlSelf->__PVT__pipeline_reg_1__DOT___T) {
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT___T) 
                                                  | ((~ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg_2__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_io_out_ready = (1U 
                                                & ((~ (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)) 
                                                   | (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = (((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                 >> 0x17U)))) 
            & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T)) 
           & (((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                       & (((0xffffU & ((IData)(1U) 
                                       << (0xfU & ((IData)(1U) 
                                                   - 
                                                   (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                    >> 0x17U))))) 
                           - (IData)(1U)) | ((0xcU 
                                              < (0xffU 
                                                 & ((IData)(0x71U) 
                                                    - 
                                                    (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x17U))))
                                              ? 0xfffU
                                              : 0U)))) 
               | (0U != (0xfffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
              | ((0xcU >= (0xffU & ((IData)(0x71U) 
                                    - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                       >> 0x17U)))) 
                 & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                    >> 1U))));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_2__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
    vlSelf->__PVT__pipeline_reg_1__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg));
    if (vlSelf->__PVT__pipeline_reg__DOT___T) {
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag = 0U;
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src = 0U;
        if (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_ctrl_mixPc_REG) {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 1U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_1;
        } else {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 0U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = ((((~ ((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                         & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                     & (IData)((0xffff8000U == (0xffff8000U 
                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_1)))) 
                    << 0x1fU) | ((0x7f800000U & (((
                                                   ((0x1fU 
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
                                 | ((((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                       ? ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                          << 0x16U)
                                       : 0U) | ((0U 
                                                 != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                 ? 0U
                                                 : 
                                                (0x7fc000U 
                                                 & ((((0xffffU 
                                                       == 
                                                       (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_1 
                                                        >> 0x10U))
                                                       ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_1
                                                       : 0U) 
                                                     << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                    << 0xeU)))) 
                                    | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                        ? ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                           << 0xdU)
                                        : 0U))));
        }
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
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
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
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
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc)
                                          ? vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((VL_LTES_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U)))) 
                                                               & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow))
                                                               ? 0x1fU
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
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
                                                            & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            (((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                               ? 
                                                              ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0xdU) 
                                                               + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                               : 0U) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
    vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_1__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg__DOT___T = (((~ (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)) 
                                             | (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_valid));
    vlSelf->__PVT__pipeline_reg__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg__DOT___T) 
                                                | ((~ (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                                   & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)));
}

VL_INLINE_OPT void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__0(VTop_DotProdUnit_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__0\n"); );
    // Body
    if (vlSelf->__PVT__pipeline_reg_3__DOT___T) {
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            = (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg__DOT__validReg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                  & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_1__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_2__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_3__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1)));
    if (vlSelf->__PVT__pipeline_reg_2__DOT___T) {
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_2_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)) 
                                                     | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                        >> 0xcU)));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            >> 0xcU) & (0U != (0x2fffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->__PVT__pipeline_reg_3__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_1_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)) 
                                                     | (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    if (vlSelf->__PVT__pipeline_reg_1__DOT___T) {
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT___T) 
                                                  | ((~ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg_2__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_io_out_ready = (1U 
                                                & ((~ (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)) 
                                                   | (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = (((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                 >> 0x17U)))) 
            & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T)) 
           & (((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                       & (((0xffffU & ((IData)(1U) 
                                       << (0xfU & ((IData)(1U) 
                                                   - 
                                                   (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                    >> 0x17U))))) 
                           - (IData)(1U)) | ((0xcU 
                                              < (0xffU 
                                                 & ((IData)(0x71U) 
                                                    - 
                                                    (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x17U))))
                                              ? 0xfffU
                                              : 0U)))) 
               | (0U != (0xfffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
              | ((0xcU >= (0xffU & ((IData)(0x71U) 
                                    - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                       >> 0x17U)))) 
                 & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                    >> 1U))));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_2__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
    vlSelf->__PVT__pipeline_reg_1__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg));
    if (vlSelf->__PVT__pipeline_reg__DOT___T) {
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag = 0U;
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src = 0U;
        if (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_ctrl_mixPc_REG) {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 1U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2;
        } else {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 0U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = ((((~ ((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                         & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                     & (IData)((0xffff8000U == (0xffff8000U 
                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2)))) 
                    << 0x1fU) | ((0x7f800000U & (((
                                                   ((0x1fU 
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
                                 | ((((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                       ? ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                          << 0x16U)
                                       : 0U) | ((0U 
                                                 != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                 ? 0U
                                                 : 
                                                (0x7fc000U 
                                                 & ((((0xffffU 
                                                       == 
                                                       (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2 
                                                        >> 0x10U))
                                                       ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_2
                                                       : 0U) 
                                                     << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                    << 0xeU)))) 
                                    | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                        ? ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                           << 0xdU)
                                        : 0U))));
        }
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
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
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
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
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc)
                                          ? vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((VL_LTES_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U)))) 
                                                               & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow))
                                                               ? 0x1fU
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
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
                                                            & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            (((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                               ? 
                                                              ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0xdU) 
                                                               + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                               : 0U) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
    vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_1__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg__DOT___T = (((~ (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)) 
                                             | (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_valid));
    vlSelf->__PVT__pipeline_reg__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg__DOT___T) 
                                                | ((~ (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                                   & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)));
}

VL_INLINE_OPT void VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__0(VTop_DotProdUnit_1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VTop_DotProdUnit_1___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__0\n"); );
    // Body
    if (vlSelf->__PVT__pipeline_reg_3__DOT___T) {
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            = (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__final_fadd_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg__DOT__validReg = ((~ (IData)(vlSymsp->TOP.reset)) 
                                                  & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_1__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_2__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1)));
    vlSelf->__PVT__pipeline_reg_3__DOT__validReg = 
        ((~ (IData)(vlSymsp->TOP.reset)) & ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_flush)) 
                                            & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1)));
    if (vlSelf->__PVT__pipeline_reg_2__DOT___T) {
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_1 
            = vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2;
        vlSelf->__PVT__pipeline_reg_2__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule_1->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_2_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)) 
                                                     | (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in 
        = (((IData)((0U != (0xffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                     >> 0x17U)))) << 0xbU) 
           | (0x7ffU & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                        >> 0xcU)));
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up 
        = ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
            >> 0xcU) & (0U != (0x2fffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    vlSelf->__PVT__pipeline_reg_3__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_1_io_out_ready = (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)) 
                                                     | (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T 
        = ((0xbU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                >> 0x17U))))
            ? (0xfffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                         >> (0xffU & ((IData)(0x71U) 
                                      - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                         >> 0x17U)))))
            : 0U);
    vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout 
        = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up) 
           & (0x7fe000U == (0x7fe000U & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)));
    if (vlSelf->__PVT__pipeline_reg_1__DOT___T) {
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_2 
            = vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4;
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_0_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->__PVT__pipeline_reg_1__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                   | (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf)))
                ? (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__special_path_hasNaN) 
                    | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf) 
                       & ((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig)) 
                          & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_b___05FisInf))))
                    ? 0x7fc00000U : (0x7f800000U | 
                                     (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__decode_a___05FisInf)
                                        ? (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
                                           >> 0x1fU)
                                        : (vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
                                           >> 0x1fU)) 
                                      << 0x1fU))) : 
               ((((~ (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)) 
                  & ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                     | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                         & (0xfeU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound))) 
                        | ((0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_b_exp)) 
                           & (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_addSig))))) 
                 | ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel) 
                    & (0xffU == (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded))))
                 ? (0x7f800000U | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                     ? (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1)
                                     : (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign)) 
                                   << 0x1fU)) : ((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePathSel)
                                                  ? 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___io_out_result_T_1) 
                                                   << 0x1fU) 
                                                  | (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_exp_rounded) 
                                                      << 0x17U) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT___sig_s3_T 
                                                            >> 1U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                                                  : 
                                                 (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath_io_in_a_sign) 
                                                   << 0x1fU) 
                                                  | ((0x7f800000U 
                                                      & (((IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                                          + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultExpNoRound)) 
                                                         << 0x17U)) 
                                                     | (0x7fffffU 
                                                        & ((vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__resultSigNoRound 
                                                            >> 3U) 
                                                           + (IData)(vlSelf->__PVT__addResult_1_faddModule->__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    vlSelf->__PVT__pipeline_reg_3__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT___T) 
                                                  | ((~ (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp__DOT__pipeline_reg_3_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_3__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg_2__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg));
    vlSelf->__PVT__pipeline_reg_io_out_ready = (1U 
                                                & ((~ (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)) 
                                                   | (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in 
        = ((0xcU < (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                               >> 0x17U))))
            ? 0U : (0x3ffU & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                              >> 1U)));
    vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up 
        = (((0xcU >= (0xffU & ((IData)(0x71U) - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                 >> 0x17U)))) 
            & (IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T)) 
           & (((0U != ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam_io_in) 
                       & (((0xffffU & ((IData)(1U) 
                                       << (0xfU & ((IData)(1U) 
                                                   - 
                                                   (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                    >> 0x17U))))) 
                           - (IData)(1U)) | ((0xcU 
                                              < (0xffU 
                                                 & ((IData)(0x71U) 
                                                    - 
                                                    (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x17U))))
                                              ? 0xfffU
                                              : 0U)))) 
               | (0U != (0xfffU & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
              | ((0xcU >= (0xffU & ((IData)(0x71U) 
                                    - (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                       >> 0x17U)))) 
                 & ((IData)(vlSelf->__PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T) 
                    >> 1U))));
    vlSelf->__PVT__fcvt_1__DOT__expOverflow = ((IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout)
                                                ? VL_LTS_III(9, 0x1dU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U))))
                                                : VL_LTS_III(9, 0x1eU, 
                                                             (0x1ffU 
                                                              & ((0xffU 
                                                                  & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                     >> 0x17U)) 
                                                                 - (IData)(0x70U)))));
    vlSelf->__PVT__pipeline_reg_2__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_2__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_2_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_2__DOT__validReg)));
    vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4 = (
                                                   VL_LTES_III(9, 1U, 
                                                               (0x1ffU 
                                                                & ((0xffU 
                                                                    & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                       >> 0x17U)) 
                                                                   - (IData)(0x70U)))) 
                                                   & (~ (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow)));
    vlSelf->__PVT__pipeline_reg_1__DOT___T = ((IData)(vlSelf->__PVT__pipeline_reg_io_out_ready) 
                                              & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg));
    if (vlSelf->__PVT__pipeline_reg__DOT___T) {
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag = 0U;
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src = 0U;
        if (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_ctrl_mixPc_REG) {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 1U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3;
        } else {
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc = 0U;
            vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_4 
                = ((((~ ((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp)) 
                         & (IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero))) 
                     & (IData)((0xffff8000U == (0xffff8000U 
                                                & vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3)))) 
                    << 0x1fU) | ((0x7f800000U & (((
                                                   ((0x1fU 
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
                                 | ((((0x1fU == (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                       ? ((IData)(vlSelf->__PVT__fcvt__DOT__decode_in_sigNotZero) 
                                          << 0x16U)
                                       : 0U) | ((0U 
                                                 != (IData)(vlSelf->__PVT__fcvt__DOT__fp_in_exp))
                                                 ? 0U
                                                 : 
                                                (0x7fc000U 
                                                 & ((((0xffffU 
                                                       == 
                                                       (vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3 
                                                        >> 0x10U))
                                                       ? vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_c_3
                                                       : 0U) 
                                                     << (IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_out)) 
                                                    << 0xeU)))) 
                                    | ((IData)(vlSelf->__PVT__fcvt__DOT___result_T_4)
                                        ? ((IData)(vlSelf->__PVT__fcvt__DOT__subnormal_shamt_lzc_io_in) 
                                           << 0xdU)
                                        : 0U))));
        }
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_0 
            = (((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_1 
            = (((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_1__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_1__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)))
                    ? 0x7fc00000U : ((IData)(vlSelf->__PVT__fmul_1__DOT__hasInf)
                                      ? (0x7f800000U 
                                         | ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                            << 0x1fU))
                                      : ((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                                         << 0x1fU)))
                : (((IData)(vlSelf->__PVT__fmul_1__DOT__resultSign) 
                    << 0x1fU) | ((((IData)(vlSelf->__PVT__fmul_1__DOT__shiftLimit)
                                    ? 0U : (0xffU & 
                                            ((IData)(1U) 
                                             + ((IData)(vlSelf->__PVT__fmul_1__DOT__resultExpNoShift) 
                                                - (IData)(vlSelf->__PVT__fmul_1__DOT__lzc))))) 
                                  << 0x17U) | (((0x14U 
                                                 >= (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T))
                                                 ? 
                                                (0x1fffffU 
                                                 & (vlSelf->__PVT__fmul_1__DOT__resultSigNoShift 
                                                    << (IData)(vlSelf->__PVT__fmul_1__DOT___resultSigShifted_T)))
                                                 : 0U) 
                                               << 2U))));
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_2 
            = (((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_2__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_2__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_2__DOT__hasInf)))
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
        vlSelf->__PVT__pipeline_reg__DOT__dataReg_res_3 
            = (((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
                ? (((IData)(vlSelf->__PVT__fmul_3__DOT__hasNaN) 
                    | ((IData)(vlSelf->__PVT__fmul_3__DOT__hasZero) 
                       & (IData)(vlSelf->__PVT__fmul_3__DOT__hasInf)))
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
    vlSelf->__PVT__io_out_bits_result = ((IData)(vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc)
                                          ? vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res
                                          : (0xffff0000U 
                                             | ((0x8000U 
                                                 & ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                     >> 0x10U) 
                                                    & ((~ (IData)(
                                                                  ((0x7f800000U 
                                                                    == 
                                                                    (0x7f800000U 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res)) 
                                                                   & (0U 
                                                                      != 
                                                                      (0x7fffffU 
                                                                       & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))))) 
                                                       << 0xfU))) 
                                                | ((0x7c00U 
                                                    & ((((0xffU 
                                                          == 
                                                          (0xffU 
                                                           & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                              >> 0x17U)))
                                                          ? 0x1fU
                                                          : 0U) 
                                                        | ((0xffU 
                                                            == 
                                                            (0xffU 
                                                             & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0x17U)))
                                                            ? 0U
                                                            : 
                                                           ((((VL_LTES_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U)))) 
                                                               & (IData)(vlSelf->__PVT__fcvt_1__DOT__expOverflow))
                                                               ? 0x1fU
                                                               : 0U) 
                                                             | ((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                                 ? 
                                                                (((0xffU 
                                                                   & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                      >> 0x17U)) 
                                                                  - (IData)(0x10U)) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder_io_cout))
                                                                 : 0U)) 
                                                            | (VL_GTS_III(9, 1U, 
                                                                          (0x1ffU 
                                                                           & ((0xffU 
                                                                               & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
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
                                                            & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                               >> 0x17U)))
                                                           ? 
                                                          ((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (0x7fffffU 
                                                                     & vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res))) 
                                                           << 9U)
                                                           : 0U) 
                                                         | ((0xffU 
                                                             == 
                                                             (0xffU 
                                                              & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                 >> 0x17U)))
                                                             ? 0U
                                                             : 
                                                            (((IData)(vlSelf->__PVT__fcvt_1__DOT___common_exp_T_4)
                                                               ? 
                                                              ((vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                >> 0xdU) 
                                                               + (IData)(vlSelf->__PVT__fcvt_1__DOT__normal_rounder__DOT__r_up))
                                                               : 0U) 
                                                             | (VL_GTS_III(9, 1U, 
                                                                           (0x1ffU 
                                                                            & ((0xffU 
                                                                                & (vlSelf->__PVT__pipeline_reg_3__DOT__dataReg_res 
                                                                                >> 0x17U)) 
                                                                               - (IData)(0x70U))))
                                                                 ? 
                                                                ((IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder_io_in) 
                                                                 + (IData)(vlSelf->__PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up))
                                                                 : 0U)))))))));
    vlSelf->__PVT__pipeline_reg_1__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg_1__DOT___T) 
                                                  | ((~ (IData)(vlSelf->__PVT__pipeline_reg_1_io_out_ready)) 
                                                     & (IData)(vlSelf->__PVT__pipeline_reg_1__DOT__validReg)));
    vlSelf->__PVT__pipeline_reg__DOT___T = (((~ (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)) 
                                             | (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                            & (IData)(vlSymsp->TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1.__PVT__dp_in_valid));
    vlSelf->__PVT__pipeline_reg__DOT___GEN_1 = ((IData)(vlSelf->__PVT__pipeline_reg__DOT___T) 
                                                | ((~ (IData)(vlSelf->__PVT__pipeline_reg_io_out_ready)) 
                                                   & (IData)(vlSelf->__PVT__pipeline_reg__DOT__validReg)));
}
