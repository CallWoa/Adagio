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
    VDotProdUnit_FADD* __PVT__DotProdUnit__DOT__faddModule;
    VDotProdUnit_FADD* __PVT__DotProdUnit__DOT__faddModule_1;
    VDotProdUnit_FADD* __PVT__DotProdUnit__DOT__faddModule_2;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(io_in_ready,0,0);
        VL_IN8(io_in_valid,0,0);
        VL_IN8(io_in_bits_roundingMode,2,0);
        VL_IN8(io_out_ready,0,0);
        VL_OUT8(io_out_valid,0,0);
        VL_OUT8(io_out_bits_fflags,4,0);
        CData/*0:0*/ DotProdUnit__DOT__handshaked;
        CData/*0:0*/ DotProdUnit__DOT__valid;
        CData/*0:0*/ DotProdUnit__DOT___GEN_9;
        CData/*0:0*/ DotProdUnit__DOT__a_flag_isNaN;
        CData/*0:0*/ DotProdUnit__DOT__a_flag_isInf;
        CData/*0:0*/ DotProdUnit__DOT__a_flag_isInv;
        CData/*0:0*/ DotProdUnit__DOT__b_flag_isNaN;
        CData/*0:0*/ DotProdUnit__DOT__b_flag_isInf;
        CData/*0:0*/ DotProdUnit__DOT__b_flag_isInv;
        CData/*0:0*/ DotProdUnit__DOT__prehandshaked_1;
        CData/*0:0*/ DotProdUnit__DOT__valid_1;
        CData/*0:0*/ DotProdUnit__DOT___GEN_21;
        CData/*0:0*/ DotProdUnit__DOT__a_flag_1_isNaN;
        CData/*0:0*/ DotProdUnit__DOT__a_flag_1_isInf;
        CData/*0:0*/ DotProdUnit__DOT__a_flag_1_isInv;
        CData/*0:0*/ DotProdUnit__DOT__b_flag_1_isNaN;
        CData/*0:0*/ DotProdUnit__DOT__b_flag_1_isInf;
        CData/*0:0*/ DotProdUnit__DOT__b_flag_1_isInv;
        CData/*0:0*/ DotProdUnit__DOT__prehandshaked_2;
        CData/*0:0*/ DotProdUnit__DOT__valid_2;
        CData/*0:0*/ DotProdUnit__DOT___GEN_33;
        CData/*0:0*/ DotProdUnit__DOT__fmul__DOT__decode_a_isNaN;
        CData/*0:0*/ DotProdUnit__DOT__fmul__DOT__decode_b_isNaN;
        CData/*0:0*/ DotProdUnit__DOT__fmul__DOT__hasZero;
        CData/*0:0*/ DotProdUnit__DOT__fmul__DOT__resultSign;
        CData/*7:0*/ DotProdUnit__DOT__fmul__DOT__resultExpNoShift;
        CData/*3:0*/ DotProdUnit__DOT__fmul__DOT__lzcRaw;
        CData/*3:0*/ DotProdUnit__DOT__fmul__DOT__lzc;
        CData/*0:0*/ DotProdUnit__DOT__fmul__DOT__shiftLimit;
        CData/*7:0*/ DotProdUnit__DOT__fmul__DOT___resultSigShifted_T;
        CData/*0:0*/ DotProdUnit__DOT__fmul__DOT__hasNaN;
        CData/*0:0*/ DotProdUnit__DOT__fmul__DOT__hasInf;
        CData/*0:0*/ DotProdUnit__DOT__fmul__DOT__zero_mul_inf;
        CData/*0:0*/ DotProdUnit__DOT__fmul__DOT__nan_result;
        CData/*0:0*/ DotProdUnit__DOT__fmul_1__DOT__decode_a_isNaN;
        CData/*0:0*/ DotProdUnit__DOT__fmul_1__DOT__decode_b_isNaN;
        CData/*0:0*/ DotProdUnit__DOT__fmul_1__DOT__hasZero;
        CData/*0:0*/ DotProdUnit__DOT__fmul_1__DOT__resultSign;
        CData/*7:0*/ DotProdUnit__DOT__fmul_1__DOT__resultExpNoShift;
        CData/*3:0*/ DotProdUnit__DOT__fmul_1__DOT__lzcRaw;
        CData/*3:0*/ DotProdUnit__DOT__fmul_1__DOT__lzc;
        CData/*0:0*/ DotProdUnit__DOT__fmul_1__DOT__shiftLimit;
        CData/*7:0*/ DotProdUnit__DOT__fmul_1__DOT___resultSigShifted_T;
        CData/*0:0*/ DotProdUnit__DOT__fmul_1__DOT__hasNaN;
        CData/*0:0*/ DotProdUnit__DOT__fmul_1__DOT__hasInf;
        CData/*0:0*/ DotProdUnit__DOT__fmul_1__DOT__zero_mul_inf;
        CData/*0:0*/ DotProdUnit__DOT__fmul_1__DOT__nan_result;
        CData/*0:0*/ DotProdUnit__DOT__fmul_2__DOT__decode_a_isNaN;
        CData/*0:0*/ DotProdUnit__DOT__fmul_2__DOT__decode_b_isNaN;
        CData/*0:0*/ DotProdUnit__DOT__fmul_2__DOT__hasZero;
        CData/*0:0*/ DotProdUnit__DOT__fmul_2__DOT__resultSign;
        CData/*7:0*/ DotProdUnit__DOT__fmul_2__DOT__resultExpNoShift;
        CData/*3:0*/ DotProdUnit__DOT__fmul_2__DOT__lzcRaw;
        CData/*3:0*/ DotProdUnit__DOT__fmul_2__DOT__lzc;
        CData/*0:0*/ DotProdUnit__DOT__fmul_2__DOT__shiftLimit;
        CData/*7:0*/ DotProdUnit__DOT__fmul_2__DOT___resultSigShifted_T;
    };
    struct {
        CData/*0:0*/ DotProdUnit__DOT__fmul_2__DOT__hasNaN;
        CData/*0:0*/ DotProdUnit__DOT__fmul_2__DOT__hasInf;
        CData/*0:0*/ DotProdUnit__DOT__fmul_2__DOT__zero_mul_inf;
        CData/*0:0*/ DotProdUnit__DOT__fmul_2__DOT__nan_result;
        CData/*0:0*/ DotProdUnit__DOT__fmul_3__DOT__decode_a_isNaN;
        CData/*0:0*/ DotProdUnit__DOT__fmul_3__DOT__decode_b_isNaN;
        CData/*0:0*/ DotProdUnit__DOT__fmul_3__DOT__hasZero;
        CData/*0:0*/ DotProdUnit__DOT__fmul_3__DOT__resultSign;
        CData/*7:0*/ DotProdUnit__DOT__fmul_3__DOT__resultExpNoShift;
        CData/*3:0*/ DotProdUnit__DOT__fmul_3__DOT__lzcRaw;
        CData/*3:0*/ DotProdUnit__DOT__fmul_3__DOT__lzc;
        CData/*0:0*/ DotProdUnit__DOT__fmul_3__DOT__shiftLimit;
        CData/*7:0*/ DotProdUnit__DOT__fmul_3__DOT___resultSigShifted_T;
        CData/*0:0*/ DotProdUnit__DOT__fmul_3__DOT__hasNaN;
        CData/*0:0*/ DotProdUnit__DOT__fmul_3__DOT__hasInf;
        CData/*0:0*/ DotProdUnit__DOT__fmul_3__DOT__zero_mul_inf;
        CData/*0:0*/ DotProdUnit__DOT__fmul_3__DOT__nan_result;
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
        SData/*15:0*/ DotProdUnit__DOT__vec_a_0;
        SData/*15:0*/ DotProdUnit__DOT__vec_a_1;
        SData/*15:0*/ DotProdUnit__DOT__vec_a_2;
        SData/*15:0*/ DotProdUnit__DOT__vec_a_3;
        SData/*15:0*/ DotProdUnit__DOT__vec_b_0;
        SData/*15:0*/ DotProdUnit__DOT__vec_b_1;
        SData/*15:0*/ DotProdUnit__DOT__vec_b_2;
        SData/*15:0*/ DotProdUnit__DOT__vec_b_3;
        VL_OUT(io_out_bits_result,31,0);
        IData/*31:0*/ DotProdUnit__DOT__faddModule_io_in_bits_a_r;
        IData/*31:0*/ DotProdUnit__DOT__faddModule_io_in_bits_b_r;
        IData/*31:0*/ DotProdUnit__DOT__faddModule_io_in_bits_a_r_1;
        IData/*31:0*/ DotProdUnit__DOT__faddModule_io_in_bits_b_r_1;
        IData/*31:0*/ DotProdUnit__DOT__faddModule_io_in_bits_a_r_2;
        IData/*31:0*/ DotProdUnit__DOT__faddModule_io_in_bits_b_r_2;
        IData/*21:0*/ DotProdUnit__DOT__fmul__DOT__resultSigNoShift;
        IData/*21:0*/ DotProdUnit__DOT__fmul_1__DOT__resultSigNoShift;
        IData/*21:0*/ DotProdUnit__DOT__fmul_2__DOT__resultSigNoShift;
        IData/*21:0*/ DotProdUnit__DOT__fmul_3__DOT__resultSigNoShift;
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
