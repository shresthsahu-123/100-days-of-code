#include <stdio.h>
#include <string.h>

int areAnagrams(char s[], char t[]) {
    int count[26] = {0};
    int lenS = strlen(s), lenT = strlen(t);
    
    if (lenS != lenT) return 0;

    for (int i = 0; i < lenS; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }
    
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return 0;
    }
    
    return 1;
}

int main() {
    char s[100], t[100];
    printf("Enter string s: ");
    scanf("%s", s);
    printf("Enter string t: ");
    scanf("%s", t);
    
    if (areAnagrams(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
    
    return 0;
}
