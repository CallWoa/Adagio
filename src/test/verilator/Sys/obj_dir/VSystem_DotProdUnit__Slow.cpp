// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystem.h for the primary calling header

#include "verilated.h"

#include "VSystem__Syms.h"
#include "VSystem_DotProdUnit.h"
#include "VSystem__Syms.h"

void VSystem_DotProdUnit___ctor_var_reset(VSystem_DotProdUnit* vlSelf);

VSystem_DotProdUnit::VSystem_DotProdUnit(VSystem__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSystem_DotProdUnit___ctor_var_reset(this);
}

void VSystem_DotProdUnit::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSystem_DotProdUnit::~VSystem_DotProdUnit() {
}
