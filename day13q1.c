#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    int result;
    float div_result;

    printf("Enter an operator (+, -, *, /, %): ");
    scanf(" %c", &operator);  // space before %c to consume any leftover whitespace
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                div_result = (float)num1 / num2;
                printf("%d / %d = %.2f\n", num1, num2, div_result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (num2 != 0) {
                result = num1 % num2;
                printf("%d %% %d = %d\n", num1, num2, result);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
