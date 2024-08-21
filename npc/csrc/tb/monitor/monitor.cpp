#include <memory.h>
#include <common.h>
#include <getopt.h>
#include <ftrace.h>

static int parse_args(int argc, char *argv[]);
static size_t load_img();
void init_difftest(char *ref_so_file, long img_size, int port);

static char *img_file = NULL;
static char *elf_file = NULL;
static char *diff_so_file = NULL;
static int difftest_port = 1234;

static int parse_args(int argc, char *argv[]) {
	const struct option table[] = {
		{"help"     , no_argument      , NULL, 'h'},
		{"ftrace"   , required_argument, NULL, 'f'},
		{"diff"		, required_argument, NULL, 'd'},
		{0          , 0                , NULL,  0 },
	};
	int o;
	while ( (o = getopt_long(argc, argv, "-hf:d:", table, NULL)) != -1) {
		switch (o) {
			case 'f': elf_file = optarg; break;
			case 'd': diff_so_file = optarg; break;
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

static size_t load_img(){
	printf("image file is %s\n", img_file);
	if (img_file == NULL) {
		Log("No image is given. Use the default build-in image.");
    	return 50; // built-in image size
	}

	FILE *fp = fopen(img_file, "rb");
	assert(fp);

	fseek(fp, 0, SEEK_END);
	size_t size = ftell(fp);

	Log("The image is %s, size = %ld", img_file, size);

	fseek(fp, 0 , SEEK_SET);
	// Log("Reading.....");
	int ret = fread(guest_to_host(RESET_VECTOR), size, 4, fp);
	Log("Read successfully!!");
	assert(ret == 1);

	fclose(fp);
	return size;
}

void init_monitor(int argc, char *argv[]){
    parse_args(argc, argv);
    init_mem(4096000);   //TODO 需要分配足够大的内存
    long img_size = load_img();
	init_difftest(diff_so_file, img_size, difftest_port);
	init_ftrace(elf_file);
	Log("test");
    return;
}