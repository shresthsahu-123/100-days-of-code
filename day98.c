// Q148.c
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int id;
    float score;
} S;

int identical(S a, S b) {
    return strcmp(a.name, b.name) == 0 && a.id == b.id && a.score == b.score;
}

int main(void) {
    S a = {"X", 1, 9.5};
    S b = {"X", 1, 9.5};
    printf("Identical? %s\n", identical(a,b) ? "Yes" : "No");
    return 0;
}