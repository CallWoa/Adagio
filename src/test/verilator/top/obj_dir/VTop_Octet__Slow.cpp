// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "verilated.h"

#include "VTop__Syms.h"
#include "VTop_Octet.h"
#include "VTop__Syms.h"

void VTop_Octet___ctor_var_reset(VTop_Octet* vlSelf);

VTop_Octet::VTop_Octet(VTop__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VTop_Octet___ctor_var_reset(this);
}

void VTop_Octet::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VTop_Octet::~VTop_Octet() {
}
