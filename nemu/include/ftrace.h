#include <common.h>
#define MAX_FUNC 100 //TODO 如果出现vfprintf的错误，可能是函数不够导致的
enum{
    JAL, JALR,
    CALL, RET
};

void init_ftrace(char *elf_file);
void ftrace_write(int type, char *fname, vaddr_t caddr, vaddr_t addr);
char *find_func(vaddr_t addr);
