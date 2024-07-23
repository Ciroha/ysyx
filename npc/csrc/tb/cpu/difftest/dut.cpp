#include <dlfcn.h>
#include <common.h>
#include "debug.h"
#include "stdint.h"

void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;
void (*ref_difftest_raise_intr)(uint64_t NO) = NULL;

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
  ref_difftest_regcpy(&sim_cpu, DIFFTEST_TO_REF);
}

static void checkregs(CPU_state *ref, vaddr_t pc) {
    bool flag = true;
    if(ref->pc != cpu.pc)
        flag = false;
    for(int i = 0; i < reg_num; i++){
        if(ref->gpr[i] != gpr[i])
            flag = false;
    }
    if(flag == false){
        printf("ref-pc=%x,dut-pc=%x\n",ref->pc, cpu.pc);
        for(int i = 0; i < reg_num; i++){
            printf("ref-reg-%3s     %d\n",regs[i],ref->gpr[i]);
        }
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