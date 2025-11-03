#include <stdio.h>

int main() {
    float cp, sp, profit, loss, percent;

    printf("Enter cost price: ");
    scanf("%f", &cp);

    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        profit = sp - cp;
        percent = (profit * 100) / cp;
        printf("Profit = %.2f, Profit Percentage = %.2f%%\n", profit, percent);
    } else if (cp > sp) {
        loss = cp - sp;
        percent = (loss * 100) / cp;
        printf("Loss = %.2f, Loss Percentage = %.2f%%\n", loss, percent);
    } else {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
