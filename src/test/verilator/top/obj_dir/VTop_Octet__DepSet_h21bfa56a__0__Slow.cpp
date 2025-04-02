// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_DotProdUnit.h"
#include "VTop_Octet.h"
#include "VTop__Syms.h"

VL_ATTR_COLD void VTop_Octet___stl_sequent__TOP__Top__DOT__tc__DOT__ot__0(VTop_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Octet___stl_sequent__TOP__Top__DOT__tc__DOT__ot__0\n"); );
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
    VlWide<8>/*255:0*/ __Vtemp_15;
    // Body
    vlSelf->__PVT__tg__DOT___T_2 = (2U == (IData)(vlSelf->__PVT__tg__DOT__state));
    vlSelf->__PVT__tg_1__DOT___T_2 = (2U == (IData)(vlSelf->__PVT__tg_1__DOT__state));
    vlSelf->__PVT__tg__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))
                                        ? 0ULL : vlSelf->__PVT__tg__DOT__matrix_d_3);
    vlSelf->__PVT__tg__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                          & (IData)(vlSelf->__PVT__tg__DOT__outValid))) 
                                      & (IData)(vlSelf->__PVT__tg__DOT__outValid));
    vlSelf->__PVT__tg_1__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))
                                          ? 0ULL : vlSelf->__PVT__tg_1__DOT__matrix_d_3);
    vlSelf->__PVT__tg_1__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                            & (IData)(vlSelf->__PVT__tg_1__DOT__outValid))) 
                                        & (IData)(vlSelf->__PVT__tg_1__DOT__outValid));
    if (vlSymsp->TOP.io_in_bits_ctrl_matBSel) {
        __Vtemp_15[1U] = ((0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
                                                        | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[0U]) 
                                                                    | (0xffffU 
                                                                       & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[6U])))))) 
                             << 0x10U));
        __Vtemp_15[2U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
                                                      | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[0U]) 
                                                                  | (0xffffU 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[6U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
                                                                    | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[6U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[3U] = ((0xffff0000U & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[6U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[4U]) 
                                                         | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[6U]))))) 
                                      >> 0x20U)) >> 0x10U));
        __Vtemp_15[5U] = ((0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
                                                        | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[1U]) 
                                                                    | (0xffffU 
                                                                       & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[7U])))))) 
                             << 0x10U));
        __Vtemp_15[6U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
                                                      | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[1U]) 
                                                                  | (0xffffU 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[7U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
                                                                    | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[7U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[7U] = ((0xffff0000U & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[7U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[5U]) 
                                                         | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[7U]))))) 
                                      >> 0x20U)) >> 0x10U));
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[0U] 
            = ((vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[2U] 
                << 0x10U) | (0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[0U]));
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[1U] 
            = __Vtemp_15[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[2U] 
            = __Vtemp_15[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[3U] 
            = __Vtemp_15[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[4U] 
            = ((vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[3U] 
                << 0x10U) | (0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot0_tg4_matrix_b[1U]));
    } else {
        __Vtemp_15[1U] = ((0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
                                                        | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[0U]) 
                                                                    | (0xffffU 
                                                                       & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[6U])))))) 
                             << 0x10U));
        __Vtemp_15[2U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
                                                      | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[0U]) 
                                                                  | (0xffffU 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[6U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
                                                                    | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[6U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[3U] = ((0xffff0000U & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[6U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[4U]) 
                                                         | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[6U]))))) 
                                      >> 0x20U)) >> 0x10U));
        __Vtemp_15[5U] = ((0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
                                                        | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[1U]) 
                                                                    | (0xffffU 
                                                                       & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[7U])))))) 
                             << 0x10U));
        __Vtemp_15[6U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
                                                      | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[1U]) 
                                                                  | (0xffffU 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[7U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
                                                                    | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[7U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[7U] = ((0xffff0000U & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[7U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[5U]) 
                                                         | (vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[7U]))))) 
                                      >> 0x20U)) >> 0x10U));
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[0U] 
            = ((vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[2U] 
                << 0x10U) | (0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[0U]));
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[1U] 
            = __Vtemp_15[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[2U] 
            = __Vtemp_15[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[3U] 
            = __Vtemp_15[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[4U] 
            = ((vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[3U] 
                << 0x10U) | (0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot0_tg0_matrix_b[1U]));
    }
    vlSelf->__PVT__tg_io_in_bits_matrix_b_data[5U] 
        = __Vtemp_15[5U];
    vlSelf->__PVT__tg_io_in_bits_matrix_b_data[6U] 
        = __Vtemp_15[6U];
    vlSelf->__PVT__tg_io_in_bits_matrix_b_data[7U] 
        = __Vtemp_15[7U];
    tg__DOT____VdfgTmp_h19be38c2__0 = ((4U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    tg__DOT____VdfgTmp_h6637e356__0 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    tg_1__DOT____VdfgTmp_h19be38c2__0 = ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                         & (IData)(vlSymsp->TOP.io_out_ready));
    tg_1__DOT____VdfgTmp_h6637e356__0 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                         & (IData)(vlSymsp->TOP.io_out_ready));
    __PVT__tg__DOT___T_4 = ((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                            | ((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                               & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)));
    __PVT__tg_1__DOT___T_4 = ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                              | ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                 & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)));
    vlSelf->__PVT__tg__DOT___GEN_23 = ((IData)(tg__DOT____VdfgTmp_h6637e356__0)
                                        ? 4U : ((IData)(tg__DOT____VdfgTmp_h19be38c2__0)
                                                 ? 0U
                                                 : (IData)(vlSelf->__PVT__tg__DOT__state)));
    vlSelf->__PVT__tg_1__DOT___GEN_23 = ((IData)(tg_1__DOT____VdfgTmp_h6637e356__0)
                                          ? 4U : ((IData)(tg_1__DOT____VdfgTmp_h19be38c2__0)
                                                   ? 0U
                                                   : (IData)(vlSelf->__PVT__tg_1__DOT__state)));
    vlSelf->__PVT__tg_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & ((IData)(__PVT__tg__DOT___T_4) 
                                        | (4U == (IData)(vlSelf->__PVT__tg__DOT__state))));
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

