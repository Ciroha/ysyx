#top name
TOPNAME = ysyx_23060332_top

#some build's dir variable
BUILD_DIR = ./builds
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)


#verilator variable
ifeq ($(VERILATOR_ROOT),)
VERILATOR = verilator
else
export VERILATOR_ROOT
VERILATOR = $(VERILATOR_ROOT)/bin/verilator
endif

#verilator flag
VERILATOR_FLAGS += -MMD -cc -O3  --build --x-assign fast --x-initial fast --noassert
VERILATOR_FLAGS += --trace -I/home/ciroha/ysyx-workbench/npc/vsrc/

#source code
VSRCS = $(shell find $(abspath ./vsrc) -name "*.v" -or -name "*.sv")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")

# Include all filelist.mk to merge file lists
FILELIST_MK = $(shell find -L  -name "filelist.mk")
include $(FILELIST_MK)
# include $(NPC_HOME)/script/filelist.mk

CFLAGS_BUILD += $(call remove_quote,$(CONFIG_CC_OPT))
CFLAGS_BUILD += $(if $(CONFIG_CC_LTO),-flto,)
CFLAGS_BUILD += $(if $(CONFIG_CC_DEBUG),-Og -ggdb3,)
CFLAGS_BUILD += $(if $(CONFIG_CC_ASAN),-fsanitize=address,)

# LDFLAGS += $(CFLAGS_BUILD)

LDFLAGS := -O2 $(LDFLAGS)
# #sta 
# include $(NPC_HOME)/script/yosys-sta.mk

#sim
include $(NPC_HOME)/script/sim.mk

# #nvb
# include $(NPC_HOME)/script/sim_nvb.mk 

#main makefile in all project
include ../Makefile

.PHONY:clean run

run: sim
	$(NPC_HOME)/builds/$(TOPNAME) $(IMG)

clean:
	-rm -rf builds/* result top.dot top.png vsrc/*.png