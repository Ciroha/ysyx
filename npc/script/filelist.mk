CXXSRC = src/utils/disasm.cc
CXXFLAGS += $(shell llvm-config --cxxflags) -fPIE
LIBS += $(shell llvm-config --libs)

LDFLAGS += $(shell llvm-config --libs)
LDFLAGS += $(shell llvm-config --ldflags)