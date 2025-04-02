// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP__SYMS_H_
#define VERILATED_VTOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VTop.h"

// INCLUDE MODULE CLASSES
#include "VTop___024root.h"
#include "VTop_Threadgroup.h"
#include "VTop_DotProdUnit_1.h"
#include "VTop_FADD.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VTop__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTop* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTop___024root                 TOP;
    VTop_Threadgroup               TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_1__final_fadd_faddModule;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_2__final_fadd_faddModule;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp_3__final_fadd_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp__DOT__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp__DOT__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp__DOT__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg__dp__DOT__final_fadd_faddModule;
    VTop_Threadgroup               TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_1__final_fadd_faddModule;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_2__final_fadd_faddModule;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp_3__final_fadd_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__DOT__tg_1__dp__DOT__final_fadd_faddModule;
    VTop_Threadgroup               TOP__Top__DOT__tc_1__DOT__ot__DOT__tg;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_1__final_fadd_faddModule;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_2__final_fadd_faddModule;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp_3__final_fadd_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp__DOT__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp__DOT__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp__DOT__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg__dp__DOT__final_fadd_faddModule;
    VTop_Threadgroup               TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_1__final_fadd_faddModule;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_2__final_fadd_faddModule;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp_3__final_fadd_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp__DOT__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp__DOT__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp__DOT__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__DOT__tg_1__dp__DOT__final_fadd_faddModule;
    VTop_Threadgroup               TOP__Top__DOT__tc__DOT__ot_1__DOT__tg;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_1__final_fadd_faddModule;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_2__final_fadd_faddModule;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp_3__final_fadd_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp__DOT__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp__DOT__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp__DOT__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg__dp__DOT__final_fadd_faddModule;
    VTop_Threadgroup               TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_1__final_fadd_faddModule;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_2__final_fadd_faddModule;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp_3__final_fadd_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp__DOT__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__DOT__tg_1__dp__DOT__final_fadd_faddModule;
    VTop_Threadgroup               TOP__Top__DOT__tc__DOT__ot__DOT__tg;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_1__final_fadd_faddModule;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_2__final_fadd_faddModule;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp_3__final_fadd_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp__DOT__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp__DOT__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp__DOT__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg__dp__DOT__final_fadd_faddModule;
    VTop_Threadgroup               TOP__Top__DOT__tc__DOT__ot__DOT__tg_1;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_1__final_fadd_faddModule;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_2__final_fadd_faddModule;
    VTop_DotProdUnit_1             TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp_3__final_fadd_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp__DOT__addResult_0_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp__DOT__addResult_0_faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp__DOT__addResult_1_faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__DOT__tg_1__dp__DOT__final_fadd_faddModule;

    // CONSTRUCTORS
    VTop__Syms(VerilatedContext* contextp, const char* namep, VTop* modelp);
    ~VTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
