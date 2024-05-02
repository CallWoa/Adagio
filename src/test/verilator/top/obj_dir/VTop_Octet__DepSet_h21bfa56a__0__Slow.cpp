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
    CData/*0:0*/ __PVT__tg__DOT___T;
    __PVT__tg__DOT___T = 0;
    CData/*0:0*/ __PVT__tg_1__DOT___T;
    __PVT__tg_1__DOT___T = 0;
    // Body
    if (vlSymsp->TOP.io_out_ready) {
        vlSelf->__PVT__tg__DOT___GEN_13 = 3U;
        vlSelf->__PVT__tg_1__DOT___GEN_13 = 3U;
        if (vlSelf->__PVT__tg__DOT__mixPc) {
            vlSelf->__PVT__tg__DOT___GEN_42 = vlSelf->__PVT__tg__DOT__rowtag_in;
            vlSelf->__PVT__tg__DOT___GEN_34 = (0xffffU 
                                               & (IData)(vlSelf->__PVT__tg__DOT__dpIn_va_0));
            vlSelf->__PVT__tg__DOT___GEN_35 = (0xffffU 
                                               & (IData)(vlSelf->__PVT__tg__DOT__dpIn_va_1));
            vlSelf->__PVT__tg__DOT___GEN_36 = (0xffffU 
                                               & (IData)(vlSelf->__PVT__tg__DOT__dpIn_va_2));
            vlSelf->__PVT__tg__DOT___GEN_37 = (0xffffU 
                                               & (IData)(vlSelf->__PVT__tg__DOT__dpIn_va_3));
            vlSelf->__PVT__tg__DOT___GEN_38 = vlSelf->__PVT__tg__DOT__dpIn_c_0;
            vlSelf->__PVT__tg__DOT___GEN_39 = vlSelf->__PVT__tg__DOT__dpIn_c_1;
            vlSelf->__PVT__tg__DOT___GEN_40 = vlSelf->__PVT__tg__DOT__dpIn_c_2;
            vlSelf->__PVT__tg__DOT___GEN_41 = vlSelf->__PVT__tg__DOT__dpIn_c_3;
        } else {
            vlSelf->__PVT__tg__DOT___GEN_42 = 2U;
            vlSelf->__PVT__tg__DOT___GEN_34 = (0xffffU 
                                               & ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U] 
                                                   << 0x10U) 
                                                  | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U] 
                                                     >> 0x10U)));
            vlSelf->__PVT__tg__DOT___GEN_35 = (0xffffU 
                                               & vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[3U]);
            vlSelf->__PVT__tg__DOT___GEN_36 = (0xffffU 
                                               & ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U] 
                                                   << 0x10U) 
                                                  | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U] 
                                                     >> 0x10U)));
            vlSelf->__PVT__tg__DOT___GEN_37 = (0xffffU 
                                               & vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[2U]);
            vlSelf->__PVT__tg__DOT___GEN_38 = (0xffff0000U 
                                               | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[3U] 
                                                  >> 0x10U));
            vlSelf->__PVT__tg__DOT___GEN_39 = (0xffff0000U 
                                               | (0xffffU 
                                                  & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[3U]));
            vlSelf->__PVT__tg__DOT___GEN_40 = (0xffff0000U 
                                               | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[2U] 
                                                  >> 0x10U));
            vlSelf->__PVT__tg__DOT___GEN_41 = (0xffff0000U 
                                               | (0xffffU 
                                                  & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[2U]));
        }
        if (vlSelf->__PVT__tg_1__DOT__mixPc) {
            vlSelf->__PVT__tg_1__DOT___GEN_42 = vlSelf->__PVT__tg_1__DOT__rowtag_in;
            vlSelf->__PVT__tg_1__DOT___GEN_34 = (0xffffU 
                                                 & (IData)(vlSelf->__PVT__tg_1__DOT__dpIn_va_0));
            vlSelf->__PVT__tg_1__DOT___GEN_35 = (0xffffU 
                                                 & (IData)(vlSelf->__PVT__tg_1__DOT__dpIn_va_1));
            vlSelf->__PVT__tg_1__DOT___GEN_36 = (0xffffU 
                                                 & (IData)(vlSelf->__PVT__tg_1__DOT__dpIn_va_2));
            vlSelf->__PVT__tg_1__DOT___GEN_37 = (0xffffU 
                                                 & (IData)(vlSelf->__PVT__tg_1__DOT__dpIn_va_3));
            vlSelf->__PVT__tg_1__DOT___GEN_38 = vlSelf->__PVT__tg_1__DOT__dpIn_c_0;
            vlSelf->__PVT__tg_1__DOT___GEN_39 = vlSelf->__PVT__tg_1__DOT__dpIn_c_1;
            vlSelf->__PVT__tg_1__DOT___GEN_40 = vlSelf->__PVT__tg_1__DOT__dpIn_c_2;
            vlSelf->__PVT__tg_1__DOT___GEN_41 = vlSelf->__PVT__tg_1__DOT__dpIn_c_3;
        } else {
            vlSelf->__PVT__tg_1__DOT___GEN_42 = 2U;
            vlSelf->__PVT__tg_1__DOT___GEN_34 = (0xffffU 
                                                 & ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U] 
                                                     << 0x10U) 
                                                    | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U] 
                                                       >> 0x10U)));
            vlSelf->__PVT__tg_1__DOT___GEN_35 = (0xffffU 
                                                 & vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[3U]);
            vlSelf->__PVT__tg_1__DOT___GEN_36 = (0xffffU 
                                                 & ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U] 
                                                     << 0x10U) 
                                                    | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U] 
                                                       >> 0x10U)));
            vlSelf->__PVT__tg_1__DOT___GEN_37 = (0xffffU 
                                                 & vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[2U]);
            vlSelf->__PVT__tg_1__DOT___GEN_38 = (0xffff0000U 
                                                 | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[3U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg_1__DOT___GEN_39 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[3U]));
            vlSelf->__PVT__tg_1__DOT___GEN_40 = (0xffff0000U 
                                                 | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[2U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg_1__DOT___GEN_41 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[2U]));
        }
    } else {
        vlSelf->__PVT__tg__DOT___GEN_13 = vlSelf->__PVT__tg__DOT__state;
        vlSelf->__PVT__tg_1__DOT___GEN_13 = vlSelf->__PVT__tg_1__DOT__state;
        vlSelf->__PVT__tg__DOT___GEN_42 = vlSelf->__PVT__tg__DOT__rowtag_in;
        vlSelf->__PVT__tg_1__DOT___GEN_42 = vlSelf->__PVT__tg_1__DOT__rowtag_in;
        vlSelf->__PVT__tg__DOT___GEN_34 = (0xffffU 
                                           & (IData)(vlSelf->__PVT__tg__DOT__dpIn_va_0));
        vlSelf->__PVT__tg__DOT___GEN_35 = (0xffffU 
                                           & (IData)(vlSelf->__PVT__tg__DOT__dpIn_va_1));
        vlSelf->__PVT__tg__DOT___GEN_36 = (0xffffU 
                                           & (IData)(vlSelf->__PVT__tg__DOT__dpIn_va_2));
        vlSelf->__PVT__tg__DOT___GEN_37 = (0xffffU 
                                           & (IData)(vlSelf->__PVT__tg__DOT__dpIn_va_3));
        vlSelf->__PVT__tg__DOT___GEN_38 = vlSelf->__PVT__tg__DOT__dpIn_c_0;
        vlSelf->__PVT__tg__DOT___GEN_39 = vlSelf->__PVT__tg__DOT__dpIn_c_1;
        vlSelf->__PVT__tg__DOT___GEN_40 = vlSelf->__PVT__tg__DOT__dpIn_c_2;
        vlSelf->__PVT__tg__DOT___GEN_41 = vlSelf->__PVT__tg__DOT__dpIn_c_3;
        vlSelf->__PVT__tg_1__DOT___GEN_34 = (0xffffU 
                                             & (IData)(vlSelf->__PVT__tg_1__DOT__dpIn_va_0));
        vlSelf->__PVT__tg_1__DOT___GEN_35 = (0xffffU 
                                             & (IData)(vlSelf->__PVT__tg_1__DOT__dpIn_va_1));
        vlSelf->__PVT__tg_1__DOT___GEN_36 = (0xffffU 
                                             & (IData)(vlSelf->__PVT__tg_1__DOT__dpIn_va_2));
        vlSelf->__PVT__tg_1__DOT___GEN_37 = (0xffffU 
                                             & (IData)(vlSelf->__PVT__tg_1__DOT__dpIn_va_3));
        vlSelf->__PVT__tg_1__DOT___GEN_38 = vlSelf->__PVT__tg_1__DOT__dpIn_c_0;
        vlSelf->__PVT__tg_1__DOT___GEN_39 = vlSelf->__PVT__tg_1__DOT__dpIn_c_1;
        vlSelf->__PVT__tg_1__DOT___GEN_40 = vlSelf->__PVT__tg_1__DOT__dpIn_c_2;
        vlSelf->__PVT__tg_1__DOT___GEN_41 = vlSelf->__PVT__tg_1__DOT__dpIn_c_3;
    }
    vlSelf->__PVT__tg__DOT___GEN_63 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                        ? ((IData)(vlSymsp->TOP.io_out_ready)
                                            ? ((IData)(vlSelf->__PVT__tg__DOT__mixPc)
                                                ? 0U
                                                : 4U)
                                            : (IData)(vlSelf->__PVT__tg__DOT__state))
                                        : ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                                            ? ((IData)(vlSymsp->TOP.io_out_ready)
                                                ? 0U
                                                : (IData)(vlSelf->__PVT__tg__DOT__state))
                                            : (IData)(vlSelf->__PVT__tg__DOT__state)));
    if ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))) {
        if (vlSymsp->TOP.io_out_ready) {
            vlSelf->__PVT__tg__DOT___GEN_62 = 3U;
            vlSelf->__PVT__tg__DOT___GEN_54 = (0xffffU 
                                               & ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U] 
                                                   << 0x10U) 
                                                  | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U] 
                                                     >> 0x10U)));
            vlSelf->__PVT__tg__DOT___GEN_55 = (0xffffU 
                                               & vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[1U]);
            vlSelf->__PVT__tg__DOT___GEN_56 = (0xffffU 
                                               & ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U] 
                                                   << 0x10U) 
                                                  | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U] 
                                                     >> 0x10U)));
            vlSelf->__PVT__tg__DOT___GEN_57 = (0xffffU 
                                               & vlSelf->__PVT__tg_io_in_bits_matrix_a_r_data[0U]);
            vlSelf->__PVT__tg__DOT___GEN_58 = (0xffff0000U 
                                               | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[1U] 
                                                  >> 0x10U));
            vlSelf->__PVT__tg__DOT___GEN_59 = (0xffff0000U 
                                               | (0xffffU 
                                                  & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[1U]));
            vlSelf->__PVT__tg__DOT___GEN_60 = (0xffff0000U 
                                               | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[0U] 
                                                  >> 0x10U));
            vlSelf->__PVT__tg__DOT___GEN_61 = (0xffff0000U 
                                               | (0xffffU 
                                                  & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_data[0U]));
        } else {
            vlSelf->__PVT__tg__DOT___GEN_62 = vlSelf->__PVT__tg__DOT__rowtag_in;
            vlSelf->__PVT__tg__DOT___GEN_54 = (0xffffU 
                                               & (IData)(vlSelf->__PVT__tg__DOT__dpIn_va_0));
            vlSelf->__PVT__tg__DOT___GEN_55 = (0xffffU 
                                               & (IData)(vlSelf->__PVT__tg__DOT__dpIn_va_1));
            vlSelf->__PVT__tg__DOT___GEN_56 = (0xffffU 
                                               & (IData)(vlSelf->__PVT__tg__DOT__dpIn_va_2));
            vlSelf->__PVT__tg__DOT___GEN_57 = (0xffffU 
                                               & (IData)(vlSelf->__PVT__tg__DOT__dpIn_va_3));
            vlSelf->__PVT__tg__DOT___GEN_58 = vlSelf->__PVT__tg__DOT__dpIn_c_0;
            vlSelf->__PVT__tg__DOT___GEN_59 = vlSelf->__PVT__tg__DOT__dpIn_c_1;
            vlSelf->__PVT__tg__DOT___GEN_60 = vlSelf->__PVT__tg__DOT__dpIn_c_2;
            vlSelf->__PVT__tg__DOT___GEN_61 = vlSelf->__PVT__tg__DOT__dpIn_c_3;
        }
    } else {
        vlSelf->__PVT__tg__DOT___GEN_62 = vlSelf->__PVT__tg__DOT__rowtag_in;
        vlSelf->__PVT__tg__DOT___GEN_54 = (0xffffU 
                                           & (IData)(vlSelf->__PVT__tg__DOT__dpIn_va_0));
        vlSelf->__PVT__tg__DOT___GEN_55 = (0xffffU 
                                           & (IData)(vlSelf->__PVT__tg__DOT__dpIn_va_1));
        vlSelf->__PVT__tg__DOT___GEN_56 = (0xffffU 
                                           & (IData)(vlSelf->__PVT__tg__DOT__dpIn_va_2));
        vlSelf->__PVT__tg__DOT___GEN_57 = (0xffffU 
                                           & (IData)(vlSelf->__PVT__tg__DOT__dpIn_va_3));
        vlSelf->__PVT__tg__DOT___GEN_58 = vlSelf->__PVT__tg__DOT__dpIn_c_0;
        vlSelf->__PVT__tg__DOT___GEN_59 = vlSelf->__PVT__tg__DOT__dpIn_c_1;
        vlSelf->__PVT__tg__DOT___GEN_60 = vlSelf->__PVT__tg__DOT__dpIn_c_2;
        vlSelf->__PVT__tg__DOT___GEN_61 = vlSelf->__PVT__tg__DOT__dpIn_c_3;
    }
    vlSelf->__PVT__tg_1__DOT___GEN_63 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                          ? ((IData)(vlSymsp->TOP.io_out_ready)
                                              ? ((IData)(vlSelf->__PVT__tg_1__DOT__mixPc)
                                                  ? 0U
                                                  : 4U)
                                              : (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                          : ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                              ? ((IData)(vlSymsp->TOP.io_out_ready)
                                                  ? 0U
                                                  : (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                              : (IData)(vlSelf->__PVT__tg_1__DOT__state)));
    if ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))) {
        if (vlSymsp->TOP.io_out_ready) {
            vlSelf->__PVT__tg_1__DOT___GEN_62 = 3U;
            vlSelf->__PVT__tg_1__DOT___GEN_54 = (0xffffU 
                                                 & ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U] 
                                                     << 0x10U) 
                                                    | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U] 
                                                       >> 0x10U)));
            vlSelf->__PVT__tg_1__DOT___GEN_55 = (0xffffU 
                                                 & vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[1U]);
            vlSelf->__PVT__tg_1__DOT___GEN_56 = (0xffffU 
                                                 & ((vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U] 
                                                     << 0x10U) 
                                                    | (vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U] 
                                                       >> 0x10U)));
            vlSelf->__PVT__tg_1__DOT___GEN_57 = (0xffffU 
                                                 & vlSelf->__PVT__tg_io_in_bits_matrix_a_r_1_data[0U]);
            vlSelf->__PVT__tg_1__DOT___GEN_58 = (0xffff0000U 
                                                 | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[1U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg_1__DOT___GEN_59 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[1U]));
            vlSelf->__PVT__tg_1__DOT___GEN_60 = (0xffff0000U 
                                                 | (vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[0U] 
                                                    >> 0x10U));
            vlSelf->__PVT__tg_1__DOT___GEN_61 = (0xffff0000U 
                                                 | (0xffffU 
                                                    & vlSelf->__PVT__tg_io_in_bits_matrix_c_r_1_data[0U]));
        } else {
            vlSelf->__PVT__tg_1__DOT___GEN_62 = vlSelf->__PVT__tg_1__DOT__rowtag_in;
            vlSelf->__PVT__tg_1__DOT___GEN_54 = (0xffffU 
                                                 & (IData)(vlSelf->__PVT__tg_1__DOT__dpIn_va_0));
            vlSelf->__PVT__tg_1__DOT___GEN_55 = (0xffffU 
                                                 & (IData)(vlSelf->__PVT__tg_1__DOT__dpIn_va_1));
            vlSelf->__PVT__tg_1__DOT___GEN_56 = (0xffffU 
                                                 & (IData)(vlSelf->__PVT__tg_1__DOT__dpIn_va_2));
            vlSelf->__PVT__tg_1__DOT___GEN_57 = (0xffffU 
                                                 & (IData)(vlSelf->__PVT__tg_1__DOT__dpIn_va_3));
            vlSelf->__PVT__tg_1__DOT___GEN_58 = vlSelf->__PVT__tg_1__DOT__dpIn_c_0;
            vlSelf->__PVT__tg_1__DOT___GEN_59 = vlSelf->__PVT__tg_1__DOT__dpIn_c_1;
            vlSelf->__PVT__tg_1__DOT___GEN_60 = vlSelf->__PVT__tg_1__DOT__dpIn_c_2;
            vlSelf->__PVT__tg_1__DOT___GEN_61 = vlSelf->__PVT__tg_1__DOT__dpIn_c_3;
        }
    } else {
        vlSelf->__PVT__tg_1__DOT___GEN_62 = vlSelf->__PVT__tg_1__DOT__rowtag_in;
        vlSelf->__PVT__tg_1__DOT___GEN_54 = (0xffffU 
                                             & (IData)(vlSelf->__PVT__tg_1__DOT__dpIn_va_0));
        vlSelf->__PVT__tg_1__DOT___GEN_55 = (0xffffU 
                                             & (IData)(vlSelf->__PVT__tg_1__DOT__dpIn_va_1));
        vlSelf->__PVT__tg_1__DOT___GEN_56 = (0xffffU 
                                             & (IData)(vlSelf->__PVT__tg_1__DOT__dpIn_va_2));
        vlSelf->__PVT__tg_1__DOT___GEN_57 = (0xffffU 
                                             & (IData)(vlSelf->__PVT__tg_1__DOT__dpIn_va_3));
        vlSelf->__PVT__tg_1__DOT___GEN_58 = vlSelf->__PVT__tg_1__DOT__dpIn_c_0;
        vlSelf->__PVT__tg_1__DOT___GEN_59 = vlSelf->__PVT__tg_1__DOT__dpIn_c_1;
        vlSelf->__PVT__tg_1__DOT___GEN_60 = vlSelf->__PVT__tg_1__DOT__dpIn_c_2;
        vlSelf->__PVT__tg_1__DOT___GEN_61 = vlSelf->__PVT__tg_1__DOT__dpIn_c_3;
    }
    __PVT__tg__DOT___T = ((IData)(vlSymsp->TOP.io_out_ready) 
                          & (IData)(vlSelf->__PVT__tg__DOT__outValid));
    __PVT__tg_1__DOT___T = ((IData)(vlSymsp->TOP.io_out_ready) 
                            & (IData)(vlSelf->__PVT__tg_1__DOT__outValid));
    vlSelf->__PVT__tg_1_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                       & (0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)));
    vlSelf->__PVT__tg_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & (0U == (IData)(vlSelf->__PVT__tg__DOT__state)));
    vlSelf->__PVT__tg__DOT___GEN_104 = (((IData)(vlSelf->__PVT__tg__DOT__dp_in_valid) 
                                         & (IData)(vlSymsp->TOP.io_out_ready)) 
                                        | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                               & (IData)(vlSelf->__PVT__tg__DOT__dp->__PVT__io_out_valid))) 
                                           & (IData)(vlSelf->__PVT__tg__DOT__valid)));
    vlSelf->__PVT__tg__DOT___GEN_106 = (((IData)(vlSymsp->TOP.io_out_ready) 
                                         & (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid)) 
                                        | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                               & (IData)(vlSelf->__PVT__tg__DOT__dp_1->__PVT__io_out_valid))) 
                                           & (IData)(vlSelf->__PVT__tg__DOT__valid_1)));
    vlSelf->__PVT__tg__DOT__result_fp32_hi = (((QData)((IData)(vlSelf->__PVT__tg__DOT__dp->__PVT__io_out_bits_result)) 
                                               << 0x20U) 
                                              | (QData)((IData)(vlSelf->__PVT__tg__DOT__dp_1->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg__DOT___GEN_108 = (((IData)(vlSymsp->TOP.io_out_ready) 
                                         & (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid)) 
                                        | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                               & (IData)(vlSelf->__PVT__tg__DOT__dp_2->__PVT__io_out_valid))) 
                                           & (IData)(vlSelf->__PVT__tg__DOT__valid_2)));
    vlSelf->__PVT__tg__DOT___GEN_110 = (((IData)(vlSymsp->TOP.io_out_ready) 
                                         & (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid)) 
                                        | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                               & (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__io_out_valid))) 
                                           & (IData)(vlSelf->__PVT__tg__DOT__valid_3)));
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
    vlSelf->__PVT__tg_1__DOT___GEN_104 = (((IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid) 
                                           & (IData)(vlSymsp->TOP.io_out_ready)) 
                                          | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                                 & (IData)(vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_valid))) 
                                             & (IData)(vlSelf->__PVT__tg_1__DOT__valid)));
    vlSelf->__PVT__tg_1__DOT___GEN_106 = (((IData)(vlSymsp->TOP.io_out_ready) 
                                           & (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid)) 
                                          | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                                 & (IData)(vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_valid))) 
                                             & (IData)(vlSelf->__PVT__tg_1__DOT__valid_1)));
    vlSelf->__PVT__tg_1__DOT__result_fp32_hi = (((QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp->__PVT__io_out_bits_result)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->__PVT__tg_1__DOT__dp_1->__PVT__io_out_bits_result)));
    vlSelf->__PVT__tg_1__DOT___GEN_108 = (((IData)(vlSymsp->TOP.io_out_ready) 
                                           & (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid)) 
                                          | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                                 & (IData)(vlSelf->__PVT__tg_1__DOT__dp_2->__PVT__io_out_valid))) 
                                             & (IData)(vlSelf->__PVT__tg_1__DOT__valid_2)));
    vlSelf->__PVT__tg_1__DOT___GEN_110 = (((IData)(vlSymsp->TOP.io_out_ready) 
                                           & (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid)) 
                                          | ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                                 & (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__io_out_valid))) 
                                             & (IData)(vlSelf->__PVT__tg_1__DOT__valid_3)));
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
    vlSelf->__PVT___GEN_0 = ((~ (IData)(__PVT__tg__DOT___T)) 
                             & (IData)(vlSelf->__PVT__valid));
    vlSelf->__PVT__tg__DOT___GEN_0 = ((~ (IData)(__PVT__tg__DOT___T)) 
                                      & (IData)(vlSelf->__PVT__tg__DOT__outValid));
    vlSelf->__PVT___GEN_7 = ((~ (IData)(__PVT__tg_1__DOT___T)) 
                             & (IData)(vlSelf->__PVT__valid_1));
    vlSelf->__PVT__tg_1__DOT___GEN_0 = ((~ (IData)(__PVT__tg_1__DOT___T)) 
                                        & (IData)(vlSelf->__PVT__tg_1__DOT__outValid));
    vlSelf->__PVT__prehandshaked_1 = ((IData)(vlSymsp->TOP.io_in_valid) 
                                      & (IData)(vlSelf->__PVT__tg_1_io_in_ready));
    vlSelf->__PVT__tg_1__DOT__handshaked = ((IData)(vlSelf->__PVT__valid_1) 
                                            & (IData)(vlSelf->__PVT__tg_1_io_in_ready));
    vlSelf->__PVT__prehandshaked = ((IData)(vlSymsp->TOP.io_in_valid) 
                                    & (IData)(vlSelf->__PVT__tg_io_in_ready));
    vlSelf->__PVT__tg__DOT__handshaked = ((IData)(vlSelf->__PVT__valid) 
                                          & (IData)(vlSelf->__PVT__tg_io_in_ready));
    vlSelf->__PVT__tg__DOT___GEN_117 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))
                                         ? vlSelf->__PVT__tg__DOT__result_fp16
                                         : vlSelf->__PVT__tg__DOT__matrix_d_3);
    vlSelf->__PVT__tg_1__DOT___GEN_117 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))
                                           ? vlSelf->__PVT__tg_1__DOT__result_fp16
                                           : vlSelf->__PVT__tg_1__DOT__matrix_d_3);
    vlSelf->__PVT__tg_1__DOT___GEN_1 = ((IData)(vlSelf->__PVT__tg_1__DOT__handshaked) 
                                        | (IData)(vlSelf->__PVT__tg_1__DOT__dp_in_valid));
    vlSelf->__PVT__tg__DOT___GEN_1 = ((IData)(vlSelf->__PVT__tg__DOT__handshaked) 
                                      | (IData)(vlSelf->__PVT__tg__DOT__dp_in_valid));
}
