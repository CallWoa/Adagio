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
#include "VTop_Octet.h"
#include "VTop_DotProdUnit.h"
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
    VTop_Octet                     TOP__Top__DOT__tc_1__DOT__ot;
    VTop_DotProdUnit               TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule_3;
    VTop_Octet                     TOP__Top__DOT__tc_1__DOT__ot_1;
    VTop_DotProdUnit               TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule_3;
    VTop_Octet                     TOP__Top__DOT__tc__DOT__ot;
    VTop_DotProdUnit               TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule_3;
    VTop_Octet                     TOP__Top__DOT__tc__DOT__ot_1;
    VTop_DotProdUnit               TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule_3;
    VTop_DotProdUnit               TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule_1;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule_2;
    VTop_FADD                      TOP__Top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule_3;

    // CONSTRUCTORS
    VTop__Syms(VerilatedContext* contextp, const char* namep, VTop* modelp);
    ~VTop__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
