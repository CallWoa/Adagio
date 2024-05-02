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

VL_INLINE_OPT void VDotProdUnit___024root___ico_sequent__TOP__1(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___ico_sequent__TOP__1\n"); );
    // Body
    if (vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__special_case_happen) {
        vlSelf->io_out_bits_fflags = (((((~ (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 
                                             >> 0x16U)) 
                                         & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_a___05FisNaN)) 
                                        | ((~ (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 
                                               >> 0x16U)) 
                                           & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_b___05FisNaN))) 
                                       | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__special_path_inf_iv)) 
                                      << 4U);
        vlSelf->io_out_bits_result = (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__special_path_hasNaN) 
                                       | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__special_path_inf_iv))
                                       ? 0x7fc00000U
                                       : (0x7f800000U 
                                          | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__decode_a___05FisInf)
                                               ? (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 
                                                  >> 0x1fU)
                                               : (vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 
                                                  >> 0x1fU)) 
                                             << 0x1fU)));
    } else {
        vlSelf->io_out_bits_fflags = (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__common_overflow) 
                                       << 2U) | (((
                                                   ((~ (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel)) 
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
                                                       & (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath_io_out_near_path_ix)))));
        vlSelf->io_out_bits_result = ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__common_overflow)
                                       ? ((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePathSel)
                                             ? (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__closePath__DOT___io_out_result_T_3)
                                             : (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn)) 
                                           << 0x1fU) 
                                          | ((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__rmin)
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
                                                       + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_2.__PVT__farPath__DOT__far_path_rounder__DOT__r_up)))))));
    }
}

void VDotProdUnit_FADD___ico_sequent__TOP__DotProdUnit__DOT__faddModule__0(VDotProdUnit_FADD* vlSelf);
void VDotProdUnit___024root___ico_sequent__TOP__0(VDotProdUnit___024root* vlSelf);

