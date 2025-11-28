#include <stdio.h>

void reverseString(char str[]) {
    int start = 0;
    int end = 0;
    
    // Find length manually
    while (str[end] != '\0') {
        end++;
    }
    end--;  // Point to last character
    
    // Swap characters
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("Original: %s\n", str);
    reverseString(str);
    printf("Reversed: %s\n", str);
    
    return 0;
}
