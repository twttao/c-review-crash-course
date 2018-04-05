#include <stdio.h>

int main(int argc, char** argv) {
    int i = 20;
    int* i_ptr = &i;

    printf("%d\n", i);
    printf("%p\n", i_ptr);
    printf("%d\n", *i_ptr);

    *i_ptr = 8;
    printf("%d\n", i);
    printf("%p\n", i_ptr);
    printf("%d\n", *i_ptr);

    return 0;
}