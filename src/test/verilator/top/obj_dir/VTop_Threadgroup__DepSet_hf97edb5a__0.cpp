// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_Threadgroup.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_Threadgroup___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__0(VTop_Threadgroup* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Threadgroup___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__0\n"); );
    // Init
    CData/*0:0*/ __PVT___T_2;
    __PVT___T_2 = 0;
    CData/*0:0*/ __VdfgTmp_h6731f200__0;
    __VdfgTmp_h6731f200__0 = 0;
    // Body
    vlSelf->__PVT___GEN_68 = ((~ (IData)(vlSymsp->TOP.io_out_ready)) 
                              & (IData)(vlSelf->__PVT__tg_out_valid));
    __PVT___T_2 = ((2U == (IData)(vlSelf->__PVT__state)) 
                   & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode));
    vlSelf->__PVT__dp__DOT__pipeline_reg_3_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__tg_out_valid)) 
                 | (IData)(vlSymsp->TOP.io_out_ready)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_2_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__validReg)) 
                 | (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3_io_out_ready)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT___T 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2_io_out_ready) 
           & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT__validReg));
    vlSelf->__PVT__dp__DOT__pipeline_reg_1_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT__validReg)) 
                 | (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2_io_out_ready)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT___T) 
           | ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3_io_out_ready)) 
              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__validReg)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT___T 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1_io_out_ready) 
           & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT__validReg));
    vlSelf->__PVT__dp__DOT__pipeline_reg_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT__validReg)) 
                 | (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1_io_out_ready)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT___T) 
           | ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2_io_out_ready)) 
              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT__validReg)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT___T 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_out_ready) 
           & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg__DOT__validReg));
    vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg__DOT__validReg)) 
                 | (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_out_ready)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT___T) 
           | ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1_io_out_ready)) 
              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT__validReg)));
    vlSelf->__PVT__dp__DOT__pipeline_reg__DOT___T = 
        ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready) 
         & (IData)(vlSelf->__PVT__dp_in_valid));
    vlSelf->__VdfgTmp_h298fb594__0 = ((3U == (IData)(vlSelf->__PVT__state)) 
                                      & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready));
    vlSelf->__VdfgTmp_hda1a2523__0 = ((2U == (IData)(vlSelf->__PVT__state)) 
                                      & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready));
    __VdfgTmp_h6731f200__0 = ((4U == (IData)(vlSelf->__PVT__state)) 
                              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready));
    vlSelf->io_in_ready = (1U & ((~ (IData)(vlSelf->__PVT__dp_in_valid)) 
                                 | (((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready) 
                                     & (IData)(__PVT___T_2)) 
                                    | (4U == (IData)(vlSelf->__PVT__state)))));
    vlSelf->__PVT__dp__DOT__pipeline_reg__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg__DOT___T) 
           | ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_out_ready)) 
              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg__DOT__validReg)));
    vlSelf->__PVT___GEN_11 = ((IData)(__VdfgTmp_h6731f200__0)
                               ? 0U : (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___T_8 = ((IData)(vlSelf->io_in_ready) 
                           & (IData)(vlSymsp->TOP.io_in_valid));
    vlSelf->__PVT___GEN_65 = ((((0U == (IData)(vlSelf->__PVT__state)) 
                                | ((IData)(__PVT___T_2) 
                                   | ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                      & (4U == (IData)(vlSelf->__PVT__state))))) 
                               & (IData)(vlSelf->__PVT___T_8)) 
                              | (((1U == (IData)(vlSelf->__PVT__state)) 
                                  & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready))
                                  ? (IData)(vlSelf->__PVT__dp_in_valid)
                                  : ((IData)(vlSelf->__VdfgTmp_hda1a2523__0)
                                      ? ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                         & (IData)(vlSelf->__PVT__dp_in_valid))
                                      : ((IData)(vlSelf->__VdfgTmp_h298fb594__0)
                                          ? (IData)(vlSelf->__PVT__dp_in_valid)
                                          : ((~ (IData)(__VdfgTmp_h6731f200__0)) 
                                             & (IData)(vlSelf->__PVT__dp_in_valid))))));
}

