// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystem.h for the primary calling header

#include "verilated.h"

#include "VSystem__Syms.h"
#include "VSystem_DotProdUnit.h"
#include "VSystem_Octet.h"
#include "VSystem__Syms.h"

VL_INLINE_OPT void VSystem_Octet___nba_sequent__TOP__System__DOT__top__DOT__tc__DOT__ot__0(VSystem_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSystem_Octet___nba_sequent__TOP__System__DOT__top__DOT__tc__DOT__ot__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__tg__DOT__state;
    __Vdly__tg__DOT__state = 0;
    CData/*2:0*/ __Vdly__tg_1__DOT__state;
    __Vdly__tg_1__DOT__state = 0;
    // Body
    __Vdly__tg_1__DOT__state = vlSelf->__PVT__tg_1__DOT__state;
    __Vdly__tg__DOT__state = vlSelf->__PVT__tg__DOT__state;
    if (vlSelf->__PVT__tg_1__DOT__prehandshaked) {
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[0U] 
            = vlSymsp->TOP.System__DOT__matrix_c_4[0U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[1U] 
            = vlSymsp->TOP.System__DOT__matrix_c_4[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[2U] 
            = vlSymsp->TOP.System__DOT__matrix_c_4[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[3U] 
            = vlSymsp->TOP.System__DOT__matrix_c_4[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[4U] 
            = vlSymsp->TOP.System__DOT__matrix_c_4[4U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[5U] 
            = vlSymsp->TOP.System__DOT__matrix_c_4[5U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[6U] 
            = vlSymsp->TOP.System__DOT__matrix_c_4[6U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[7U] 
            = vlSymsp->TOP.System__DOT__matrix_c_4[7U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U] 
            = vlSymsp->TOP.System__DOT__matrix_a_4[0U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U] 
            = vlSymsp->TOP.System__DOT__matrix_a_4[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U] 
            = vlSymsp->TOP.System__DOT__matrix_a_4[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U] 
            = vlSymsp->TOP.System__DOT__matrix_a_4[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[4U] 
            = vlSymsp->TOP.System__DOT__matrix_a_4[4U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[5U] 
            = vlSymsp->TOP.System__DOT__matrix_a_4[5U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[6U] 
            = vlSymsp->TOP.System__DOT__matrix_a_4[6U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[7U] 
            = vlSymsp->TOP.System__DOT__matrix_a_4[7U];
        if (vlSymsp->TOP.System__DOT__matBsel) {
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[0U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[1U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[2U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[3U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[4U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[4U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[5U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[5U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[6U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[7U];
        } else {
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[0U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[1U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[2U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[3U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[4U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[4U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[5U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[5U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[6U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[7U];
        }
    }
    if (vlSelf->__PVT__tg__DOT__prehandshaked) {
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[0U] 
            = vlSymsp->TOP.System__DOT__matrix_c_0[0U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[1U] 
            = vlSymsp->TOP.System__DOT__matrix_c_0[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[2U] 
            = vlSymsp->TOP.System__DOT__matrix_c_0[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[3U] 
            = vlSymsp->TOP.System__DOT__matrix_c_0[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[4U] 
            = vlSymsp->TOP.System__DOT__matrix_c_0[4U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[5U] 
            = vlSymsp->TOP.System__DOT__matrix_c_0[5U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[6U] 
            = vlSymsp->TOP.System__DOT__matrix_c_0[6U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[7U] 
            = vlSymsp->TOP.System__DOT__matrix_c_0[7U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U] 
            = vlSymsp->TOP.System__DOT__matrix_a_0[0U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U] 
            = vlSymsp->TOP.System__DOT__matrix_a_0[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U] 
            = vlSymsp->TOP.System__DOT__matrix_a_0[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U] 
            = vlSymsp->TOP.System__DOT__matrix_a_0[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[4U] 
            = vlSymsp->TOP.System__DOT__matrix_a_0[4U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[5U] 
            = vlSymsp->TOP.System__DOT__matrix_a_0[5U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[6U] 
            = vlSymsp->TOP.System__DOT__matrix_a_0[6U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[7U] 
            = vlSymsp->TOP.System__DOT__matrix_a_0[7U];
        if (vlSymsp->TOP.System__DOT__matBsel) {
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[0U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[1U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[2U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[3U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[4U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[5U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[6U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[7U];
        } else {
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[0U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[1U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[2U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[3U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[4U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[5U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[6U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[7U];
        }
    }
    if (((((IData)(vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_valid) 
           & (IData)(vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_valid)) 
          & (IData)(vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_valid)) 
         & (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_valid))) {
        if ((0U != (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
            if ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
                if (vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__mixPc_es) {
                    vlSelf->__PVT__tg_1__DOT__matrix_d_2 
                        = vlSelf->__PVT__tg_1__DOT__result_fp32_hi;
                    vlSelf->__PVT__tg_1__DOT__matrix_d_3 
                        = vlSelf->__PVT__tg_1__DOT__result_fp32_lo;
                }
            } else {
                if ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg_1__DOT__matrix_d_2 
                        = vlSelf->__PVT__tg_1__DOT__result_fp16;
                }
                if ((2U != (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg_1__DOT__matrix_d_3 
                        = vlSelf->__PVT__tg_1__DOT___GEN_29;
                }
            }
        }
        if ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
            if (vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__mixPc_es) {
                vlSelf->__PVT__tg_1__DOT__matrix_d_0 
                    = vlSelf->__PVT__tg_1__DOT__result_fp32_hi;
                vlSelf->__PVT__tg_1__DOT__matrix_d_1 
                    = vlSelf->__PVT__tg_1__DOT__result_fp32_lo;
            } else {
                vlSelf->__PVT__tg_1__DOT__matrix_d_0 
                    = vlSelf->__PVT__tg_1__DOT__result_fp16;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__mixPc_es)))) {
                vlSelf->__PVT__tg_1__DOT__matrix_d_1 
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
                    vlSelf->__PVT__tg__DOT__matrix_d_2 
                        = vlSelf->__PVT__tg__DOT__result_fp32_hi;
                    vlSelf->__PVT__tg__DOT__matrix_d_3 
                        = vlSelf->__PVT__tg__DOT__result_fp32_lo;
                }
            } else {
                if ((2U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg__DOT__matrix_d_2 
                        = vlSelf->__PVT__tg__DOT__result_fp16;
                }
                if ((2U != (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg__DOT__matrix_d_3 
                        = vlSelf->__PVT__tg__DOT___GEN_29;
                }
            }
        }
        if ((0U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
            if (vlSelf->__PVT__tg__DOT__dp_3->__PVT__mixPc_es) {
                vlSelf->__PVT__tg__DOT__matrix_d_0 
                    = vlSelf->__PVT__tg__DOT__result_fp32_hi;
                vlSelf->__PVT__tg__DOT__matrix_d_1 
                    = vlSelf->__PVT__tg__DOT__result_fp32_lo;
            } else {
                vlSelf->__PVT__tg__DOT__matrix_d_0 
                    = vlSelf->__PVT__tg__DOT__result_fp16;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__mixPc_es)))) {
                vlSelf->__PVT__tg__DOT__matrix_d_1 
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
    if (vlSymsp->TOP.reset) {
        __Vdly__tg_1__DOT__state = 0U;
        vlSelf->__PVT__tg_1__DOT__dp_in_valid = 0U;
        __Vdly__tg__DOT__state = 0U;
        vlSelf->__PVT__tg__DOT__dp_in_valid = 0U;
    } else {
        if ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state))) {
            if (vlSelf->__PVT__tg_1__DOT__prehandshaked) {
                __Vdly__tg_1__DOT__state = 1U;
                vlSelf->__PVT__tg_1__DOT__dp_in_valid = 1U;
            } else {
                vlSelf->__PVT__tg_1__DOT__dp_in_valid = 0U;
            }
        } else {
            if ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))) {
                if (vlSymsp->TOP.io_out_ready) {
                    __Vdly__tg_1__DOT__state = 2U;
                }
            } else {
                __Vdly__tg_1__DOT__state = ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                             ? (IData)(vlSelf->__PVT__tg_1__DOT___GEN_8)
                                             : (IData)(vlSelf->__PVT__tg_1__DOT___GEN_15));
            }
            if ((1U != (IData)(vlSelf->__PVT__tg_1__DOT__state))) {
                vlSelf->__PVT__tg_1__DOT__dp_in_valid 
                    = ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                        ? (IData)(vlSelf->__PVT__tg_1__DOT___GEN_9)
                        : (IData)(vlSelf->__PVT__tg_1__DOT___GEN_16));
            }
        }
        if ((0U == (IData)(vlSelf->__PVT__tg__DOT__state))) {
            if (vlSelf->__PVT__tg__DOT__prehandshaked) {
                __Vdly__tg__DOT__state = 1U;
                vlSelf->__PVT__tg__DOT__dp_in_valid = 1U;
            } else {
                vlSelf->__PVT__tg__DOT__dp_in_valid = 0U;
            }
        } else {
            if ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))) {
                if (vlSymsp->TOP.io_out_ready) {
                    __Vdly__tg__DOT__state = 2U;
                }
            } else {
                __Vdly__tg__DOT__state = ((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                           ? (IData)(vlSelf->__PVT__tg__DOT___GEN_8)
                                           : (IData)(vlSelf->__PVT__tg__DOT___GEN_15));
            }
            if ((1U != (IData)(vlSelf->__PVT__tg__DOT__state))) {
                vlSelf->__PVT__tg__DOT__dp_in_valid 
                    = ((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? (IData)(vlSelf->__PVT__tg__DOT___GEN_9)
                        : (IData)(vlSelf->__PVT__tg__DOT___GEN_16));
            }
        }
    }
    vlSelf->__PVT__tg_1__DOT__state = __Vdly__tg_1__DOT__state;
    vlSelf->__PVT__tg__DOT__state = __Vdly__tg__DOT__state;
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[0U] 
        = (IData)(vlSelf->__PVT__tg_1__DOT__matrix_d_3);
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[1U] 
        = (IData)((vlSelf->__PVT__tg_1__DOT__matrix_d_3 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[2U] 
        = (IData)(vlSelf->__PVT__tg_1__DOT__matrix_d_2);
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[3U] 
        = (IData)((vlSelf->__PVT__tg_1__DOT__matrix_d_2 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[4U] 
        = (IData)(vlSelf->__PVT__tg_1__DOT__matrix_d_1);
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[5U] 
        = (IData)((vlSelf->__PVT__tg_1__DOT__matrix_d_1 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[6U] 
        = (IData)(vlSelf->__PVT__tg_1__DOT__matrix_d_0);
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[7U] 
        = (IData)((vlSelf->__PVT__tg_1__DOT__matrix_d_0 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[0U] 
        = (IData)(vlSelf->__PVT__tg__DOT__matrix_d_3);
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[1U] 
        = (IData)((vlSelf->__PVT__tg__DOT__matrix_d_3 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[2U] 
        = (IData)(vlSelf->__PVT__tg__DOT__matrix_d_2);
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[3U] 
        = (IData)((vlSelf->__PVT__tg__DOT__matrix_d_2 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[4U] 
        = (IData)(vlSelf->__PVT__tg__DOT__matrix_d_1);
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[5U] 
        = (IData)((vlSelf->__PVT__tg__DOT__matrix_d_1 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[6U] 
        = (IData)(vlSelf->__PVT__tg__DOT__matrix_d_0);
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[7U] 
        = (IData)((vlSelf->__PVT__tg__DOT__matrix_d_0 
                   >> 0x20U));
    vlSelf->__PVT__tg_1__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                            & (IData)(vlSelf->__PVT__tg_1__DOT__outValid))) 
                                        & (IData)(vlSelf->__PVT__tg_1__DOT__outValid));
    vlSelf->__PVT__tg__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                          & (IData)(vlSelf->__PVT__tg__DOT__outValid))) 
                                      & (IData)(vlSelf->__PVT__tg__DOT__outValid));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0 
        = (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[5U] 
                              << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[5U] 
                                           >> 0x10U))
                          : 0U) | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                    ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U] 
                                        << 0x10U) | 
                                       (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U] 
                                        >> 0x10U)) : 0U)) 
                       | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                           ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U] 
                               << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U] 
                                            >> 0x10U))
                           : 0U)) | ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                      ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[7U] 
                                          << 0x10U) 
                                         | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[7U] 
                                            >> 0x10U))
                                      : 0U)));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1 
        = (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[5U]
                          : 0U) | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                    ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U]
                                    : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                               ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U]
                                               : 0U)) 
                      | ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[7U]
                          : 0U)));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2 
        = (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[4U] 
                              << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[4U] 
                                           >> 0x10U))
                          : 0U) | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                    ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U] 
                                        << 0x10U) | 
                                       (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U] 
                                        >> 0x10U)) : 0U)) 
                       | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                           ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U] 
                               << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U] 
                                            >> 0x10U))
                           : 0U)) | ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                      ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[6U] 
                                          << 0x10U) 
                                         | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[6U] 
                                            >> 0x10U))
                                      : 0U)));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3 
        = (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[4U]
                          : 0U) | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                    ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U]
                                    : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                               ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U]
                                               : 0U)) 
                      | ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[6U]
                          : 0U)));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_0 = 
        (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[5U] 
                            << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[5U] 
                                         >> 0x10U))
                        : 0U) | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                  ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U] 
                                      << 0x10U) | (
                                                   vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U] 
                                                   >> 0x10U))
                                  : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                             ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U] 
                                                   >> 0x10U))
                                             : 0U)) 
                    | ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[7U] 
                            << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[7U] 
                                         >> 0x10U))
                        : 0U)));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_1 = 
        (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[5U]
                        : 0U) | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                  ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U]
                                  : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                             ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U]
                                             : 0U)) 
                    | ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[7U]
                        : 0U)));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_2 = 
        (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[4U] 
                            << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[4U] 
                                         >> 0x10U))
                        : 0U) | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                  ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U] 
                                      << 0x10U) | (
                                                   vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U] 
                                                   >> 0x10U))
                                  : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                             ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U] 
                                                 << 0x10U) 
                                                | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U] 
                                                   >> 0x10U))
                                             : 0U)) 
                    | ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[6U] 
                            << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[6U] 
                                         >> 0x10U))
                        : 0U)));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_3 = 
        (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[4U]
                        : 0U) | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                  ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U]
                                  : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                             ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U]
                                             : 0U)) 
                    | ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[6U]
                        : 0U)));
}

