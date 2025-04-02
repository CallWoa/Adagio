// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VDotProdUnit__Syms.h"
#include "VDotProdUnit.h"
#include "VDotProdUnit___024root.h"
#include "VDotProdUnit_FADD.h"

// FUNCTIONS
VDotProdUnit__Syms::~VDotProdUnit__Syms()
{
}

VDotProdUnit__Syms::VDotProdUnit__Syms(VerilatedContext* contextp, const char* namep, VDotProdUnit* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__DotProdUnit__DOT__addResult_0_faddModule{this, Verilated::catName(namep, "DotProdUnit.addResult_0_faddModule")}
    , TOP__DotProdUnit__DOT__addResult_0_faddModule_1{this, Verilated::catName(namep, "DotProdUnit.addResult_0_faddModule_1")}
    , TOP__DotProdUnit__DOT__addResult_1_faddModule{this, Verilated::catName(namep, "DotProdUnit.addResult_1_faddModule")}
    , TOP__DotProdUnit__DOT__fadd_final_res_faddModule{this, Verilated::catName(namep, "DotProdUnit.fadd_final_res_faddModule")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__DotProdUnit__DOT__addResult_0_faddModule = &TOP__DotProdUnit__DOT__addResult_0_faddModule;
    TOP.__PVT__DotProdUnit__DOT__addResult_0_faddModule_1 = &TOP__DotProdUnit__DOT__addResult_0_faddModule_1;
    TOP.__PVT__DotProdUnit__DOT__addResult_1_faddModule = &TOP__DotProdUnit__DOT__addResult_1_faddModule;
    TOP.__PVT__DotProdUnit__DOT__fadd_final_res_faddModule = &TOP__DotProdUnit__DOT__fadd_final_res_faddModule;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__DotProdUnit__DOT__addResult_0_faddModule.__Vconfigure(true);
    TOP__DotProdUnit__DOT__addResult_0_faddModule_1.__Vconfigure(false);
    TOP__DotProdUnit__DOT__addResult_1_faddModule.__Vconfigure(false);
    TOP__DotProdUnit__DOT__fadd_final_res_faddModule.__Vconfigure(false);
}
