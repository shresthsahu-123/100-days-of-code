#include <stdio.h>

int main() {
    int num, digit;
    int count[10] = {0};  // Array to count occurrences of digits 0-9
    int maxCount = 0, maxDigit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    num = (num < 0) ? -num : num;  // Handle negative numbers

    // Count occurrences of each digit
    while (num > 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    // Find digit with maximum occurrence
    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most times: %d times\n", maxDigit, maxCount);

    return 0;
}
