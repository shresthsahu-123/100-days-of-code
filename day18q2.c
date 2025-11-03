#include <stdio.h>

int main() {
    int num1, num2, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Ensure num1 >= num2
    if (num2 > num1) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Euclidean algorithm
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    printf("HCF (GCD) = %d\n", num1);

    return 0;
}
