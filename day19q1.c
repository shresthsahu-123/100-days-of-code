#include <stdio.h>

// Function to find GCD using Euclidean algorithm
int gcd(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, hcf, lcm;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    hcf = gcd(num1, num2);
    lcm = (num1 / hcf) * num2; // To avoid overflow

    printf("LCM of %d and %d = %d\n", num1, num2, lcm);

    return 0;
}
