// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VCORE_TOP_TB__SYMS_H_
#define VERILATED_VCORE_TOP_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vcore_top_tb.h"

// INCLUDE MODULE CLASSES
#include "Vcore_top_tb___024root.h"
#include "Vcore_top_tb___024unit.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vcore_top_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vcore_top_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vcore_top_tb___024root         TOP;

    // CONSTRUCTORS
    Vcore_top_tb__Syms(VerilatedContext* contextp, const char* namep, Vcore_top_tb* modelp);
    ~Vcore_top_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
