// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_Threadgroup.h"
#include "VTop__Syms.h"

void VTop_Threadgroup___ctor_var_reset(VTop_Threadgroup* vlSelf);

VTop_Threadgroup::VTop_Threadgroup(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_Threadgroup___ctor_var_reset(this);
}

void VTop_Threadgroup::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTop_Threadgroup::~VTop_Threadgroup() {
}
