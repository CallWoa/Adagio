# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See VSystem.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	VSystem \
	VSystem___024root__DepSet_h8e0c2158__0 \
	VSystem___024root__DepSet_he42546e9__0 \
	VSystem_Octet__DepSet_h021fb5c2__0 \
	VSystem_Octet__DepSet_hdb62f726__0 \
	VSystem_DotProdUnit__DepSet_hfd9732ef__0 \
	VSystem_DotProdUnit__DepSet_hfd9732ef__1 \
	VSystem_DotProdUnit__DepSet_hfd9732ef__2 \
	VSystem_DotProdUnit__DepSet_hfd9732ef__3 \
	VSystem_DotProdUnit__DepSet_hfd9732ef__4 \
	VSystem_DotProdUnit__DepSet_h58b7cedb__0 \
	VSystem_FADD__DepSet_ha42803d6__0 \
	VSystem_FADD__DepSet_ha42803d6__1 \
	VSystem_FADD__DepSet_ha42803d6__2 \
	VSystem_FADD__DepSet_ha42803d6__3 \
	VSystem_FADD__DepSet_ha42803d6__4 \
	VSystem_FADD__DepSet_ha42803d6__5 \
	VSystem_FADD__DepSet_ha42803d6__6 \
	VSystem_FADD__DepSet_ha42803d6__7 \
	VSystem_FADD__DepSet_ha42803d6__8 \
	VSystem_FADD__DepSet_ha42803d6__9 \
	VSystem_FADD__DepSet_ha42803d6__10 \
	VSystem_FADD__DepSet_ha42803d6__11 \
	VSystem_FADD__DepSet_ha42803d6__12 \
	VSystem_FADD__DepSet_ha42803d6__13 \
	VSystem_FADD__DepSet_ha42803d6__14 \
	VSystem_FADD__DepSet_ha42803d6__15 \
	VSystem_FADD__DepSet_ha42803d6__16 \
	VSystem_FADD__DepSet_ha42803d6__17 \
	VSystem_FADD__DepSet_ha42803d6__18 \
	VSystem_FADD__DepSet_ha42803d6__19 \
	VSystem_FADD__DepSet_ha42803d6__20 \
	VSystem_FADD__DepSet_ha42803d6__21 \
	VSystem_FADD__DepSet_ha42803d6__22 \
	VSystem_FADD__DepSet_ha42803d6__23 \
	VSystem_FADD__DepSet_ha42803d6__24 \
	VSystem_FADD__DepSet_ha42803d6__25 \
	VSystem_FADD__DepSet_ha42803d6__26 \
	VSystem_FADD__DepSet_ha42803d6__27 \
	VSystem_FADD__DepSet_ha42803d6__28 \
	VSystem_FADD__DepSet_ha42803d6__29 \
	VSystem_FADD__DepSet_ha42803d6__30 \
	VSystem_FADD__DepSet_ha42803d6__31 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	VSystem___024root__Slow \
	VSystem___024root__DepSet_h8e0c2158__0__Slow \
	VSystem___024root__DepSet_he42546e9__0__Slow \
	VSystem_Octet__Slow \
	VSystem_Octet__DepSet_h49b2503b__0__Slow \
	VSystem_Octet__DepSet_hbdaac10b__0__Slow \
	VSystem_Octet__DepSet_hdb62f726__0__Slow \
	VSystem_DotProdUnit__Slow \
	VSystem_DotProdUnit__DepSet_ha41bdf5a__0__Slow \
	VSystem_DotProdUnit__DepSet_h58b7cedb__0__Slow \
	VSystem_DotProdUnit__DepSet_h58b7cedb__1__Slow \
	VSystem_DotProdUnit__DepSet_h58b7cedb__2__Slow \
	VSystem_DotProdUnit__DepSet_h58b7cedb__3__Slow \
	VSystem_FADD__Slow \
	VSystem_FADD__DepSet_h543956f1__0__Slow \
	VSystem_FADD__DepSet_ha42803d6__0__Slow \
	VSystem_FADD__DepSet_ha42803d6__1__Slow \
	VSystem_FADD__DepSet_ha42803d6__2__Slow \
	VSystem_FADD__DepSet_ha42803d6__3__Slow \
	VSystem_FADD__DepSet_ha42803d6__4__Slow \
	VSystem_FADD__DepSet_ha42803d6__5__Slow \
	VSystem_FADD__DepSet_ha42803d6__6__Slow \
	VSystem_FADD__DepSet_ha42803d6__7__Slow \
	VSystem_FADD__DepSet_ha42803d6__8__Slow \
	VSystem_FADD__DepSet_ha42803d6__9__Slow \
	VSystem_FADD__DepSet_ha42803d6__10__Slow \
	VSystem_FADD__DepSet_ha42803d6__11__Slow \
	VSystem_FADD__DepSet_ha42803d6__12__Slow \
	VSystem_FADD__DepSet_ha42803d6__13__Slow \
	VSystem_FADD__DepSet_ha42803d6__14__Slow \
	VSystem_FADD__DepSet_ha42803d6__15__Slow \
	VSystem_FADD__DepSet_ha42803d6__16__Slow \
	VSystem_FADD__DepSet_ha42803d6__17__Slow \
	VSystem_FADD__DepSet_ha42803d6__18__Slow \
	VSystem_FADD__DepSet_ha42803d6__19__Slow \
	VSystem_FADD__DepSet_ha42803d6__20__Slow \
	VSystem_FADD__DepSet_ha42803d6__21__Slow \
	VSystem_FADD__DepSet_ha42803d6__22__Slow \
	VSystem_FADD__DepSet_ha42803d6__23__Slow \
	VSystem_FADD__DepSet_ha42803d6__24__Slow \
	VSystem_FADD__DepSet_ha42803d6__25__Slow \
	VSystem_FADD__DepSet_ha42803d6__26__Slow \
	VSystem_FADD__DepSet_ha42803d6__27__Slow \
	VSystem_FADD__DepSet_ha42803d6__28__Slow \
	VSystem_FADD__DepSet_ha42803d6__29__Slow \
	VSystem_FADD__DepSet_ha42803d6__30__Slow \
	VSystem_FADD__DepSet_ha42803d6__31__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	VSystem__Trace__0 \
	VSystem__Trace__1 \
	VSystem__Trace__2 \
	VSystem__Trace__3 \
	VSystem__Trace__4 \
	VSystem__Trace__5 \
	VSystem__Trace__6 \
	VSystem__Trace__7 \
	VSystem__Trace__8 \
	VSystem__Trace__9 \
	VSystem__Trace__10 \
	VSystem__Trace__11 \
	VSystem__Trace__12 \
	VSystem__Trace__13 \
	VSystem__Trace__14 \
	VSystem__Trace__15 \
	VSystem__Trace__16 \
	VSystem__Trace__17 \
	VSystem__Trace__18 \
	VSystem__Trace__19 \
	VSystem__Trace__20 \
	VSystem__Trace__21 \
	VSystem__Trace__22 \
	VSystem__Trace__23 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	VSystem__Syms \
	VSystem__Trace__0__Slow \
	VSystem__Trace__1__Slow \
	VSystem__Trace__2__Slow \
	VSystem__Trace__3__Slow \
	VSystem__Trace__4__Slow \
	VSystem__Trace__5__Slow \
	VSystem__Trace__6__Slow \
	VSystem__Trace__7__Slow \
	VSystem__Trace__8__Slow \
	VSystem__Trace__9__Slow \
	VSystem__Trace__10__Slow \
	VSystem__Trace__11__Slow \
	VSystem__Trace__12__Slow \
	VSystem__Trace__13__Slow \
	VSystem__Trace__14__Slow \
	VSystem__Trace__15__Slow \
	VSystem__Trace__16__Slow \
	VSystem__Trace__17__Slow \
	VSystem__Trace__18__Slow \
	VSystem__Trace__19__Slow \
	VSystem__Trace__20__Slow \
	VSystem__Trace__21__Slow \
	VSystem__Trace__22__Slow \
	VSystem__Trace__23__Slow \
	VSystem__Trace__24__Slow \
	VSystem__Trace__25__Slow \
	VSystem__Trace__26__Slow \
	VSystem__Trace__27__Slow \
	VSystem__Trace__28__Slow \
	VSystem__Trace__29__Slow \
	VSystem__Trace__30__Slow \
	VSystem__Trace__31__Slow \
	VSystem__Trace__32__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
