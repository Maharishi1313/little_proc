// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vrs_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vrs_tb::Vrs_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vrs_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vrs_tb::Vrs_tb(const char* _vcname__)
    : Vrs_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vrs_tb::~Vrs_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vrs_tb___024root___eval_debug_assertions(Vrs_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vrs_tb___024root___eval_static(Vrs_tb___024root* vlSelf);
void Vrs_tb___024root___eval_initial(Vrs_tb___024root* vlSelf);
void Vrs_tb___024root___eval_settle(Vrs_tb___024root* vlSelf);
void Vrs_tb___024root___eval(Vrs_tb___024root* vlSelf);

void Vrs_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vrs_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vrs_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vrs_tb___024root___eval_static(&(vlSymsp->TOP));
        Vrs_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vrs_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vrs_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vrs_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vrs_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vrs_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vrs_tb___024root___eval_final(Vrs_tb___024root* vlSelf);

VL_ATTR_COLD void Vrs_tb::final() {
    Vrs_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vrs_tb::hierName() const { return vlSymsp->name(); }
const char* Vrs_tb::modelName() const { return "Vrs_tb"; }
unsigned Vrs_tb::threads() const { return 1; }
void Vrs_tb::prepareClone() const { contextp()->prepareClone(); }
void Vrs_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vrs_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vrs_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vrs_tb___024root__trace_init_top(Vrs_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vrs_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vrs_tb___024root*>(voidSelf);
    Vrs_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vrs_tb___024root__trace_decl_types(tracep);
    Vrs_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vrs_tb___024root__trace_register(Vrs_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vrs_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vrs_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vrs_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
