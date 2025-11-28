#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, special = 0;
    
    printf("Enter a string: ");
    scanf("%[^\n]", str);  // Read with spaces
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == ' ') {
            spaces++;
        } else if (ch >= '0' && ch <= '9') {
            digits++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            // Alphabet - skip
        } else {
            special++;
        }
    }
    
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);
    
    return 0;
}
