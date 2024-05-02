// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_FADD.h"
#include "VTop__Syms.h"

void VTop_FADD___ctor_var_reset(VTop_FADD* vlSelf);

VTop_FADD::VTop_FADD(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_FADD___ctor_var_reset(this);
}

void VTop_FADD::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTop_FADD::~VTop_FADD() {
}
