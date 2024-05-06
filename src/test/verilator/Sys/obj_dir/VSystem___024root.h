// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSystem.h for the primary calling header

#ifndef VERILATED_VSYSTEM___024ROOT_H_
#define VERILATED_VSYSTEM___024ROOT_H_  // guard

#include "verilated.h"
class VSystem_Octet;


class VSystem__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSystem___024root final : public VerilatedModule {
  public:
    // CELLS
    VSystem_Octet* __PVT__System__DOT__top__DOT__tc__DOT__ot;
    VSystem_Octet* __PVT__System__DOT__top__DOT__tc__DOT__ot_1;
    VSystem_Octet* __PVT__System__DOT__top__DOT__tc_1__DOT__ot;
    VSystem_Octet* __PVT__System__DOT__top__DOT__tc_1__DOT__ot_1;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_IN8(io_mixPc,0,0);
        VL_IN8(io_exec_en,0,0);
        VL_IN8(io_out_ready,0,0);
        VL_OUT8(io_out_valid,0,0);
        CData/*0:0*/ System__DOT__top_io_out_valid;
        CData/*0:0*/ System__DOT__rf_a_tile_v_3_MPORT_en;
        CData/*0:0*/ System__DOT__rf_MPORT_en;
        CData/*1:0*/ System__DOT__set;
        CData/*1:0*/ System__DOT__step;
        CData/*1:0*/ System__DOT__out_set;
        CData/*1:0*/ System__DOT__out_step;
        CData/*0:0*/ System__DOT__matBsel;
        CData/*1:0*/ System__DOT___in_valid_T_2;
        CData/*0:0*/ System__DOT__top_io_in_valid_REG;
        CData/*1:0*/ System__DOT___set_T_1;
        CData/*1:0*/ System__DOT___step_T_1;
        CData/*1:0*/ System__DOT___out_set_T_1;
        CData/*1:0*/ System__DOT___out_step_T_1;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v0;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v1;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v2;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v3;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v4;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v5;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v6;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v7;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v8;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v9;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v10;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v11;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v12;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v13;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v14;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v15;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v16;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v17;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v18;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v19;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v20;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v21;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v22;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v23;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v24;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v25;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v26;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v27;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v28;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v29;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v30;
        CData/*0:0*/ __Vdlyvset__System__DOT__rf__v31;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        VL_OUTW(io_out_bits_tc0_octet0_threadgroup0_matrix_d_data,255,0,8);
        VL_OUTW(io_out_bits_tc0_octet0_threadgroup4_matrix_d_data,255,0,8);
        VL_OUTW(io_out_bits_tc0_octet1_threadgroup0_matrix_d_data,255,0,8);
        VL_OUTW(io_out_bits_tc0_octet1_threadgroup4_matrix_d_data,255,0,8);
        VL_OUTW(io_out_bits_tc1_octet0_threadgroup0_matrix_d_data,255,0,8);
        VL_OUTW(io_out_bits_tc1_octet0_threadgroup4_matrix_d_data,255,0,8);
        VL_OUTW(io_out_bits_tc1_octet1_threadgroup0_matrix_d_data,255,0,8);
        VL_OUTW(io_out_bits_tc1_octet1_threadgroup4_matrix_d_data,255,0,8);
        VlWide<8>/*255:0*/ System__DOT__matrix_a_0;
        VlWide<8>/*255:0*/ System__DOT__matrix_a_1;
    };
    struct {
        VlWide<8>/*255:0*/ System__DOT__matrix_a_2;
        VlWide<8>/*255:0*/ System__DOT__matrix_a_3;
        VlWide<8>/*255:0*/ System__DOT__matrix_a_4;
        VlWide<8>/*255:0*/ System__DOT__matrix_a_5;
        VlWide<8>/*255:0*/ System__DOT__matrix_a_6;
        VlWide<8>/*255:0*/ System__DOT__matrix_a_7;
        VlWide<8>/*255:0*/ System__DOT__matrix_b_0;
        VlWide<8>/*255:0*/ System__DOT__matrix_b_2;
        VlWide<8>/*255:0*/ System__DOT__matrix_b_4;
        VlWide<8>/*255:0*/ System__DOT__matrix_b_6;
        VlWide<8>/*255:0*/ System__DOT__matrix_c_0;
        VlWide<8>/*255:0*/ System__DOT__matrix_c_1;
        VlWide<8>/*255:0*/ System__DOT__matrix_c_2;
        VlWide<8>/*255:0*/ System__DOT__matrix_c_3;
        VlWide<8>/*255:0*/ System__DOT__matrix_c_4;
        VlWide<8>/*255:0*/ System__DOT__matrix_c_5;
        VlWide<8>/*255:0*/ System__DOT__matrix_c_6;
        VlWide<8>/*255:0*/ System__DOT__matrix_c_7;
        VlWide<12>/*383:0*/ System__DOT___matrix_a_0_T_1;
        VlWide<8>/*255:0*/ System__DOT___matrix_b_0_T;
        VlWide<12>/*383:0*/ System__DOT___matrix_a_1_T_1;
        VlWide<8>/*255:0*/ System__DOT___matrix_b_2_T;
        VlWide<12>/*383:0*/ System__DOT___matrix_a_4_T_1;
        VlWide<8>/*255:0*/ System__DOT___matrix_b_4_T;
        VlWide<12>/*383:0*/ System__DOT___matrix_a_5_T_1;
        VlWide<8>/*255:0*/ System__DOT___matrix_b_6_T;
        VlWide<12>/*383:0*/ System__DOT___GEN_9;
        VlWide<12>/*383:0*/ System__DOT___GEN_24;
        VlWide<12>/*383:0*/ System__DOT___GEN_31;
        VlWide<12>/*383:0*/ System__DOT___GEN_42;
        VlWide<12>/*383:0*/ System__DOT___GEN_53;
        VlWide<12>/*383:0*/ System__DOT___GEN_68;
        VlWide<12>/*383:0*/ System__DOT___GEN_75;
        VlWide<12>/*383:0*/ System__DOT___GEN_86;
        IData/*31:0*/ System__DOT__initvar;
        VlWide<8>/*255:0*/ System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup0_matrix_b_data;
        VlWide<8>/*255:0*/ System__DOT__top__DOT__tc__DOT__ot_io_in_bits_threadgroup4_matrix_b_data;
        VlWide<8>/*255:0*/ System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup0_matrix_b_data;
        VlWide<8>/*255:0*/ System__DOT__top__DOT__tc_1__DOT__ot_io_in_bits_threadgroup4_matrix_b_data;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v0;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v1;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v2;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v3;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v4;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v5;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v6;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v7;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v8;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v9;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v10;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v11;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v12;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v13;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v14;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v15;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v16;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v17;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v18;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v19;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v20;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v21;
    };
    struct {
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v22;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v23;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v24;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v25;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v26;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v27;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v28;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v29;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v30;
        QData/*63:0*/ __Vdlyvval__System__DOT__rf__v31;
        VlUnpacked<QData/*63:0*/, 256> System__DOT__rf;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSystem__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSystem___024root(VSystem__Syms* symsp, const char* v__name);
    ~VSystem___024root();
    VL_UNCOPYABLE(VSystem___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
