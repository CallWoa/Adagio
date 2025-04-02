// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_DOTPRODUNIT_1_H_
#define VERILATED_VTOP_DOTPRODUNIT_1_H_  // guard

#include "verilated.h"
class VTop_FADD;


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_DotProdUnit_1 final : public VerilatedModule {
  public:
    // CELLS
    VTop_FADD* __PVT__addResult_0_faddModule;
    VTop_FADD* __PVT__addResult_1_faddModule;
    VTop_FADD* __PVT__addResult_0_faddModule_1;
    VTop_FADD* __PVT__final_fadd_faddModule;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clock,0,0);
        VL_IN8(__PVT__reset,0,0);
        VL_IN8(__PVT__io_in_valid,0,0);
        VL_IN8(__PVT__io_in_bits_flush,0,0);
        VL_IN8(__PVT__io_in_bits_ctrl_mixPc,0,0);
        VL_IN8(__PVT__io_out_ready,0,0);
        CData/*0:0*/ __PVT__pipeline_reg_io_out_ready;
        CData/*0:0*/ __PVT__pipeline_reg_1_io_out_ready;
        CData/*0:0*/ __PVT__pipeline_reg_2_io_out_ready;
        CData/*0:0*/ __PVT__fmul__DOT__hasZero;
        CData/*0:0*/ __PVT__fmul__DOT__resultSign;
        CData/*7:0*/ __PVT__fmul__DOT__resultExpNoShift;
        CData/*3:0*/ __PVT__fmul__DOT__lzcRaw;
        CData/*3:0*/ __PVT__fmul__DOT__lzc;
        CData/*0:0*/ __PVT__fmul__DOT__shiftLimit;
        CData/*7:0*/ __PVT__fmul__DOT___resultSigShifted_T;
        CData/*0:0*/ __PVT__fmul__DOT__hasNaN;
        CData/*0:0*/ __PVT__fmul__DOT__hasInf;
        CData/*0:0*/ __PVT__fmul_1__DOT__hasZero;
        CData/*0:0*/ __PVT__fmul_1__DOT__resultSign;
        CData/*7:0*/ __PVT__fmul_1__DOT__resultExpNoShift;
        CData/*3:0*/ __PVT__fmul_1__DOT__lzcRaw;
        CData/*3:0*/ __PVT__fmul_1__DOT__lzc;
        CData/*0:0*/ __PVT__fmul_1__DOT__shiftLimit;
        CData/*7:0*/ __PVT__fmul_1__DOT___resultSigShifted_T;
        CData/*0:0*/ __PVT__fmul_1__DOT__hasNaN;
        CData/*0:0*/ __PVT__fmul_1__DOT__hasInf;
        CData/*0:0*/ __PVT__fmul_2__DOT__hasZero;
        CData/*0:0*/ __PVT__fmul_2__DOT__resultSign;
        CData/*7:0*/ __PVT__fmul_2__DOT__resultExpNoShift;
        CData/*3:0*/ __PVT__fmul_2__DOT__lzcRaw;
        CData/*3:0*/ __PVT__fmul_2__DOT__lzc;
        CData/*0:0*/ __PVT__fmul_2__DOT__shiftLimit;
        CData/*7:0*/ __PVT__fmul_2__DOT___resultSigShifted_T;
        CData/*0:0*/ __PVT__fmul_2__DOT__hasNaN;
        CData/*0:0*/ __PVT__fmul_2__DOT__hasInf;
        CData/*0:0*/ __PVT__fmul_3__DOT__hasZero;
        CData/*0:0*/ __PVT__fmul_3__DOT__resultSign;
        CData/*7:0*/ __PVT__fmul_3__DOT__resultExpNoShift;
        CData/*3:0*/ __PVT__fmul_3__DOT__lzcRaw;
        CData/*3:0*/ __PVT__fmul_3__DOT__lzc;
        CData/*0:0*/ __PVT__fmul_3__DOT__shiftLimit;
        CData/*7:0*/ __PVT__fmul_3__DOT___resultSigShifted_T;
        CData/*0:0*/ __PVT__fmul_3__DOT__hasNaN;
        CData/*0:0*/ __PVT__fmul_3__DOT__hasInf;
        CData/*3:0*/ __PVT__fcvt__DOT__subnormal_shamt_lzc_io_out;
        CData/*4:0*/ __PVT__fcvt__DOT__fp_in_exp;
        CData/*0:0*/ __PVT__fcvt__DOT__decode_in_sigNotZero;
        CData/*0:0*/ __PVT__fcvt__DOT___result_T_4;
        CData/*0:0*/ __PVT__pipeline_reg__DOT__validReg;
        CData/*0:0*/ __PVT__pipeline_reg__DOT__dataReg_ctrl_mixPc;
        CData/*1:0*/ __PVT__pipeline_reg__DOT__dataReg_ctrl_rowtag;
        CData/*4:0*/ __PVT__pipeline_reg__DOT__dataReg_ctrl_decode_src;
        CData/*0:0*/ __PVT__pipeline_reg__DOT___T;
        CData/*0:0*/ __PVT__pipeline_reg__DOT___GEN_1;
        CData/*0:0*/ __PVT__pipeline_reg_1__DOT__validReg;
        CData/*0:0*/ __PVT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc;
        CData/*1:0*/ __PVT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag;
        CData/*4:0*/ __PVT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src;
        CData/*0:0*/ __PVT__pipeline_reg_1__DOT___T;
        CData/*0:0*/ __PVT__pipeline_reg_1__DOT___GEN_1;
        CData/*0:0*/ __PVT__pipeline_reg_2__DOT__validReg;
        CData/*0:0*/ __PVT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc;
        CData/*1:0*/ __PVT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag;
    };
    struct {
        CData/*4:0*/ __PVT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src;
        CData/*0:0*/ __PVT__pipeline_reg_2__DOT___T;
        CData/*0:0*/ __PVT__pipeline_reg_2__DOT___GEN_1;
        CData/*0:0*/ __PVT__pipeline_reg_3__DOT__validReg;
        CData/*0:0*/ __PVT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc;
        CData/*1:0*/ __PVT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag;
        CData/*4:0*/ __PVT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src;
        CData/*0:0*/ __PVT__pipeline_reg_3__DOT___T;
        CData/*0:0*/ __PVT__pipeline_reg_3__DOT___GEN_1;
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
        IData/*21:0*/ __PVT__fmul__DOT__resultSigNoShift;
        IData/*21:0*/ __PVT__fmul_1__DOT__resultSigNoShift;
        IData/*21:0*/ __PVT__fmul_2__DOT__resultSigNoShift;
        IData/*21:0*/ __PVT__fmul_3__DOT__resultSigNoShift;
        IData/*31:0*/ __PVT__pipeline_reg__DOT__dataReg_res_0;
        IData/*31:0*/ __PVT__pipeline_reg__DOT__dataReg_res_1;
        IData/*31:0*/ __PVT__pipeline_reg__DOT__dataReg_res_2;
        IData/*31:0*/ __PVT__pipeline_reg__DOT__dataReg_res_3;
        IData/*31:0*/ __PVT__pipeline_reg__DOT__dataReg_res_4;
        IData/*31:0*/ __PVT__pipeline_reg_1__DOT__dataReg_res_0;
        IData/*31:0*/ __PVT__pipeline_reg_1__DOT__dataReg_res_1;
        IData/*31:0*/ __PVT__pipeline_reg_1__DOT__dataReg_res_2;
        IData/*31:0*/ __PVT__pipeline_reg_2__DOT__dataReg_res_0;
        IData/*31:0*/ __PVT__pipeline_reg_2__DOT__dataReg_res_1;
        IData/*31:0*/ __PVT__pipeline_reg_3__DOT__dataReg_res;
    };

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_DotProdUnit_1(VTop__Syms* symsp, const char* v__name);
    ~VTop_DotProdUnit_1();
    VL_UNCOPYABLE(VTop_DotProdUnit_1);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
