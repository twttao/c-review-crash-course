#include <stdio.h>

int main(int argc, char** argv) {
    // print the program arguments
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]: %s\n", i, argv[i]);
    }
    return 0;
}