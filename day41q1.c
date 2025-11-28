#include <stdio.h>

int countCharacters(char str[]) {
    int length = 0;
    int i = 0;
    while (str[i] != '\0') {
        length++;
        i++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    int len = countCharacters(str);
    printf("Length: %d\n", len);
    return 0;
}
