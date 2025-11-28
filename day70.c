#include <stdio.h>
#include <ctype.h>
#include <string.h>

void toSentenceCase(char str[]) {
    int len = strlen(str);
    
    // Make first character uppercase
    if (len > 0) {
        str[0] = toupper(str[0]);
    }
    
    // Make rest of characters lowercase
    for (int i = 1; i < len; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline
    str[strcspn(str, "\n")] = 0;
    
    toSentenceCase(str);
    printf("Sentence case: %s\n", str);
    
    return 0;
}
