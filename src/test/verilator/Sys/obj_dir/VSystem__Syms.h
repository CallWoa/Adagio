// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSYSTEM__SYMS_H_
#define VERILATED_VSYSTEM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VSystem.h"

// INCLUDE MODULE CLASSES
#include "VSystem___024root.h"
#include "VSystem_Octet.h"
#include "VSystem_DotProdUnit.h"
#include "VSystem_FADD.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VSystem__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VSystem* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VSystem___024root              TOP;
    VSystem_Octet                  TOP__System__DOT__top__DOT__tc_1__DOT__ot;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_1__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_2__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg_1__DOT__dp_3__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp_1__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp_2__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp_3;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot__tg__DOT__dp_3__faddModule_3;
    VSystem_Octet                  TOP__System__DOT__top__DOT__tc_1__DOT__ot_1;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_1__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_2__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_1__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_2__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc_1__DOT__ot_1__tg__DOT__dp_3__faddModule_3;
    VSystem_Octet                  TOP__System__DOT__top__DOT__tc__DOT__ot;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp_1__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp_2__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp_3;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg_1__DOT__dp_3__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp_1__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp_2__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp_3;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot__tg__DOT__dp_3__faddModule_3;
    VSystem_Octet                  TOP__System__DOT__top__DOT__tc__DOT__ot_1;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_1__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_2__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg_1__DOT__dp_3__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp_1__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp_2__faddModule_3;
    VSystem_DotProdUnit            TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp_3;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule_1;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule_2;
    VSystem_FADD                   TOP__System__DOT__top__DOT__tc__DOT__ot_1__tg__DOT__dp_3__faddModule_3;

    // CONSTRUCTORS
    VSystem__Syms(VerilatedContext* contextp, const char* namep, VSystem* modelp);
    ~VSystem__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
