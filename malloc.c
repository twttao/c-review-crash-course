#include <stdio.h>
#include <stdlib.h>

struct student {
    char* name;
    int standing;
    float gpa;
};

int main(int argc, char** argv) {
    // allocate an int on heap
    int k = 13;
    int* i_ptr = (int*)malloc(sizeof(int));
    printf("*i_ptr: %d\n", *i_ptr);
    *i_ptr = k;
    printf("*i_ptr: %d\n", *i_ptr);
    free(i_ptr);

    // allocate an int array on heap
    int n = 4096;
    int* nums = (int*)malloc(n * sizeof(int));
    int i; int* cur;
    for (i = 0, cur = nums; i < n; i++, cur++) {
        *cur = i;
    }
    // print 0..4095
    for (i = 0, cur = nums; i < n; i++, cur++) {
        printf("nums[%d]: %d\n", i, *cur);
    }
    free(nums);

    // allocate a struct
    struct student* s = malloc(sizeof(struct student));
    s->name = "Luke Skywalker";
    s->gpa = 4.0;
    printf("%s\n", s->name);
    printf("%f\n", s->gpa);
    free(s);

    // allocate an array of structs
    int n2 = 96;
    struct student* students = malloc(n * sizeof(struct student));
    for (int i = 0; i < n2; i++) {
        students[i].name = "Luke Skywalker";
        students[i].standing = 2;
        students[i].gpa = 4.0;
    }
    free(students);

    return 0;
}