// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"
class VTop_Octet;


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop___024root final : public VerilatedModule {
  public:
    // CELLS
    VTop_Octet* __PVT__Top__DOT__tc__DOT__ot;
    VTop_Octet* __PVT__Top__DOT__tc__DOT__ot_1;
    VTop_Octet* __PVT__Top__DOT__tc_1__DOT__ot;
    VTop_Octet* __PVT__Top__DOT__tc_1__DOT__ot_1;

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(io_in_ready,0,0);
    VL_IN8(io_in_valid,0,0);
    VL_IN8(io_in_bits_ctrl_matBSel,0,0);
    VL_IN8(io_in_bits_ctrl_mixPcMode,0,0);
    VL_IN8(io_in_bits_ctrl_roundingMode,0,0);
    VL_IN8(io_out_ready,0,0);
    VL_OUT8(io_out_valid,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
    CData/*0:0*/ __VactContinue;
    VL_INW(io_in_bits_tc0_ot0_tg0_matrix_a,255,0,8);
    VL_INW(io_in_bits_tc0_ot0_tg0_matrix_b,255,0,8);
    VL_INW(io_in_bits_tc0_ot0_tg0_matrix_c,255,0,8);
    VL_INW(io_in_bits_tc0_ot0_tg4_matrix_a,255,0,8);
    VL_INW(io_in_bits_tc0_ot0_tg4_matrix_b,255,0,8);
    VL_INW(io_in_bits_tc0_ot0_tg4_matrix_c,255,0,8);
    VL_INW(io_in_bits_tc0_ot1_tg0_matrix_a,255,0,8);
    VL_INW(io_in_bits_tc0_ot1_tg0_matrix_b,255,0,8);
    VL_INW(io_in_bits_tc0_ot1_tg0_matrix_c,255,0,8);
    VL_INW(io_in_bits_tc0_ot1_tg4_matrix_a,255,0,8);
    VL_INW(io_in_bits_tc0_ot1_tg4_matrix_b,255,0,8);
    VL_INW(io_in_bits_tc0_ot1_tg4_matrix_c,255,0,8);
    VL_INW(io_in_bits_tc1_ot0_tg0_matrix_a,255,0,8);
    VL_INW(io_in_bits_tc1_ot0_tg0_matrix_b,255,0,8);
    VL_INW(io_in_bits_tc1_ot0_tg0_matrix_c,255,0,8);
    VL_INW(io_in_bits_tc1_ot0_tg4_matrix_a,255,0,8);
    VL_INW(io_in_bits_tc1_ot0_tg4_matrix_b,255,0,8);
    VL_INW(io_in_bits_tc1_ot0_tg4_matrix_c,255,0,8);
    VL_INW(io_in_bits_tc1_ot1_tg0_matrix_a,255,0,8);
    VL_INW(io_in_bits_tc1_ot1_tg0_matrix_b,255,0,8);
    VL_INW(io_in_bits_tc1_ot1_tg0_matrix_c,255,0,8);
    VL_INW(io_in_bits_tc1_ot1_tg4_matrix_a,255,0,8);
    VL_INW(io_in_bits_tc1_ot1_tg4_matrix_b,255,0,8);
    VL_INW(io_in_bits_tc1_ot1_tg4_matrix_c,255,0,8);
    VL_OUTW(io_out_bits_tc0_octet0_threadgroup0_matrix_d_data,255,0,8);
    VL_OUTW(io_out_bits_tc0_octet0_threadgroup4_matrix_d_data,255,0,8);
    VL_OUTW(io_out_bits_tc0_octet1_threadgroup0_matrix_d_data,255,0,8);
    VL_OUTW(io_out_bits_tc0_octet1_threadgroup4_matrix_d_data,255,0,8);
    VL_OUTW(io_out_bits_tc1_octet0_threadgroup0_matrix_d_data,255,0,8);
    VL_OUTW(io_out_bits_tc1_octet0_threadgroup4_matrix_d_data,255,0,8);
    VL_OUTW(io_out_bits_tc1_octet1_threadgroup0_matrix_d_data,255,0,8);
    VL_OUTW(io_out_bits_tc1_octet1_threadgroup4_matrix_d_data,255,0,8);
    VlWide<8>/*255:0*/ Top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data;
    VlWide<8>/*255:0*/ Top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data;
    VlWide<8>/*255:0*/ Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data;
    VlWide<8>/*255:0*/ Top__DOT__tc__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data;
    VlWide<8>/*255:0*/ Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data;
    VlWide<8>/*255:0*/ Top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data;
    VlWide<8>/*255:0*/ Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup0_matrix_b_data;
    VlWide<8>/*255:0*/ Top__DOT__tc_1__DOT__ot_1_io_in_bits_threadgroup4_matrix_b_data;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop___024root(VTop__Syms* symsp, const char* v__name);
    ~VTop___024root();
    VL_UNCOPYABLE(VTop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