VL_INLINE_OPT void VSystem_Octet___nba_sequent__TOP__System__DOT__top__DOT__tc__DOT__ot__1(VSystem_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSystem_Octet___nba_sequent__TOP__System__DOT__top__DOT__tc__DOT__ot__1\n"); );
    // Body
    vlSelf->__PVT__tg__DOT__result_fp32_hi = (((QData)((IData)(vlSelf->__PVT__tg__DOT__dp->__PVT__io_out_bits_result)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__tg__DOT__dp_1->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg__DOT__result_fp32_lo = (((QData)((IData)(vlSelf->__PVT__tg__DOT__dp_2->__PVT__io_out_bits_result)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg__DOT__result_fp16 = (((QData)((IData)(
                                                            (0xffffU 
                                                             & vlSelf->__PVT__tg__DOT__dp->__PVT__io_out_bits_result))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               ((vlSelf->__PVT__tg__DOT__dp_1->__PVT__io_out_bits_result 
                                                                 << 0x10U) 
                                                                | (0xffffU 
                                                                   & vlSelf->__PVT__tg__DOT__dp_2->__PVT__io_out_bits_result)))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (0xffffU 
                                                                 & vlSelf->__PVT__tg__DOT__dp_3->__PVT__io_out_bits_result)))));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_rowtag = 
        (((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
          | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
              ? 2U : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                              ? 3U : 0U));
    vlSelf->__PVT__tg_1__DOT__result_fp32_hi = (((QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_bits_result)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg_1__DOT__result_fp32_lo = (((QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_bits_result)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg_1__DOT__result_fp16 = (((QData)((IData)(
                                                              (0xffffU 
                                                               & vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_bits_result))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 ((vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_bits_result 
                                                                   << 0x10U) 
                                                                  | (0xffffU 
                                                                     & vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_bits_result)))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_bits_result)))));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_rowtag 
        = (((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
            | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                ? 2U : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                ? 3U : 0U));
    vlSelf->__PVT__tg__DOT___GEN_5 = ((IData)(vlSymsp->TOP.System__DOT__top_io_in_valid_REG) 
                                      & (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid));
    if ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))) {
        vlSelf->__PVT__tg__DOT___GEN_15 = ((IData)(vlSymsp->TOP.io_out_ready)
                                            ? 4U : (IData)(vlSelf->__PVT__tg__DOT__state));
        vlSelf->__PVT__tg__DOT___GEN_16 = vlSelf->__PVT__tg__DOT__dp_in_valid;
    } else if ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))) {
        if (vlSymsp->TOP.io_out_ready) {
            vlSelf->__PVT__tg__DOT___GEN_15 = ((IData)(vlSymsp->TOP.System__DOT__top_io_in_valid_REG)
                                                ? 1U
                                                : 0U);
            vlSelf->__PVT__tg__DOT___GEN_16 = vlSelf->__PVT__tg__DOT___GEN_5;
        } else {
            vlSelf->__PVT__tg__DOT___GEN_15 = vlSelf->__PVT__tg__DOT__state;
            vlSelf->__PVT__tg__DOT___GEN_16 = vlSelf->__PVT__tg__DOT__dp_in_valid;
        }
    } else {
        vlSelf->__PVT__tg__DOT___GEN_15 = vlSelf->__PVT__tg__DOT__state;
        vlSelf->__PVT__tg__DOT___GEN_16 = vlSelf->__PVT__tg__DOT__dp_in_valid;
    }
    vlSelf->__PVT__tg_1__DOT___GEN_5 = ((IData)(vlSymsp->TOP.System__DOT__top_io_in_valid_REG) 
                                        & (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid));
    if ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))) {
        vlSelf->__PVT__tg_1__DOT___GEN_15 = ((IData)(vlSymsp->TOP.io_out_ready)
                                              ? 4U : (IData)(vlSelf->__PVT__tg_1__DOT__state));
        vlSelf->__PVT__tg_1__DOT___GEN_16 = vlSelf->__PVT__tg_1__DOT__dp_in_valid;
    } else if ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))) {
        if (vlSymsp->TOP.io_out_ready) {
            vlSelf->__PVT__tg_1__DOT___GEN_15 = ((IData)(vlSymsp->TOP.System__DOT__top_io_in_valid_REG)
                                                  ? 1U
                                                  : 0U);
            vlSelf->__PVT__tg_1__DOT___GEN_16 = vlSelf->__PVT__tg_1__DOT___GEN_5;
        } else {
            vlSelf->__PVT__tg_1__DOT___GEN_15 = vlSelf->__PVT__tg_1__DOT__state;
            vlSelf->__PVT__tg_1__DOT___GEN_16 = vlSelf->__PVT__tg_1__DOT__dp_in_valid;
        }
    } else {
        vlSelf->__PVT__tg_1__DOT___GEN_15 = vlSelf->__PVT__tg_1__DOT__state;
        vlSelf->__PVT__tg_1__DOT___GEN_16 = vlSelf->__PVT__tg_1__DOT__dp_in_valid;
    }
    vlSelf->__PVT__tg__DOT___GEN_29 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))
                                        ? vlSelf->__PVT__tg__DOT__result_fp16
                                        : vlSelf->__PVT__tg__DOT__matrix_d_3);
    if (vlSelf->__PVT__tg__DOT__prehandshaked) {
        vlSelf->__PVT__tg_io_in_bits_mixPcMode_r = vlSymsp->TOP.io_mixPc;
    }
    vlSelf->__PVT__tg_1__DOT___GEN_29 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))
                                          ? vlSelf->__PVT__tg_1__DOT__result_fp16
                                          : vlSelf->__PVT__tg_1__DOT__matrix_d_3);
    if (vlSelf->__PVT__tg_1__DOT__prehandshaked) {
        vlSelf->__PVT__tg_io_in_bits_mixPcMode_r_1 
            = vlSymsp->TOP.io_mixPc;
    }
    if (vlSymsp->TOP.io_out_ready) {
        if (vlSelf->__PVT__tg_io_in_bits_mixPcMode_r) {
            vlSelf->__PVT__tg__DOT___GEN_8 = ((IData)(vlSymsp->TOP.System__DOT__top_io_in_valid_REG)
                                               ? 1U
                                               : 0U);
            vlSelf->__PVT__tg__DOT___GEN_9 = vlSelf->__PVT__tg__DOT___GEN_5;
        } else {
            vlSelf->__PVT__tg__DOT___GEN_8 = 3U;
            vlSelf->__PVT__tg__DOT___GEN_9 = vlSelf->__PVT__tg__DOT__dp_in_valid;
        }
        if (vlSelf->__PVT__tg_io_in_bits_mixPcMode_r_1) {
            vlSelf->__PVT__tg_1__DOT___GEN_8 = ((IData)(vlSymsp->TOP.System__DOT__top_io_in_valid_REG)
                                                 ? 1U
                                                 : 0U);
            vlSelf->__PVT__tg_1__DOT___GEN_9 = vlSelf->__PVT__tg_1__DOT___GEN_5;
        } else {
            vlSelf->__PVT__tg_1__DOT___GEN_8 = 3U;
            vlSelf->__PVT__tg_1__DOT___GEN_9 = vlSelf->__PVT__tg_1__DOT__dp_in_valid;
        }
    } else {
        vlSelf->__PVT__tg__DOT___GEN_8 = vlSelf->__PVT__tg__DOT__state;
        vlSelf->__PVT__tg__DOT___GEN_9 = vlSelf->__PVT__tg__DOT__dp_in_valid;
        vlSelf->__PVT__tg_1__DOT___GEN_8 = vlSelf->__PVT__tg_1__DOT__state;
        vlSelf->__PVT__tg_1__DOT___GEN_9 = vlSelf->__PVT__tg_1__DOT__dp_in_valid;
    }
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_c = (((((2U 
                                                   == (IData)(vlSelf->__PVT__tg__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r)
                                                    ? 
                                                   vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[3U]
                                                    : 
                                                   (0xffff0000U 
                                                    | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[5U] 
                                                       >> 0x10U)))
                                                   : 0U) 
                                                 | ((3U 
                                                     == (IData)(vlSelf->__PVT__tg__DOT__state))
                                                     ? 
                                                    (0xffff0000U 
                                                     | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[3U] 
                                                        >> 0x10U))
                                                     : 0U)) 
                                                | ((4U 
                                                    == (IData)(vlSelf->__PVT__tg__DOT__state))
                                                    ? 
                                                   (0xffff0000U 
                                                    | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[1U] 
                                                       >> 0x10U))
                                                    : 0U)) 
                                               | ((1U 
                                                   == (IData)(vlSelf->__PVT__tg__DOT__state))
                                                   ? 
                                                  ((IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r)
                                                    ? 
                                                   vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[7U]
                                                    : 
                                                   (0xffff0000U 
                                                    | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[7U] 
                                                       >> 0x10U)))
                                                   : 0U));
    vlSelf->__PVT__tg__DOT__dp_1_io_in_bits_c = (((
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__tg__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r)
                                                      ? 
                                                     vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[2U]
                                                      : 
                                                     (0xffff0000U 
                                                      | (0xffffU 
                                                         & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[5U])))
                                                     : 0U) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__PVT__tg__DOT__state))
                                                       ? 
                                                      (0xffff0000U 
                                                       | (0xffffU 
                                                          & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[3U]))
                                                       : 0U)) 
                                                  | ((4U 
                                                      == (IData)(vlSelf->__PVT__tg__DOT__state))
                                                      ? 
                                                     (0xffff0000U 
                                                      | (0xffffU 
                                                         & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[1U]))
                                                      : 0U)) 
                                                 | ((1U 
                                                     == (IData)(vlSelf->__PVT__tg__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r)
                                                      ? 
                                                     vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[6U]
                                                      : 
                                                     (0xffff0000U 
                                                      | (0xffffU 
                                                         & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[7U])))
                                                     : 0U));
    vlSelf->__PVT__tg__DOT__dp_2_io_in_bits_c = (((
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__tg__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r)
                                                      ? 
                                                     vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[1U]
                                                      : 
                                                     (0xffff0000U 
                                                      | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[4U] 
                                                         >> 0x10U)))
                                                     : 0U) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__PVT__tg__DOT__state))
                                                       ? 
                                                      (0xffff0000U 
                                                       | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[2U] 
                                                          >> 0x10U))
                                                       : 0U)) 
                                                  | ((4U 
                                                      == (IData)(vlSelf->__PVT__tg__DOT__state))
                                                      ? 
                                                     (0xffff0000U 
                                                      | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[0U] 
                                                         >> 0x10U))
                                                      : 0U)) 
                                                 | ((1U 
                                                     == (IData)(vlSelf->__PVT__tg__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r)
                                                      ? 
                                                     vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[5U]
                                                      : 
                                                     (0xffff0000U 
                                                      | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[6U] 
                                                         >> 0x10U)))
                                                     : 0U));
    vlSelf->__PVT__tg__DOT__dp_3_io_in_bits_c = (((
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__tg__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r)
                                                      ? 
                                                     vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[0U]
                                                      : 
                                                     (0xffff0000U 
                                                      | (0xffffU 
                                                         & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[4U])))
                                                     : 0U) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__PVT__tg__DOT__state))
                                                       ? 
                                                      (0xffff0000U 
                                                       | (0xffffU 
                                                          & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[2U]))
                                                       : 0U)) 
                                                  | ((4U 
                                                      == (IData)(vlSelf->__PVT__tg__DOT__state))
                                                      ? 
                                                     (0xffff0000U 
                                                      | (0xffffU 
                                                         & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[0U]))
                                                      : 0U)) 
                                                 | ((1U 
                                                     == (IData)(vlSelf->__PVT__tg__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r)
                                                      ? 
                                                     vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[4U]
                                                      : 
                                                     (0xffff0000U 
                                                      | (0xffffU 
                                                         & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[6U])))
                                                     : 0U));
    vlSelf->__PVT__tg_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & ((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                        | (((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                            & (IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r)) 
                                           | (4U == (IData)(vlSelf->__PVT__tg__DOT__state)))));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_c = (((
                                                   ((2U 
                                                     == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r_1)
                                                      ? 
                                                     vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[3U]
                                                      : 
                                                     (0xffff0000U 
                                                      | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[5U] 
                                                         >> 0x10U)))
                                                     : 0U) 
                                                   | ((3U 
                                                       == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                                       ? 
                                                      (0xffff0000U 
                                                       | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[3U] 
                                                          >> 0x10U))
                                                       : 0U)) 
                                                  | ((4U 
                                                      == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                                      ? 
                                                     (0xffff0000U 
                                                      | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[1U] 
                                                         >> 0x10U))
                                                      : 0U)) 
                                                 | ((1U 
                                                     == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                                     ? 
                                                    ((IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r_1)
                                                      ? 
                                                     vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[7U]
                                                      : 
                                                     (0xffff0000U 
                                                      | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[7U] 
                                                         >> 0x10U)))
                                                     : 0U));
    vlSelf->__PVT__tg_1__DOT__dp_1_io_in_bits_c = (
                                                   ((((2U 
                                                       == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r_1)
                                                        ? 
                                                       vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[2U]
                                                        : 
                                                       (0xffff0000U 
                                                        | (0xffffU 
                                                           & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[5U])))
                                                       : 0U) 
                                                     | ((3U 
                                                         == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                                         ? 
                                                        (0xffff0000U 
                                                         | (0xffffU 
                                                            & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[3U]))
                                                         : 0U)) 
                                                    | ((4U 
                                                        == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                                        ? 
                                                       (0xffff0000U 
                                                        | (0xffffU 
                                                           & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[1U]))
                                                        : 0U)) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r_1)
                                                        ? 
                                                       vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[6U]
                                                        : 
                                                       (0xffff0000U 
                                                        | (0xffffU 
                                                           & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[7U])))
                                                       : 0U));
    vlSelf->__PVT__tg_1__DOT__dp_2_io_in_bits_c = (
                                                   ((((2U 
                                                       == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r_1)
                                                        ? 
                                                       vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[1U]
                                                        : 
                                                       (0xffff0000U 
                                                        | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[4U] 
                                                           >> 0x10U)))
                                                       : 0U) 
                                                     | ((3U 
                                                         == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                                         ? 
                                                        (0xffff0000U 
                                                         | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[2U] 
                                                            >> 0x10U))
                                                         : 0U)) 
                                                    | ((4U 
                                                        == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                                        ? 
                                                       (0xffff0000U 
                                                        | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[0U] 
                                                           >> 0x10U))
                                                        : 0U)) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r_1)
                                                        ? 
                                                       vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[5U]
                                                        : 
                                                       (0xffff0000U 
                                                        | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[6U] 
                                                           >> 0x10U)))
                                                       : 0U));
    vlSelf->__PVT__tg_1__DOT__dp_3_io_in_bits_c = (
                                                   ((((2U 
                                                       == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r_1)
                                                        ? 
                                                       vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[0U]
                                                        : 
                                                       (0xffff0000U 
                                                        | (0xffffU 
                                                           & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[4U])))
                                                       : 0U) 
                                                     | ((3U 
                                                         == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                                         ? 
                                                        (0xffff0000U 
                                                         | (0xffffU 
                                                            & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[2U]))
                                                         : 0U)) 
                                                    | ((4U 
                                                        == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                                        ? 
                                                       (0xffff0000U 
                                                        | (0xffffU 
                                                           & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[0U]))
                                                        : 0U)) 
                                                   | ((1U 
                                                       == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r_1)
                                                        ? 
                                                       vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[4U]
                                                        : 
                                                       (0xffff0000U 
                                                        | (0xffffU 
                                                           & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[6U])))
                                                       : 0U));
    vlSelf->__PVT__tg_1_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                       & ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                          | (((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                              & (IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r_1)) 
                                             | (4U 
                                                == (IData)(vlSelf->__PVT__tg_1__DOT__state)))));
    vlSelf->__PVT__tg__DOT__prehandshaked = ((IData)(vlSymsp->TOP.System__DOT__top_io_in_valid_REG) 
                                             & (IData)(vlSelf->__PVT__tg_io_in_ready));
    vlSelf->__PVT__tg_1__DOT__prehandshaked = ((IData)(vlSymsp->TOP.System__DOT__top_io_in_valid_REG) 
                                               & (IData)(vlSelf->__PVT__tg_1_io_in_ready));
}

