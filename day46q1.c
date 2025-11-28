#include <stdio.h>

void removeVowels(char str[]) {
    int read = 0, write = 0;
    
    while (str[read] != '\0') {
        char ch = str[read];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            str[write++] = str[read];
        }
        read++;
    }
    str[write] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    removeVowels(str);
    printf("String without vowels: %s", str);
    
    return 0;
}