VL_INLINE_OPT void VTop_Threadgroup___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__0(VTop_Threadgroup* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Threadgroup___ico_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__0\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h6731f200__0;
    __VdfgTmp_h6731f200__0 = 0;
    // Body
    vlSelf->__PVT___GEN_68 = ((~ (IData)(vlSymsp->TOP.io_out_ready)) 
                              & (IData)(vlSelf->__PVT__tg_out_valid));
    vlSelf->__PVT___T_2 = ((2U == (IData)(vlSelf->__PVT__state)) 
                           & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode));
    vlSelf->__PVT__dp__DOT__pipeline_reg_3_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__tg_out_valid)) 
                 | (IData)(vlSymsp->TOP.io_out_ready)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_2_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__validReg)) 
                 | (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3_io_out_ready)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT___T 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2_io_out_ready) 
           & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT__validReg));
    vlSelf->__PVT__dp__DOT__pipeline_reg_1_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT__validReg)) 
                 | (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2_io_out_ready)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT___T) 
           | ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3_io_out_ready)) 
              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__validReg)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT___T 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1_io_out_ready) 
           & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT__validReg));
    vlSelf->__PVT__dp__DOT__pipeline_reg_io_out_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT__validReg)) 
                 | (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1_io_out_ready)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT___T) 
           | ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2_io_out_ready)) 
              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_2__DOT__validReg)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT___T 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_out_ready) 
           & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg__DOT__validReg));
    vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready 
        = (1U & ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg__DOT__validReg)) 
                 | (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_out_ready)));
    vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT___T) 
           | ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1_io_out_ready)) 
              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_1__DOT__validReg)));
    vlSelf->__PVT__dp__DOT__pipeline_reg__DOT___T = 
        ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready) 
         & (IData)(vlSelf->__PVT__dp_in_valid));
    vlSelf->__VdfgTmp_h298fb594__0 = ((3U == (IData)(vlSelf->__PVT__state)) 
                                      & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready));
    vlSelf->__VdfgTmp_hda1a2523__0 = ((2U == (IData)(vlSelf->__PVT__state)) 
                                      & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready));
    vlSelf->__PVT___T_8 = (((~ (IData)(vlSelf->__PVT__dp_in_valid)) 
                            | (((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready) 
                                & (IData)(vlSelf->__PVT___T_2)) 
                               | (4U == (IData)(vlSelf->__PVT__state)))) 
                           & (IData)(vlSymsp->TOP.io_in_valid));
    __VdfgTmp_h6731f200__0 = ((4U == (IData)(vlSelf->__PVT__state)) 
                              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready));
    vlSelf->__PVT__dp__DOT__pipeline_reg__DOT___GEN_1 
        = ((IData)(vlSelf->__PVT__dp__DOT__pipeline_reg__DOT___T) 
           | ((~ (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_out_ready)) 
              & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg__DOT__validReg)));
    vlSelf->__PVT___GEN_11 = ((IData)(__VdfgTmp_h6731f200__0)
                               ? 0U : (IData)(vlSelf->__PVT__state));
    vlSelf->__PVT___GEN_65 = ((((0U == (IData)(vlSelf->__PVT__state)) 
                                | ((IData)(vlSelf->__PVT___T_2) 
                                   | ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                      & (4U == (IData)(vlSelf->__PVT__state))))) 
                               & (IData)(vlSelf->__PVT___T_8)) 
                              | (((1U == (IData)(vlSelf->__PVT__state)) 
                                  & (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_io_in_ready))
                                  ? (IData)(vlSelf->__PVT__dp_in_valid)
                                  : ((IData)(vlSelf->__VdfgTmp_hda1a2523__0)
                                      ? ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                         & (IData)(vlSelf->__PVT__dp_in_valid))
                                      : ((IData)(vlSelf->__VdfgTmp_h298fb594__0)
                                          ? (IData)(vlSelf->__PVT__dp_in_valid)
                                          : ((~ (IData)(__VdfgTmp_h6731f200__0)) 
                                             & (IData)(vlSelf->__PVT__dp_in_valid))))));
}
