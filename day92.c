// Q142.c
#include <stdio.h>

typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;

int main(void) {
    Student arr[5];
    for (int i = 0; i < 5; i++) {
        printf("Student %d (name roll marks): ", i+1);
        if (scanf("%49s %d %f", arr[i].name, &arr[i].roll_no, &arr[i].marks) != 3) return 1;
    }
    puts("\nAll students:");
    for (int i = 0; i < 5; i++)
        printf("%s %d %.2f\n", arr[i].name, arr[i].roll_no, arr[i].marks);
    return 0;
}