VL_INLINE_OPT void VSystem_Octet___nba_sequent__TOP__System__DOT__top__DOT__tc__DOT__ot_1__0(VSystem_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSystem_Octet___nba_sequent__TOP__System__DOT__top__DOT__tc__DOT__ot_1__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__tg__DOT__state;
    __Vdly__tg__DOT__state = 0;
    CData/*2:0*/ __Vdly__tg_1__DOT__state;
    __Vdly__tg_1__DOT__state = 0;
    // Body
    __Vdly__tg_1__DOT__state = vlSelf->__PVT__tg_1__DOT__state;
    __Vdly__tg__DOT__state = vlSelf->__PVT__tg__DOT__state;
    if (vlSelf->__PVT__tg_1__DOT__prehandshaked) {
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[0U] 
            = vlSymsp->TOP.System__DOT__matrix_c_5[0U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[1U] 
            = vlSymsp->TOP.System__DOT__matrix_c_5[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[2U] 
            = vlSymsp->TOP.System__DOT__matrix_c_5[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[3U] 
            = vlSymsp->TOP.System__DOT__matrix_c_5[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[4U] 
            = vlSymsp->TOP.System__DOT__matrix_c_5[4U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[5U] 
            = vlSymsp->TOP.System__DOT__matrix_c_5[5U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[6U] 
            = vlSymsp->TOP.System__DOT__matrix_c_5[6U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[7U] 
            = vlSymsp->TOP.System__DOT__matrix_c_5[7U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U] 
            = vlSymsp->TOP.System__DOT__matrix_a_5[0U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U] 
            = vlSymsp->TOP.System__DOT__matrix_a_5[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U] 
            = vlSymsp->TOP.System__DOT__matrix_a_5[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U] 
            = vlSymsp->TOP.System__DOT__matrix_a_5[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[4U] 
            = vlSymsp->TOP.System__DOT__matrix_a_5[4U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[5U] 
            = vlSymsp->TOP.System__DOT__matrix_a_5[5U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[6U] 
            = vlSymsp->TOP.System__DOT__matrix_a_5[6U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[7U] 
            = vlSymsp->TOP.System__DOT__matrix_a_5[7U];
        if (vlSymsp->TOP.System__DOT__matBsel) {
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[0U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[1U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[2U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[3U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[4U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[4U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[5U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[5U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[6U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[7U];
        } else {
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[0U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[1U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[2U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[3U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[4U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[4U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[5U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[5U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[6U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[7U];
        }
    }
    if (vlSelf->__PVT__tg__DOT__prehandshaked) {
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[0U] 
            = vlSymsp->TOP.System__DOT__matrix_c_1[0U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[1U] 
            = vlSymsp->TOP.System__DOT__matrix_c_1[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[2U] 
            = vlSymsp->TOP.System__DOT__matrix_c_1[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[3U] 
            = vlSymsp->TOP.System__DOT__matrix_c_1[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[4U] 
            = vlSymsp->TOP.System__DOT__matrix_c_1[4U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[5U] 
            = vlSymsp->TOP.System__DOT__matrix_c_1[5U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[6U] 
            = vlSymsp->TOP.System__DOT__matrix_c_1[6U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[7U] 
            = vlSymsp->TOP.System__DOT__matrix_c_1[7U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U] 
            = vlSymsp->TOP.System__DOT__matrix_a_1[0U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U] 
            = vlSymsp->TOP.System__DOT__matrix_a_1[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U] 
            = vlSymsp->TOP.System__DOT__matrix_a_1[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U] 
            = vlSymsp->TOP.System__DOT__matrix_a_1[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[4U] 
            = vlSymsp->TOP.System__DOT__matrix_a_1[4U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[5U] 
            = vlSymsp->TOP.System__DOT__matrix_a_1[5U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[6U] 
            = vlSymsp->TOP.System__DOT__matrix_a_1[6U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[7U] 
            = vlSymsp->TOP.System__DOT__matrix_a_1[7U];
        if (vlSymsp->TOP.System__DOT__matBsel) {
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[0U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[1U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[2U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[3U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[4U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[5U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[6U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[7U];
        } else {
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[0U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[1U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[2U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[3U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[4U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[5U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[6U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[7U];
        }
    }
    if (((((IData)(vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_valid) 
           & (IData)(vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_valid)) 
          & (IData)(vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_valid)) 
         & (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_valid))) {
        if ((0U != (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
            if ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
                if (vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__mixPc_es) {
                    vlSelf->__PVT__tg_1__DOT__matrix_d_2 
                        = vlSelf->__PVT__tg_1__DOT__result_fp32_hi;
                    vlSelf->__PVT__tg_1__DOT__matrix_d_3 
                        = vlSelf->__PVT__tg_1__DOT__result_fp32_lo;
                }
            } else {
                if ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg_1__DOT__matrix_d_2 
                        = vlSelf->__PVT__tg_1__DOT__result_fp16;
                }
                if ((2U != (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg_1__DOT__matrix_d_3 
                        = vlSelf->__PVT__tg_1__DOT___GEN_29;
                }
            }
        }
        if ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
            if (vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__mixPc_es) {
                vlSelf->__PVT__tg_1__DOT__matrix_d_0 
                    = vlSelf->__PVT__tg_1__DOT__result_fp32_hi;
                vlSelf->__PVT__tg_1__DOT__matrix_d_1 
                    = vlSelf->__PVT__tg_1__DOT__result_fp32_lo;
            } else {
                vlSelf->__PVT__tg_1__DOT__matrix_d_0 
                    = vlSelf->__PVT__tg_1__DOT__result_fp16;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__mixPc_es)))) {
                vlSelf->__PVT__tg_1__DOT__matrix_d_1 
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
                    vlSelf->__PVT__tg__DOT__matrix_d_2 
                        = vlSelf->__PVT__tg__DOT__result_fp32_hi;
                    vlSelf->__PVT__tg__DOT__matrix_d_3 
                        = vlSelf->__PVT__tg__DOT__result_fp32_lo;
                }
            } else {
                if ((2U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg__DOT__matrix_d_2 
                        = vlSelf->__PVT__tg__DOT__result_fp16;
                }
                if ((2U != (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg__DOT__matrix_d_3 
                        = vlSelf->__PVT__tg__DOT___GEN_29;
                }
            }
        }
        if ((0U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
            if (vlSelf->__PVT__tg__DOT__dp_3->__PVT__mixPc_es) {
                vlSelf->__PVT__tg__DOT__matrix_d_0 
                    = vlSelf->__PVT__tg__DOT__result_fp32_hi;
                vlSelf->__PVT__tg__DOT__matrix_d_1 
                    = vlSelf->__PVT__tg__DOT__result_fp32_lo;
            } else {
                vlSelf->__PVT__tg__DOT__matrix_d_0 
                    = vlSelf->__PVT__tg__DOT__result_fp16;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__mixPc_es)))) {
                vlSelf->__PVT__tg__DOT__matrix_d_1 
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
    if (vlSymsp->TOP.reset) {
        __Vdly__tg_1__DOT__state = 0U;
        vlSelf->__PVT__tg_1__DOT__dp_in_valid = 0U;
        __Vdly__tg__DOT__state = 0U;
        vlSelf->__PVT__tg__DOT__dp_in_valid = 0U;
    } else {
        if ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state))) {
            if (vlSelf->__PVT__tg_1__DOT__prehandshaked) {
                __Vdly__tg_1__DOT__state = 1U;
                vlSelf->__PVT__tg_1__DOT__dp_in_valid = 1U;
            } else {
                vlSelf->__PVT__tg_1__DOT__dp_in_valid = 0U;
            }
        } else {
            if ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))) {
                if (vlSymsp->TOP.io_out_ready) {
                    __Vdly__tg_1__DOT__state = 2U;
                }
            } else {
                __Vdly__tg_1__DOT__state = ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                             ? (IData)(vlSelf->__PVT__tg_1__DOT___GEN_8)
                                             : (IData)(vlSelf->__PVT__tg_1__DOT___GEN_15));
            }
            if ((1U != (IData)(vlSelf->__PVT__tg_1__DOT__state))) {
                vlSelf->__PVT__tg_1__DOT__dp_in_valid 
                    = ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                        ? (IData)(vlSelf->__PVT__tg_1__DOT___GEN_9)
                        : (IData)(vlSelf->__PVT__tg_1__DOT___GEN_16));
            }
        }
        if ((0U == (IData)(vlSelf->__PVT__tg__DOT__state))) {
            if (vlSelf->__PVT__tg__DOT__prehandshaked) {
                __Vdly__tg__DOT__state = 1U;
                vlSelf->__PVT__tg__DOT__dp_in_valid = 1U;
            } else {
                vlSelf->__PVT__tg__DOT__dp_in_valid = 0U;
            }
        } else {
            if ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))) {
                if (vlSymsp->TOP.io_out_ready) {
                    __Vdly__tg__DOT__state = 2U;
                }
            } else {
                __Vdly__tg__DOT__state = ((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                           ? (IData)(vlSelf->__PVT__tg__DOT___GEN_8)
                                           : (IData)(vlSelf->__PVT__tg__DOT___GEN_15));
            }
            if ((1U != (IData)(vlSelf->__PVT__tg__DOT__state))) {
                vlSelf->__PVT__tg__DOT__dp_in_valid 
                    = ((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? (IData)(vlSelf->__PVT__tg__DOT___GEN_9)
                        : (IData)(vlSelf->__PVT__tg__DOT___GEN_16));
            }
        }
    }
    vlSelf->__PVT__tg_1__DOT__state = __Vdly__tg_1__DOT__state;
    vlSelf->__PVT__tg__DOT__state = __Vdly__tg__DOT__state;
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[0U] 
        = (IData)(vlSelf->__PVT__tg_1__DOT__matrix_d_3);
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[1U] 
        = (IData)((vlSelf->__PVT__tg_1__DOT__matrix_d_3 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[2U] 
        = (IData)(vlSelf->__PVT__tg_1__DOT__matrix_d_2);
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[3U] 
        = (IData)((vlSelf->__PVT__tg_1__DOT__matrix_d_2 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[4U] 
        = (IData)(vlSelf->__PVT__tg_1__DOT__matrix_d_1);
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[5U] 
        = (IData)((vlSelf->__PVT__tg_1__DOT__matrix_d_1 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[6U] 
        = (IData)(vlSelf->__PVT__tg_1__DOT__matrix_d_0);
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[7U] 
        = (IData)((vlSelf->__PVT__tg_1__DOT__matrix_d_0 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[0U] 
        = (IData)(vlSelf->__PVT__tg__DOT__matrix_d_3);
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[1U] 
        = (IData)((vlSelf->__PVT__tg__DOT__matrix_d_3 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[2U] 
        = (IData)(vlSelf->__PVT__tg__DOT__matrix_d_2);
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[3U] 
        = (IData)((vlSelf->__PVT__tg__DOT__matrix_d_2 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[4U] 
        = (IData)(vlSelf->__PVT__tg__DOT__matrix_d_1);
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[5U] 
        = (IData)((vlSelf->__PVT__tg__DOT__matrix_d_1 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[6U] 
        = (IData)(vlSelf->__PVT__tg__DOT__matrix_d_0);
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[7U] 
        = (IData)((vlSelf->__PVT__tg__DOT__matrix_d_0 
                   >> 0x20U));
    vlSelf->__PVT__tg_1__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                            & (IData)(vlSelf->__PVT__tg_1__DOT__outValid))) 
                                        & (IData)(vlSelf->__PVT__tg_1__DOT__outValid));
    vlSelf->__PVT__tg__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                          & (IData)(vlSelf->__PVT__tg__DOT__outValid))) 
                                      & (IData)(vlSelf->__PVT__tg__DOT__outValid));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0 
        = (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[5U] 
                              << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[5U] 
                                           >> 0x10U))
                          : 0U) | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                    ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U] 
                                        << 0x10U) | 
                                       (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U] 
                                        >> 0x10U)) : 0U)) 
                       | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                           ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U] 
                               << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U] 
                                            >> 0x10U))
                           : 0U)) | ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                      ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[7U] 
                                          << 0x10U) 
                                         | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[7U] 
                                            >> 0x10U))
                                      : 0U)));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1 
        = (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[5U]
                          : 0U) | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                    ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U]
                                    : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                               ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U]
                                               : 0U)) 
                      | ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[7U]
                          : 0U)));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2 
        = (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[4U] 
                              << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[4U] 
                                           >> 0x10U))
                          : 0U) | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                    ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U] 
                                        << 0x10U) | 
                                       (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U] 
                                        >> 0x10U)) : 0U)) 
                       | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                           ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U] 
                               << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U] 
                                            >> 0x10U))
                           : 0U)) | ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                      ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[6U] 
                                          << 0x10U) 
                                         | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[6U] 
                                            >> 0x10U))
                                      : 0U)));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3 
        = (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[4U]
                          : 0U) | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                    ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U]
                                    : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                               ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U]
                                               : 0U)) 
                      | ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[6U]
                          : 0U)));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_0 = 
        (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[5U] 
                            << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[5U] 
                                         >> 0x10U))
                        : 0U) | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                  ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U] 
                                      << 0x10U) | (
                                                   vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U] 
                                                   >> 0x10U))
                                  : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                             ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U] 
                                                   >> 0x10U))
                                             : 0U)) 
                    | ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[7U] 
                            << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[7U] 
                                         >> 0x10U))
                        : 0U)));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_1 = 
        (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[5U]
                        : 0U) | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                  ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U]
                                  : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                             ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U]
                                             : 0U)) 
                    | ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[7U]
                        : 0U)));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_2 = 
        (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[4U] 
                            << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[4U] 
                                         >> 0x10U))
                        : 0U) | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                  ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U] 
                                      << 0x10U) | (
                                                   vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U] 
                                                   >> 0x10U))
                                  : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                             ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U] 
                                                 << 0x10U) 
                                                | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U] 
                                                   >> 0x10U))
                                             : 0U)) 
                    | ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[6U] 
                            << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[6U] 
                                         >> 0x10U))
                        : 0U)));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_3 = 
        (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[4U]
                        : 0U) | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                  ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U]
                                  : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                             ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U]
                                             : 0U)) 
                    | ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[6U]
                        : 0U)));
}

