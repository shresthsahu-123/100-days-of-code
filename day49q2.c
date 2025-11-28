#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[100];
    char initials[10] = "";
    char surname[50] = "";
    
    printf("Enter full name: ");
    fgets(name, sizeof(name), stdin);
    
    // Remove trailing newline if any
    int len = strlen(name);
    if(len > 0 && name[len-1] == '\n') {
        name[len-1] = '\0';
        len--;
    }
    
    int start=0, end=0, wordCount=0;
    for (int i = 0; i <= len; i++) {
        if (name[i] == ' ' || name[i] == '\0') {
            int wordLen = i - start;
            if (wordLen > 0) {
                wordCount++;
                if (wordCount == 1) {
                    // Add first initial uppercase
                    initials[strlen(initials)] = toupper(name[start]);
                    initials[strlen(initials)+1] = '\0';
                } else if (i == len) {
                    // Last word (surname)
                    strncpy(surname, &name[start], wordLen);
                    surname[wordLen] = '\0';
                } else {
                    // Middle initials
                    initials[strlen(initials)] = toupper(name[start]);
                    initials[strlen(initials)+1] = '\0';
                }
            }
            start = i + 1;
        }
    }
    
    printf("%s %s\n", initials, surname);
    return 0;
}
