// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_DotProdUnit_1.h"
#include "VTop__Syms.h"

void VTop_DotProdUnit_1___ctor_var_reset(VTop_DotProdUnit_1* vlSelf);

VTop_DotProdUnit_1::VTop_DotProdUnit_1(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_DotProdUnit_1___ctor_var_reset(this);
}

void VTop_DotProdUnit_1::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTop_DotProdUnit_1::~VTop_DotProdUnit_1() {
}
