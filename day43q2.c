#include <stdio.h>

int isPalindrome(char str[]) {
    int start = 0;
    int end = 0;
    
    // Find length manually
    while (str[end] != '\0') {
        end++;
    }
    end--;  // Last character
    
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;  // Not palindrome
        }
        start++;
        end--;
    }
    return 1;  // Palindrome
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    
    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
    
    return 0;
}
