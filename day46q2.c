#include <stdio.h>

char firstRepeatingLower(char str[]) {
    int count[26] = {0};
    int seen[26] = {0};
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            int idx = str[i] - 'a';
            count[idx]++;
            if (count[idx] == 2 && !seen[idx]) {
                seen[idx] = 1;
                return str[i];
            }
        }
    }
    return '-';  // No repeat found
}

int main() {
    char str1[] = "geeksforgeeks";
    printf("First repeat in \"%s\": %c\n", str1, firstRepeatingLower(str1));
    
    char str2[] = "hello";
    printf("First repeat in \"%s\": %c\n", str2, firstRepeatingLower(str2));
    
    char str3[] = "abcde";
    printf("First repeat in \"%s\": %c\n", str3, firstRepeatingLower(str3));
    
    return 0;
}
