#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longest[50] = "";
    int max_len = 0, curr_len = 0, i;
    
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    
    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            curr_len++;
        } else {
            if (curr_len > max_len) {
                max_len = curr_len;
                strncpy(longest, sentence + i - curr_len, curr_len);
                longest[curr_len] = '\0';
            }
            curr_len = 0;
        }
    }
    
    // Check last word
    if (curr_len > max_len) {
        max_len = curr_len;
        strncpy(longest, sentence + i - curr_len, curr_len);
        longest[curr_len] = '\0';
    }
    
    printf("Longest word: \"%s\" (length: %d)\n", longest, max_len);
    return 0;
}