void VDotProdUnit___024root___eval_ico(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VDotProdUnit_FADD___ico_sequent__TOP__DotProdUnit__DOT__faddModule__0((&vlSymsp->TOP__DotProdUnit__DOT__faddModule));
        vlSelf->__Vm_traceActivity[1U] = 1U;
        VDotProdUnit_FADD___ico_sequent__TOP__DotProdUnit__DOT__faddModule__0((&vlSymsp->TOP__DotProdUnit__DOT__faddModule_1));
        VDotProdUnit___024root___ico_sequent__TOP__0(vlSelf);
        VDotProdUnit_FADD___ico_sequent__TOP__DotProdUnit__DOT__faddModule__0((&vlSymsp->TOP__DotProdUnit__DOT__faddModule_2));
        VDotProdUnit___024root___ico_sequent__TOP__1(vlSelf);
    }
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
    vlSelf->DotProdUnit__DOT__valid_2 = ((~ (IData)(vlSelf->reset)) 
                                         & (IData)(vlSelf->DotProdUnit__DOT___GEN_33));
    vlSelf->DotProdUnit__DOT__valid_1 = ((~ (IData)(vlSelf->reset)) 
                                         & (IData)(vlSelf->DotProdUnit__DOT___GEN_21));
    vlSelf->DotProdUnit__DOT__valid = ((~ (IData)(vlSelf->reset)) 
                                       & (IData)(vlSelf->DotProdUnit__DOT___GEN_9));
    if (vlSelf->DotProdUnit__DOT__prehandshaked_2) {
        vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_2 
            = (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->DotProdUnit__DOT__a_flag_1_isInf) 
                   | (IData)(vlSelf->DotProdUnit__DOT__b_flag_1_isInf)))
                ? (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__special_path_hasNaN) 
                    | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__special_path_inf_iv))
                    ? 0x7fc00000U : (0x7f800000U | 
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
                     << 0x1fU) | ((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePathSel)
                     ? (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT___near_path_sig_cor_T 
                                         >> 1U) + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule_1.__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
        vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_2 
            = (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__special_path_hasNaN) 
                | ((IData)(vlSelf->DotProdUnit__DOT__a_flag_isInf) 
                   | (IData)(vlSelf->DotProdUnit__DOT__b_flag_isInf)))
                ? (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__special_path_hasNaN) 
                    | (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__special_path_inf_iv))
                    ? 0x7fc00000U : (0x7f800000U | 
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
                     << 0x1fU) | ((((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__rmin)
                                     ? 0xfeU : 0xffU) 
                                   << 0x17U) | ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__rmin)
                                                 ? 0x7fffffU
                                                 : 0U)))
                 : ((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePathSel)
                     ? (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___io_out_result_T_3) 
                         << 0x1fU) | (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__near_path_exp_rounded) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT___near_path_sig_cor_T 
                                         >> 1U) + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__closePath__DOT__near_path_rounder__DOT__r_up)))))
                     : (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder__DOT__rounder_io_signIn) 
                         << 0x1fU) | ((0x7f800000U 
                                       & (((IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_rounder_io_cout) 
                                           + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__resultExpNoRound)) 
                                          << 0x17U)) 
                                      | (0x7fffffU 
                                         & ((vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_tininess_rounder_io_in_sig 
                                             >> 3U) 
                                            + (IData)(vlSymsp->TOP__DotProdUnit__DOT__faddModule.__PVT__farPath__DOT__far_path_rounder__DOT__r_up))))))));
    }
    if (vlSelf->DotProdUnit__DOT__prehandshaked_1) {
        vlSelf->DotProdUnit__DOT__b_flag_1_isNaN = vlSelf->DotProdUnit__DOT__fmul_3__DOT__nan_result;
        vlSelf->DotProdUnit__DOT__b_flag_isNaN = vlSelf->DotProdUnit__DOT__fmul_1__DOT__nan_result;
        vlSelf->DotProdUnit__DOT__a_flag_1_isNaN = vlSelf->DotProdUnit__DOT__fmul_2__DOT__nan_result;
        vlSelf->DotProdUnit__DOT__a_flag_isNaN = vlSelf->DotProdUnit__DOT__fmul__DOT__nan_result;
        vlSelf->DotProdUnit__DOT__b_flag_1_isInv = 
            ((((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                   >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_a_isNaN)) 
              | ((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                     >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_b_isNaN))) 
             | (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__zero_mul_inf));
        vlSelf->DotProdUnit__DOT__a_flag_1_isInv = 
            ((((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                   >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_a_isNaN)) 
              | ((~ ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                     >> 9U)) & (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_b_isNaN))) 
             | (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__zero_mul_inf));
        vlSelf->DotProdUnit__DOT__b_flag_isInv = ((
                                                   ((~ 
                                                     ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                                      >> 9U)) 
                                                    & (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_a_isNaN)) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                                        >> 9U)) 
                                                      & (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_b_isNaN))) 
                                                  | (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__zero_mul_inf));
        vlSelf->DotProdUnit__DOT__a_flag_isInv = ((
                                                   ((~ 
                                                     ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                                      >> 9U)) 
                                                    & (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__decode_a_isNaN)) 
                                                   | ((~ 
                                                       ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                                        >> 9U)) 
                                                      & (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__decode_b_isNaN))) 
                                                  | (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__zero_mul_inf));
        vlSelf->DotProdUnit__DOT__a_flag_1_isInf = vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasInf;
        vlSelf->DotProdUnit__DOT__b_flag_1_isInf = vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasInf;
        vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r_1 
            = (((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasZero) 
                | ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasNaN) 
                   | (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasInf)))
                ? ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__nan_result)
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
        vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r_1 
            = (((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasZero) 
                | ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasNaN) 
                   | (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasInf)))
                ? ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__nan_result)
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
        vlSelf->DotProdUnit__DOT__a_flag_isInf = vlSelf->DotProdUnit__DOT__fmul__DOT__hasInf;
        vlSelf->DotProdUnit__DOT__b_flag_isInf = vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasInf;
        vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_a_r 
            = (((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasZero) 
                | ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasNaN) 
                   | (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasInf)))
                ? ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__nan_result)
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
        vlSelf->DotProdUnit__DOT__faddModule_io_in_bits_b_r 
            = (((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasZero) 
                | ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasNaN) 
                   | (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasInf)))
                ? ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__nan_result)
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
    }
    vlSelf->io_out_valid = vlSelf->DotProdUnit__DOT__valid_2;
    vlSelf->DotProdUnit__DOT__prehandshaked_2 = (((IData)(vlSelf->DotProdUnit__DOT__valid_1) 
                                                  & (IData)(vlSelf->DotProdUnit__DOT__valid)) 
                                                 & (IData)(vlSelf->io_out_ready));
    if (vlSelf->DotProdUnit__DOT__handshaked) {
        vlSelf->DotProdUnit__DOT__vec_a_3 = vlSelf->io_in_bits_vec_a_3;
        vlSelf->DotProdUnit__DOT__vec_b_3 = vlSelf->io_in_bits_vec_b_3;
        vlSelf->DotProdUnit__DOT__vec_a_2 = vlSelf->io_in_bits_vec_a_2;
        vlSelf->DotProdUnit__DOT__vec_b_2 = vlSelf->io_in_bits_vec_b_2;
        vlSelf->DotProdUnit__DOT__vec_a_1 = vlSelf->io_in_bits_vec_a_1;
        vlSelf->DotProdUnit__DOT__vec_b_1 = vlSelf->io_in_bits_vec_b_1;
        vlSelf->DotProdUnit__DOT__vec_a_0 = vlSelf->io_in_bits_vec_a_0;
        vlSelf->DotProdUnit__DOT__vec_b_0 = vlSelf->io_in_bits_vec_b_0;
    }
    vlSelf->DotProdUnit__DOT___GEN_33 = ((IData)(vlSelf->DotProdUnit__DOT__prehandshaked_2) 
                                         | ((~ ((IData)(vlSelf->DotProdUnit__DOT__valid_2) 
                                                & (IData)(vlSelf->io_out_ready))) 
                                            & (IData)(vlSelf->DotProdUnit__DOT__valid_2)));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_a_isNaN 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3)))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSign 
        = (1U & (((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                  ^ (IData)(vlSelf->DotProdUnit__DOT__vec_b_3)) 
                 >> 0xfU));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_b_isNaN 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3)))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasInf = 
        ((IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))))))) 
         | (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))))))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))) 
                        * (((IData)((0U != (0x1fU & 
                                            ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                             >> 0xaU)))) 
                            << 0xaU) | (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3)))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzcRaw = 
        (0xfU & (((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                   >> 0xaU))) ? 0U : 
                  ((0x200U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))
                    ? 1U : ((0x100U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))
                             ? 2U : ((0x80U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3))
                                      ? 3U : ((0x40U 
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
                                                       : 0xaU)))))))))) 
                 + ((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                     >> 0xaU))) ? 0U
                     : ((0x200U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                         ? 1U : ((0x100U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                                  ? 2U : ((0x80U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                                           ? 3U : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
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
                                                         : 0xaU))))))))))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasZero 
        = (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_3) 
                                              >> 0xaU))))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_3)))))) 
                 | ((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_3) 
                                                >> 0xaU))))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))))))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_a_isNaN 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2)))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSign 
        = (1U & (((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                  ^ (IData)(vlSelf->DotProdUnit__DOT__vec_b_2)) 
                 >> 0xfU));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_b_isNaN 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2)))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasInf = 
        ((IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))))))) 
         | (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))))))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))) 
                        * (((IData)((0U != (0x1fU & 
                                            ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                             >> 0xaU)))) 
                            << 0xaU) | (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2)))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzcRaw = 
        (0xfU & (((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                   >> 0xaU))) ? 0U : 
                  ((0x200U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))
                    ? 1U : ((0x100U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))
                             ? 2U : ((0x80U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2))
                                      ? 3U : ((0x40U 
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
                                                       : 0xaU)))))))))) 
                 + ((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                     >> 0xaU))) ? 0U
                     : ((0x200U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                         ? 1U : ((0x100U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                                  ? 2U : ((0x80U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                                           ? 3U : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
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
                                                         : 0xaU))))))))))));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasZero 
        = (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_2) 
                                              >> 0xaU))))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_2)))))) 
                 | ((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_2) 
                                                >> 0xaU))))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))))))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_a_isNaN 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1)))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSign 
        = (1U & (((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                  ^ (IData)(vlSelf->DotProdUnit__DOT__vec_b_1)) 
                 >> 0xfU));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_b_isNaN 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1)))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasInf = 
        ((IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))))))) 
         | (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))))))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))) 
                        * (((IData)((0U != (0x1fU & 
                                            ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                             >> 0xaU)))) 
                            << 0xaU) | (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1)))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzcRaw = 
        (0xfU & (((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                   >> 0xaU))) ? 0U : 
                  ((0x200U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))
                    ? 1U : ((0x100U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))
                             ? 2U : ((0x80U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1))
                                      ? 3U : ((0x40U 
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
                                                       : 0xaU)))))))))) 
                 + ((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                     >> 0xaU))) ? 0U
                     : ((0x200U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                         ? 1U : ((0x100U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                                  ? 2U : ((0x80U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                                           ? 3U : (
                                                   (0x40U 
                                                    & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))
                                                    ? 4U
                                                    : 
                                                   ((0x20U 
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
                                                         : 0xaU))))))))))));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasZero 
        = (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_1) 
                                              >> 0xaU))))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_1)))))) 
                 | ((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_1) 
                                                >> 0xaU))))) 
                    & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))))))));
    vlSelf->DotProdUnit__DOT__fmul__DOT__decode_a_isNaN 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0)))));
    vlSelf->DotProdUnit__DOT__fmul__DOT__resultSign 
        = (1U & (((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                  ^ (IData)(vlSelf->DotProdUnit__DOT__vec_b_0)) 
                 >> 0xfU));
    vlSelf->DotProdUnit__DOT__fmul__DOT__decode_b_isNaN 
        = (IData)(((0x7c00U == (0x7c00U & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))) 
                   & (0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0)))));
    vlSelf->DotProdUnit__DOT__fmul__DOT__hasInf = ((IData)(
                                                           ((0x7c00U 
                                                             == 
                                                             (0x7c00U 
                                                              & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))) 
                                                            & (~ (IData)(
                                                                         (0U 
                                                                          != 
                                                                          (0x3ffU 
                                                                           & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))))))) 
                                                   | (IData)(
                                                             ((0x7c00U 
                                                               == 
                                                               (0x7c00U 
                                                                & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))) 
                                                              & (~ (IData)(
                                                                           (0U 
                                                                            != 
                                                                            (0x3ffU 
                                                                             & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))))))));
    vlSelf->DotProdUnit__DOT__fmul__DOT__resultSigNoShift 
        = (0x3fffffU & ((((IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                                   >> 0xaU)))) 
                          << 0xaU) | (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))) 
                        * (((IData)((0U != (0x1fU & 
                                            ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                             >> 0xaU)))) 
                            << 0xaU) | (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0)))));
    vlSelf->DotProdUnit__DOT__fmul__DOT__lzcRaw = (0xfU 
                                                   & (((0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                                            >> 0xaU)))
                                                        ? 0U
                                                        : 
                                                       ((0x200U 
                                                         & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                                         ? 1U
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                                          ? 2U
                                                          : 
                                                         ((0x80U 
                                                           & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                                           ? 3U
                                                           : 
                                                          ((0x40U 
                                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0))
                                                            ? 4U
                                                            : 
                                                           ((0x20U 
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
                                                                 : 0xaU)))))))))) 
                                                      + 
                                                      ((0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                                            >> 0xaU)))
                                                        ? 0U
                                                        : 
                                                       ((0x200U 
                                                         & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                                         ? 1U
                                                         : 
                                                        ((0x100U 
                                                          & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                                          ? 2U
                                                          : 
                                                         ((0x80U 
                                                           & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                                           ? 3U
                                                           : 
                                                          ((0x40U 
                                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))
                                                            ? 4U
                                                            : 
                                                           ((0x20U 
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
                                                                 : 0xaU))))))))))));
    vlSelf->DotProdUnit__DOT__fmul__DOT__hasZero = 
        (1U & (((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_a_0) 
                                            >> 0xaU))))) 
                & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_a_0)))))) 
               | ((~ (IData)((0U != (0x1fU & ((IData)(vlSelf->DotProdUnit__DOT__vec_b_0) 
                                              >> 0xaU))))) 
                  & (~ (IData)((0U != (0x3ffU & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))))))));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasNaN = 
        ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_a_isNaN) 
         | (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__decode_b_isNaN));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzc = (0xfU 
                                                  & ((0U 
                                                      != 
                                                      (vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultSigNoShift 
                                                       & (0x200000U 
                                                          >> (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzcRaw))))
                                                      ? (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzcRaw)
                                                      : 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzcRaw))));
    if (vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasZero) {
        vlSelf->DotProdUnit__DOT__fmul_3__DOT__zero_mul_inf 
            = vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasInf;
        vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift = 0U;
    } else {
        vlSelf->DotProdUnit__DOT__fmul_3__DOT__zero_mul_inf = 0U;
        vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift 
            = (0xffU & ((IData)(0x61U) + (0x3fU & (
                                                   (0x1fU 
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
                                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_b_3))))))))));
    }
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasNaN = 
        ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_a_isNaN) 
         | (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__decode_b_isNaN));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzc = (0xfU 
                                                  & ((0U 
                                                      != 
                                                      (vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultSigNoShift 
                                                       & (0x200000U 
                                                          >> (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzcRaw))))
                                                      ? (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzcRaw)
                                                      : 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzcRaw))));
    if (vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasZero) {
        vlSelf->DotProdUnit__DOT__fmul_2__DOT__zero_mul_inf 
            = vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasInf;
        vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift = 0U;
    } else {
        vlSelf->DotProdUnit__DOT__fmul_2__DOT__zero_mul_inf = 0U;
        vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift 
            = (0xffU & ((IData)(0x61U) + (0x3fU & (
                                                   (0x1fU 
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
                                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_b_2))))))))));
    }
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasNaN = 
        ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_a_isNaN) 
         | (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__decode_b_isNaN));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzc = (0xfU 
                                                  & ((0U 
                                                      != 
                                                      (vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultSigNoShift 
                                                       & (0x200000U 
                                                          >> (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzcRaw))))
                                                      ? (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzcRaw)
                                                      : 
                                                     ((IData)(1U) 
                                                      + (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzcRaw))));
    if (vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasZero) {
        vlSelf->DotProdUnit__DOT__fmul_1__DOT__zero_mul_inf 
            = vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasInf;
        vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift = 0U;
    } else {
        vlSelf->DotProdUnit__DOT__fmul_1__DOT__zero_mul_inf = 0U;
        vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift 
            = (0xffU & ((IData)(0x61U) + (0x3fU & (
                                                   (0x1fU 
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
                                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_b_1))))))))));
    }
    vlSelf->DotProdUnit__DOT__fmul__DOT__hasNaN = ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__decode_a_isNaN) 
                                                   | (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__decode_b_isNaN));
    vlSelf->DotProdUnit__DOT__fmul__DOT__lzc = (0xfU 
                                                & ((0U 
                                                    != 
                                                    (vlSelf->DotProdUnit__DOT__fmul__DOT__resultSigNoShift 
                                                     & (0x200000U 
                                                        >> (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__lzcRaw))))
                                                    ? (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__lzcRaw)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__lzcRaw))));
    if (vlSelf->DotProdUnit__DOT__fmul__DOT__hasZero) {
        vlSelf->DotProdUnit__DOT__fmul__DOT__zero_mul_inf 
            = vlSelf->DotProdUnit__DOT__fmul__DOT__hasInf;
        vlSelf->DotProdUnit__DOT__fmul__DOT__resultExpNoShift = 0U;
    } else {
        vlSelf->DotProdUnit__DOT__fmul__DOT__zero_mul_inf = 0U;
        vlSelf->DotProdUnit__DOT__fmul__DOT__resultExpNoShift 
            = (0xffU & ((IData)(0x61U) + (0x3fU & (
                                                   (0x1fU 
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
                                                            & (IData)(vlSelf->DotProdUnit__DOT__vec_b_0))))))))));
    }
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__nan_result 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__hasNaN) 
           | (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__zero_mul_inf));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__nan_result 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__hasNaN) 
           | (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__zero_mul_inf));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__nan_result 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__hasNaN) 
           | (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__zero_mul_inf));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul__DOT__nan_result 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__hasNaN) 
           | (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__zero_mul_inf));
    vlSelf->DotProdUnit__DOT__fmul__DOT__shiftLimit 
        = ((0xffU & ((IData)(1U) + (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__resultExpNoShift))) 
           <= (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul_3__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__shiftLimit)
            ? (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift)
            : (IData)(vlSelf->DotProdUnit__DOT__fmul_3__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul_2__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__shiftLimit)
            ? (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift)
            : (IData)(vlSelf->DotProdUnit__DOT__fmul_2__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul_1__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__shiftLimit)
            ? (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift)
            : (IData)(vlSelf->DotProdUnit__DOT__fmul_1__DOT__lzc));
    vlSelf->DotProdUnit__DOT__fmul__DOT___resultSigShifted_T 
        = ((IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__shiftLimit)
            ? (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__resultExpNoShift)
            : (IData)(vlSelf->DotProdUnit__DOT__fmul__DOT__lzc));
}

