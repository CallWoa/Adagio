// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VDotProdUnit.h for the primary calling header

#ifndef VERILATED_VDOTPRODUNIT___024ROOT_H_
#define VERILATED_VDOTPRODUNIT___024ROOT_H_  // guard

#include "verilated.h"
class VDotProdUnit_FADD;


class VDotProdUnit__Syms;

class alignas(VL_CACHE_LINE_BYTES) VDotProdUnit___024root final : public VerilatedModule {
  public:
    // CELLS
    VDotProdUnit_FADD* __PVT__DotProdUnit__DOT__addResult_0_faddModule;
    VDotProdUnit_FADD* __PVT__DotProdUnit__DOT__addResult_1_faddModule;
    VDotProdUnit_FADD* __PVT__DotProdUnit__DOT__addResult_0_faddModule_1;
    VDotProdUnit_FADD* __PVT__DotProdUnit__DOT__fadd_final_res_faddModule;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_in_ready,0,0);
        VL_IN8(io_in_valid,0,0);
        VL_IN8(io_in_bits_flush,0,0);
        VL_IN8(io_in_bits_ctrl_mixPc,0,0);
        VL_IN8(io_in_bits_ctrl_rowtag,1,0);
        VL_IN8(io_in_bits_ctrl_decode_src,4,0);
        VL_IN8(io_out_ready,0,0);
        VL_OUT8(io_out_valid,0,0);
        VL_OUT8(io_out_bits_ctrl_mixPc,0,0);
        VL_OUT8(io_out_bits_ctrl_rowtag,1,0);
        VL_OUT8(io_out_bits_ctrl_decode_src,4,0);
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg_io_out_ready;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg_1_io_out_ready;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg_2_io_out_ready;
        CData/*0:0*/ DotProdUnit__DOT__fmul__DOT__hasZero;
        CData/*0:0*/ DotProdUnit__DOT__fmul__DOT__resultSign;
        CData/*7:0*/ DotProdUnit__DOT__fmul__DOT__resultExpNoShift;
        CData/*3:0*/ DotProdUnit__DOT__fmul__DOT__lzcRaw;
        CData/*3:0*/ DotProdUnit__DOT__fmul__DOT__lzc;
        CData/*0:0*/ DotProdUnit__DOT__fmul__DOT__shiftLimit;
        CData/*7:0*/ DotProdUnit__DOT__fmul__DOT___resultSigShifted_T;
        CData/*0:0*/ DotProdUnit__DOT__fmul__DOT__hasNaN;
        CData/*0:0*/ DotProdUnit__DOT__fmul__DOT__hasInf;
        CData/*0:0*/ DotProdUnit__DOT__fmul_1__DOT__hasZero;
        CData/*0:0*/ DotProdUnit__DOT__fmul_1__DOT__resultSign;
        CData/*7:0*/ DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift;
        CData/*3:0*/ DotProdUnit__DOT__fmul_1__DOT__lzcRaw;
        CData/*3:0*/ DotProdUnit__DOT__fmul_1__DOT__lzc;
        CData/*0:0*/ DotProdUnit__DOT__fmul_1__DOT__shiftLimit;
        CData/*7:0*/ DotProdUnit__DOT__fmul_1__DOT___resultSigShifted_T;
        CData/*0:0*/ DotProdUnit__DOT__fmul_1__DOT__hasNaN;
        CData/*0:0*/ DotProdUnit__DOT__fmul_1__DOT__hasInf;
        CData/*0:0*/ DotProdUnit__DOT__fmul_2__DOT__hasZero;
        CData/*0:0*/ DotProdUnit__DOT__fmul_2__DOT__resultSign;
        CData/*7:0*/ DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift;
        CData/*3:0*/ DotProdUnit__DOT__fmul_2__DOT__lzcRaw;
        CData/*3:0*/ DotProdUnit__DOT__fmul_2__DOT__lzc;
        CData/*0:0*/ DotProdUnit__DOT__fmul_2__DOT__shiftLimit;
        CData/*7:0*/ DotProdUnit__DOT__fmul_2__DOT___resultSigShifted_T;
        CData/*0:0*/ DotProdUnit__DOT__fmul_2__DOT__hasNaN;
        CData/*0:0*/ DotProdUnit__DOT__fmul_2__DOT__hasInf;
        CData/*0:0*/ DotProdUnit__DOT__fmul_3__DOT__hasZero;
        CData/*0:0*/ DotProdUnit__DOT__fmul_3__DOT__resultSign;
        CData/*7:0*/ DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift;
        CData/*3:0*/ DotProdUnit__DOT__fmul_3__DOT__lzcRaw;
        CData/*3:0*/ DotProdUnit__DOT__fmul_3__DOT__lzc;
        CData/*0:0*/ DotProdUnit__DOT__fmul_3__DOT__shiftLimit;
        CData/*7:0*/ DotProdUnit__DOT__fmul_3__DOT___resultSigShifted_T;
        CData/*0:0*/ DotProdUnit__DOT__fmul_3__DOT__hasNaN;
        CData/*0:0*/ DotProdUnit__DOT__fmul_3__DOT__hasInf;
        CData/*3:0*/ DotProdUnit__DOT__fcvt__DOT__subnormal_shamt_lzc_io_out;
        CData/*4:0*/ DotProdUnit__DOT__fcvt__DOT__fp_in_exp;
        CData/*0:0*/ DotProdUnit__DOT__fcvt__DOT__decode_in_sigNotZero;
        CData/*0:0*/ DotProdUnit__DOT__fcvt__DOT___result_T_4;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg__DOT__validReg;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg__DOT__dataReg_ctrl_mixPc;
        CData/*1:0*/ DotProdUnit__DOT__pipeline_reg__DOT__dataReg_ctrl_rowtag;
        CData/*4:0*/ DotProdUnit__DOT__pipeline_reg__DOT__dataReg_ctrl_decode_src;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg__DOT___T;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg__DOT___GEN_1;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg_1__DOT__validReg;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc;
    };
    struct {
        CData/*1:0*/ DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag;
        CData/*4:0*/ DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg_1__DOT___T;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg_1__DOT___GEN_1;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg_2__DOT__validReg;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc;
        CData/*1:0*/ DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag;
        CData/*4:0*/ DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg_2__DOT___T;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg_2__DOT___GEN_1;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg_3__DOT__validReg;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc;
        CData/*1:0*/ DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag;
        CData/*4:0*/ DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg_3__DOT___T;
        CData/*0:0*/ DotProdUnit__DOT__pipeline_reg_3__DOT___GEN_1;
        CData/*0:0*/ DotProdUnit__DOT__fcvt_1__DOT__normal_rounder_io_cout;
        CData/*0:0*/ DotProdUnit__DOT__fcvt_1__DOT__expOverflow;
        CData/*0:0*/ DotProdUnit__DOT__fcvt_1__DOT___common_exp_T_4;
        CData/*0:0*/ DotProdUnit__DOT__fcvt_1__DOT__normal_rounder__DOT__r_up;
        CData/*0:0*/ DotProdUnit__DOT__fcvt_1__DOT__subnormal_rounder__DOT__r_up;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clock__0;
        CData/*0:0*/ __VactContinue;
        VL_IN16(io_in_bits_vec_a_0,15,0);
        VL_IN16(io_in_bits_vec_a_1,15,0);
        VL_IN16(io_in_bits_vec_a_2,15,0);
        VL_IN16(io_in_bits_vec_a_3,15,0);
        VL_IN16(io_in_bits_vec_b_0,15,0);
        VL_IN16(io_in_bits_vec_b_1,15,0);
        VL_IN16(io_in_bits_vec_b_2,15,0);
        VL_IN16(io_in_bits_vec_b_3,15,0);
        SData/*9:0*/ DotProdUnit__DOT__fcvt__DOT__subnormal_shamt_lzc_io_in;
        SData/*11:0*/ DotProdUnit__DOT__fcvt_1__DOT__shiftRightJam_io_in;
        SData/*9:0*/ DotProdUnit__DOT__fcvt_1__DOT__subnormal_rounder_io_in;
        SData/*11:0*/ DotProdUnit__DOT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T;
        VL_IN(io_in_bits_c,31,0);
        VL_OUT(io_out_bits_result,31,0);
        IData/*21:0*/ DotProdUnit__DOT__fmul__DOT__resultSigNoShift;
        IData/*21:0*/ DotProdUnit__DOT__fmul_1__DOT__resultSigNoShift;
        IData/*21:0*/ DotProdUnit__DOT__fmul_2__DOT__resultSigNoShift;
        IData/*21:0*/ DotProdUnit__DOT__fmul_3__DOT__resultSigNoShift;
        IData/*31:0*/ DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_0;
        IData/*31:0*/ DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_1;
        IData/*31:0*/ DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_2;
        IData/*31:0*/ DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_3;
        IData/*31:0*/ DotProdUnit__DOT__pipeline_reg__DOT__dataReg_add_res_4;
        IData/*31:0*/ DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_add_res_0;
        IData/*31:0*/ DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_add_res_1;
        IData/*31:0*/ DotProdUnit__DOT__pipeline_reg_1__DOT__dataReg_add_res_2;
        IData/*31:0*/ DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_add_res_0;
        IData/*31:0*/ DotProdUnit__DOT__pipeline_reg_2__DOT__dataReg_add_res_1;
        IData/*31:0*/ DotProdUnit__DOT__pipeline_reg_3__DOT__dataReg_res;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VicoIterCount;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VDotProdUnit__Syms* const vlSymsp;

    // CONSTRUCTORS
    VDotProdUnit___024root(VDotProdUnit__Syms* symsp, const char* v__name);
    ~VDotProdUnit___024root();
    VL_UNCOPYABLE(VDotProdUnit___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