VL_INLINE_OPT void VSystem_Octet___nba_sequent__TOP__System__DOT__top__DOT__tc_1__DOT__ot__0(VSystem_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSystem_Octet___nba_sequent__TOP__System__DOT__top__DOT__tc_1__DOT__ot__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__tg__DOT__state;
    __Vdly__tg__DOT__state = 0;
    CData/*2:0*/ __Vdly__tg_1__DOT__state;
    __Vdly__tg_1__DOT__state = 0;
    // Body
    __Vdly__tg_1__DOT__state = vlSelf->__PVT__tg_1__DOT__state;
    __Vdly__tg__DOT__state = vlSelf->__PVT__tg__DOT__state;
    if (vlSelf->__PVT__tg_1__DOT__prehandshaked) {
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[0U] 
            = vlSymsp->TOP.System__DOT__matrix_c_6[0U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[1U] 
            = vlSymsp->TOP.System__DOT__matrix_c_6[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[2U] 
            = vlSymsp->TOP.System__DOT__matrix_c_6[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[3U] 
            = vlSymsp->TOP.System__DOT__matrix_c_6[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[4U] 
            = vlSymsp->TOP.System__DOT__matrix_c_6[4U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[5U] 
            = vlSymsp->TOP.System__DOT__matrix_c_6[5U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[6U] 
            = vlSymsp->TOP.System__DOT__matrix_c_6[6U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[7U] 
            = vlSymsp->TOP.System__DOT__matrix_c_6[7U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U] 
            = vlSymsp->TOP.System__DOT__matrix_a_6[0U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U] 
            = vlSymsp->TOP.System__DOT__matrix_a_6[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U] 
            = vlSymsp->TOP.System__DOT__matrix_a_6[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U] 
            = vlSymsp->TOP.System__DOT__matrix_a_6[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[4U] 
            = vlSymsp->TOP.System__DOT__matrix_a_6[4U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[5U] 
            = vlSymsp->TOP.System__DOT__matrix_a_6[5U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[6U] 
            = vlSymsp->TOP.System__DOT__matrix_a_6[6U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[7U] 
            = vlSymsp->TOP.System__DOT__matrix_a_6[7U];
        if (vlSymsp->TOP.System__DOT__matBsel) {
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[0U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[1U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[2U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[3U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[4U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[4U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[5U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[5U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[6U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[7U];
        } else {
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[0U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[1U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[2U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[3U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[4U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[4U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[5U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[5U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[6U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[7U];
        }
    }
    if (vlSelf->__PVT__tg__DOT__prehandshaked) {
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[0U] 
            = vlSymsp->TOP.System__DOT__matrix_c_2[0U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[1U] 
            = vlSymsp->TOP.System__DOT__matrix_c_2[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[2U] 
            = vlSymsp->TOP.System__DOT__matrix_c_2[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[3U] 
            = vlSymsp->TOP.System__DOT__matrix_c_2[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[4U] 
            = vlSymsp->TOP.System__DOT__matrix_c_2[4U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[5U] 
            = vlSymsp->TOP.System__DOT__matrix_c_2[5U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[6U] 
            = vlSymsp->TOP.System__DOT__matrix_c_2[6U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[7U] 
            = vlSymsp->TOP.System__DOT__matrix_c_2[7U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U] 
            = vlSymsp->TOP.System__DOT__matrix_a_2[0U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U] 
            = vlSymsp->TOP.System__DOT__matrix_a_2[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U] 
            = vlSymsp->TOP.System__DOT__matrix_a_2[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U] 
            = vlSymsp->TOP.System__DOT__matrix_a_2[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[4U] 
            = vlSymsp->TOP.System__DOT__matrix_a_2[4U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[5U] 
            = vlSymsp->TOP.System__DOT__matrix_a_2[5U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[6U] 
            = vlSymsp->TOP.System__DOT__matrix_a_2[6U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[7U] 
            = vlSymsp->TOP.System__DOT__matrix_a_2[7U];
        if (vlSymsp->TOP.System__DOT__matBsel) {
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[0U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[1U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[2U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[3U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[4U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[5U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[6U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[7U];
        } else {
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[0U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[1U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[2U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[3U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[4U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[5U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[6U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[7U];
        }
    }
    if (((((IData)(vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_valid) 
           & (IData)(vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_valid)) 
          & (IData)(vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_valid)) 
         & (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_valid))) {
        if ((0U != (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
            if ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
                if (vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__mixPc_es) {
                    vlSelf->__PVT__tg_1__DOT__matrix_d_2 
                        = vlSelf->__PVT__tg_1__DOT__result_fp32_hi;
                    vlSelf->__PVT__tg_1__DOT__matrix_d_3 
                        = vlSelf->__PVT__tg_1__DOT__result_fp32_lo;
                }
            } else {
                if ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg_1__DOT__matrix_d_2 
                        = vlSelf->__PVT__tg_1__DOT__result_fp16;
                }
                if ((2U != (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg_1__DOT__matrix_d_3 
                        = vlSelf->__PVT__tg_1__DOT___GEN_29;
                }
            }
        }
        if ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
            if (vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__mixPc_es) {
                vlSelf->__PVT__tg_1__DOT__matrix_d_0 
                    = vlSelf->__PVT__tg_1__DOT__result_fp32_hi;
                vlSelf->__PVT__tg_1__DOT__matrix_d_1 
                    = vlSelf->__PVT__tg_1__DOT__result_fp32_lo;
            } else {
                vlSelf->__PVT__tg_1__DOT__matrix_d_0 
                    = vlSelf->__PVT__tg_1__DOT__result_fp16;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__mixPc_es)))) {
                vlSelf->__PVT__tg_1__DOT__matrix_d_1 
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
                    vlSelf->__PVT__tg__DOT__matrix_d_2 
                        = vlSelf->__PVT__tg__DOT__result_fp32_hi;
                    vlSelf->__PVT__tg__DOT__matrix_d_3 
                        = vlSelf->__PVT__tg__DOT__result_fp32_lo;
                }
            } else {
                if ((2U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg__DOT__matrix_d_2 
                        = vlSelf->__PVT__tg__DOT__result_fp16;
                }
                if ((2U != (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg__DOT__matrix_d_3 
                        = vlSelf->__PVT__tg__DOT___GEN_29;
                }
            }
        }
        if ((0U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
            if (vlSelf->__PVT__tg__DOT__dp_3->__PVT__mixPc_es) {
                vlSelf->__PVT__tg__DOT__matrix_d_0 
                    = vlSelf->__PVT__tg__DOT__result_fp32_hi;
                vlSelf->__PVT__tg__DOT__matrix_d_1 
                    = vlSelf->__PVT__tg__DOT__result_fp32_lo;
            } else {
                vlSelf->__PVT__tg__DOT__matrix_d_0 
                    = vlSelf->__PVT__tg__DOT__result_fp16;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__mixPc_es)))) {
                vlSelf->__PVT__tg__DOT__matrix_d_1 
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
    if (vlSymsp->TOP.reset) {
        __Vdly__tg_1__DOT__state = 0U;
        vlSelf->__PVT__tg_1__DOT__dp_in_valid = 0U;
        __Vdly__tg__DOT__state = 0U;
        vlSelf->__PVT__tg__DOT__dp_in_valid = 0U;
    } else {
        if ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state))) {
            if (vlSelf->__PVT__tg_1__DOT__prehandshaked) {
                __Vdly__tg_1__DOT__state = 1U;
                vlSelf->__PVT__tg_1__DOT__dp_in_valid = 1U;
            } else {
                vlSelf->__PVT__tg_1__DOT__dp_in_valid = 0U;
            }
        } else {
            if ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))) {
                if (vlSymsp->TOP.io_out_ready) {
                    __Vdly__tg_1__DOT__state = 2U;
                }
            } else {
                __Vdly__tg_1__DOT__state = ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                             ? (IData)(vlSelf->__PVT__tg_1__DOT___GEN_8)
                                             : (IData)(vlSelf->__PVT__tg_1__DOT___GEN_15));
            }
            if ((1U != (IData)(vlSelf->__PVT__tg_1__DOT__state))) {
                vlSelf->__PVT__tg_1__DOT__dp_in_valid 
                    = ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                        ? (IData)(vlSelf->__PVT__tg_1__DOT___GEN_9)
                        : (IData)(vlSelf->__PVT__tg_1__DOT___GEN_16));
            }
        }
        if ((0U == (IData)(vlSelf->__PVT__tg__DOT__state))) {
            if (vlSelf->__PVT__tg__DOT__prehandshaked) {
                __Vdly__tg__DOT__state = 1U;
                vlSelf->__PVT__tg__DOT__dp_in_valid = 1U;
            } else {
                vlSelf->__PVT__tg__DOT__dp_in_valid = 0U;
            }
        } else {
            if ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))) {
                if (vlSymsp->TOP.io_out_ready) {
                    __Vdly__tg__DOT__state = 2U;
                }
            } else {
                __Vdly__tg__DOT__state = ((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                           ? (IData)(vlSelf->__PVT__tg__DOT___GEN_8)
                                           : (IData)(vlSelf->__PVT__tg__DOT___GEN_15));
            }
            if ((1U != (IData)(vlSelf->__PVT__tg__DOT__state))) {
                vlSelf->__PVT__tg__DOT__dp_in_valid 
                    = ((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? (IData)(vlSelf->__PVT__tg__DOT___GEN_9)
                        : (IData)(vlSelf->__PVT__tg__DOT___GEN_16));
            }
        }
    }
    vlSelf->__PVT__tg_1__DOT__state = __Vdly__tg_1__DOT__state;
    vlSelf->__PVT__tg__DOT__state = __Vdly__tg__DOT__state;
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[0U] 
        = (IData)(vlSelf->__PVT__tg_1__DOT__matrix_d_3);
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[1U] 
        = (IData)((vlSelf->__PVT__tg_1__DOT__matrix_d_3 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[2U] 
        = (IData)(vlSelf->__PVT__tg_1__DOT__matrix_d_2);
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[3U] 
        = (IData)((vlSelf->__PVT__tg_1__DOT__matrix_d_2 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[4U] 
        = (IData)(vlSelf->__PVT__tg_1__DOT__matrix_d_1);
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[5U] 
        = (IData)((vlSelf->__PVT__tg_1__DOT__matrix_d_1 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[6U] 
        = (IData)(vlSelf->__PVT__tg_1__DOT__matrix_d_0);
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[7U] 
        = (IData)((vlSelf->__PVT__tg_1__DOT__matrix_d_0 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[0U] 
        = (IData)(vlSelf->__PVT__tg__DOT__matrix_d_3);
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[1U] 
        = (IData)((vlSelf->__PVT__tg__DOT__matrix_d_3 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[2U] 
        = (IData)(vlSelf->__PVT__tg__DOT__matrix_d_2);
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[3U] 
        = (IData)((vlSelf->__PVT__tg__DOT__matrix_d_2 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[4U] 
        = (IData)(vlSelf->__PVT__tg__DOT__matrix_d_1);
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[5U] 
        = (IData)((vlSelf->__PVT__tg__DOT__matrix_d_1 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[6U] 
        = (IData)(vlSelf->__PVT__tg__DOT__matrix_d_0);
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[7U] 
        = (IData)((vlSelf->__PVT__tg__DOT__matrix_d_0 
                   >> 0x20U));
    vlSelf->__PVT__tg_1__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                            & (IData)(vlSelf->__PVT__tg_1__DOT__outValid))) 
                                        & (IData)(vlSelf->__PVT__tg_1__DOT__outValid));
    vlSelf->__PVT__tg__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                          & (IData)(vlSelf->__PVT__tg__DOT__outValid))) 
                                      & (IData)(vlSelf->__PVT__tg__DOT__outValid));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0 
        = (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[5U] 
                              << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[5U] 
                                           >> 0x10U))
                          : 0U) | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                    ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U] 
                                        << 0x10U) | 
                                       (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U] 
                                        >> 0x10U)) : 0U)) 
                       | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                           ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U] 
                               << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U] 
                                            >> 0x10U))
                           : 0U)) | ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                      ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[7U] 
                                          << 0x10U) 
                                         | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[7U] 
                                            >> 0x10U))
                                      : 0U)));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1 
        = (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[5U]
                          : 0U) | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                    ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U]
                                    : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                               ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U]
                                               : 0U)) 
                      | ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[7U]
                          : 0U)));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2 
        = (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[4U] 
                              << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[4U] 
                                           >> 0x10U))
                          : 0U) | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                    ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U] 
                                        << 0x10U) | 
                                       (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U] 
                                        >> 0x10U)) : 0U)) 
                       | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                           ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U] 
                               << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U] 
                                            >> 0x10U))
                           : 0U)) | ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                      ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[6U] 
                                          << 0x10U) 
                                         | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[6U] 
                                            >> 0x10U))
                                      : 0U)));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3 
        = (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[4U]
                          : 0U) | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                    ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U]
                                    : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                               ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U]
                                               : 0U)) 
                      | ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[6U]
                          : 0U)));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_0 = 
        (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[5U] 
                            << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[5U] 
                                         >> 0x10U))
                        : 0U) | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                  ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U] 
                                      << 0x10U) | (
                                                   vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U] 
                                                   >> 0x10U))
                                  : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                             ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U] 
                                                   >> 0x10U))
                                             : 0U)) 
                    | ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[7U] 
                            << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[7U] 
                                         >> 0x10U))
                        : 0U)));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_1 = 
        (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[5U]
                        : 0U) | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                  ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U]
                                  : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                             ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U]
                                             : 0U)) 
                    | ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[7U]
                        : 0U)));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_2 = 
        (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[4U] 
                            << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[4U] 
                                         >> 0x10U))
                        : 0U) | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                  ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U] 
                                      << 0x10U) | (
                                                   vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U] 
                                                   >> 0x10U))
                                  : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                             ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U] 
                                                 << 0x10U) 
                                                | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U] 
                                                   >> 0x10U))
                                             : 0U)) 
                    | ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[6U] 
                            << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[6U] 
                                         >> 0x10U))
                        : 0U)));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_3 = 
        (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[4U]
                        : 0U) | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                  ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U]
                                  : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                             ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U]
                                             : 0U)) 
                    | ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[6U]
                        : 0U)));
}

