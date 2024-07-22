#include <common.h>
#define MAX_FUNC 40
enum{
    JAL, JALR,
    CALL, RET
};

void init_ftrace(char *elf_file);
void ftrace_write(int type, char *fname, uint32_t caddr, uint32_t addr);
char *find_func(uint32_t addr);
