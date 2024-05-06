// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSystem.h for the primary calling header

#include "verilated.h"

#include "VSystem__Syms.h"
#include "VSystem_Octet.h"
#include "VSystem__Syms.h"

void VSystem_Octet___ctor_var_reset(VSystem_Octet* vlSelf);

VSystem_Octet::VSystem_Octet(VSystem__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VSystem_Octet___ctor_var_reset(this);
}

void VSystem_Octet::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VSystem_Octet::~VSystem_Octet() {
}
