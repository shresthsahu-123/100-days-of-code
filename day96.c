// Q146.c
#include <stdio.h>

typedef struct {
    int day, month, year;
} Date;

typedef struct {
    char name[50];
    int id;
    Date joining;
} Employee;

int main(void) {
    Employee e = {"Rita", 501, {15, 6, 2020}};
    printf("Name: %s\nID: %d\nJoining: %02d-%02d-%04d\n",
           e.name, e.id, e.joining.day, e.joining.month, e.joining.year);
    return 0;
}