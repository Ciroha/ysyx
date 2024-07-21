# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vysyx_23060332_top.mk

default: /home/ciroha/ysyx-workbench/npc/builds/ysyx_23060332_top

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vysyx_23060332_top
# Module prefix (from --prefix)
VM_MODPREFIX = Vysyx_23060332_top
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-I/home/ciroha/ysyx-workbench/npc/csrc/tb/include \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-L/usr/lib/llvm-14/lib  -lreadline \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	cpu_exec \
	wave \
	main \
	memory \
	monitor \
	sdb \
	reg \
	disasm \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/ciroha/ysyx-workbench/npc/csrc/tb \
	/home/ciroha/ysyx-workbench/npc/csrc/tb/cpu \
	/home/ciroha/ysyx-workbench/npc/csrc/tb/memory \
	/home/ciroha/ysyx-workbench/npc/csrc/tb/monitor \
	/home/ciroha/ysyx-workbench/npc/csrc/tb/monitor/sdb \
	/home/ciroha/ysyx-workbench/npc/csrc/tb/riscv \
	/home/ciroha/ysyx-workbench/npc/csrc/tb/utils \


### Default rules...
# Include list of all generated classes
include Vysyx_23060332_top_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

cpu_exec.o: /home/ciroha/ysyx-workbench/npc/csrc/tb/cpu/cpu_exec.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
wave.o: /home/ciroha/ysyx-workbench/npc/csrc/tb/cpu/wave.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: /home/ciroha/ysyx-workbench/npc/csrc/tb/main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
memory.o: /home/ciroha/ysyx-workbench/npc/csrc/tb/memory/memory.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/ciroha/ysyx-workbench/npc/csrc/tb/monitor/monitor.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/ciroha/ysyx-workbench/npc/csrc/tb/monitor/sdb/sdb.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
reg.o: /home/ciroha/ysyx-workbench/npc/csrc/tb/riscv/reg.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/ciroha/ysyx-workbench/npc/csrc/tb/utils/disasm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/ciroha/ysyx-workbench/npc/builds/ysyx_23060332_top: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
