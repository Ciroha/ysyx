#include <ftrace.h>
#include <elf.h>

struct func
{
    vaddr_t start;
    vaddr_t end;
    char symbol[40];
}funcs[MAX_FUNC];

int count = 0;
int space = 0;

void init_ftrace(char *elf_file) {
    if (elf_file == NULL)
    {
        // Log("No elf file!!!");
        assert(0);
    }

    FILE *fp = fopen(elf_file, "rb");
    Log("Test");
    Assert(fp, "Can't Open ELF File %s!", elf_file);
    
    Elf32_Ehdr elf_header;
    int ret = fread(&elf_header, sizeof(elf_header), 1, fp);    //从fp中读取elf头文件
    if (elf_header.e_ident[0] != 0x7f ||
        elf_header.e_ident[1] != 'E' ||
        elf_header.e_ident[2] != 'L' ||
        elf_header.e_ident[3] != 'F')
        assert(0);
    
    Log("Test3");
    //Section header初始化
    Elf32_Shdr *shdr = (Elf32_Shdr*) malloc(sizeof(Elf32_Shdr) * elf_header.e_shnum);   //shdr指针初始化
    assert(shdr != NULL);
    ret = fseek(fp, elf_header.e_shoff, SEEK_SET);  //根据偏移量设置读取位置
    assert(ret == 0);
    ret = fread(shdr, sizeof(Elf32_Shdr) * elf_header.e_shnum, 1, fp);
    assert(ret == 1);

    //Section header string table初始化
    char shstrtab[shdr[elf_header.e_shstrndx].sh_size];
    ret = fseek(fp, shdr[elf_header.e_shstrndx].sh_offset, SEEK_SET);
    assert(ret == 0);
    ret = fread(shstrtab, shdr[elf_header.e_shstrndx].sh_size, 1, fp);
    assert(ret == 1);
    
    //.symtab .strtab
    Elf32_Off symoff = 0, stroff = 0;
    uint32_t symsize = 0, strsize = 0;
    char *temp;
    for (int i = 0; i < elf_header.e_shnum; i++){
        temp = shstrtab + shdr[i].sh_name;  //shstr表项中name所在的位置
        if(strcmp(temp, ".symtab") == 0){   //由于都是以空字符开头、空字符结尾，所以可以直接用strcmp比较
            symoff = shdr[i].sh_offset;
            symsize = shdr[i].sh_size;
        }
        if (strcmp(temp, ".strtab") == 0)
        {
            stroff = shdr[i].sh_offset;
            strsize = shdr[i].sh_size;
        }
    }

    Log("Test4");

    //symbol table
    Elf32_Sym *symtab = (Elf32_Sym*) malloc(symsize);
    ret = fseek(fp, symoff, SEEK_SET);
    assert(ret == 0);
    ret = fread(symtab, symsize, 1, fp);
    assert(ret == 1);

    //string table
    char strtab[strsize];
    ret = fseek(fp, stroff, SEEK_SET);
    assert(ret == 0);
    ret = fread(strtab, strsize, 1, fp);
    assert(ret == 1);

    //func 初始化
    for (int i = 0; i < symsize/sizeof(Elf32_Sym); i++){
        if(ELF32_ST_TYPE(symtab[i].st_info) == STT_FUNC){
            funcs[count].start = symtab[i].st_value;
            funcs[count].end = symtab[i].st_value + symtab[i].st_size;
            char *temp = strtab + symtab[i].st_name;
            strcpy(funcs[count].symbol, temp);
            count++;
        }
    }
    
    fclose(fp);
    Log("Test2");
    return;
}

void ftrace_write(int type, char *fname, vaddr_t caddr, vaddr_t addr){
    int i;
    if (type == CALL){
        printf("%#x:", addr);
        space++;
        for(i = 0; i < space * 2; i++){
            printf(" ");
        }
        printf("call [%s@%#x]\n", fname, caddr);
    }
    else if (type == RET){
        printf("%#x:", addr);
        for(i = 0; i < space * 2; i++){
            printf(" ");
        }
        space--;
        printf("ret [%s]\n", fname);
    }
    if(space < 0) assert(0);
}

char *find_func(vaddr_t addr){
    int i;
    for(i = 0; i < count; i++){
        if(addr >= funcs[i].start && addr < funcs[i].end){
            return funcs[i].symbol;
        }
    }
    return NULL;
}