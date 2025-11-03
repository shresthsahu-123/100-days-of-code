#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;
    int foundOdd = 0;  // Flag to check if any odd digit is found

    printf("Enter an integer: ");
    scanf("%d", &num);

    num = (num < 0) ? -num : num; // Handle negative numbers

    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            foundOdd = 1;
        }
        num /= 10;
    }

    if (foundOdd) {
        printf("Product of odd digits = %lld\n", product);
    } else {
        printf("No odd digits found in the number.\n");
    }

    return 0;
}