VL_ATTR_COLD void VTop_Octet___stl_sequent__TOP__Top__DOT__tc__DOT__ot_1__0(VTop_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Octet___stl_sequent__TOP__Top__DOT__tc__DOT__ot_1__0\n"); );
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
    VlWide<8>/*255:0*/ __Vtemp_15;
    // Body
    vlSelf->__PVT__tg__DOT___T_2 = (2U == (IData)(vlSelf->__PVT__tg__DOT__state));
    vlSelf->__PVT__tg_1__DOT___T_2 = (2U == (IData)(vlSelf->__PVT__tg_1__DOT__state));
    vlSelf->__PVT__tg__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))
                                        ? 0ULL : vlSelf->__PVT__tg__DOT__matrix_d_3);
    vlSelf->__PVT__tg__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                          & (IData)(vlSelf->__PVT__tg__DOT__outValid))) 
                                      & (IData)(vlSelf->__PVT__tg__DOT__outValid));
    vlSelf->__PVT__tg_1__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))
                                          ? 0ULL : vlSelf->__PVT__tg_1__DOT__matrix_d_3);
    vlSelf->__PVT__tg_1__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                            & (IData)(vlSelf->__PVT__tg_1__DOT__outValid))) 
                                        & (IData)(vlSelf->__PVT__tg_1__DOT__outValid));
    if (vlSymsp->TOP.io_in_bits_ctrl_matBSel) {
        __Vtemp_15[1U] = ((0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
                                                        | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[0U]) 
                                                                    | (0xffffU 
                                                                       & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[6U])))))) 
                             << 0x10U));
        __Vtemp_15[2U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
                                                      | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[0U]) 
                                                                  | (0xffffU 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[6U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
                                                                    | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[6U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[3U] = ((0xffff0000U & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[6U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[4U]) 
                                                         | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[6U]))))) 
                                      >> 0x20U)) >> 0x10U));
        __Vtemp_15[5U] = ((0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
                                                        | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[1U]) 
                                                                    | (0xffffU 
                                                                       & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[7U])))))) 
                             << 0x10U));
        __Vtemp_15[6U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
                                                      | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[1U]) 
                                                                  | (0xffffU 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[7U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
                                                                    | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[7U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[7U] = ((0xffff0000U & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[7U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[5U]) 
                                                         | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[7U]))))) 
                                      >> 0x20U)) >> 0x10U));
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[0U] 
            = ((vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[2U] 
                << 0x10U) | (0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[0U]));
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[1U] 
            = __Vtemp_15[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[2U] 
            = __Vtemp_15[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[3U] 
            = __Vtemp_15[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[4U] 
            = ((vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[3U] 
                << 0x10U) | (0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot1_tg4_matrix_b[1U]));
    } else {
        __Vtemp_15[1U] = ((0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
                                                        | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[0U]) 
                                                                    | (0xffffU 
                                                                       & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[6U])))))) 
                             << 0x10U));
        __Vtemp_15[2U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
                                                      | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[0U]) 
                                                                  | (0xffffU 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[6U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
                                                                    | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[6U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[3U] = ((0xffff0000U & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[6U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[4U]) 
                                                         | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[6U]))))) 
                                      >> 0x20U)) >> 0x10U));
        __Vtemp_15[5U] = ((0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
                                                        | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[1U]) 
                                                                    | (0xffffU 
                                                                       & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[7U])))))) 
                             << 0x10U));
        __Vtemp_15[6U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
                                                      | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[1U]) 
                                                                  | (0xffffU 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[7U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
                                                                    | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[7U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[7U] = ((0xffff0000U & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[7U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[5U]) 
                                                         | (vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[7U]))))) 
                                      >> 0x20U)) >> 0x10U));
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[0U] 
            = ((vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[2U] 
                << 0x10U) | (0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[0U]));
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[1U] 
            = __Vtemp_15[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[2U] 
            = __Vtemp_15[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[3U] 
            = __Vtemp_15[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[4U] 
            = ((vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[3U] 
                << 0x10U) | (0xffffU & vlSymsp->TOP.io_in_bits_tc0_ot1_tg0_matrix_b[1U]));
    }
    vlSelf->__PVT__tg_io_in_bits_matrix_b_data[5U] 
        = __Vtemp_15[5U];
    vlSelf->__PVT__tg_io_in_bits_matrix_b_data[6U] 
        = __Vtemp_15[6U];
    vlSelf->__PVT__tg_io_in_bits_matrix_b_data[7U] 
        = __Vtemp_15[7U];
    tg__DOT____VdfgTmp_h19be38c2__0 = ((4U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    tg__DOT____VdfgTmp_h6637e356__0 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    tg_1__DOT____VdfgTmp_h19be38c2__0 = ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                         & (IData)(vlSymsp->TOP.io_out_ready));
    tg_1__DOT____VdfgTmp_h6637e356__0 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                         & (IData)(vlSymsp->TOP.io_out_ready));
    __PVT__tg__DOT___T_4 = ((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                            | ((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                               & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)));
    __PVT__tg_1__DOT___T_4 = ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                              | ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                 & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)));
    vlSelf->__PVT__tg__DOT___GEN_23 = ((IData)(tg__DOT____VdfgTmp_h6637e356__0)
                                        ? 4U : ((IData)(tg__DOT____VdfgTmp_h19be38c2__0)
                                                 ? 0U
                                                 : (IData)(vlSelf->__PVT__tg__DOT__state)));
    vlSelf->__PVT__tg_1__DOT___GEN_23 = ((IData)(tg_1__DOT____VdfgTmp_h6637e356__0)
                                          ? 4U : ((IData)(tg_1__DOT____VdfgTmp_h19be38c2__0)
                                                   ? 0U
                                                   : (IData)(vlSelf->__PVT__tg_1__DOT__state)));
    vlSelf->__PVT__tg_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & ((IData)(__PVT__tg__DOT___T_4) 
                                        | (4U == (IData)(vlSelf->__PVT__tg__DOT__state))));
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

