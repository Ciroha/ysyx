#include "/home/ciroha/ysyx-workbench/npc/csrc/tb/include/memory.h"


static int parse_args(int argc, char *argv[]);
static size_t load_img(uint32_t *memory);

static int parse_args(int argc, char *argv[]) {
	const struct option table[] = {
		{"help"     , no_argument      , NULL, 'h'},
		{0          , 0                , NULL,  0 },
	};
	int o;
	while ( (o = getopt_long(argc, argv, "-h", table, NULL)) != -1) {
		switch (o) {
			case 1: img_file = optarg; return 0;
			default:
				printf("Usage: %s [OPTION...] IMAGE [args]\n\n", argv[0]);
                printf("\t-b,--batch              run with batch mode\n");
                printf("\t-l,--log=FILE           output log to FILE\n");
                printf("\t-d,--diff=REF_SO        run DiffTest with reference REF_SO\n");
                printf("\t-p,--port=PORT          run DiffTest with port PORT\n");
                printf("\t-f,--ftrace=FILE        parse the elf file\n");
                printf("\n");
                exit(0);
		}
	}
	return 0;
}

static size_t load_img(uint32_t *memory){
	printf("image file is %s\n", img_file);
	if (img_file == NULL) {
		printf("No image is given. Use the default build-in image.\n");
    	return 4096; // built-in image size
	}

	FILE *fp = fopen(img_file, "rb");
	assert(fp);

	fseek(fp, 0, SEEK_END);
	size_t size = ftell(fp);

	printf("The image is %s, size = %ld\n", img_file, size);

	fseek(fp, 0 , SEEK_SET);
	printf("Reading.....\n");
	int ret = fread(guest_to_host(memory, 0x80000000), size, 1, fp);
	printf("Read successfully!!\n");
	assert(ret == 1);

	fclose(fp);
	return memory;
}

uint32_t* init_monitor(int argc, char *argv[]){
    uint32_t* memory = NULL;
    parse_args(argc, argv);
    memory = init_mem(10);
    uint32_t* ret = load_img(memory);
    return ret;
}