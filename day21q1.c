#include <stdio.h>
#include <math.h>

int main() {
    int num, firstDigit, lastDigit, digits, middlePart;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 10) {
        printf("Number after swapping first and last digit: %d\n", num);
        return 0;
    }

    lastDigit = num % 10;

    // Count the number of digits
    digits = (int)log10(num);

    firstDigit = num / (int)pow(10, digits);

    // Extract the middle part
    middlePart = (num % (int)pow(10, digits)) / 10;

    // Construct new number after swapping
    int swappedNum = lastDigit * (int)pow(10, digits) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digit: %d\n", swappedNum);

    return 0;
}
