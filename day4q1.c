#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    // Swapping without a third variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping:\n");
    printf("a = %d\nb = %d\n", a, b);
    return 0;
}
