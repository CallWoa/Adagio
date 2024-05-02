// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_OCTET_H_
#define VERILATED_VTOP_OCTET_H_  // guard

#include "verilated.h"
class VTop_DotProdUnit;


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_Octet final : public VerilatedModule {
  public:
    // CELLS
    VTop_DotProdUnit* __PVT__tg__DOT__dp;
    VTop_DotProdUnit* __PVT__tg__DOT__dp_1;
    VTop_DotProdUnit* __PVT__tg__DOT__dp_2;
    VTop_DotProdUnit* __PVT__tg__DOT__dp_3;
    VTop_DotProdUnit* __PVT__tg_1__DOT__dp;
    VTop_DotProdUnit* __PVT__tg_1__DOT__dp_1;
    VTop_DotProdUnit* __PVT__tg_1__DOT__dp_2;
    VTop_DotProdUnit* __PVT__tg_1__DOT__dp_3;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_in_ready,0,0);
        VL_IN8(io_in_valid,0,0);
        VL_IN8(io_in_bits_matBSel,0,0);
        VL_IN8(io_in_bits_mixPcMode,0,0);
        VL_IN8(io_in_bits_roundingMode,0,0);
        VL_IN8(io_out_ready,0,0);
        VL_OUT8(io_out_valid,0,0);
        CData/*0:0*/ __PVT__tg_io_in_ready;
        CData/*0:0*/ __PVT__tg_1_io_in_ready;
        CData/*0:0*/ __PVT__tg_io_in_bits_mixPcMode_r;
        CData/*0:0*/ __PVT__tg_io_in_bits_roundingMode_r;
        CData/*0:0*/ __PVT__tg_io_in_bits_mixPcMode_r_1;
        CData/*0:0*/ __PVT__tg_io_in_bits_roundingMode_r_1;
        CData/*1:0*/ __PVT__tg__DOT__dp_io_in_bits_rowtag;
        CData/*0:0*/ __PVT__tg__DOT__prehandshaked;
        CData/*0:0*/ __PVT__tg__DOT__outValid;
        CData/*0:0*/ __PVT__tg__DOT___GEN_0;
        CData/*2:0*/ __PVT__tg__DOT__state;
        CData/*0:0*/ __PVT__tg__DOT__dp_in_valid;
        CData/*0:0*/ __PVT__tg__DOT___GEN_5;
        CData/*2:0*/ __PVT__tg__DOT___GEN_8;
        CData/*0:0*/ __PVT__tg__DOT___GEN_9;
        CData/*2:0*/ __PVT__tg__DOT___GEN_15;
        CData/*0:0*/ __PVT__tg__DOT___GEN_16;
        CData/*1:0*/ __PVT__tg_1__DOT__dp_io_in_bits_rowtag;
        CData/*0:0*/ __PVT__tg_1__DOT__prehandshaked;
        CData/*0:0*/ __PVT__tg_1__DOT__outValid;
        CData/*0:0*/ __PVT__tg_1__DOT___GEN_0;
        CData/*2:0*/ __PVT__tg_1__DOT__state;
        CData/*0:0*/ __PVT__tg_1__DOT__dp_in_valid;
        CData/*0:0*/ __PVT__tg_1__DOT___GEN_5;
        CData/*2:0*/ __PVT__tg_1__DOT___GEN_8;
        CData/*0:0*/ __PVT__tg_1__DOT___GEN_9;
        CData/*2:0*/ __PVT__tg_1__DOT___GEN_15;
        CData/*0:0*/ __PVT__tg_1__DOT___GEN_16;
        SData/*15:0*/ __PVT__tg__DOT__dp_io_in_bits_vec_a_0;
        SData/*15:0*/ __PVT__tg__DOT__dp_io_in_bits_vec_a_1;
        SData/*15:0*/ __PVT__tg__DOT__dp_io_in_bits_vec_a_2;
        SData/*15:0*/ __PVT__tg__DOT__dp_io_in_bits_vec_a_3;
        SData/*15:0*/ __PVT__tg_1__DOT__dp_io_in_bits_vec_a_0;
        SData/*15:0*/ __PVT__tg_1__DOT__dp_io_in_bits_vec_a_1;
        SData/*15:0*/ __PVT__tg_1__DOT__dp_io_in_bits_vec_a_2;
        SData/*15:0*/ __PVT__tg_1__DOT__dp_io_in_bits_vec_a_3;
        VL_INW(io_in_bits_threadgroup0_matrix_a_data,255,0,8);
        VL_INW(io_in_bits_threadgroup0_matrix_b_data,255,0,8);
        VL_INW(io_in_bits_threadgroup0_matrix_c_data,255,0,8);
        VL_INW(io_in_bits_threadgroup4_matrix_a_data,255,0,8);
        VL_INW(io_in_bits_threadgroup4_matrix_b_data,255,0,8);
        VL_INW(io_in_bits_threadgroup4_matrix_c_data,255,0,8);
        VL_OUTW(io_out_bits_threadgroup0_matrix_d_data,255,0,8);
        VL_OUTW(io_out_bits_threadgroup4_matrix_d_data,255,0,8);
        VlWide<8>/*255:0*/ __PVT__tg_io_in_bits_matrix_a_r_data;
        VlWide<8>/*255:0*/ __PVT__tg_io_in_bits_matrix_b_r_data;
        VlWide<8>/*255:0*/ __PVT__tg_io_in_bits_matrix_c_r_data;
        VlWide<8>/*255:0*/ __PVT__tg_io_in_bits_matrix_a_r_1_data;
        VlWide<8>/*255:0*/ __PVT__tg_io_in_bits_matrix_b_r_1_data;
        VlWide<8>/*255:0*/ __PVT__tg_io_in_bits_matrix_c_r_1_data;
        IData/*31:0*/ __PVT__tg__DOT__dp_io_in_bits_c;
        IData/*31:0*/ __PVT__tg__DOT__dp_1_io_in_bits_c;
        IData/*31:0*/ __PVT__tg__DOT__dp_2_io_in_bits_c;
        IData/*31:0*/ __PVT__tg__DOT__dp_3_io_in_bits_c;
        IData/*31:0*/ __PVT__tg_1__DOT__dp_io_in_bits_c;
    };
    struct {
        IData/*31:0*/ __PVT__tg_1__DOT__dp_1_io_in_bits_c;
        IData/*31:0*/ __PVT__tg_1__DOT__dp_2_io_in_bits_c;
        IData/*31:0*/ __PVT__tg_1__DOT__dp_3_io_in_bits_c;
        QData/*63:0*/ __PVT__tg__DOT__matrix_d_0;
        QData/*63:0*/ __PVT__tg__DOT__matrix_d_1;
        QData/*63:0*/ __PVT__tg__DOT__matrix_d_2;
        QData/*63:0*/ __PVT__tg__DOT__matrix_d_3;
        QData/*63:0*/ __PVT__tg__DOT__result_fp16;
        QData/*63:0*/ __PVT__tg__DOT__result_fp32_hi;
        QData/*63:0*/ __PVT__tg__DOT__result_fp32_lo;
        QData/*63:0*/ __PVT__tg__DOT___GEN_29;
        QData/*63:0*/ __PVT__tg_1__DOT__matrix_d_0;
        QData/*63:0*/ __PVT__tg_1__DOT__matrix_d_1;
        QData/*63:0*/ __PVT__tg_1__DOT__matrix_d_2;
        QData/*63:0*/ __PVT__tg_1__DOT__matrix_d_3;
        QData/*63:0*/ __PVT__tg_1__DOT__result_fp16;
        QData/*63:0*/ __PVT__tg_1__DOT__result_fp32_hi;
        QData/*63:0*/ __PVT__tg_1__DOT__result_fp32_lo;
        QData/*63:0*/ __PVT__tg_1__DOT___GEN_29;
    };

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_Octet(VTop__Syms* symsp, const char* v__name);
    ~VTop_Octet();
    VL_UNCOPYABLE(VTop_Octet);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
