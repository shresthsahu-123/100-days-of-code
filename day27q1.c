#include <stdio.h>

int main() {
    int i, j;
    int n = 5;  // Number of lines in the top half (including middle)

    // Print the top half of the diamond
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the bottom half of the diamond
    for(i = n-1; i >= 1; i--) {
        for(j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
