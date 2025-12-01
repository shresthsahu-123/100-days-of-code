#include <stdio.h>

int main() {
    int percentage;
    char grade;

    printf("Enter percentage (0-100): ");
    scanf("%d", &percentage);

    if (percentage >= 90 && percentage <= 100) {
        grade = 'A';
    } else if (percentage >= 80 && percentage <= 89) {
        grade = 'B';
    } else if (percentage >= 70 && percentage <= 79) {
        grade = 'C';
    } else if (percentage >= 60 && percentage <= 69) {
        grade = 'D';
    } else if (percentage >= 0 && percentage < 60) {
        grade = 'F';
    } else {
        printf("Invalid percentage entered.\n");
        return 1; // Return with error
    }

    printf("Grade: %c\n", grade);
    return 0;
}
