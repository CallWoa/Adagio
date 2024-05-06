// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystem.h for the primary calling header

#include "verilated.h"

#include "VSystem__Syms.h"
#include "VSystem_Octet.h"
#include "VSystem__Syms.h"

VL_INLINE_OPT void VSystem_Octet___ico_sequent__TOP__System__DOT__top__DOT__tc__DOT__ot__0(VSystem_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VSystem_Octet___ico_sequent__TOP__System__DOT__top__DOT__tc__DOT__ot__0\n"); );
    // Body
    vlSelf->__PVT__tg__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                          & (IData)(vlSelf->__PVT__tg__DOT__outValid))) 
                                      & (IData)(vlSelf->__PVT__tg__DOT__outValid));
    vlSelf->__PVT__tg_1__DOT___GEN_0 = ((~ ((IData)(vlSymsp->TOP.io_out_ready) 
                                            & (IData)(vlSelf->__PVT__tg_1__DOT__outValid))) 
                                        & (IData)(vlSelf->__PVT__tg_1__DOT__outValid));
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
        vlSelf->__PVT__tg_1_io_in_ready = ((0U == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                           | (((2U 
                                                == (IData)(vlSelf->__PVT__tg_1__DOT__state)) 
                                               & (IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r_1)) 
                                              | (4U 
                                                 == (IData)(vlSelf->__PVT__tg_1__DOT__state))));
        vlSelf->__PVT__tg_io_in_ready = ((0U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                         | (((2U == (IData)(vlSelf->__PVT__tg__DOT__state)) 
                                             & (IData)(vlSelf->__PVT__tg_io_in_bits_mixPcMode_r)) 
                                            | (4U == (IData)(vlSelf->__PVT__tg__DOT__state))));
    } else {
        vlSelf->__PVT__tg__DOT___GEN_8 = vlSelf->__PVT__tg__DOT__state;
        vlSelf->__PVT__tg__DOT___GEN_9 = vlSelf->__PVT__tg__DOT__dp_in_valid;
        vlSelf->__PVT__tg_1__DOT___GEN_8 = vlSelf->__PVT__tg_1__DOT__state;
        vlSelf->__PVT__tg_1__DOT___GEN_9 = vlSelf->__PVT__tg_1__DOT__dp_in_valid;
        vlSelf->__PVT__tg_1_io_in_ready = 0U;
        vlSelf->__PVT__tg_io_in_ready = 0U;
    }
    vlSelf->__PVT__tg_1__DOT__prehandshaked = ((IData)(vlSymsp->TOP.System__DOT__top_io_in_valid_REG) 
                                               & (IData)(vlSelf->__PVT__tg_1_io_in_ready));
    vlSelf->__PVT__tg__DOT__prehandshaked = ((IData)(vlSymsp->TOP.System__DOT__top_io_in_valid_REG) 
                                             & (IData)(vlSelf->__PVT__tg_io_in_ready));
}
