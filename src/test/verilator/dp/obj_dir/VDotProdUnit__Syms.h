// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDOTPRODUNIT__SYMS_H_
#define VERILATED_VDOTPRODUNIT__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VDotProdUnit.h"

// INCLUDE MODULE CLASSES
#include "VDotProdUnit___024root.h"
#include "VDotProdUnit_FADD.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VDotProdUnit__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VDotProdUnit* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VDotProdUnit___024root         TOP;
    VDotProdUnit_FADD              TOP__DotProdUnit__DOT__faddModule;
    VDotProdUnit_FADD              TOP__DotProdUnit__DOT__faddModule_1;
    VDotProdUnit_FADD              TOP__DotProdUnit__DOT__faddModule_2;

    // CONSTRUCTORS
    VDotProdUnit__Syms(VerilatedContext* contextp, const char* namep, VDotProdUnit* modelp);
    ~VDotProdUnit__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
