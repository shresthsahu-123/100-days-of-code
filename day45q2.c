#include <stdio.h>

void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert lowercase to uppercase
            str[i] = str[i] - 32;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert uppercase to lowercase
            str[i] = str[i] + 32;
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toggleCase(str);
    printf("Toggled case string: %s", str);
    
    return 0;
}
