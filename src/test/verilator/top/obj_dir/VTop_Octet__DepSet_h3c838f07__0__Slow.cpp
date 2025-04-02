// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_DotProdUnit.h"
#include "VTop_Octet.h"

VL_ATTR_COLD void VTop_Octet___stl_sequent__TOP__Top__DOT__tc__DOT__ot__1(VTop_Octet* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VTop_Octet___stl_sequent__TOP__Top__DOT__tc__DOT__ot__1\n"); );
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
    vlSelf->__PVT__tg__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg__DOT__dp_3->__PVT__rowtag_es))
                                        ? vlSelf->__PVT__tg__DOT__result_fp16
                                        : vlSelf->__PVT__tg__DOT__matrix_d_buffer_3);
    vlSelf->__PVT__tg_1__DOT___GEN_74 = ((3U == (IData)(vlSelf->__PVT__tg_1__DOT__dp_3->__PVT__rowtag_es))
                                          ? vlSelf->__PVT__tg_1__DOT__result_fp16
                                          : vlSelf->__PVT__tg_1__DOT__matrix_d_buffer_3);
}
