#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char s[]) {
    int lastIndex[256];
    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;  // Initialize last seen indexes
    }
    
    int maxLen = 0, start = 0;
    int n = strlen(s);
    
    for (int i = 0; i < n; i++) {
        if (lastIndex[(unsigned char)s[i]] >= start) {
            start = lastIndex[(unsigned char)s[i]] + 1;
        }
        lastIndex[(unsigned char)s[i]] = i;
        int currLen = i - start + 1;
        if (currLen > maxLen) {
            maxLen = currLen;
        }
    }
    
    return maxLen;
}

int main() {
    char s[100];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    
    // Remove newline if present
    s[strcspn(s, "\n")] = 0;
    
    int length = lengthOfLongestSubstring(s);
    printf("Length of longest substring without repeating characters: %d\n", length);
    
    return 0;
}
