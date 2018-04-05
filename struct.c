#include <stdio.h>

// definition
struct student {
    char* name;
    int standing;
    float gpa;
};

// initialization
struct student s = {
    .name = "Luke Skywalker",
    .gpa = 4.0
};


int main(int argc, char** argv) {
    s.standing = 2;
    printf("%d\n", s.standing);
    return 0;
}