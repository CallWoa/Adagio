// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystem.h for the primary calling header

#include "verilated.h"

#include "VSystem__Syms.h"
#include "VSystem_Octet.h"
#include "VSystem__Syms.h"

VL_ATTR_COLD void VSystem_Octet___stl_sequent__TOP__System__DOT__top__DOT__tc__DOT__ot__0(VSystem_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSystem_Octet___stl_sequent__TOP__System__DOT__top__DOT__tc__DOT__ot__0\n"); );
    // Body
    vlSelf->__PVT__tg__DOT__dp_io_in_bits_rowtag = 
        (((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
          | ((3U == (IData)(vlSelf->__PVT__tg__DOT__state))
              ? 2U : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg__DOT__state))
                              ? 3U : 0U));
    vlSelf->__PVT__tg_1__DOT__dp_io_in_bits_rowtag 
        = (((2U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
            | ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                ? 2U : 0U)) | ((4U == (IData)(vlSelf->__PVT__tg_1__DOT__state))
                                ? 3U : 0U));
    vlSelf->__PVT__tg__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                          & (IData)(vlSelf->__PVT__tg__DOT__outValid))) 
                                      & (IData)(vlSelf->__PVT__tg__DOT__outValid));
    vlSelf->__PVT__tg_1__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                            & (IData)(vlSelf->__PVT__tg_1__DOT__outValid))) 
                                        & (IData)(vlSelf->__PVT__tg_1__DOT__outValid));
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
        vlSelf->__PVT__tg_1__DOT___GEN_8 = vlSelf->__PVT__tg_1__DOT__state;
        vlSelf->__PVT__tg__DOT___GEN_9 = vlSelf->__PVT__tg__DOT__dp_in_valid;
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
    vlSelf->__PVT__tg_io_in_ready = ((IData)(vlSymsp->TOP.io_out_ready) 
                                     & ((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                        | (((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                            & (IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r)) 
                                           | (4U == (IData)(vlSelf->__PVT__tg__DOT__state)))));
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
    vlSelf->__PVT__tg_1__DOT__prehandshaked = ((IData)(vlSymsp->TOP.System__DOT__top_io_in_valid_REG) 
                                               & (IData)(vlSelf->__PVT__tg_1_io_in_ready));
    vlSelf->__PVT__tg__DOT__prehandshaked = ((IData)(vlSymsp->TOP.System__DOT__top_io_in_valid_REG) 
                                             & (IData)(vlSelf->__PVT__tg_io_in_ready));
}
