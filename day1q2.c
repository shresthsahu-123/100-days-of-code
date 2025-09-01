#include <stdio.h>

int main() {
    float num1, num2;
    float sum, difference, product, quotient;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Calculate sum, difference, product
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Check for division by zero
    if (num2 != 0) {
        quotient = num1 / num2;
    } else {
        printf("Quotient: undefined (division by zero)\n");
        quotient = 0; // Assigning a dummy value
    }

    // Display the results
    printf("Sum: %.2f\n", sum);
    printf("Difference: %.2f\n", difference);
    printf("Product: %.2f\n", product);

    if (num2 != 0) {
        printf("Quotient: %.2f\n", quotient);
    }

    return 0;
}
