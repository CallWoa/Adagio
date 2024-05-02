// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDotProdUnit.h"
#include "VDotProdUnit__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VDotProdUnit::VDotProdUnit(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VDotProdUnit__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_in_ready{vlSymsp->TOP.io_in_ready}
    , io_in_valid{vlSymsp->TOP.io_in_valid}
    , io_in_bits_roundingMode{vlSymsp->TOP.io_in_bits_roundingMode}
    , io_out_ready{vlSymsp->TOP.io_out_ready}
    , io_out_valid{vlSymsp->TOP.io_out_valid}
    , io_out_bits_fflags{vlSymsp->TOP.io_out_bits_fflags}
    , io_in_bits_vec_a_0{vlSymsp->TOP.io_in_bits_vec_a_0}
    , io_in_bits_vec_a_1{vlSymsp->TOP.io_in_bits_vec_a_1}
    , io_in_bits_vec_a_2{vlSymsp->TOP.io_in_bits_vec_a_2}
    , io_in_bits_vec_a_3{vlSymsp->TOP.io_in_bits_vec_a_3}
    , io_in_bits_vec_b_0{vlSymsp->TOP.io_in_bits_vec_b_0}
    , io_in_bits_vec_b_1{vlSymsp->TOP.io_in_bits_vec_b_1}
    , io_in_bits_vec_b_2{vlSymsp->TOP.io_in_bits_vec_b_2}
    , io_in_bits_vec_b_3{vlSymsp->TOP.io_in_bits_vec_b_3}
    , io_out_bits_result{vlSymsp->TOP.io_out_bits_result}
    , __PVT__DotProdUnit__DOT__faddModule{vlSymsp->TOP.__PVT__DotProdUnit__DOT__faddModule}
    , __PVT__DotProdUnit__DOT__faddModule_1{vlSymsp->TOP.__PVT__DotProdUnit__DOT__faddModule_1}
    , __PVT__DotProdUnit__DOT__faddModule_2{vlSymsp->TOP.__PVT__DotProdUnit__DOT__faddModule_2}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VDotProdUnit::VDotProdUnit(const char* _vcname__)
    : VDotProdUnit(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VDotProdUnit::~VDotProdUnit() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VDotProdUnit___024root___eval_debug_assertions(VDotProdUnit___024root* vlSelf);
#endif  // VL_DEBUG
void VDotProdUnit___024root___eval_static(VDotProdUnit___024root* vlSelf);
void VDotProdUnit___024root___eval_initial(VDotProdUnit___024root* vlSelf);
void VDotProdUnit___024root___eval_settle(VDotProdUnit___024root* vlSelf);
void VDotProdUnit___024root___eval(VDotProdUnit___024root* vlSelf);

void VDotProdUnit::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDotProdUnit::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDotProdUnit___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VDotProdUnit___024root___eval_static(&(vlSymsp->TOP));
        VDotProdUnit___024root___eval_initial(&(vlSymsp->TOP));
        VDotProdUnit___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VDotProdUnit___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VDotProdUnit::eventsPending() { return false; }

uint64_t VDotProdUnit::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VDotProdUnit::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VDotProdUnit___024root___eval_final(VDotProdUnit___024root* vlSelf);

VL_ATTR_COLD void VDotProdUnit::final() {
    VDotProdUnit___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VDotProdUnit::hierName() const { return vlSymsp->name(); }
const char* VDotProdUnit::modelName() const { return "VDotProdUnit"; }
unsigned VDotProdUnit::threads() const { return 1; }
void VDotProdUnit::prepareClone() const { contextp()->prepareClone(); }
void VDotProdUnit::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VDotProdUnit::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VDotProdUnit___024root__trace_init_top(VDotProdUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDotProdUnit___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDotProdUnit___024root*>(voidSelf);
    VDotProdUnit__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VDotProdUnit___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VDotProdUnit___024root__trace_register(VDotProdUnit___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VDotProdUnit::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VDotProdUnit::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VDotProdUnit___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
