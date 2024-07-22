CXXSRC = src/utils/disasm.cc
CXXFLAGS += $(shell llvm-config-11 --cxxflags) -fPIE
LIBS += $(shell llvm-config-11 --libs)

LDFLAGS += $(shell llvm-config --libs)
LDFLAGS += $(shell llvm-config --ldflags)