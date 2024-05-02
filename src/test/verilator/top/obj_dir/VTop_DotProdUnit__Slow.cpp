// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_DotProdUnit.h"
#include "VTop__Syms.h"

void VTop_DotProdUnit___ctor_var_reset(VTop_DotProdUnit* vlSelf);

VTop_DotProdUnit::VTop_DotProdUnit(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_DotProdUnit___ctor_var_reset(this);
}

void VTop_DotProdUnit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTop_DotProdUnit::~VTop_DotProdUnit() {
}
