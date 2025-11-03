#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator = 1;
    int denominator = 1;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1;  // first term is 1 (numerator 1, denominator implicit 1)
        } else {
            numerator = 2 * i - 1;
            denominator = 2 * i;
            sum += (double) numerator / denominator;
        }
    }

    printf("Sum of the series up to %d terms = %.4lf\n", n, sum);

    return 0;
}
