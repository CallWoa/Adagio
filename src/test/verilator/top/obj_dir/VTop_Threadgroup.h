// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VTop.h for the primary calling header

#ifndef VERILATED_VTOP_THREADGROUP_H_
#define VERILATED_VTOP_THREADGROUP_H_  // guard

#include "verilated.h"
class VTop_DotProdUnit_1;
class VTop_FADD;


class VTop__Syms;

class alignas(VL_CACHE_LINE_BYTES) VTop_Threadgroup final : public VerilatedModule {
  public:
    // CELLS
    VTop_DotProdUnit_1* __PVT__dp_1;
    VTop_DotProdUnit_1* __PVT__dp_2;
    VTop_DotProdUnit_1* __PVT__dp_3;
    VTop_FADD* __PVT__dp__DOT__addResult_0_faddModule;
    VTop_FADD* __PVT__dp__DOT__addResult_1_faddModule;
    VTop_FADD* __PVT__dp__DOT__addResult_0_faddModule_1;
    VTop_FADD* __PVT__dp__DOT__final_fadd_faddModule;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_in_ready,0,0);
        VL_IN8(io_in_valid,0,0);
        VL_IN8(io_in_bits_ctrl_flush,0,0);
        VL_IN8(io_in_bits_ctrl_matASel,0,0);
        VL_IN8(io_in_bits_ctrl_mixPcMode,0,0);
        VL_IN8(io_in_bits_decode_src,4,0);
        VL_IN8(io_out_ready,0,0);
        VL_OUT8(io_out_valid,0,0);
        VL_OUT8(io_out_bits_decode_src,4,0);
        CData/*0:0*/ __PVT__dp_in_valid;
        CData/*0:0*/ __PVT__tg_out_valid;
        CData/*1:0*/ __PVT__dp_in_rowtag;
        CData/*4:0*/ __PVT__decode_out_buffer_src;
        CData/*2:0*/ __PVT__state;
        CData/*0:0*/ __PVT___T_1;
        CData/*0:0*/ __PVT___T_2;
        CData/*0:0*/ __PVT___T_8;
        CData/*2:0*/ __PVT___GEN_11;
        CData/*0:0*/ __PVT___GEN_65;
        CData/*0:0*/ __PVT__dp_in_ctrl_mixPc_REG;
        CData/*4:0*/ __PVT__dp_in_ctrl_decode_REG_src;
        CData/*0:0*/ __PVT__dp_in_ctrl_mixPc_REG_2;
        CData/*0:0*/ __PVT___GEN_68;
        CData/*0:0*/ __VdfgTmp_h298fb594__0;
        CData/*0:0*/ __VdfgTmp_hda1a2523__0;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_io_in_ready;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_io_out_ready;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_1_io_out_ready;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_2_io_out_ready;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_3_io_out_ready;
        CData/*0:0*/ __PVT__dp__DOT__fmul__DOT__hasZero;
        CData/*0:0*/ __PVT__dp__DOT__fmul__DOT__resultSign;
        CData/*7:0*/ __PVT__dp__DOT__fmul__DOT__resultExpNoShift;
        CData/*3:0*/ __PVT__dp__DOT__fmul__DOT__lzcRaw;
        CData/*3:0*/ __PVT__dp__DOT__fmul__DOT__lzc;
        CData/*0:0*/ __PVT__dp__DOT__fmul__DOT__shiftLimit;
        CData/*7:0*/ __PVT__dp__DOT__fmul__DOT___resultSigShifted_T;
        CData/*0:0*/ __PVT__dp__DOT__fmul__DOT__hasNaN;
        CData/*0:0*/ __PVT__dp__DOT__fmul__DOT__hasInf;
        CData/*0:0*/ __PVT__dp__DOT__fmul_1__DOT__hasZero;
        CData/*0:0*/ __PVT__dp__DOT__fmul_1__DOT__resultSign;
        CData/*7:0*/ __PVT__dp__DOT__fmul_1__DOT__resultExpNoShift;
        CData/*3:0*/ __PVT__dp__DOT__fmul_1__DOT__lzcRaw;
        CData/*3:0*/ __PVT__dp__DOT__fmul_1__DOT__lzc;
        CData/*0:0*/ __PVT__dp__DOT__fmul_1__DOT__shiftLimit;
        CData/*7:0*/ __PVT__dp__DOT__fmul_1__DOT___resultSigShifted_T;
        CData/*0:0*/ __PVT__dp__DOT__fmul_1__DOT__hasNaN;
        CData/*0:0*/ __PVT__dp__DOT__fmul_1__DOT__hasInf;
        CData/*0:0*/ __PVT__dp__DOT__fmul_2__DOT__hasZero;
        CData/*0:0*/ __PVT__dp__DOT__fmul_2__DOT__resultSign;
        CData/*7:0*/ __PVT__dp__DOT__fmul_2__DOT__resultExpNoShift;
        CData/*3:0*/ __PVT__dp__DOT__fmul_2__DOT__lzcRaw;
        CData/*3:0*/ __PVT__dp__DOT__fmul_2__DOT__lzc;
        CData/*0:0*/ __PVT__dp__DOT__fmul_2__DOT__shiftLimit;
        CData/*7:0*/ __PVT__dp__DOT__fmul_2__DOT___resultSigShifted_T;
        CData/*0:0*/ __PVT__dp__DOT__fmul_2__DOT__hasNaN;
        CData/*0:0*/ __PVT__dp__DOT__fmul_2__DOT__hasInf;
        CData/*0:0*/ __PVT__dp__DOT__fmul_3__DOT__hasZero;
        CData/*0:0*/ __PVT__dp__DOT__fmul_3__DOT__resultSign;
        CData/*7:0*/ __PVT__dp__DOT__fmul_3__DOT__resultExpNoShift;
        CData/*3:0*/ __PVT__dp__DOT__fmul_3__DOT__lzcRaw;
        CData/*3:0*/ __PVT__dp__DOT__fmul_3__DOT__lzc;
    };
    struct {
        CData/*0:0*/ __PVT__dp__DOT__fmul_3__DOT__shiftLimit;
        CData/*7:0*/ __PVT__dp__DOT__fmul_3__DOT___resultSigShifted_T;
        CData/*0:0*/ __PVT__dp__DOT__fmul_3__DOT__hasNaN;
        CData/*0:0*/ __PVT__dp__DOT__fmul_3__DOT__hasInf;
        CData/*3:0*/ __PVT__dp__DOT__fcvt__DOT__subnormal_shamt_lzc_io_out;
        CData/*4:0*/ __PVT__dp__DOT__fcvt__DOT__fp_in_exp;
        CData/*0:0*/ __PVT__dp__DOT__fcvt__DOT__decode_in_sigNotZero;
        CData/*0:0*/ __PVT__dp__DOT__fcvt__DOT___result_T_4;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg__DOT__validReg;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg__DOT__dataReg_ctrl_mixPc;
        CData/*1:0*/ __PVT__dp__DOT__pipeline_reg__DOT__dataReg_ctrl_rowtag;
        CData/*4:0*/ __PVT__dp__DOT__pipeline_reg__DOT__dataReg_ctrl_decode_src;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg__DOT___T;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg__DOT___GEN_1;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_1__DOT__validReg;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_1__DOT__dataReg_ctrl_mixPc;
        CData/*1:0*/ __PVT__dp__DOT__pipeline_reg_1__DOT__dataReg_ctrl_rowtag;
        CData/*4:0*/ __PVT__dp__DOT__pipeline_reg_1__DOT__dataReg_ctrl_decode_src;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_1__DOT___T;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_1__DOT___GEN_1;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_2__DOT__validReg;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_2__DOT__dataReg_ctrl_mixPc;
        CData/*1:0*/ __PVT__dp__DOT__pipeline_reg_2__DOT__dataReg_ctrl_rowtag;
        CData/*4:0*/ __PVT__dp__DOT__pipeline_reg_2__DOT__dataReg_ctrl_decode_src;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_2__DOT___T;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_2__DOT___GEN_1;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_3__DOT__validReg;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_ctrl_mixPc;
        CData/*1:0*/ __PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_ctrl_rowtag;
        CData/*4:0*/ __PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_ctrl_decode_src;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_3__DOT___T;
        CData/*0:0*/ __PVT__dp__DOT__pipeline_reg_3__DOT___GEN_1;
        CData/*0:0*/ __PVT__dp__DOT__fcvt_1__DOT__normal_rounder_io_cout;
        CData/*0:0*/ __PVT__dp__DOT__fcvt_1__DOT__expOverflow;
        CData/*0:0*/ __PVT__dp__DOT__fcvt_1__DOT___common_exp_T_4;
        CData/*0:0*/ __PVT__dp__DOT__fcvt_1__DOT__normal_rounder__DOT__r_up;
        CData/*0:0*/ __PVT__dp__DOT__fcvt_1__DOT__subnormal_rounder__DOT__r_up;
        SData/*15:0*/ __PVT__dp_in_va_0;
        SData/*15:0*/ __PVT__dp_in_va_1;
        SData/*15:0*/ __PVT__dp_in_va_2;
        SData/*15:0*/ __PVT__dp_in_va_3;
        SData/*9:0*/ __PVT__dp__DOT__fcvt__DOT__subnormal_shamt_lzc_io_in;
        SData/*11:0*/ __PVT__dp__DOT__fcvt_1__DOT__shiftRightJam_io_in;
        SData/*9:0*/ __PVT__dp__DOT__fcvt_1__DOT__subnormal_rounder_io_in;
        SData/*11:0*/ __PVT__dp__DOT__fcvt_1__DOT__shiftRightJam__DOT___io_out_T;
        VL_INW(io_in_bits_matrix_a_data,255,0,8);
        VL_INW(io_in_bits_matrix_b_data,255,0,8);
        VL_INW(io_in_bits_matrix_c_data,255,0,8);
        VL_OUTW(io_out_bits_matrix_d_data,255,0,8);
        IData/*31:0*/ __PVT__dp_io_out_bits_result;
        IData/*31:0*/ __PVT__dp_in_c_0;
        IData/*31:0*/ __PVT__dp_in_c_1;
        IData/*31:0*/ __PVT__dp_in_c_2;
        IData/*31:0*/ __PVT__dp_in_c_3;
        VlWide<8>/*255:0*/ __PVT__dp_in_vb_qual1_2_data;
        IData/*21:0*/ __PVT__dp__DOT__fmul__DOT__resultSigNoShift;
        IData/*21:0*/ __PVT__dp__DOT__fmul_1__DOT__resultSigNoShift;
        IData/*21:0*/ __PVT__dp__DOT__fmul_2__DOT__resultSigNoShift;
        IData/*21:0*/ __PVT__dp__DOT__fmul_3__DOT__resultSigNoShift;
        IData/*31:0*/ __PVT__dp__DOT__pipeline_reg__DOT__dataReg_res_0;
        IData/*31:0*/ __PVT__dp__DOT__pipeline_reg__DOT__dataReg_res_1;
        IData/*31:0*/ __PVT__dp__DOT__pipeline_reg__DOT__dataReg_res_2;
        IData/*31:0*/ __PVT__dp__DOT__pipeline_reg__DOT__dataReg_res_3;
        IData/*31:0*/ __PVT__dp__DOT__pipeline_reg__DOT__dataReg_res_4;
    };
    struct {
        IData/*31:0*/ __PVT__dp__DOT__pipeline_reg_1__DOT__dataReg_res_0;
        IData/*31:0*/ __PVT__dp__DOT__pipeline_reg_1__DOT__dataReg_res_1;
        IData/*31:0*/ __PVT__dp__DOT__pipeline_reg_1__DOT__dataReg_res_2;
        IData/*31:0*/ __PVT__dp__DOT__pipeline_reg_2__DOT__dataReg_res_0;
        IData/*31:0*/ __PVT__dp__DOT__pipeline_reg_2__DOT__dataReg_res_1;
        IData/*31:0*/ __PVT__dp__DOT__pipeline_reg_3__DOT__dataReg_res;
        QData/*63:0*/ __PVT__matrix_d_buffer_0;
        QData/*63:0*/ __PVT__matrix_d_buffer_1;
        QData/*63:0*/ __PVT__matrix_d_buffer_2;
        QData/*63:0*/ __PVT__matrix_d_buffer_3;
        QData/*63:0*/ __PVT__result_fp16;
        QData/*63:0*/ __PVT__result_fp32_lo;
        QData/*63:0*/ __PVT__result_fp32_hi;
        QData/*63:0*/ __PVT___GEN_75;
    };

    // INTERNAL VARIABLES
    VTop__Syms* const vlSymsp;

    // CONSTRUCTORS
    VTop_Threadgroup(VTop__Syms* symsp, const char* v__name);
    ~VTop_Threadgroup();
    VL_UNCOPYABLE(VTop_Threadgroup);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
