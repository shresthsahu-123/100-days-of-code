// Q144.c
#include <stdio.h>

typedef struct {
    char name[50];
    int id;
    float score;
} Item;

void printItem(Item it) {
    printf("Name: %s, ID: %d, Score: %.2f\n", it.name, it.id, it.score);
}

int main(void) {
    Item a = {"Widget", 123, 9.5};
    printItem(a);
    return 0;
}