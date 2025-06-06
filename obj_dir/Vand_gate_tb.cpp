// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vand_gate_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vand_gate_tb::Vand_gate_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vand_gate_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vand_gate_tb::Vand_gate_tb(const char* _vcname__)
    : Vand_gate_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vand_gate_tb::~Vand_gate_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vand_gate_tb___024root___eval_debug_assertions(Vand_gate_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vand_gate_tb___024root___eval_static(Vand_gate_tb___024root* vlSelf);
void Vand_gate_tb___024root___eval_initial(Vand_gate_tb___024root* vlSelf);
void Vand_gate_tb___024root___eval_settle(Vand_gate_tb___024root* vlSelf);
void Vand_gate_tb___024root___eval(Vand_gate_tb___024root* vlSelf);

void Vand_gate_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vand_gate_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vand_gate_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vand_gate_tb___024root___eval_static(&(vlSymsp->TOP));
        Vand_gate_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vand_gate_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vand_gate_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vand_gate_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vand_gate_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vand_gate_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vand_gate_tb___024root___eval_final(Vand_gate_tb___024root* vlSelf);

VL_ATTR_COLD void Vand_gate_tb::final() {
    Vand_gate_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vand_gate_tb::hierName() const { return vlSymsp->name(); }
const char* Vand_gate_tb::modelName() const { return "Vand_gate_tb"; }
unsigned Vand_gate_tb::threads() const { return 1; }
void Vand_gate_tb::prepareClone() const { contextp()->prepareClone(); }
void Vand_gate_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vand_gate_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vand_gate_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vand_gate_tb___024root__trace_init_top(Vand_gate_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vand_gate_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vand_gate_tb___024root*>(voidSelf);
    Vand_gate_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vand_gate_tb___024root__trace_decl_types(tracep);
    Vand_gate_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vand_gate_tb___024root__trace_register(Vand_gate_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vand_gate_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vand_gate_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vand_gate_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
