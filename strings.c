#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    // only allocates static, read-only memory
    char* str = "foo";
    // str[2] = 'x';    this throws exceptions

    // to allocate mutable strings
    const char* str2 = "foo";

    // or do
    char* str3 = malloc(64 * sizeof(char));
    free(str3);

    return 0;
}