void VDotProdUnit_FADD___nba_sequent__TOP__DotProdUnit__DOT__faddModule_1__0(VDotProdUnit_FADD* vlSelf);
void VDotProdUnit_FADD___nba_sequent__TOP__DotProdUnit__DOT__faddModule__0(VDotProdUnit_FADD* vlSelf);
void VDotProdUnit_FADD___nba_sequent__TOP__DotProdUnit__DOT__faddModule_2__0(VDotProdUnit_FADD* vlSelf);
void VDotProdUnit___024root___nba_sequent__TOP__2(VDotProdUnit___024root* vlSelf);

void VDotProdUnit___024root___eval_nba(VDotProdUnit___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDotProdUnit___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VDotProdUnit___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VDotProdUnit_FADD___nba_sequent__TOP__DotProdUnit__DOT__faddModule_1__0((&vlSymsp->TOP__DotProdUnit__DOT__faddModule_1));
        VDotProdUnit_FADD___nba_sequent__TOP__DotProdUnit__DOT__faddModule__0((&vlSymsp->TOP__DotProdUnit__DOT__faddModule));
        VDotProdUnit_FADD___nba_sequent__TOP__DotProdUnit__DOT__faddModule_2__0((&vlSymsp->TOP__DotProdUnit__DOT__faddModule_2));
        VDotProdUnit___024root___ico_sequent__TOP__1(vlSelf);
        VDotProdUnit___024root___nba_sequent__TOP__2(vlSelf);
    }
}
