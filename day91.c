// Q141.c
#include <stdio.h>

typedef struct {
    char name[50];
    int roll_no;
    float marks;
} Student;

int main(void) {
    Student s;
    printf("Enter name roll marks: ");
    if (scanf("%49s %d %f", s.name, &s.roll_no, &s.marks) != 3) return 1;
    printf("Name: %s\nRoll: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
    return 0;
}