#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    // Swapping using a third variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %d\nb = %d\n", a, b);
    return 0;
}