VL_ATTR_COLD void VTop_Octet___stl_sequent__TOP__Top__DOT__tc_1__DOT__ot__0(VTop_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Octet___stl_sequent__TOP__Top__DOT__tc_1__DOT__ot__0\n"); );
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
    VlWide<8>/*255:0*/ __Vtemp_15;
    // Body
    vlSelf->__PVT__tg__DOT___T_2 = (2U == (IData)(vlSelf->__PVT__tg__DOT__state));
    vlSelf->__PVT__tg_1__DOT___T_2 = (2U == (IData)(vlSelf->__PVT__tg_1__DOT__state));
    vlSelf->__PVT__tg__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))
                                        ? 0ULL : vlSelf->__PVT__tg__DOT__matrix_d_3);
    vlSelf->__PVT__tg__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                          & (IData)(vlSelf->__PVT__tg__DOT__outValid))) 
                                      & (IData)(vlSelf->__PVT__tg__DOT__outValid));
    vlSelf->__PVT__tg_1__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))
                                          ? 0ULL : vlSelf->__PVT__tg_1__DOT__matrix_d_3);
    vlSelf->__PVT__tg_1__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                            & (IData)(vlSelf->__PVT__tg_1__DOT__outValid))) 
                                        & (IData)(vlSelf->__PVT__tg_1__DOT__outValid));
    if (vlSymsp->TOP.io_in_bits_ctrl_matBSel) {
        __Vtemp_15[1U] = ((0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
                                                        | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[0U]) 
                                                                    | (0xffffU 
                                                                       & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[6U])))))) 
                             << 0x10U));
        __Vtemp_15[2U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
                                                      | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[0U]) 
                                                                  | (0xffffU 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[6U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
                                                                    | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[6U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[3U] = ((0xffff0000U & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[6U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[4U]) 
                                                         | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[6U]))))) 
                                      >> 0x20U)) >> 0x10U));
        __Vtemp_15[5U] = ((0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
                                                        | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[1U]) 
                                                                    | (0xffffU 
                                                                       & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[7U])))))) 
                             << 0x10U));
        __Vtemp_15[6U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
                                                      | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[1U]) 
                                                                  | (0xffffU 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[7U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
                                                                    | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[7U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[7U] = ((0xffff0000U & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[7U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[5U]) 
                                                         | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[7U]))))) 
                                      >> 0x20U)) >> 0x10U));
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[0U] 
            = ((vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[2U] 
                << 0x10U) | (0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[0U]));
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[1U] 
            = __Vtemp_15[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[2U] 
            = __Vtemp_15[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[3U] 
            = __Vtemp_15[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[4U] 
            = ((vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[3U] 
                << 0x10U) | (0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot0_tg4_matrix_b[1U]));
    } else {
        __Vtemp_15[1U] = ((0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
                                                        | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[0U]) 
                                                                    | (0xffffU 
                                                                       & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[6U])))))) 
                             << 0x10U));
        __Vtemp_15[2U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
                                                      | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[0U]) 
                                                                  | (0xffffU 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[6U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
                                                                    | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[6U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[3U] = ((0xffff0000U & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[6U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[4U]) 
                                                         | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[6U]))))) 
                                      >> 0x20U)) >> 0x10U));
        __Vtemp_15[5U] = ((0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
                                                        | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[1U]) 
                                                                    | (0xffffU 
                                                                       & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[7U])))))) 
                             << 0x10U));
        __Vtemp_15[6U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
                                                      | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[1U]) 
                                                                  | (0xffffU 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[7U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
                                                                    | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[7U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[7U] = ((0xffff0000U & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[7U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[5U]) 
                                                         | (vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[7U]))))) 
                                      >> 0x20U)) >> 0x10U));
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[0U] 
            = ((vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[2U] 
                << 0x10U) | (0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[0U]));
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[1U] 
            = __Vtemp_15[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[2U] 
            = __Vtemp_15[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[3U] 
            = __Vtemp_15[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[4U] 
            = ((vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[3U] 
                << 0x10U) | (0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot0_tg0_matrix_b[1U]));
    }
    vlSelf->__PVT__tg_io_in_bits_matrix_b_data[5U] 
        = __Vtemp_15[5U];
    vlSelf->__PVT__tg_io_in_bits_matrix_b_data[6U] 
        = __Vtemp_15[6U];
    vlSelf->__PVT__tg_io_in_bits_matrix_b_data[7U] 
        = __Vtemp_15[7U];
    tg__DOT____VdfgTmp_h19be38c2__0 = ((4U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    tg__DOT____VdfgTmp_h6637e356__0 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    tg_1__DOT____VdfgTmp_h19be38c2__0 = ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                         & (IData)(vlSymsp->TOP.io_out_ready));
    tg_1__DOT____VdfgTmp_h6637e356__0 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                         & (IData)(vlSymsp->TOP.io_out_ready));
    __PVT__tg__DOT___T_4 = ((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                            | ((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                               & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)));
    __PVT__tg_1__DOT___T_4 = ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                              | ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                 & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)));
    vlSelf->__PVT__tg__DOT___GEN_23 = ((IData)(tg__DOT____VdfgTmp_h6637e356__0)
                                        ? 4U : ((IData)(tg__DOT____VdfgTmp_h19be38c2__0)
                                                 ? 0U
                                                 : (IData)(vlSelf->__PVT__tg__DOT__state)));
    vlSelf->__PVT__tg_1__DOT___GEN_23 = ((IData)(tg_1__DOT____VdfgTmp_h6637e356__0)
                                          ? 4U : ((IData)(tg_1__DOT____VdfgTmp_h19be38c2__0)
                                                   ? 0U
                                                   : (IData)(vlSelf->__PVT__tg_1__DOT__state)));
    vlSelf->__PVT__tg_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & ((IData)(__PVT__tg__DOT___T_4) 
                                        | (4U == (IData)(vlSelf->__PVT__tg__DOT__state))));
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

