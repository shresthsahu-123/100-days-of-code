#include <stdio.h>

int main() {
    int n;
    printf("Enter the value of n:\n");
    scanf("%d", &n);

    int sum = n * (n + 1) / 2;

    printf("Sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}
