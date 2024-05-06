// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSystem.h for the primary calling header

#ifndef VERILATED_VSYSTEM_DOTPRODUNIT_H_
#define VERILATED_VSYSTEM_DOTPRODUNIT_H_  // guard

#include "verilated.h"
class VSystem_FADD;


class VSystem__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSystem_DotProdUnit final : public VerilatedModule {
  public:
    // CELLS
    VSystem_FADD* __PVT__faddModule;
    VSystem_FADD* __PVT__faddModule_1;
    VSystem_FADD* __PVT__faddModule_2;
    VSystem_FADD* __PVT__faddModule_3;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_OUT8(__PVT__io_in_ready,0,0);
        VL_IN8(__PVT__io_in_valid,0,0);
        VL_IN8(__PVT__io_in_bits_mixPc,0,0);
        VL_IN8(__PVT__io_in_bits_rowtag,1,0);
        VL_IN8(__PVT__io_out_ready,0,0);
        VL_OUT8(__PVT__io_out_valid,0,0);
        VL_OUT8(__PVT__io_out_bits_mixPc,0,0);
        VL_OUT8(__PVT__io_out_bits_rowtag,1,0);
        CData/*0:0*/ __PVT__s1_handshaked_s2;
        CData/*0:0*/ __PVT__mixPc_s2;
        CData/*1:0*/ __PVT__rowtag_s2;
        CData/*0:0*/ __PVT__valid;
        CData/*0:0*/ __PVT___GEN_4;
        CData/*0:0*/ __PVT__a_flag_isNaN;
        CData/*0:0*/ __PVT__a_flag_isInf;
        CData/*0:0*/ __PVT__b_flag_isNaN;
        CData/*0:0*/ __PVT__b_flag_isInf;
        CData/*0:0*/ __PVT__prehandshaked_1;
        CData/*0:0*/ __PVT__valid_1;
        CData/*0:0*/ __PVT___GEN_16;
        CData/*0:0*/ __PVT__a_flag_1_isNaN;
        CData/*0:0*/ __PVT__a_flag_1_isInf;
        CData/*0:0*/ __PVT__b_flag_1_isNaN;
        CData/*0:0*/ __PVT__b_flag_1_isInf;
        CData/*0:0*/ __PVT__prehandshaked_2;
        CData/*0:0*/ __PVT__mixPc_this;
        CData/*1:0*/ __PVT__rowtag_this;
        CData/*0:0*/ __PVT__valid_2;
        CData/*0:0*/ __PVT___GEN_32;
        CData/*0:0*/ __PVT__posthandshaked;
        CData/*0:0*/ __PVT__mixPc_sx;
        CData/*1:0*/ __PVT__rowtag_sx;
        CData/*0:0*/ __PVT__valid_3;
        CData/*0:0*/ __PVT___T_15;
        CData/*0:0*/ __PVT___GEN_40;
        CData/*0:0*/ __PVT__mixPc_es;
        CData/*1:0*/ __PVT__rowtag_es;
        CData/*0:0*/ __PVT__esValid;
        CData/*0:0*/ __PVT___GEN_49;
        CData/*0:0*/ __PVT__prehandshaked_5;
        CData/*0:0*/ __PVT__valid_4;
        CData/*0:0*/ __PVT___GEN_51;
        CData/*0:0*/ __PVT__fmul__DOT__hasZero;
        CData/*0:0*/ __PVT__fmul__DOT__resultSign;
        CData/*7:0*/ __PVT__fmul__DOT__resultExpNoShift;
        CData/*3:0*/ __PVT__fmul__DOT__lzcRaw;
        CData/*3:0*/ __PVT__fmul__DOT__lzc;
        CData/*0:0*/ __PVT__fmul__DOT__shiftLimit;
        CData/*7:0*/ __PVT__fmul__DOT___resultSigShifted_T;
        CData/*0:0*/ __PVT__fmul__DOT__hasNaN;
        CData/*0:0*/ __PVT__fmul__DOT__hasInf;
        CData/*0:0*/ __PVT__fmul__DOT__nan_result;
        CData/*0:0*/ __PVT__fmul_1__DOT__hasZero;
        CData/*0:0*/ __PVT__fmul_1__DOT__resultSign;
        CData/*7:0*/ __PVT__fmul_1__DOT__resultExpNoShift;
        CData/*3:0*/ __PVT__fmul_1__DOT__lzcRaw;
        CData/*3:0*/ __PVT__fmul_1__DOT__lzc;
        CData/*0:0*/ __PVT__fmul_1__DOT__shiftLimit;
        CData/*7:0*/ __PVT__fmul_1__DOT___resultSigShifted_T;
        CData/*0:0*/ __PVT__fmul_1__DOT__hasNaN;
        CData/*0:0*/ __PVT__fmul_1__DOT__hasInf;
        CData/*0:0*/ __PVT__fmul_1__DOT__nan_result;
    };
    struct {
        CData/*0:0*/ __PVT__fmul_2__DOT__hasZero;
        CData/*0:0*/ __PVT__fmul_2__DOT__resultSign;
        CData/*7:0*/ __PVT__fmul_2__DOT__resultExpNoShift;
        CData/*3:0*/ __PVT__fmul_2__DOT__lzcRaw;
        CData/*3:0*/ __PVT__fmul_2__DOT__lzc;
        CData/*0:0*/ __PVT__fmul_2__DOT__shiftLimit;
        CData/*7:0*/ __PVT__fmul_2__DOT___resultSigShifted_T;
        CData/*0:0*/ __PVT__fmul_2__DOT__hasNaN;
        CData/*0:0*/ __PVT__fmul_2__DOT__hasInf;
        CData/*0:0*/ __PVT__fmul_2__DOT__nan_result;
        CData/*0:0*/ __PVT__fmul_3__DOT__hasZero;
        CData/*0:0*/ __PVT__fmul_3__DOT__resultSign;
        CData/*7:0*/ __PVT__fmul_3__DOT__resultExpNoShift;
        CData/*3:0*/ __PVT__fmul_3__DOT__lzcRaw;
        CData/*3:0*/ __PVT__fmul_3__DOT__lzc;
        CData/*0:0*/ __PVT__fmul_3__DOT__shiftLimit;
        CData/*7:0*/ __PVT__fmul_3__DOT___resultSigShifted_T;
        CData/*0:0*/ __PVT__fmul_3__DOT__hasNaN;
        CData/*0:0*/ __PVT__fmul_3__DOT__hasInf;
        CData/*0:0*/ __PVT__fmul_3__DOT__nan_result;
        CData/*3:0*/ __PVT__fcvt__DOT__subnormal_shamt_lzc_io_out;
        CData/*4:0*/ __PVT__fcvt__DOT__fp_in_exp;
        CData/*0:0*/ __PVT__fcvt__DOT__decode_in_sigNotZero;
        CData/*0:0*/ __PVT__fcvt__DOT___result_T_4;
        CData/*0:0*/ __PVT__fcvt_1__DOT__normal_rounder_io_cout;
        CData/*0:0*/ __PVT__fcvt_1__DOT__expOverflow;
        CData/*0:0*/ __PVT__fcvt_1__DOT___common_exp_T_4;
        CData/*0:0*/ __PVT__fcvt_1__DOT__normal_rounder__DOT__r_up;
        CData/*0:0*/ __PVT__fcvt_1__DOT__subnormal_rounder__DOT__r_up;
        VL_IN16(__PVT__io_in_bits_vec_a_0,15,0);
        VL_IN16(__PVT__io_in_bits_vec_a_1,15,0);
        VL_IN16(__PVT__io_in_bits_vec_a_2,15,0);
        VL_IN16(__PVT__io_in_bits_vec_a_3,15,0);
        VL_IN16(__PVT__io_in_bits_vec_b_0,15,0);
        VL_IN16(__PVT__io_in_bits_vec_b_1,15,0);
        VL_IN16(__PVT__io_in_bits_vec_b_2,15,0);
        VL_IN16(__PVT__io_in_bits_vec_b_3,15,0);
        SData/*9:0*/ __PVT__fcvt__DOT__subnormal_shamt_lzc_io_in;
        SData/*11:0*/ __PVT__fcvt_1__DOT__shiftRightJam_io_in;
        SData/*9:0*/ __PVT__fcvt_1__DOT__subnormal_rounder_io_in;
        SData/*11:0*/ __PVT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T;
        VL_IN(__PVT__io_in_bits_c,31,0);
        VL_OUT(__PVT__io_out_bits_result,31,0);
        IData/*31:0*/ __PVT__faddModule_io_in_bits_a_r;
        IData/*31:0*/ __PVT__faddModule_io_in_bits_b_r;
        IData/*31:0*/ __PVT__faddModule_io_in_bits_a_r_1;
        IData/*31:0*/ __PVT__faddModule_io_in_bits_b_r_1;
        IData/*31:0*/ __PVT__firstAddResult_2_r;
        IData/*31:0*/ __PVT__faddModule_io_in_bits_a_r_2;
        IData/*31:0*/ __PVT__faddModule_io_in_bits_b_r_2;
        IData/*31:0*/ __PVT__addResult_1_r;
        IData/*31:0*/ __PVT__faddModule_io_in_bits_a_r_3;
        IData/*31:0*/ __PVT__faddModule_io_in_bits_b_r_3;
        IData/*31:0*/ __PVT__atResult_es;
        IData/*31:0*/ __PVT__fcvt_io_in_bits_in_r;
        IData/*21:0*/ __PVT__fmul__DOT__resultSigNoShift;
        IData/*21:0*/ __PVT__fmul_1__DOT__resultSigNoShift;
        IData/*21:0*/ __PVT__fmul_2__DOT__resultSigNoShift;
        IData/*21:0*/ __PVT__fmul_3__DOT__resultSigNoShift;
    };

    // INTERNAL VARIABLES
    VSystem__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSystem_DotProdUnit(VSystem__Syms* symsp, const char* v__name);
    ~VSystem_DotProdUnit();
    VL_UNCOPYABLE(VSystem_DotProdUnit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
