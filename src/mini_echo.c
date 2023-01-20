#include "mini_lib.h"

int main(int argc, char **argv) {

    if (argc == 1) {
        mini_printf("Invalid number of arguments\n");
        return -1;
    }
    for (int i = 1; i < argc; ++i) {
        mini_printf(argv[i]);
        mini_printf(" ");
    }
    mini_exit();
    return 0;
}