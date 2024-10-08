#include <dlfcn.h>
#include <common.h>
#include "debug.h"
#include "stdint.h"
#include "memory.h"
#include "cpu.h"

enum { DIFFTEST_TO_DUT, DIFFTEST_TO_REF };
uint32_t gpr[32];
const char *regs1[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

#ifdef CONFIG_DIFFTEST

void isa_reg_display();

void init_difftest(char *ref_so_file, long img_size, int port) {
  assert(ref_so_file != NULL);

  void *handle;
  handle = dlopen(ref_so_file, RTLD_LAZY);
  assert(handle);

  ref_difftest_memcpy = (void (*)(uint32_t addr, void *buf, size_t n, bool direction))dlsym(handle, "difftest_memcpy");
  assert(ref_difftest_memcpy);

  ref_difftest_regcpy = (void (*)(void *dut, bool direction))dlsym(handle, "difftest_regcpy");
  assert(ref_difftest_regcpy);

  ref_difftest_exec = (void (*)(uint64_t n))dlsym(handle, "difftest_exec");
  assert(ref_difftest_exec);

//   ref_difftest_raise_intr = dlsym(handle, "difftest_raise_intr");
//   assert(ref_difftest_raise_intr);

  void (*ref_difftest_init)(int) = (void (*)(int)) dlsym(handle, "difftest_init");
  assert(ref_difftest_init);

  Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
  Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

  ref_difftest_init(port);
  ref_difftest_memcpy(RESET_VECTOR, guest_to_host(RESET_VECTOR), img_size, DIFFTEST_TO_REF);
  sim_cpu.pc = RESET_VECTOR;
  ref_difftest_regcpy(&sim_cpu, DIFFTEST_TO_REF);
}

static void checkregs(CPU_state *ref, vaddr_t pc) {
    bool flag = true;
    if(ref->pc != pc)
        flag = false;
    for(int i = 0; i < 32; i++){
        if(ref->gpr[i] != gpr[i])
            flag = false;
    }
    if(flag == false){
        printf("ref-pc=%x,dut-pc=%x\n",ref->pc, pc);
        for(int i = 0; i < 32; i++){
            if(ref->gpr[i] != gpr[i]){
                if(ref->gpr[i] > RESET_VECTOR){
                    printf("ref-reg-%3s     %x\n",regs1[i],ref->gpr[i]);
                }
                else {
                    printf("ref-reg-%3s     %d\n",regs1[i],ref->gpr[i]);
                }
            }
        }
        printf("NPC:\n");
        isa_reg_display();
    }
}

void difftest_step() {
    CPU_state ref_r;
    ref_difftest_regcpy(&ref_r, DIFFTEST_TO_DUT);
    // difftest_memcpy(CONFIG_MBASE, ref_pmem, CONFIG_MSIZE, DIFFTEST_TO_DUT);
    checkregs(&ref_r, sim_cpu.pc);
    ref_difftest_exec(1);
    // checkmem(ref_pmem, sim_cpu.pc);
}
#else
void init_difftest(char *ref_so_file, long img_size, int port) { }
#endif