VL_ATTR_COLD void VTop_Octet___stl_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__0(VTop_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Octet___stl_sequent__TOP__Top__DOT__tc_1__DOT__ot_1__0\n"); );
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
    VlWide<8>/*255:0*/ __Vtemp_15;
    // Body
    vlSelf->__PVT__tg__DOT___T_2 = (2U == (IData)(vlSelf->__PVT__tg__DOT__state));
    vlSelf->__PVT__tg_1__DOT___T_2 = (2U == (IData)(vlSelf->__PVT__tg_1__DOT__state));
    vlSelf->__PVT__tg__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))
                                        ? 0ULL : vlSelf->__PVT__tg__DOT__matrix_d_3);
    vlSelf->__PVT__tg__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                          & (IData)(vlSelf->__PVT__tg__DOT__outValid))) 
                                      & (IData)(vlSelf->__PVT__tg__DOT__outValid));
    vlSelf->__PVT__tg_1__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))
                                          ? 0ULL : vlSelf->__PVT__tg_1__DOT__matrix_d_3);
    vlSelf->__PVT__tg_1__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                            & (IData)(vlSelf->__PVT__tg_1__DOT__outValid))) 
                                        & (IData)(vlSelf->__PVT__tg_1__DOT__outValid));
    if (vlSymsp->TOP.io_in_bits_ctrl_matBSel) {
        __Vtemp_15[1U] = ((0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
                                                        | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[0U]) 
                                                                    | (0xffffU 
                                                                       & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[6U])))))) 
                             << 0x10U));
        __Vtemp_15[2U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
                                                      | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[0U]) 
                                                                  | (0xffffU 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[6U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
                                                                    | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[6U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[3U] = ((0xffff0000U & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[6U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[4U]) 
                                                         | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[6U]))))) 
                                      >> 0x20U)) >> 0x10U));
        __Vtemp_15[5U] = ((0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
                                                        | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[1U]) 
                                                                    | (0xffffU 
                                                                       & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[7U])))))) 
                             << 0x10U));
        __Vtemp_15[6U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
                                                      | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[1U]) 
                                                                  | (0xffffU 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[7U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
                                                                    | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[7U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[7U] = ((0xffff0000U & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[7U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[5U]) 
                                                         | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[7U]))))) 
                                      >> 0x20U)) >> 0x10U));
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[0U] 
            = ((vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[2U] 
                << 0x10U) | (0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[0U]));
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[1U] 
            = __Vtemp_15[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[2U] 
            = __Vtemp_15[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[3U] 
            = __Vtemp_15[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[4U] 
            = ((vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[3U] 
                << 0x10U) | (0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot1_tg4_matrix_b[1U]));
    } else {
        __Vtemp_15[1U] = ((0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
                                                        | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[0U]) 
                                                                    | (0xffffU 
                                                                       & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[6U])))))) 
                             << 0x10U));
        __Vtemp_15[2U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
                                                      | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[0U]) 
                                                                  | (0xffffU 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[6U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
                                                                    | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[6U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[3U] = ((0xffff0000U & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[6U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[4U]) 
                                                         | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[0U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[6U]))))) 
                                      >> 0x20U)) >> 0x10U));
        __Vtemp_15[5U] = ((0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
                          | ((IData)((((QData)((IData)(
                                                       ((0xffff0000U 
                                                         & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
                                                        | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                                                           >> 0x10U)))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[1U]) 
                                                                    | (0xffffU 
                                                                       & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[7U])))))) 
                             << 0x10U));
        __Vtemp_15[6U] = (((IData)((((QData)((IData)(
                                                     ((0xffff0000U 
                                                       & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
                                                      | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                                                         >> 0x10U)))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 ((0xffff0000U 
                                                                   & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[1U]) 
                                                                  | (0xffffU 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[7U])))))) 
                           >> 0x10U) | ((IData)(((((QData)((IData)(
                                                                   ((0xffff0000U 
                                                                     & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
                                                                    | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                                                                       >> 0x10U)))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[7U]))))) 
                                                 >> 0x20U)) 
                                        << 0x10U));
        __Vtemp_15[7U] = ((0xffff0000U & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[7U]) 
                          | ((IData)(((((QData)((IData)(
                                                        ((0xffff0000U 
                                                          & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[5U]) 
                                                         | (vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                                                            >> 0x10U)))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((0xffff0000U 
                                                                      & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[1U]) 
                                                                     | (0xffffU 
                                                                        & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[7U]))))) 
                                      >> 0x20U)) >> 0x10U));
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[0U] 
            = ((vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[2U] 
                << 0x10U) | (0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[0U]));
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[1U] 
            = __Vtemp_15[1U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[2U] 
            = __Vtemp_15[2U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[3U] 
            = __Vtemp_15[3U];
        vlSelf->__PVT__tg_io_in_bits_matrix_b_data[4U] 
            = ((vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[3U] 
                << 0x10U) | (0xffffU & vlSymsp->TOP.io_in_bits_tc1_ot1_tg0_matrix_b[1U]));
    }
    vlSelf->__PVT__tg_io_in_bits_matrix_b_data[5U] 
        = __Vtemp_15[5U];
    vlSelf->__PVT__tg_io_in_bits_matrix_b_data[6U] 
        = __Vtemp_15[6U];
    vlSelf->__PVT__tg_io_in_bits_matrix_b_data[7U] 
        = __Vtemp_15[7U];
    tg__DOT____VdfgTmp_h19be38c2__0 = ((4U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    tg__DOT____VdfgTmp_h6637e356__0 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                       & (IData)(vlSymsp->TOP.io_out_ready));
    tg_1__DOT____VdfgTmp_h19be38c2__0 = ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                         & (IData)(vlSymsp->TOP.io_out_ready));
    tg_1__DOT____VdfgTmp_h6637e356__0 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                         & (IData)(vlSymsp->TOP.io_out_ready));
    __PVT__tg__DOT___T_4 = ((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                            | ((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                               & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)));
    __PVT__tg_1__DOT___T_4 = ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                              | ((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                 & (IData)(vlSymsp->TOP.io_in_bits_ctrl_mixPcMode)));
    vlSelf->__PVT__tg__DOT___GEN_23 = ((IData)(tg__DOT____VdfgTmp_h6637e356__0)
                                        ? 4U : ((IData)(tg__DOT____VdfgTmp_h19be38c2__0)
                                                 ? 0U
                                                 : (IData)(vlSelf->__PVT__tg__DOT__state)));
    vlSelf->__PVT__tg_1__DOT___GEN_23 = ((IData)(tg_1__DOT____VdfgTmp_h6637e356__0)
                                          ? 4U : ((IData)(tg_1__DOT____VdfgTmp_h19be38c2__0)
                                                   ? 0U
                                                   : (IData)(vlSelf->__PVT__tg_1__DOT__state)));
    vlSelf->__PVT__tg_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & ((IData)(__PVT__tg__DOT___T_4) 
                                        | (4U == (IData)(vlSelf->__PVT__tg__DOT__state))));
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
