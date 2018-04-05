#include <stdio.h>

// could be in a separate .h file
void foo(int);

int main(int argc, char** argv) {
    // call a function
    foo(2);
    return 0;
}

// could be in a separate .c file
void foo(int x) {
    printf("foo got %d\n", x);
}
