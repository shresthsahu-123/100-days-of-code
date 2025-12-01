// Q145.c
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

Student topStudent(Student arr[], int n) {
    int idx = 0;
    for (int i = 1; i < n; i++)
        if (arr[i].marks > arr[idx].marks) idx = i;
    return arr[idx]; // returned by value (copied)
}

int main(void) {
    Student s[] = { {"A",1,80}, {"B",2,92}, {"C",3,88} };
    Student top = topStudent(s, 3);
    printf("Top: %s %d %.2f\n", top.name, top.roll, top.marks);
    return 0;
}