VL_INLINE_OPT void VSystem_Octet___nba_sequent__TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__0(VSystem_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSystem_Octet___nba_sequent__TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__0\n"); );
    // Init
    CData/*2:0*/ __Vdly__tg__DOT__state;
    __Vdly__tg__DOT__state = 0;
    CData/*2:0*/ __Vdly__tg_1__DOT__state;
    __Vdly__tg_1__DOT__state = 0;
    // Body
    __Vdly__tg_1__DOT__state = vlSelf->__PVT__tg_1__DOT__state;
    __Vdly__tg__DOT__state = vlSelf->__PVT__tg__DOT__state;
    if (vlSelf->__PVT__tg_1__DOT__prehandshaked) {
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[0U] 
            = vlSymsp->TOP.System__DOT__matrix_c_7[0U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[1U] 
            = vlSymsp->TOP.System__DOT__matrix_c_7[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[2U] 
            = vlSymsp->TOP.System__DOT__matrix_c_7[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[3U] 
            = vlSymsp->TOP.System__DOT__matrix_c_7[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[4U] 
            = vlSymsp->TOP.System__DOT__matrix_c_7[4U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[5U] 
            = vlSymsp->TOP.System__DOT__matrix_c_7[5U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[6U] 
            = vlSymsp->TOP.System__DOT__matrix_c_7[6U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[7U] 
            = vlSymsp->TOP.System__DOT__matrix_c_7[7U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U] 
            = vlSymsp->TOP.System__DOT__matrix_a_7[0U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U] 
            = vlSymsp->TOP.System__DOT__matrix_a_7[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U] 
            = vlSymsp->TOP.System__DOT__matrix_a_7[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U] 
            = vlSymsp->TOP.System__DOT__matrix_a_7[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[4U] 
            = vlSymsp->TOP.System__DOT__matrix_a_7[4U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[5U] 
            = vlSymsp->TOP.System__DOT__matrix_a_7[5U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[6U] 
            = vlSymsp->TOP.System__DOT__matrix_a_7[6U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[7U] 
            = vlSymsp->TOP.System__DOT__matrix_a_7[7U];
        if (vlSymsp->TOP.System__DOT__matBsel) {
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[0U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[1U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[2U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[3U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[4U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[4U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[5U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[5U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[6U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[7U];
        } else {
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[0U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[0U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[1U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[1U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[2U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[2U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[3U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[3U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[4U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[4U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[5U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[5U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[6U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[6U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_1_data[7U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[7U];
        }
    }
    if (vlSelf->__PVT__tg__DOT__prehandshaked) {
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[0U] 
            = vlSymsp->TOP.System__DOT__matrix_c_3[0U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[1U] 
            = vlSymsp->TOP.System__DOT__matrix_c_3[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[2U] 
            = vlSymsp->TOP.System__DOT__matrix_c_3[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[3U] 
            = vlSymsp->TOP.System__DOT__matrix_c_3[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[4U] 
            = vlSymsp->TOP.System__DOT__matrix_c_3[4U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[5U] 
            = vlSymsp->TOP.System__DOT__matrix_c_3[5U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[6U] 
            = vlSymsp->TOP.System__DOT__matrix_c_3[6U];
        vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[7U] 
            = vlSymsp->TOP.System__DOT__matrix_c_3[7U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U] 
            = vlSymsp->TOP.System__DOT__matrix_a_3[0U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U] 
            = vlSymsp->TOP.System__DOT__matrix_a_3[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U] 
            = vlSymsp->TOP.System__DOT__matrix_a_3[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U] 
            = vlSymsp->TOP.System__DOT__matrix_a_3[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[4U] 
            = vlSymsp->TOP.System__DOT__matrix_a_3[4U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[5U] 
            = vlSymsp->TOP.System__DOT__matrix_a_3[5U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[6U] 
            = vlSymsp->TOP.System__DOT__matrix_a_3[6U];
        vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[7U] 
            = vlSymsp->TOP.System__DOT__matrix_a_3[7U];
        if (vlSymsp->TOP.System__DOT__matBsel) {
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[0U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[1U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[2U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[3U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[4U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[5U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[6U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data[7U];
        } else {
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[0U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[0U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[1U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[1U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[2U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[2U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[3U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[3U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[4U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[4U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[5U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[5U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[6U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[6U];
            vlSelf->__PVT__tg_io_in_bits_matrix_b_r_data[7U] 
                = vlSymsp->TOP.System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data[7U];
        }
    }
    if (((((IData)(vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_valid) 
           & (IData)(vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_valid)) 
          & (IData)(vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_valid)) 
         & (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_valid))) {
        if ((0U != (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
            if ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
                if (vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__mixPc_es) {
                    vlSelf->__PVT__tg_1__DOT__matrix_d_2 
                        = vlSelf->__PVT__tg_1__DOT__result_fp32_hi;
                    vlSelf->__PVT__tg_1__DOT__matrix_d_3 
                        = vlSelf->__PVT__tg_1__DOT__result_fp32_lo;
                }
            } else {
                if ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg_1__DOT__matrix_d_2 
                        = vlSelf->__PVT__tg_1__DOT__result_fp16;
                }
                if ((2U != (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg_1__DOT__matrix_d_3 
                        = vlSelf->__PVT__tg_1__DOT___GEN_29;
                }
            }
        }
        if ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
            if (vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__mixPc_es) {
                vlSelf->__PVT__tg_1__DOT__matrix_d_0 
                    = vlSelf->__PVT__tg_1__DOT__result_fp32_hi;
                vlSelf->__PVT__tg_1__DOT__matrix_d_1 
                    = vlSelf->__PVT__tg_1__DOT__result_fp32_lo;
            } else {
                vlSelf->__PVT__tg_1__DOT__matrix_d_0 
                    = vlSelf->__PVT__tg_1__DOT__result_fp16;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__mixPc_es)))) {
                vlSelf->__PVT__tg_1__DOT__matrix_d_1 
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
                    vlSelf->__PVT__tg__DOT__matrix_d_2 
                        = vlSelf->__PVT__tg__DOT__result_fp32_hi;
                    vlSelf->__PVT__tg__DOT__matrix_d_3 
                        = vlSelf->__PVT__tg__DOT__result_fp32_lo;
                }
            } else {
                if ((2U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg__DOT__matrix_d_2 
                        = vlSelf->__PVT__tg__DOT__result_fp16;
                }
                if ((2U != (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
                    vlSelf->__PVT__tg__DOT__matrix_d_3 
                        = vlSelf->__PVT__tg__DOT___GEN_29;
                }
            }
        }
        if ((0U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
            if (vlSelf->__PVT__tg__DOT__dp_3->__PVT__mixPc_es) {
                vlSelf->__PVT__tg__DOT__matrix_d_0 
                    = vlSelf->__PVT__tg__DOT__result_fp32_hi;
                vlSelf->__PVT__tg__DOT__matrix_d_1 
                    = vlSelf->__PVT__tg__DOT__result_fp32_lo;
            } else {
                vlSelf->__PVT__tg__DOT__matrix_d_0 
                    = vlSelf->__PVT__tg__DOT__result_fp16;
            }
        } else if ((1U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))) {
            if ((1U & (~ (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__mixPc_es)))) {
                vlSelf->__PVT__tg__DOT__matrix_d_1 
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
    if (vlSymsp->TOP.reset) {
        __Vdly__tg_1__DOT__state = 0U;
        vlSelf->__PVT__tg_1__DOT__dp_in_valid = 0U;
        __Vdly__tg__DOT__state = 0U;
        vlSelf->__PVT__tg__DOT__dp_in_valid = 0U;
    } else {
        if ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state))) {
            if (vlSelf->__PVT__tg_1__DOT__prehandshaked) {
                __Vdly__tg_1__DOT__state = 1U;
                vlSelf->__PVT__tg_1__DOT__dp_in_valid = 1U;
            } else {
                vlSelf->__PVT__tg_1__DOT__dp_in_valid = 0U;
            }
        } else {
            if ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))) {
                if (vlSymsp->TOP.io_out_ready) {
                    __Vdly__tg_1__DOT__state = 2U;
                }
            } else {
                __Vdly__tg_1__DOT__state = ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                             ? (IData)(vlSelf->__PVT__tg_1__DOT___GEN_8)
                                             : (IData)(vlSelf->__PVT__tg_1__DOT___GEN_15));
            }
            if ((1U != (IData)(vlSelf->__PVT__tg_1__DOT__state))) {
                vlSelf->__PVT__tg_1__DOT__dp_in_valid 
                    = ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                        ? (IData)(vlSelf->__PVT__tg_1__DOT___GEN_9)
                        : (IData)(vlSelf->__PVT__tg_1__DOT___GEN_16));
            }
        }
        if ((0U == (IData)(vlSelf->__PVT__tg__DOT__state))) {
            if (vlSelf->__PVT__tg__DOT__prehandshaked) {
                __Vdly__tg__DOT__state = 1U;
                vlSelf->__PVT__tg__DOT__dp_in_valid = 1U;
            } else {
                vlSelf->__PVT__tg__DOT__dp_in_valid = 0U;
            }
        } else {
            if ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))) {
                if (vlSymsp->TOP.io_out_ready) {
                    __Vdly__tg__DOT__state = 2U;
                }
            } else {
                __Vdly__tg__DOT__state = ((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                           ? (IData)(vlSelf->__PVT__tg__DOT___GEN_8)
                                           : (IData)(vlSelf->__PVT__tg__DOT___GEN_15));
            }
            if ((1U != (IData)(vlSelf->__PVT__tg__DOT__state))) {
                vlSelf->__PVT__tg__DOT__dp_in_valid 
                    = ((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? (IData)(vlSelf->__PVT__tg__DOT___GEN_9)
                        : (IData)(vlSelf->__PVT__tg__DOT___GEN_16));
            }
        }
    }
    vlSelf->__PVT__tg_1__DOT__state = __Vdly__tg_1__DOT__state;
    vlSelf->__PVT__tg__DOT__state = __Vdly__tg__DOT__state;
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[0U] 
        = (IData)(vlSelf->__PVT__tg_1__DOT__matrix_d_3);
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[1U] 
        = (IData)((vlSelf->__PVT__tg_1__DOT__matrix_d_3 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[2U] 
        = (IData)(vlSelf->__PVT__tg_1__DOT__matrix_d_2);
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[3U] 
        = (IData)((vlSelf->__PVT__tg_1__DOT__matrix_d_2 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[4U] 
        = (IData)(vlSelf->__PVT__tg_1__DOT__matrix_d_1);
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[5U] 
        = (IData)((vlSelf->__PVT__tg_1__DOT__matrix_d_1 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[6U] 
        = (IData)(vlSelf->__PVT__tg_1__DOT__matrix_d_0);
    vlSelf->io_out_bits_threadgroup4_matrix_d_data[7U] 
        = (IData)((vlSelf->__PVT__tg_1__DOT__matrix_d_0 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[0U] 
        = (IData)(vlSelf->__PVT__tg__DOT__matrix_d_3);
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[1U] 
        = (IData)((vlSelf->__PVT__tg__DOT__matrix_d_3 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[2U] 
        = (IData)(vlSelf->__PVT__tg__DOT__matrix_d_2);
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[3U] 
        = (IData)((vlSelf->__PVT__tg__DOT__matrix_d_2 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[4U] 
        = (IData)(vlSelf->__PVT__tg__DOT__matrix_d_1);
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[5U] 
        = (IData)((vlSelf->__PVT__tg__DOT__matrix_d_1 
                   >> 0x20U));
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[6U] 
        = (IData)(vlSelf->__PVT__tg__DOT__matrix_d_0);
    vlSelf->io_out_bits_threadgroup0_matrix_d_data[7U] 
        = (IData)((vlSelf->__PVT__tg__DOT__matrix_d_0 
                   >> 0x20U));
    vlSelf->__PVT__tg_1__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                            & (IData)(vlSelf->__PVT__tg_1__DOT__outValid))) 
                                        & (IData)(vlSelf->__PVT__tg_1__DOT__outValid));
    vlSelf->__PVT__tg__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                          & (IData)(vlSelf->__PVT__tg__DOT__outValid))) 
                                      & (IData)(vlSelf->__PVT__tg__DOT__outValid));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_0 
        = (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[5U] 
                              << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[5U] 
                                           >> 0x10U))
                          : 0U) | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                    ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U] 
                                        << 0x10U) | 
                                       (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U] 
                                        >> 0x10U)) : 0U)) 
                       | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                           ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U] 
                               << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U] 
                                            >> 0x10U))
                           : 0U)) | ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                      ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[7U] 
                                          << 0x10U) 
                                         | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[7U] 
                                            >> 0x10U))
                                      : 0U)));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_1 
        = (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[5U]
                          : 0U) | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                    ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U]
                                    : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                               ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U]
                                               : 0U)) 
                      | ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[7U]
                          : 0U)));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_2 
        = (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[4U] 
                              << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[4U] 
                                           >> 0x10U))
                          : 0U) | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                    ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U] 
                                        << 0x10U) | 
                                       (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U] 
                                        >> 0x10U)) : 0U)) 
                       | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                           ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U] 
                               << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U] 
                                            >> 0x10U))
                           : 0U)) | ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                      ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[6U] 
                                          << 0x10U) 
                                         | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[6U] 
                                            >> 0x10U))
                                      : 0U)));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_vec_a_3 
        = (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[4U]
                          : 0U) | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                    ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U]
                                    : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                               ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U]
                                               : 0U)) 
                      | ((1U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                          ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[6U]
                          : 0U)));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_0 = 
        (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[5U] 
                            << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[5U] 
                                         >> 0x10U))
                        : 0U) | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                  ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U] 
                                      << 0x10U) | (
                                                   vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U] 
                                                   >> 0x10U))
                                  : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                             ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U] 
                                                 << 0x10U) 
                                                | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U] 
                                                   >> 0x10U))
                                             : 0U)) 
                    | ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[7U] 
                            << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[7U] 
                                         >> 0x10U))
                        : 0U)));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_1 = 
        (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[5U]
                        : 0U) | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                  ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U]
                                  : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                             ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U]
                                             : 0U)) 
                    | ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[7U]
                        : 0U)));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_2 = 
        (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[4U] 
                            << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[4U] 
                                         >> 0x10U))
                        : 0U) | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                  ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U] 
                                      << 0x10U) | (
                                                   vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U] 
                                                   >> 0x10U))
                                  : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                             ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U] 
                                                 << 0x10U) 
                                                | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U] 
                                                   >> 0x10U))
                                             : 0U)) 
                    | ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[6U] 
                            << 0x10U) | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[6U] 
                                         >> 0x10U))
                        : 0U)));
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_vec_a_3 = 
        (0xffffU & (((((2U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[4U]
                        : 0U) | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                  ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U]
                                  : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                             ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U]
                                             : 0U)) 
                    | ((1U == (IData)(vlSelf->__PVT__tg__DOT__state))
                        ? vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[6U]
                        : 0U)));
}
