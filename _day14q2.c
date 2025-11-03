#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1;  // Use long long to handle large product

    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate product of even numbers from 1 to n
    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    if (product == 1) {
        printf("No even numbers in the given range.\n");
    } else {
        printf("Product of even numbers from 1 to %d = %llu\n", n, product);
    }

    return 0;
}
