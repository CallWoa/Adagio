// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_DotProdUnit.h"
#include "VTop_Octet.h"
#include "VTop__Syms.h"

VL_INLINE_OPT void VTop_Octet___nba_sequent__TOP__Top__DOT__tc__DOT__ot__0(VTop_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Octet___nba_sequent__TOP__Top__DOT__tc__DOT__ot__0\n"); );
    // Body
    vlSelf->__PVT__tg_1__DOT__dp_in_valid = ((~ (IData)(vlSymsp->TOP.reset)) 
                                             & (IData)(vlSelf->__PVT__tg_1__DOT___GEN_67));
    vlSelf->__PVT__tg__DOT__dp_in_valid = ((~ (IData)(vlSymsp->TOP.reset)) 
                                           & (IData)(vlSelf->__PVT__tg__DOT___GEN_67));
    if (((((IData)(vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_valid) 
           & (IData)(vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_valid)) 
          & (IData)(vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_valid)) 
         & (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_valid))) {
        if ((0U != (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
            if ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
                if (vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__mixPc_es) {
                    vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_2 
                        = vlSelf->__PVT__tg_1__DOT__result_fp32_lo;
                    vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_3 
                        = vlSelf->__PVT__tg_1__DOT__result_fp32_hi;
                }
            } else {
                if ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_2 
                        = vlSelf->__PVT__tg_1__DOT__result_fp16;
                }
                if ((2U != (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_3 
                        = vlSelf->__PVT__tg_1__DOT___GEN_74;
                }
            }
        }
        if ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
            if (vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__mixPc_es) {
                vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_1 
                    = vlSelf->__PVT__tg_1__DOT__result_fp32_hi;
                vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_0 
                    = vlSelf->__PVT__tg_1__DOT__result_fp32_lo;
            } else {
                vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_0 
                    = vlSelf->__PVT__tg_1__DOT__result_fp16;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__mixPc_es)))) {
                vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_1 
                    = vlSelf->__PVT__tg_1__DOT__result_fp16;
            }
        }
    }
    if (((((IData)(vlSelf->__PVT__tg__DOT__dp->__PVT__io_out_valid) 
           & (IData)(vlSelf->__PVT__tg__DOT__dp_1->__PVT__io_out_valid)) 
          & (IData)(vlSelf->__PVT__tg__DOT__dp_2->__PVT__io_out_valid)) 
         & (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__io_out_valid))) {
        if ((0U != (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
            if ((1U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
                if (vlSelf->__PVT__tg__DOT__dp_3->__PVT__mixPc_es) {
                    vlSelf->__PVT__tg__DOT__matrix_d_buffer_2 
                        = vlSelf->__PVT__tg__DOT__result_fp32_lo;
                    vlSelf->__PVT__tg__DOT__matrix_d_buffer_3 
                        = vlSelf->__PVT__tg__DOT__result_fp32_hi;
                }
            } else {
                if ((2U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg__DOT__matrix_d_buffer_2 
                        = vlSelf->__PVT__tg__DOT__result_fp16;
                }
                if ((2U != (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg__DOT__matrix_d_buffer_3 
                        = vlSelf->__PVT__tg__DOT___GEN_74;
                }
            }
        }
        if ((0U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
            if (vlSelf->__PVT__tg__DOT__dp_3->__PVT__mixPc_es) {
                vlSelf->__PVT__tg__DOT__matrix_d_buffer_1 
                    = vlSelf->__PVT__tg__DOT__result_fp32_hi;
                vlSelf->__PVT__tg__DOT__matrix_d_buffer_0 
                    = vlSelf->__PVT__tg__DOT__result_fp32_lo;
            } else {
                vlSelf->__PVT__tg__DOT__matrix_d_buffer_0 
                    = vlSelf->__PVT__tg__DOT__result_fp16;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__mixPc_es)))) {
                vlSelf->__PVT__tg__DOT__matrix_d_buffer_1 
                    = vlSelf->__PVT__tg__DOT__result_fp16;
            }
        }
    }
    vlSelf->__PVT__tg_1__DOT__outValid = ((~ (IData)(vlSymsp->TOP.reset)) 
                                          & (((((IData)(vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_valid) 
                                                & (IData)(vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_valid)) 
                                               & (IData)(vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_valid)) 
                                              & (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_valid))
                                              ? ((0U 
                                                  == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))
                                                  ? (IData)(vlSelf->__PVT__tg_1__DOT___GEN_0)
                                                  : 
                                                 ((1U 
                                                   == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__mixPc_es) 
                                                   | (IData)(vlSelf->__PVT__tg_1__DOT___GEN_0))
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))
                                                    ? (IData)(vlSelf->__PVT__tg_1__DOT___GEN_0)
                                                    : 
                                                   ((3U 
                                                     == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es)) 
                                                    | (IData)(vlSelf->__PVT__tg_1__DOT___GEN_0)))))
                                              : (IData)(vlSelf->__PVT__tg_1__DOT___GEN_0)));
    vlSelf->__PVT__tg__DOT__outValid = ((~ (IData)(vlSymsp->TOP.reset)) 
                                        & (((((IData)(vlSelf->__PVT__tg__DOT__dp->__PVT__io_out_valid) 
                                              & (IData)(vlSelf->__PVT__tg__DOT__dp_1->__PVT__io_out_valid)) 
                                             & (IData)(vlSelf->__PVT__tg__DOT__dp_2->__PVT__io_out_valid)) 
                                            & (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__io_out_valid))
                                            ? ((0U 
                                                == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))
                                                ? (IData)(vlSelf->__PVT__tg__DOT___GEN_0)
                                                : (
                                                   (1U 
                                                    == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))
                                                    ? 
                                                   ((IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__mixPc_es) 
                                                    | (IData)(vlSelf->__PVT__tg__DOT___GEN_0))
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))
                                                     ? (IData)(vlSelf->__PVT__tg__DOT___GEN_0)
                                                     : 
                                                    ((3U 
                                                      == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es)) 
                                                     | (IData)(vlSelf->__PVT__tg__DOT___GEN_0)))))
                                            : (IData)(vlSelf->__PVT__tg__DOT___GEN_0)));
    vlSelf->__PVT__tg_1__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                            & (IData)(vlSelf->__PVT__tg_1__DOT__outValid))) 
                                        & (IData)(vlSelf->__PVT__tg_1__DOT__outValid));
    vlSelf->__PVT__tg__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                          & (IData)(vlSelf->__PVT__tg__DOT__outValid))) 
                                      & (IData)(vlSelf->__PVT__tg__DOT__outValid));
}

