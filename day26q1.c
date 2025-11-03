#include <stdio.h>

int main() {
    int i, j, start;

    for (i = 1; i <= 5; i++) {
        // Print spaces
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        // Calculate and print numbers
        start = 6 - i;
        for (j = start; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
