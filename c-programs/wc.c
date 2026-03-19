#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("cmdline args count=%d\n", argc);
    printf("exe name=%s\n", argv[0]);

    for (int i = 1; i < argc; i++) {
        printf("arg%d=%s\n", i, argv[i]);
    }

    return 0;
}
