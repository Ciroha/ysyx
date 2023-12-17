all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	gtkwave wave.vcd	

switch_to_vcd:
	verilator -Wall top.v test.cpp --cc --trace --exe --build
	

include ../Makefile
