// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSystem.h"
#include "VSystem__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSystem::VSystem(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSystem__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_mixPc{vlSymsp->TOP.io_mixPc}
    , io_exec_en{vlSymsp->TOP.io_exec_en}
    , io_out_ready{vlSymsp->TOP.io_out_ready}
    , io_out_valid{vlSymsp->TOP.io_out_valid}
    , io_out_bits_tc0_octet0_threadgroup0_matrix_d_data{vlSymsp->TOP.io_out_bits_tc0_octet0_threadgroup0_matrix_d_data}
    , io_out_bits_tc0_octet0_threadgroup4_matrix_d_data{vlSymsp->TOP.io_out_bits_tc0_octet0_threadgroup4_matrix_d_data}
    , io_out_bits_tc0_octet1_threadgroup0_matrix_d_data{vlSymsp->TOP.io_out_bits_tc0_octet1_threadgroup0_matrix_d_data}
    , io_out_bits_tc0_octet1_threadgroup4_matrix_d_data{vlSymsp->TOP.io_out_bits_tc0_octet1_threadgroup4_matrix_d_data}
    , io_out_bits_tc1_octet0_threadgroup0_matrix_d_data{vlSymsp->TOP.io_out_bits_tc1_octet0_threadgroup0_matrix_d_data}
    , io_out_bits_tc1_octet0_threadgroup4_matrix_d_data{vlSymsp->TOP.io_out_bits_tc1_octet0_threadgroup4_matrix_d_data}
    , io_out_bits_tc1_octet1_threadgroup0_matrix_d_data{vlSymsp->TOP.io_out_bits_tc1_octet1_threadgroup0_matrix_d_data}
    , io_out_bits_tc1_octet1_threadgroup4_matrix_d_data{vlSymsp->TOP.io_out_bits_tc1_octet1_threadgroup4_matrix_d_data}
    , __PVT__System__DOT__top__DOT__tc__DOT__ot{vlSymsp->TOP.__PVT__System__DOT__top__DOT__tc__DOT__ot}
    , __PVT__System__DOT__top__DOT__tc__DOT__ot_1{vlSymsp->TOP.__PVT__System__DOT__top__DOT__tc__DOT__ot_1}
    , __PVT__System__DOT__top__DOT__tc_1__DOT__ot{vlSymsp->TOP.__PVT__System__DOT__top__DOT__tc_1__DOT__ot}
    , __PVT__System__DOT__top__DOT__tc_1__DOT__ot_1{vlSymsp->TOP.__PVT__System__DOT__top__DOT__tc_1__DOT__ot_1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSystem::VSystem(const char* _vcname__)
    : VSystem(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSystem::~VSystem() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSystem___024root___eval_debug_assertions(VSystem___024root* vlSelf);
#endif  // VL_DEBUG
void VSystem___024root___eval_static(VSystem___024root* vlSelf);
void VSystem___024root___eval_initial(VSystem___024root* vlSelf);
void VSystem___024root___eval_settle(VSystem___024root* vlSelf);
void VSystem___024root___eval(VSystem___024root* vlSelf);

void VSystem::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSystem::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSystem___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSystem___024root___eval_static(&(vlSymsp->TOP));
        VSystem___024root___eval_initial(&(vlSymsp->TOP));
        VSystem___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSystem___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSystem::eventsPending() { return false; }

uint64_t VSystem::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSystem::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSystem___024root___eval_final(VSystem___024root* vlSelf);

VL_ATTR_COLD void VSystem::final() {
    VSystem___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSystem::hierName() const { return vlSymsp->name(); }
const char* VSystem::modelName() const { return "VSystem"; }
unsigned VSystem::threads() const { return 1; }
void VSystem::prepareClone() const { contextp()->prepareClone(); }
void VSystem::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VSystem::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VSystem___024root__trace_init_top(VSystem___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSystem___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSystem___024root*>(voidSelf);
    VSystem__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSystem___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSystem___024root__trace_register(VSystem___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSystem::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VSystem::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSystem___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
