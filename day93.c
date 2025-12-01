// Q143.c
#include <stdio.h>

typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;

int main(void) {
    Student arr[3] = { {"A",1,66.5}, {"B",2,75.0}, {"C",3,72.3} };
    int idx = 0;
    for (int i = 1; i < 3; i++)
        if (arr[i].marks > arr[idx].marks) idx = i;
    printf("Top: %s (Roll %d) Marks: %.2f\n", arr[idx].name, arr[idx].roll_no, arr[idx].marks);
    return 0;
}