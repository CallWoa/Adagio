// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_DotProdUnit_1.h"
#include "VTop_Threadgroup.h"

VL_ATTR_COLD void VTop_Threadgroup___stl_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__1(VTop_Threadgroup* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VTop_Threadgroup___stl_sequent__TOP__Top__DOT__tc__DOT__ot__DOT__tg__1\n"); );
    // Body
    vlSelf->__PVT__result_fp32_lo = (((QData)((IData)(vlSelf->__PVT__dp_1->__PVT__io_out_bits_result)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__dp_io_out_bits_result)));
    vlSelf->__PVT__result_fp32_hi = (((QData)((IData)(vlSelf->__PVT__dp_3->__PVT__io_out_bits_result)) 
                                      << 0x20U) | (QData)((IData)(vlSelf->__PVT__dp_2->__PVT__io_out_bits_result)));
    vlSelf->__PVT__result_fp16 = (((QData)((IData)(
                                                   (0xffffU 
                                                    & vlSelf->__PVT__dp_3->__PVT__io_out_bits_result))) 
                                   << 0x30U) | (((QData)((IData)(
                                                                 ((vlSelf->__PVT__dp_2->__PVT__io_out_bits_result 
                                                                   << 0x10U) 
                                                                  | (0xffffU 
                                                                     & vlSelf->__PVT__dp_1->__PVT__io_out_bits_result)))) 
                                                 << 0x10U) 
                                                | (QData)((IData)(
                                                                  (0xffffU 
                                                                   & vlSelf->__PVT__dp_io_out_bits_result)))));
    vlSelf->__PVT___GEN_75 = ((3U == (IData)(vlSelf->__PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag))
                               ? vlSelf->__PVT__result_fp16
                               : vlSelf->__PVT__matrix_d_buffer_3);
}