VL_INLINE_OPT void VTop_Octet___nba_sequent__TOP__Top__DOT__tc__DOT__ot__1(VTop_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Octet___nba_sequent__TOP__Top__DOT__tc__DOT__ot__1\n"); );
    // Init
    CData/*0:0*/ __PVT__tg__DOT___T_4;
    __PVT__tg__DOT___T_4 = 0;
    CData/*0:0*/ tg__DOT____VdfgTmp_h19be38c2__0;
    tg__DOT____VdfgTmp_h19be38c2__0 = 0;
    CData/*0:0*/ tg__DOT____VdfgTmp_h6637e356__0;
    tg__DOT____VdfgTmp_h6637e356__0 = 0;
    CData/*0:0*/ __PVT__tg_1__DOT___T_4;
    __PVT__tg_1__DOT___T_4 = 0;
    CData/*0:0*/ tg_1__DOT____VdfgTmp_h19be38c2__0;
    tg_1__DOT____VdfgTmp_h19be38c2__0 = 0;
    CData/*0:0*/ tg_1__DOT____VdfgTmp_h6637e356__0;
    tg_1__DOT____VdfgTmp_h6637e356__0 = 0;
    // Body
    vlSelf->__PVT__tg__DOT__result_fp32_lo = (((QData)((IData)(vlSelf->__PVT__tg__DOT__dp_1->__PVT__io_out_bits_result)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__tg__DOT__dp->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg__DOT__result_fp32_hi = (((QData)((IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__io_out_bits_result)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__tg__DOT__dp_2->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg__DOT__result_fp16 = (((QData)((IData)(
                                                            (0xffffU 
                                                             & vlSelf->__PVT__tg__DOT__dp_3->__PVT__io_out_bits_result))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((vlSelf->__PVT__tg__DOT__dp_2->__PVT__io_out_bits_result 
                                                                 << 0x10U) 
                                                                | (0xffffU 
                                                                   & vlSelf->__PVT__tg__DOT__dp_1->__PVT__io_out_bits_result)))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlSelf->__PVT__tg__DOT__dp->__PVT__io_out_bits_result)))));
    vlSelf->__PVT__tg_1__DOT__result_fp32_lo = (((QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_bits_result)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg_1__DOT__result_fp32_hi = (((QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_bits_result)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg_1__DOT__result_fp16 = (((QData)((IData)(
                                                              (0xffffU 
                                                               & vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_bits_result))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_bits_result 
                                                                   << 0x10U) 
                                                                  | (0xffffU 
                                                                     & vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_bits_result)))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_bits_result)))));
    if (((((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
           | ((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
              & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode))) 
          | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
             & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) 
         & (IData)(vlSelf->__PVT__tg__DOT___T_9))) {
        vlSelf->__PVT__tg__DOT__dp_in_va_0 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a[0U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a[0U] 
                                              >> 0x10U);
        vlSelf->__PVT__tg__DOT__dp_in_va_2 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a[1U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a[1U] 
                                              >> 0x10U);
        if (vlSymsp->TOP.io_in_bits_ctrl_mixPcMode) {
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[0U];
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[1U];
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[2U];
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[3U];
        } else {
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[0U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[0U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[1U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[1U] 
                                                    >> 0x10U));
        }
        vlSelf->__PVT__tg__DOT__dp_in_rowtag = 0U;
    } else if (((1U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        vlSelf->__PVT__tg__DOT__dp_in_va_0 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a[2U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a[2U] 
                                              >> 0x10U);
        vlSelf->__PVT__tg__DOT__dp_in_va_2 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a[3U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a[3U] 
                                              >> 0x10U);
        if (vlSymsp->TOP.io_in_bits_ctrl_mixPcMode) {
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[4U];
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[5U];
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[6U];
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[7U];
        } else {
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[2U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[2U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[3U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[3U] 
                                                    >> 0x10U));
        }
        vlSelf->__PVT__tg__DOT__dp_in_rowtag = 1U;
    } else if (((IData)(vlSelf->__PVT__tg__DOT___T_2) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        if ((1U & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) {
            vlSelf->__PVT__tg__DOT__dp_in_va_0 = (0xffffU 
                                                  & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a[4U]);
            vlSelf->__PVT__tg__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a[4U] 
                                                  >> 0x10U);
            vlSelf->__PVT__tg__DOT__dp_in_va_2 = (0xffffU 
                                                  & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a[5U]);
            vlSelf->__PVT__tg__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a[5U] 
                                                  >> 0x10U);
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[4U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[4U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[5U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[5U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg__DOT__dp_in_rowtag = 2U;
        }
    } else if (((3U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        vlSelf->__PVT__tg__DOT__dp_in_va_0 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a[6U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a[6U] 
                                              >> 0x10U);
        vlSelf->__PVT__tg__DOT__dp_in_va_2 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a[7U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_a[7U] 
                                              >> 0x10U);
        vlSelf->__PVT__tg__DOT__dp_in_c_0 = (0xffff0000U 
                                             | (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[6U]));
        vlSelf->__PVT__tg__DOT__dp_in_c_1 = (0xffff0000U 
                                             | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[6U] 
                                                >> 0x10U));
        vlSelf->__PVT__tg__DOT__dp_in_c_2 = (0xffff0000U 
                                             | (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[7U]));
        vlSelf->__PVT__tg__DOT__dp_in_c_3 = (0xffff0000U 
                                             | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_c[7U] 
                                                >> 0x10U));
        vlSelf->__PVT__tg__DOT__dp_in_rowtag = 3U;
    }
    vlSelf->__PVT__tg__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))
                                        ? vlSelf->__PVT__tg__DOT__result_fp16
                                        : vlSelf->__PVT__tg__DOT__matrix_d_buffer_3);
    if (((((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
           | ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
              & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode))) 
          | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
             & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) 
         & (IData)(vlSelf->__PVT__tg_1__DOT___T_9))) {
        vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a[0U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a[0U] 
                                                >> 0x10U);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a[1U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a[1U] 
                                                >> 0x10U);
        if (vlSymsp->TOP.io_in_bits_ctrl_mixPcMode) {
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[0U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[1U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[2U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[3U];
        } else {
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[0U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[0U] 
                                                      >> 0x10U));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[1U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[1U] 
                                                      >> 0x10U));
        }
        vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = 0U;
    } else if (((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a[2U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a[2U] 
                                                >> 0x10U);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a[3U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a[3U] 
                                                >> 0x10U);
        if (vlSymsp->TOP.io_in_bits_ctrl_mixPcMode) {
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[4U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[5U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[6U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[7U];
        } else {
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[2U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[2U] 
                                                      >> 0x10U));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[3U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[3U] 
                                                      >> 0x10U));
        }
        vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = 1U;
    } else if (((IData)(vlSelf->__PVT__tg_1__DOT___T_2) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        if ((1U & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) {
            vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = 
                (0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a[4U]);
            vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = 
                (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a[4U] 
                 >> 0x10U);
            vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = 
                (0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a[5U]);
            vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = 
                (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a[5U] 
                 >> 0x10U);
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[4U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[4U] 
                                                      >> 0x10U));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[5U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[5U] 
                                                      >> 0x10U));
            vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = 2U;
        }
    } else if (((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a[6U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a[6U] 
                                                >> 0x10U);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a[7U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_a[7U] 
                                                >> 0x10U);
        vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = (0xffff0000U 
                                               | (0xffffU 
                                                  & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[6U]));
        vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = (0xffff0000U 
                                               | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[6U] 
                                                  >> 0x10U));
        vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = (0xffff0000U 
                                               | (0xffffU 
                                                  & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[7U]));
        vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = (0xffff0000U 
                                               | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_c[7U] 
                                                  >> 0x10U));
        vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = 3U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__tg__DOT__state = 0U;
        vlSelf->__PVT__tg_1__DOT__state = 0U;
    } else {
        vlSelf->__PVT__tg__DOT__state = (((((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                            | ((2U 
                                                == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                               & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode))) 
                                           | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                              & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) 
                                          & (IData)(vlSelf->__PVT__tg__DOT___T_9))
                                          ? 1U : ((
                                                   (1U 
                                                    == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                                   & (IData)(vlSymsp->TOP.io_out_ready))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->__PVT__tg__DOT___T_2) 
                                                    & (IData)(vlSymsp->TOP.io_out_ready))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)
                                                     ? 0U
                                                     : 3U)
                                                    : (IData)(vlSelf->__PVT__tg__DOT___GEN_23))));
        vlSelf->__PVT__tg_1__DOT__state = (((((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                              | ((2U 
                                                  == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                                 & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode))) 
                                             | ((4U 
                                                 == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                                & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) 
                                            & (IData)(vlSelf->__PVT__tg_1__DOT___T_9))
                                            ? 1U : 
                                           (((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                             & (IData)(vlSymsp->TOP.io_out_ready))
                                             ? 2U : 
                                            (((IData)(vlSelf->__PVT__tg_1__DOT___T_2) 
                                              & (IData)(vlSymsp->TOP.io_out_ready))
                                              ? ((IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)
                                                  ? 0U
                                                  : 3U)
                                              : (IData)(vlSelf->__PVT__tg_1__DOT___GEN_23))));
    }
    vlSelf->__PVT__tg_1__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))
                                          ? vlSelf->__PVT__tg_1__DOT__result_fp16
                                          : vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_3);
    vlSelf->__PVT__tg__DOT___T_2 = (2U == (IData)(vlSelf->__PVT__tg__DOT__state));
    tg__DOT____VdfgTmp_h19be38c2__0 = ((4U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    tg__DOT____VdfgTmp_h6637e356__0 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    __PVT__tg__DOT___T_4 = ((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                            | ((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                               & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)));
    vlSelf->__PVT__tg_1__DOT___T_2 = (2U == (IData)(vlSelf->__PVT__tg_1__DOT__state));
    tg_1__DOT____VdfgTmp_h19be38c2__0 = ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                         & (IData)(vlSymsp->TOP.io_out_ready));
    tg_1__DOT____VdfgTmp_h6637e356__0 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                         & (IData)(vlSymsp->TOP.io_out_ready));
    __PVT__tg_1__DOT___T_4 = ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                              | ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                 & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)));
    vlSelf->__PVT__tg__DOT___GEN_23 = ((IData)(tg__DOT____VdfgTmp_h6637e356__0)
                                        ? 4U : ((IData)(tg__DOT____VdfgTmp_h19be38c2__0)
                                                 ? 0U
                                                 : (IData)(vlSelf->__PVT__tg__DOT__state)));
    vlSelf->__PVT__tg_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & ((IData)(__PVT__tg__DOT___T_4) 
                                        | (4U == (IData)(vlSelf->__PVT__tg__DOT__state))));
    vlSelf->__PVT__tg_1__DOT___GEN_23 = ((IData)(tg_1__DOT____VdfgTmp_h6637e356__0)
                                          ? 4U : ((IData)(tg_1__DOT____VdfgTmp_h19be38c2__0)
                                                   ? 0U
                                                   : (IData)(vlSelf->__PVT__tg_1__DOT__state)));
    vlSelf->__PVT__tg_1_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                       & ((IData)(__PVT__tg_1__DOT___T_4) 
                                          | (4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))));
    vlSelf->__PVT__tg__DOT___T_9 = ((IData)(vlSelf->__PVT__tg_io_in_ready) 
                                    & (IData)(vlSymsp->TOP.io_in_valid));
    vlSelf->__PVT__tg_1__DOT___T_9 = ((IData)(vlSelf->__PVT__tg_1_io_in_ready) 
                                      & (IData)(vlSymsp->TOP.io_in_valid));
    vlSelf->__PVT__tg__DOT___GEN_67 = ((((IData)(__PVT__tg__DOT___T_4) 
                                         | ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                            & (4U == (IData)(vlSelf->__PVT__tg__DOT__state)))) 
                                        & (IData)(vlSelf->__PVT__tg__DOT___T_9)) 
                                       | (((1U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                           & (IData)(vlSymsp->TOP.io_out_ready))
                                           ? (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid)
                                           : (((2U 
                                                == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                               & (IData)(vlSymsp->TOP.io_out_ready))
                                               ? ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                                  & (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid))
                                               : ((IData)(tg__DOT____VdfgTmp_h6637e356__0)
                                                   ? (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid)
                                                   : 
                                                  ((~ (IData)(tg__DOT____VdfgTmp_h19be38c2__0)) 
                                                   & (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid))))));
    vlSelf->__PVT__tg_1__DOT___GEN_67 = ((((IData)(__PVT__tg_1__DOT___T_4) 
                                           | ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                              & (4U 
                                                 == (IData)(vlSelf->__PVT__tg_1__DOT__state)))) 
                                          & (IData)(vlSelf->__PVT__tg_1__DOT___T_9)) 
                                         | (((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                             & (IData)(vlSymsp->TOP.io_out_ready))
                                             ? (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid)
                                             : (((2U 
                                                  == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                                 & (IData)(vlSymsp->TOP.io_out_ready))
                                                 ? 
                                                ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                                 & (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid))
                                                 : 
                                                ((IData)(tg_1__DOT____VdfgTmp_h6637e356__0)
                                                  ? (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid)
                                                  : 
                                                 ((~ (IData)(tg_1__DOT____VdfgTmp_h19be38c2__0)) 
                                                  & (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid))))));
}

VL_INLINE_OPT void VTop_Octet___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__1(VTop_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Octet___nba_sequent__TOP__Top__DOT__tc__DOT__ot_1__1\n"); );
    // Init
    CData/*0:0*/ __PVT__tg__DOT___T_4;
    __PVT__tg__DOT___T_4 = 0;
    CData/*0:0*/ tg__DOT____VdfgTmp_h19be38c2__0;
    tg__DOT____VdfgTmp_h19be38c2__0 = 0;
    CData/*0:0*/ tg__DOT____VdfgTmp_h6637e356__0;
    tg__DOT____VdfgTmp_h6637e356__0 = 0;
    CData/*0:0*/ __PVT__tg_1__DOT___T_4;
    __PVT__tg_1__DOT___T_4 = 0;
    CData/*0:0*/ tg_1__DOT____VdfgTmp_h19be38c2__0;
    tg_1__DOT____VdfgTmp_h19be38c2__0 = 0;
    CData/*0:0*/ tg_1__DOT____VdfgTmp_h6637e356__0;
    tg_1__DOT____VdfgTmp_h6637e356__0 = 0;
    // Body
    vlSelf->__PVT__tg__DOT__result_fp32_lo = (((QData)((IData)(vlSelf->__PVT__tg__DOT__dp_1->__PVT__io_out_bits_result)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__tg__DOT__dp->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg__DOT__result_fp32_hi = (((QData)((IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__io_out_bits_result)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__tg__DOT__dp_2->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg__DOT__result_fp16 = (((QData)((IData)(
                                                            (0xffffU 
                                                             & vlSelf->__PVT__tg__DOT__dp_3->__PVT__io_out_bits_result))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((vlSelf->__PVT__tg__DOT__dp_2->__PVT__io_out_bits_result 
                                                                 << 0x10U) 
                                                                | (0xffffU 
                                                                   & vlSelf->__PVT__tg__DOT__dp_1->__PVT__io_out_bits_result)))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlSelf->__PVT__tg__DOT__dp->__PVT__io_out_bits_result)))));
    vlSelf->__PVT__tg_1__DOT__result_fp32_lo = (((QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_bits_result)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg_1__DOT__result_fp32_hi = (((QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_bits_result)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg_1__DOT__result_fp16 = (((QData)((IData)(
                                                              (0xffffU 
                                                               & vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_bits_result))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_bits_result 
                                                                   << 0x10U) 
                                                                  | (0xffffU 
                                                                     & vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_bits_result)))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_bits_result)))));
    if (((((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
           | ((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
              & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode))) 
          | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
             & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) 
         & (IData)(vlSelf->__PVT__tg__DOT___T_9))) {
        vlSelf->__PVT__tg__DOT__dp_in_va_0 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a[0U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a[0U] 
                                              >> 0x10U);
        vlSelf->__PVT__tg__DOT__dp_in_va_2 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a[1U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a[1U] 
                                              >> 0x10U);
        if (vlSymsp->TOP.io_in_bits_ctrl_mixPcMode) {
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[0U];
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[1U];
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[2U];
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[3U];
        } else {
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[0U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[0U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[1U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[1U] 
                                                    >> 0x10U));
        }
        vlSelf->__PVT__tg__DOT__dp_in_rowtag = 0U;
    } else if (((1U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        vlSelf->__PVT__tg__DOT__dp_in_va_0 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a[2U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a[2U] 
                                              >> 0x10U);
        vlSelf->__PVT__tg__DOT__dp_in_va_2 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a[3U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a[3U] 
                                              >> 0x10U);
        if (vlSymsp->TOP.io_in_bits_ctrl_mixPcMode) {
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[4U];
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[5U];
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[6U];
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[7U];
        } else {
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[2U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[2U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[3U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[3U] 
                                                    >> 0x10U));
        }
        vlSelf->__PVT__tg__DOT__dp_in_rowtag = 1U;
    } else if (((IData)(vlSelf->__PVT__tg__DOT___T_2) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        if ((1U & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) {
            vlSelf->__PVT__tg__DOT__dp_in_va_0 = (0xffffU 
                                                  & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a[4U]);
            vlSelf->__PVT__tg__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a[4U] 
                                                  >> 0x10U);
            vlSelf->__PVT__tg__DOT__dp_in_va_2 = (0xffffU 
                                                  & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a[5U]);
            vlSelf->__PVT__tg__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a[5U] 
                                                  >> 0x10U);
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[4U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[4U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[5U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[5U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg__DOT__dp_in_rowtag = 2U;
        }
    } else if (((3U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        vlSelf->__PVT__tg__DOT__dp_in_va_0 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a[6U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a[6U] 
                                              >> 0x10U);
        vlSelf->__PVT__tg__DOT__dp_in_va_2 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a[7U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_a[7U] 
                                              >> 0x10U);
        vlSelf->__PVT__tg__DOT__dp_in_c_0 = (0xffff0000U 
                                             | (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[6U]));
        vlSelf->__PVT__tg__DOT__dp_in_c_1 = (0xffff0000U 
                                             | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[6U] 
                                                >> 0x10U));
        vlSelf->__PVT__tg__DOT__dp_in_c_2 = (0xffff0000U 
                                             | (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[7U]));
        vlSelf->__PVT__tg__DOT__dp_in_c_3 = (0xffff0000U 
                                             | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_c[7U] 
                                                >> 0x10U));
        vlSelf->__PVT__tg__DOT__dp_in_rowtag = 3U;
    }
    vlSelf->__PVT__tg__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))
                                        ? vlSelf->__PVT__tg__DOT__result_fp16
                                        : vlSelf->__PVT__tg__DOT__matrix_d_buffer_3);
    if (((((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
           | ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
              & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode))) 
          | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
             & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) 
         & (IData)(vlSelf->__PVT__tg_1__DOT___T_9))) {
        vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a[0U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a[0U] 
                                                >> 0x10U);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a[1U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a[1U] 
                                                >> 0x10U);
        if (vlSymsp->TOP.io_in_bits_ctrl_mixPcMode) {
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[0U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[1U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[2U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[3U];
        } else {
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[0U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[0U] 
                                                      >> 0x10U));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[1U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[1U] 
                                                      >> 0x10U));
        }
        vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = 0U;
    } else if (((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a[2U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a[2U] 
                                                >> 0x10U);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a[3U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a[3U] 
                                                >> 0x10U);
        if (vlSymsp->TOP.io_in_bits_ctrl_mixPcMode) {
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[4U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[5U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[6U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[7U];
        } else {
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[2U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[2U] 
                                                      >> 0x10U));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[3U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[3U] 
                                                      >> 0x10U));
        }
        vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = 1U;
    } else if (((IData)(vlSelf->__PVT__tg_1__DOT___T_2) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        if ((1U & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) {
            vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = 
                (0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a[4U]);
            vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = 
                (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a[4U] 
                 >> 0x10U);
            vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = 
                (0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a[5U]);
            vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = 
                (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a[5U] 
                 >> 0x10U);
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[4U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[4U] 
                                                      >> 0x10U));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[5U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[5U] 
                                                      >> 0x10U));
            vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = 2U;
        }
    } else if (((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a[6U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a[6U] 
                                                >> 0x10U);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a[7U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_a[7U] 
                                                >> 0x10U);
        vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = (0xffff0000U 
                                               | (0xffffU 
                                                  & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[6U]));
        vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = (0xffff0000U 
                                               | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[6U] 
                                                  >> 0x10U));
        vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = (0xffff0000U 
                                               | (0xffffU 
                                                  & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[7U]));
        vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = (0xffff0000U 
                                               | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_c[7U] 
                                                  >> 0x10U));
        vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = 3U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__tg__DOT__state = 0U;
        vlSelf->__PVT__tg_1__DOT__state = 0U;
    } else {
        vlSelf->__PVT__tg__DOT__state = (((((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                            | ((2U 
                                                == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                               & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode))) 
                                           | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                              & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) 
                                          & (IData)(vlSelf->__PVT__tg__DOT___T_9))
                                          ? 1U : ((
                                                   (1U 
                                                    == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                                   & (IData)(vlSymsp->TOP.io_out_ready))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->__PVT__tg__DOT___T_2) 
                                                    & (IData)(vlSymsp->TOP.io_out_ready))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)
                                                     ? 0U
                                                     : 3U)
                                                    : (IData)(vlSelf->__PVT__tg__DOT___GEN_23))));
        vlSelf->__PVT__tg_1__DOT__state = (((((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                              | ((2U 
                                                  == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                                 & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode))) 
                                             | ((4U 
                                                 == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                                & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) 
                                            & (IData)(vlSelf->__PVT__tg_1__DOT___T_9))
                                            ? 1U : 
                                           (((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                             & (IData)(vlSymsp->TOP.io_out_ready))
                                             ? 2U : 
                                            (((IData)(vlSelf->__PVT__tg_1__DOT___T_2) 
                                              & (IData)(vlSymsp->TOP.io_out_ready))
                                              ? ((IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)
                                                  ? 0U
                                                  : 3U)
                                              : (IData)(vlSelf->__PVT__tg_1__DOT___GEN_23))));
    }
    vlSelf->__PVT__tg_1__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))
                                          ? vlSelf->__PVT__tg_1__DOT__result_fp16
                                          : vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_3);
    vlSelf->__PVT__tg__DOT___T_2 = (2U == (IData)(vlSelf->__PVT__tg__DOT__state));
    tg__DOT____VdfgTmp_h19be38c2__0 = ((4U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    tg__DOT____VdfgTmp_h6637e356__0 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    __PVT__tg__DOT___T_4 = ((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                            | ((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                               & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)));
    vlSelf->__PVT__tg_1__DOT___T_2 = (2U == (IData)(vlSelf->__PVT__tg_1__DOT__state));
    tg_1__DOT____VdfgTmp_h19be38c2__0 = ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                         & (IData)(vlSymsp->TOP.io_out_ready));
    tg_1__DOT____VdfgTmp_h6637e356__0 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                         & (IData)(vlSymsp->TOP.io_out_ready));
    __PVT__tg_1__DOT___T_4 = ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                              | ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                 & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)));
    vlSelf->__PVT__tg__DOT___GEN_23 = ((IData)(tg__DOT____VdfgTmp_h6637e356__0)
                                        ? 4U : ((IData)(tg__DOT____VdfgTmp_h19be38c2__0)
                                                 ? 0U
                                                 : (IData)(vlSelf->__PVT__tg__DOT__state)));
    vlSelf->__PVT__tg_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & ((IData)(__PVT__tg__DOT___T_4) 
                                        | (4U == (IData)(vlSelf->__PVT__tg__DOT__state))));
    vlSelf->__PVT__tg_1__DOT___GEN_23 = ((IData)(tg_1__DOT____VdfgTmp_h6637e356__0)
                                          ? 4U : ((IData)(tg_1__DOT____VdfgTmp_h19be38c2__0)
                                                   ? 0U
                                                   : (IData)(vlSelf->__PVT__tg_1__DOT__state)));
    vlSelf->__PVT__tg_1_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                       & ((IData)(__PVT__tg_1__DOT___T_4) 
                                          | (4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))));
    vlSelf->__PVT__tg__DOT___T_9 = ((IData)(vlSelf->__PVT__tg_io_in_ready) 
                                    & (IData)(vlSymsp->TOP.io_in_valid));
    vlSelf->__PVT__tg_1__DOT___T_9 = ((IData)(vlSelf->__PVT__tg_1_io_in_ready) 
                                      & (IData)(vlSymsp->TOP.io_in_valid));
    vlSelf->__PVT__tg__DOT___GEN_67 = ((((IData)(__PVT__tg__DOT___T_4) 
                                         | ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                            & (4U == (IData)(vlSelf->__PVT__tg__DOT__state)))) 
                                        & (IData)(vlSelf->__PVT__tg__DOT___T_9)) 
                                       | (((1U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                           & (IData)(vlSymsp->TOP.io_out_ready))
                                           ? (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid)
                                           : (((2U 
                                                == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                               & (IData)(vlSymsp->TOP.io_out_ready))
                                               ? ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                                  & (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid))
                                               : ((IData)(tg__DOT____VdfgTmp_h6637e356__0)
                                                   ? (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid)
                                                   : 
                                                  ((~ (IData)(tg__DOT____VdfgTmp_h19be38c2__0)) 
                                                   & (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid))))));
    vlSelf->__PVT__tg_1__DOT___GEN_67 = ((((IData)(__PVT__tg_1__DOT___T_4) 
                                           | ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                              & (4U 
                                                 == (IData)(vlSelf->__PVT__tg_1__DOT__state)))) 
                                          & (IData)(vlSelf->__PVT__tg_1__DOT___T_9)) 
                                         | (((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                             & (IData)(vlSymsp->TOP.io_out_ready))
                                             ? (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid)
                                             : (((2U 
                                                  == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                                 & (IData)(vlSymsp->TOP.io_out_ready))
                                                 ? 
                                                ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                                 & (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid))
                                                 : 
                                                ((IData)(tg_1__DOT____VdfgTmp_h6637e356__0)
                                                  ? (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid)
                                                  : 
                                                 ((~ (IData)(tg_1__DOT____VdfgTmp_h19be38c2__0)) 
                                                  & (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid))))));
}

VL_INLINE_OPT void VTop_Octet___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__1(VTop_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Octet___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot__1\n"); );
    // Init
    CData/*0:0*/ __PVT__tg__DOT___T_4;
    __PVT__tg__DOT___T_4 = 0;
    CData/*0:0*/ tg__DOT____VdfgTmp_h19be38c2__0;
    tg__DOT____VdfgTmp_h19be38c2__0 = 0;
    CData/*0:0*/ tg__DOT____VdfgTmp_h6637e356__0;
    tg__DOT____VdfgTmp_h6637e356__0 = 0;
    CData/*0:0*/ __PVT__tg_1__DOT___T_4;
    __PVT__tg_1__DOT___T_4 = 0;
    CData/*0:0*/ tg_1__DOT____VdfgTmp_h19be38c2__0;
    tg_1__DOT____VdfgTmp_h19be38c2__0 = 0;
    CData/*0:0*/ tg_1__DOT____VdfgTmp_h6637e356__0;
    tg_1__DOT____VdfgTmp_h6637e356__0 = 0;
    // Body
    vlSelf->__PVT__tg__DOT__result_fp32_lo = (((QData)((IData)(vlSelf->__PVT__tg__DOT__dp_1->__PVT__io_out_bits_result)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__tg__DOT__dp->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg__DOT__result_fp32_hi = (((QData)((IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__io_out_bits_result)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__tg__DOT__dp_2->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg__DOT__result_fp16 = (((QData)((IData)(
                                                            (0xffffU 
                                                             & vlSelf->__PVT__tg__DOT__dp_3->__PVT__io_out_bits_result))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((vlSelf->__PVT__tg__DOT__dp_2->__PVT__io_out_bits_result 
                                                                 << 0x10U) 
                                                                | (0xffffU 
                                                                   & vlSelf->__PVT__tg__DOT__dp_1->__PVT__io_out_bits_result)))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlSelf->__PVT__tg__DOT__dp->__PVT__io_out_bits_result)))));
    vlSelf->__PVT__tg_1__DOT__result_fp32_lo = (((QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_bits_result)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg_1__DOT__result_fp32_hi = (((QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_bits_result)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg_1__DOT__result_fp16 = (((QData)((IData)(
                                                              (0xffffU 
                                                               & vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_bits_result))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_bits_result 
                                                                   << 0x10U) 
                                                                  | (0xffffU 
                                                                     & vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_bits_result)))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_bits_result)))));
    if (((((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
           | ((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
              & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode))) 
          | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
             & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) 
         & (IData)(vlSelf->__PVT__tg__DOT___T_9))) {
        vlSelf->__PVT__tg__DOT__dp_in_va_0 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a[0U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a[0U] 
                                              >> 0x10U);
        vlSelf->__PVT__tg__DOT__dp_in_va_2 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a[1U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a[1U] 
                                              >> 0x10U);
        if (vlSymsp->TOP.io_in_bits_ctrl_mixPcMode) {
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[0U];
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[1U];
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[2U];
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[3U];
        } else {
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[0U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[0U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[1U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[1U] 
                                                    >> 0x10U));
        }
        vlSelf->__PVT__tg__DOT__dp_in_rowtag = 0U;
    } else if (((1U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        vlSelf->__PVT__tg__DOT__dp_in_va_0 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a[2U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a[2U] 
                                              >> 0x10U);
        vlSelf->__PVT__tg__DOT__dp_in_va_2 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a[3U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a[3U] 
                                              >> 0x10U);
        if (vlSymsp->TOP.io_in_bits_ctrl_mixPcMode) {
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[4U];
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[5U];
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[6U];
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[7U];
        } else {
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[2U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[2U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[3U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[3U] 
                                                    >> 0x10U));
        }
        vlSelf->__PVT__tg__DOT__dp_in_rowtag = 1U;
    } else if (((IData)(vlSelf->__PVT__tg__DOT___T_2) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        if ((1U & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) {
            vlSelf->__PVT__tg__DOT__dp_in_va_0 = (0xffffU 
                                                  & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a[4U]);
            vlSelf->__PVT__tg__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a[4U] 
                                                  >> 0x10U);
            vlSelf->__PVT__tg__DOT__dp_in_va_2 = (0xffffU 
                                                  & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a[5U]);
            vlSelf->__PVT__tg__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a[5U] 
                                                  >> 0x10U);
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[4U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[4U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[5U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[5U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg__DOT__dp_in_rowtag = 2U;
        }
    } else if (((3U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        vlSelf->__PVT__tg__DOT__dp_in_va_0 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a[6U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a[6U] 
                                              >> 0x10U);
        vlSelf->__PVT__tg__DOT__dp_in_va_2 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a[7U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_a[7U] 
                                              >> 0x10U);
        vlSelf->__PVT__tg__DOT__dp_in_c_0 = (0xffff0000U 
                                             | (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[6U]));
        vlSelf->__PVT__tg__DOT__dp_in_c_1 = (0xffff0000U 
                                             | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[6U] 
                                                >> 0x10U));
        vlSelf->__PVT__tg__DOT__dp_in_c_2 = (0xffff0000U 
                                             | (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[7U]));
        vlSelf->__PVT__tg__DOT__dp_in_c_3 = (0xffff0000U 
                                             | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_c[7U] 
                                                >> 0x10U));
        vlSelf->__PVT__tg__DOT__dp_in_rowtag = 3U;
    }
    vlSelf->__PVT__tg__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))
                                        ? vlSelf->__PVT__tg__DOT__result_fp16
                                        : vlSelf->__PVT__tg__DOT__matrix_d_buffer_3);
    if (((((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
           | ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
              & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode))) 
          | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
             & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) 
         & (IData)(vlSelf->__PVT__tg_1__DOT___T_9))) {
        vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a[0U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a[0U] 
                                                >> 0x10U);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a[1U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a[1U] 
                                                >> 0x10U);
        if (vlSymsp->TOP.io_in_bits_ctrl_mixPcMode) {
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[0U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[1U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[2U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[3U];
        } else {
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[0U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[0U] 
                                                      >> 0x10U));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[1U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[1U] 
                                                      >> 0x10U));
        }
        vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = 0U;
    } else if (((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a[2U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a[2U] 
                                                >> 0x10U);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a[3U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a[3U] 
                                                >> 0x10U);
        if (vlSymsp->TOP.io_in_bits_ctrl_mixPcMode) {
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[4U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[5U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[6U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[7U];
        } else {
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[2U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[2U] 
                                                      >> 0x10U));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[3U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[3U] 
                                                      >> 0x10U));
        }
        vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = 1U;
    } else if (((IData)(vlSelf->__PVT__tg_1__DOT___T_2) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        if ((1U & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) {
            vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = 
                (0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a[4U]);
            vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = 
                (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a[4U] 
                 >> 0x10U);
            vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = 
                (0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a[5U]);
            vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = 
                (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a[5U] 
                 >> 0x10U);
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[4U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[4U] 
                                                      >> 0x10U));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[5U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[5U] 
                                                      >> 0x10U));
            vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = 2U;
        }
    } else if (((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a[6U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a[6U] 
                                                >> 0x10U);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a[7U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_a[7U] 
                                                >> 0x10U);
        vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = (0xffff0000U 
                                               | (0xffffU 
                                                  & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[6U]));
        vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = (0xffff0000U 
                                               | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[6U] 
                                                  >> 0x10U));
        vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = (0xffff0000U 
                                               | (0xffffU 
                                                  & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[7U]));
        vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = (0xffff0000U 
                                               | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_c[7U] 
                                                  >> 0x10U));
        vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = 3U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__tg__DOT__state = 0U;
        vlSelf->__PVT__tg_1__DOT__state = 0U;
    } else {
        vlSelf->__PVT__tg__DOT__state = (((((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                            | ((2U 
                                                == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                               & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode))) 
                                           | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                              & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) 
                                          & (IData)(vlSelf->__PVT__tg__DOT___T_9))
                                          ? 1U : ((
                                                   (1U 
                                                    == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                                   & (IData)(vlSymsp->TOP.io_out_ready))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->__PVT__tg__DOT___T_2) 
                                                    & (IData)(vlSymsp->TOP.io_out_ready))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)
                                                     ? 0U
                                                     : 3U)
                                                    : (IData)(vlSelf->__PVT__tg__DOT___GEN_23))));
        vlSelf->__PVT__tg_1__DOT__state = (((((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                              | ((2U 
                                                  == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                                 & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode))) 
                                             | ((4U 
                                                 == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                                & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) 
                                            & (IData)(vlSelf->__PVT__tg_1__DOT___T_9))
                                            ? 1U : 
                                           (((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                             & (IData)(vlSymsp->TOP.io_out_ready))
                                             ? 2U : 
                                            (((IData)(vlSelf->__PVT__tg_1__DOT___T_2) 
                                              & (IData)(vlSymsp->TOP.io_out_ready))
                                              ? ((IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)
                                                  ? 0U
                                                  : 3U)
                                              : (IData)(vlSelf->__PVT__tg_1__DOT___GEN_23))));
    }
    vlSelf->__PVT__tg_1__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))
                                          ? vlSelf->__PVT__tg_1__DOT__result_fp16
                                          : vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_3);
    vlSelf->__PVT__tg__DOT___T_2 = (2U == (IData)(vlSelf->__PVT__tg__DOT__state));
    tg__DOT____VdfgTmp_h19be38c2__0 = ((4U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    tg__DOT____VdfgTmp_h6637e356__0 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    __PVT__tg__DOT___T_4 = ((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                            | ((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                               & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)));
    vlSelf->__PVT__tg_1__DOT___T_2 = (2U == (IData)(vlSelf->__PVT__tg_1__DOT__state));
    tg_1__DOT____VdfgTmp_h19be38c2__0 = ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                         & (IData)(vlSymsp->TOP.io_out_ready));
    tg_1__DOT____VdfgTmp_h6637e356__0 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                         & (IData)(vlSymsp->TOP.io_out_ready));
    __PVT__tg_1__DOT___T_4 = ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                              | ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                 & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)));
    vlSelf->__PVT__tg__DOT___GEN_23 = ((IData)(tg__DOT____VdfgTmp_h6637e356__0)
                                        ? 4U : ((IData)(tg__DOT____VdfgTmp_h19be38c2__0)
                                                 ? 0U
                                                 : (IData)(vlSelf->__PVT__tg__DOT__state)));
    vlSelf->__PVT__tg_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & ((IData)(__PVT__tg__DOT___T_4) 
                                        | (4U == (IData)(vlSelf->__PVT__tg__DOT__state))));
    vlSelf->__PVT__tg_1__DOT___GEN_23 = ((IData)(tg_1__DOT____VdfgTmp_h6637e356__0)
                                          ? 4U : ((IData)(tg_1__DOT____VdfgTmp_h19be38c2__0)
                                                   ? 0U
                                                   : (IData)(vlSelf->__PVT__tg_1__DOT__state)));
    vlSelf->__PVT__tg_1_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                       & ((IData)(__PVT__tg_1__DOT___T_4) 
                                          | (4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))));
    vlSelf->__PVT__tg__DOT___T_9 = ((IData)(vlSelf->__PVT__tg_io_in_ready) 
                                    & (IData)(vlSymsp->TOP.io_in_valid));
    vlSelf->__PVT__tg_1__DOT___T_9 = ((IData)(vlSelf->__PVT__tg_1_io_in_ready) 
                                      & (IData)(vlSymsp->TOP.io_in_valid));
    vlSelf->__PVT__tg__DOT___GEN_67 = ((((IData)(__PVT__tg__DOT___T_4) 
                                         | ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                            & (4U == (IData)(vlSelf->__PVT__tg__DOT__state)))) 
                                        & (IData)(vlSelf->__PVT__tg__DOT___T_9)) 
                                       | (((1U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                           & (IData)(vlSymsp->TOP.io_out_ready))
                                           ? (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid)
                                           : (((2U 
                                                == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                               & (IData)(vlSymsp->TOP.io_out_ready))
                                               ? ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                                  & (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid))
                                               : ((IData)(tg__DOT____VdfgTmp_h6637e356__0)
                                                   ? (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid)
                                                   : 
                                                  ((~ (IData)(tg__DOT____VdfgTmp_h19be38c2__0)) 
                                                   & (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid))))));
    vlSelf->__PVT__tg_1__DOT___GEN_67 = ((((IData)(__PVT__tg_1__DOT___T_4) 
                                           | ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                              & (4U 
                                                 == (IData)(vlSelf->__PVT__tg_1__DOT__state)))) 
                                          & (IData)(vlSelf->__PVT__tg_1__DOT___T_9)) 
                                         | (((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                             & (IData)(vlSymsp->TOP.io_out_ready))
                                             ? (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid)
                                             : (((2U 
                                                  == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                                 & (IData)(vlSymsp->TOP.io_out_ready))
                                                 ? 
                                                ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                                 & (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid))
                                                 : 
                                                ((IData)(tg_1__DOT____VdfgTmp_h6637e356__0)
                                                  ? (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid)
                                                  : 
                                                 ((~ (IData)(tg_1__DOT____VdfgTmp_h19be38c2__0)) 
                                                  & (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid))))));
}

VL_INLINE_OPT void VTop_Octet___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__1(VTop_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Octet___nba_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__1\n"); );
    // Init
    CData/*0:0*/ __PVT__tg__DOT___T_4;
    __PVT__tg__DOT___T_4 = 0;
    CData/*0:0*/ tg__DOT____VdfgTmp_h19be38c2__0;
    tg__DOT____VdfgTmp_h19be38c2__0 = 0;
    CData/*0:0*/ tg__DOT____VdfgTmp_h6637e356__0;
    tg__DOT____VdfgTmp_h6637e356__0 = 0;
    CData/*0:0*/ __PVT__tg_1__DOT___T_4;
    __PVT__tg_1__DOT___T_4 = 0;
    CData/*0:0*/ tg_1__DOT____VdfgTmp_h19be38c2__0;
    tg_1__DOT____VdfgTmp_h19be38c2__0 = 0;
    CData/*0:0*/ tg_1__DOT____VdfgTmp_h6637e356__0;
    tg_1__DOT____VdfgTmp_h6637e356__0 = 0;
    // Body
    vlSelf->__PVT__tg__DOT__result_fp32_lo = (((QData)((IData)(vlSelf->__PVT__tg__DOT__dp_1->__PVT__io_out_bits_result)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__tg__DOT__dp->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg__DOT__result_fp32_hi = (((QData)((IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__io_out_bits_result)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__tg__DOT__dp_2->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg__DOT__result_fp16 = (((QData)((IData)(
                                                            (0xffffU 
                                                             & vlSelf->__PVT__tg__DOT__dp_3->__PVT__io_out_bits_result))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((vlSelf->__PVT__tg__DOT__dp_2->__PVT__io_out_bits_result 
                                                                 << 0x10U) 
                                                                | (0xffffU 
                                                                   & vlSelf->__PVT__tg__DOT__dp_1->__PVT__io_out_bits_result)))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlSelf->__PVT__tg__DOT__dp->__PVT__io_out_bits_result)))));
    vlSelf->__PVT__tg_1__DOT__result_fp32_lo = (((QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_bits_result)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg_1__DOT__result_fp32_hi = (((QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_bits_result)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg_1__DOT__result_fp16 = (((QData)((IData)(
                                                              (0xffffU 
                                                               & vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_bits_result))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_bits_result 
                                                                   << 0x10U) 
                                                                  | (0xffffU 
                                                                     & vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_bits_result)))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_bits_result)))));
    if (((((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
           | ((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
              & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode))) 
          | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
             & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) 
         & (IData)(vlSelf->__PVT__tg__DOT___T_9))) {
        vlSelf->__PVT__tg__DOT__dp_in_va_0 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a[0U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a[0U] 
                                              >> 0x10U);
        vlSelf->__PVT__tg__DOT__dp_in_va_2 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a[1U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a[1U] 
                                              >> 0x10U);
        if (vlSymsp->TOP.io_in_bits_ctrl_mixPcMode) {
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[0U];
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[1U];
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[2U];
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[3U];
        } else {
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[0U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[0U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[1U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[1U] 
                                                    >> 0x10U));
        }
        vlSelf->__PVT__tg__DOT__dp_in_rowtag = 0U;
    } else if (((1U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        vlSelf->__PVT__tg__DOT__dp_in_va_0 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a[2U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a[2U] 
                                              >> 0x10U);
        vlSelf->__PVT__tg__DOT__dp_in_va_2 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a[3U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a[3U] 
                                              >> 0x10U);
        if (vlSymsp->TOP.io_in_bits_ctrl_mixPcMode) {
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[4U];
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[5U];
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[6U];
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[7U];
        } else {
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[2U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[2U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[3U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[3U] 
                                                    >> 0x10U));
        }
        vlSelf->__PVT__tg__DOT__dp_in_rowtag = 1U;
    } else if (((IData)(vlSelf->__PVT__tg__DOT___T_2) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        if ((1U & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) {
            vlSelf->__PVT__tg__DOT__dp_in_va_0 = (0xffffU 
                                                  & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a[4U]);
            vlSelf->__PVT__tg__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a[4U] 
                                                  >> 0x10U);
            vlSelf->__PVT__tg__DOT__dp_in_va_2 = (0xffffU 
                                                  & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a[5U]);
            vlSelf->__PVT__tg__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a[5U] 
                                                  >> 0x10U);
            vlSelf->__PVT__tg__DOT__dp_in_c_0 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[4U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_1 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[4U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg__DOT__dp_in_c_2 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[5U]));
            vlSelf->__PVT__tg__DOT__dp_in_c_3 = (0xffff0000U 
                                                 | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[5U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg__DOT__dp_in_rowtag = 2U;
        }
    } else if (((3U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        vlSelf->__PVT__tg__DOT__dp_in_va_0 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a[6U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a[6U] 
                                              >> 0x10U);
        vlSelf->__PVT__tg__DOT__dp_in_va_2 = (0xffffU 
                                              & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a[7U]);
        vlSelf->__PVT__tg__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_a[7U] 
                                              >> 0x10U);
        vlSelf->__PVT__tg__DOT__dp_in_c_0 = (0xffff0000U 
                                             | (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[6U]));
        vlSelf->__PVT__tg__DOT__dp_in_c_1 = (0xffff0000U 
                                             | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[6U] 
                                                >> 0x10U));
        vlSelf->__PVT__tg__DOT__dp_in_c_2 = (0xffff0000U 
                                             | (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[7U]));
        vlSelf->__PVT__tg__DOT__dp_in_c_3 = (0xffff0000U 
                                             | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_c[7U] 
                                                >> 0x10U));
        vlSelf->__PVT__tg__DOT__dp_in_rowtag = 3U;
    }
    vlSelf->__PVT__tg__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))
                                        ? vlSelf->__PVT__tg__DOT__result_fp16
                                        : vlSelf->__PVT__tg__DOT__matrix_d_buffer_3);
    if (((((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
           | ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
              & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode))) 
          | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
             & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) 
         & (IData)(vlSelf->__PVT__tg_1__DOT___T_9))) {
        vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a[0U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a[0U] 
                                                >> 0x10U);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a[1U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a[1U] 
                                                >> 0x10U);
        if (vlSymsp->TOP.io_in_bits_ctrl_mixPcMode) {
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[0U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[1U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[2U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[3U];
        } else {
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[0U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[0U] 
                                                      >> 0x10U));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[1U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[1U] 
                                                      >> 0x10U));
        }
        vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = 0U;
    } else if (((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a[2U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a[2U] 
                                                >> 0x10U);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a[3U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a[3U] 
                                                >> 0x10U);
        if (vlSymsp->TOP.io_in_bits_ctrl_mixPcMode) {
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[4U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[5U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[6U];
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[7U];
        } else {
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[2U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[2U] 
                                                      >> 0x10U));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[3U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[3U] 
                                                      >> 0x10U));
        }
        vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = 1U;
    } else if (((IData)(vlSelf->__PVT__tg_1__DOT___T_2) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        if ((1U & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) {
            vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = 
                (0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a[4U]);
            vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = 
                (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a[4U] 
                 >> 0x10U);
            vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = 
                (0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a[5U]);
            vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = 
                (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a[5U] 
                 >> 0x10U);
            vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[4U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[4U] 
                                                      >> 0x10U));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = (0xffff0000U 
                                                   | (0xffffU 
                                                      & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[5U]));
            vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = (0xffff0000U 
                                                   | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[5U] 
                                                      >> 0x10U));
            vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = 2U;
        }
    } else if (((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                & (IData)(vlSymsp->TOP.io_out_ready))) {
        vlSelf->__PVT__tg_1__DOT__dp_in_va_0 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a[6U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_1 = (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a[6U] 
                                                >> 0x10U);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_2 = (0xffffU 
                                                & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a[7U]);
        vlSelf->__PVT__tg_1__DOT__dp_in_va_3 = (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_a[7U] 
                                                >> 0x10U);
        vlSelf->__PVT__tg_1__DOT__dp_in_c_0 = (0xffff0000U 
                                               | (0xffffU 
                                                  & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[6U]));
        vlSelf->__PVT__tg_1__DOT__dp_in_c_1 = (0xffff0000U 
                                               | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[6U] 
                                                  >> 0x10U));
        vlSelf->__PVT__tg_1__DOT__dp_in_c_2 = (0xffff0000U 
                                               | (0xffffU 
                                                  & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[7U]));
        vlSelf->__PVT__tg_1__DOT__dp_in_c_3 = (0xffff0000U 
                                               | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_c[7U] 
                                                  >> 0x10U));
        vlSelf->__PVT__tg_1__DOT__dp_in_rowtag = 3U;
    }
    if (vlSymsp->TOP.reset) {
        vlSelf->__PVT__tg__DOT__state = 0U;
        vlSelf->__PVT__tg_1__DOT__state = 0U;
    } else {
        vlSelf->__PVT__tg__DOT__state = (((((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                            | ((2U 
                                                == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                               & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode))) 
                                           | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                              & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) 
                                          & (IData)(vlSelf->__PVT__tg__DOT___T_9))
                                          ? 1U : ((
                                                   (1U 
                                                    == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                                   & (IData)(vlSymsp->TOP.io_out_ready))
                                                   ? 2U
                                                   : 
                                                  (((IData)(vlSelf->__PVT__tg__DOT___T_2) 
                                                    & (IData)(vlSymsp->TOP.io_out_ready))
                                                    ? 
                                                   ((IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)
                                                     ? 0U
                                                     : 3U)
                                                    : (IData)(vlSelf->__PVT__tg__DOT___GEN_23))));
        vlSelf->__PVT__tg_1__DOT__state = (((((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                              | ((2U 
                                                  == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                                 & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode))) 
                                             | ((4U 
                                                 == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                                & (~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)))) 
                                            & (IData)(vlSelf->__PVT__tg_1__DOT___T_9))
                                            ? 1U : 
                                           (((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                             & (IData)(vlSymsp->TOP.io_out_ready))
                                             ? 2U : 
                                            (((IData)(vlSelf->__PVT__tg_1__DOT___T_2) 
                                              & (IData)(vlSymsp->TOP.io_out_ready))
                                              ? ((IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)
                                                  ? 0U
                                                  : 3U)
                                              : (IData)(vlSelf->__PVT__tg_1__DOT___GEN_23))));
    }
    vlSelf->__PVT__tg_1__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))
                                          ? vlSelf->__PVT__tg_1__DOT__result_fp16
                                          : vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_3);
    vlSelf->__PVT__tg__DOT___T_2 = (2U == (IData)(vlSelf->__PVT__tg__DOT__state));
    tg__DOT____VdfgTmp_h19be38c2__0 = ((4U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    tg__DOT____VdfgTmp_h6637e356__0 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    __PVT__tg__DOT___T_4 = ((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                            | ((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                               & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)));
    vlSelf->__PVT__tg_1__DOT___T_2 = (2U == (IData)(vlSelf->__PVT__tg_1__DOT__state));
    tg_1__DOT____VdfgTmp_h19be38c2__0 = ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                         & (IData)(vlSymsp->TOP.io_out_ready));
    tg_1__DOT____VdfgTmp_h6637e356__0 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                         & (IData)(vlSymsp->TOP.io_out_ready));
    __PVT__tg_1__DOT___T_4 = ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                              | ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                 & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)));
    vlSelf->__PVT__tg__DOT___GEN_23 = ((IData)(tg__DOT____VdfgTmp_h6637e356__0)
                                        ? 4U : ((IData)(tg__DOT____VdfgTmp_h19be38c2__0)
                                                 ? 0U
                                                 : (IData)(vlSelf->__PVT__tg__DOT__state)));
    vlSelf->__PVT__tg_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & ((IData)(__PVT__tg__DOT___T_4) 
                                        | (4U == (IData)(vlSelf->__PVT__tg__DOT__state))));
    vlSelf->__PVT__tg_1__DOT___GEN_23 = ((IData)(tg_1__DOT____VdfgTmp_h6637e356__0)
                                          ? 4U : ((IData)(tg_1__DOT____VdfgTmp_h19be38c2__0)
                                                   ? 0U
                                                   : (IData)(vlSelf->__PVT__tg_1__DOT__state)));
    vlSelf->__PVT__tg_1_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                       & ((IData)(__PVT__tg_1__DOT___T_4) 
                                          | (4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))));
    vlSelf->__PVT__tg__DOT___T_9 = ((IData)(vlSelf->__PVT__tg_io_in_ready) 
                                    & (IData)(vlSymsp->TOP.io_in_valid));
    vlSelf->__PVT__tg_1__DOT___T_9 = ((IData)(vlSelf->__PVT__tg_1_io_in_ready) 
                                      & (IData)(vlSymsp->TOP.io_in_valid));
    vlSelf->__PVT__tg__DOT___GEN_67 = ((((IData)(__PVT__tg__DOT___T_4) 
                                         | ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                            & (4U == (IData)(vlSelf->__PVT__tg__DOT__state)))) 
                                        & (IData)(vlSelf->__PVT__tg__DOT___T_9)) 
                                       | (((1U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                           & (IData)(vlSymsp->TOP.io_out_ready))
                                           ? (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid)
                                           : (((2U 
                                                == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                               & (IData)(vlSymsp->TOP.io_out_ready))
                                               ? ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                                  & (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid))
                                               : ((IData)(tg__DOT____VdfgTmp_h6637e356__0)
                                                   ? (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid)
                                                   : 
                                                  ((~ (IData)(tg__DOT____VdfgTmp_h19be38c2__0)) 
                                                   & (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid))))));
    vlSelf->__PVT__tg_1__DOT___GEN_67 = ((((IData)(__PVT__tg_1__DOT___T_4) 
                                           | ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                              & (4U 
                                                 == (IData)(vlSelf->__PVT__tg_1__DOT__state)))) 
                                          & (IData)(vlSelf->__PVT__tg_1__DOT___T_9)) 
                                         | (((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                             & (IData)(vlSymsp->TOP.io_out_ready))
                                             ? (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid)
                                             : (((2U 
                                                  == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                                 & (IData)(vlSymsp->TOP.io_out_ready))
                                                 ? 
                                                ((~ (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)) 
                                                 & (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid))
                                                 : 
                                                ((IData)(tg_1__DOT____VdfgTmp_h6637e356__0)
                                                  ? (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid)
                                                  : 
                                                 ((~ (IData)(tg_1__DOT____VdfgTmp_h19be38c2__0)) 
                                                  & (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid))))));
}
