// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDotProdUnit.h for the primary calling header

#include "verilated.h"

#include "VDotProdUnit__Syms.h"
#include "VDotProdUnit_FADD.h"
#include "VDotProdUnit__Syms.h"

void VDotProdUnit_FADD___ctor_var_reset(VDotProdUnit_FADD* vlSelf);

VDotProdUnit_FADD::VDotProdUnit_FADD(VDotProdUnit__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VDotProdUnit_FADD___ctor_var_reset(this);
}

void VDotProdUnit_FADD::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VDotProdUnit_FADD::~VDotProdUnit_FADD() {
}
