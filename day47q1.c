#include <stdio.h>

int areAnagrams(char str1[], char str2[]) {
    int count1[256] = {0}, count2[256] = {0};
    int len1 = 0, len2 = 0;
    
    // Count frequencies
    while (str1[len1] != '\0') count1[(unsigned char)str1[len1++]]++;
    while (str2[len2] != '\0') count2[(unsigned char)str2[len2++]]++;
    
    // Check lengths and frequencies
    if (len1 != len2) return 0;
    for (int i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) return 0;
    }
    return 1;
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);
    
    if (areAnagrams(str1, str2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);
    }
    return 0;
}
