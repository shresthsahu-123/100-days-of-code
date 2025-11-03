#include <stdio.h>
#include <string.h>

int main() {
    char binary[65];  // Assuming max 64-bit binary number
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    int length = strlen(binary);

    // Compute 1's complement
    for (i = 0; i < length; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        } else {
            printf("Invalid binary number.\n");
            return 1;
        }
    }

    printf("1's complement: %s\n", binary);

    return 0;
}
