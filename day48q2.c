#include <stdio.h>

// Function to reverse a substring in place
void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int start = 0, end = 0, i = 0;
    while (sentence[i] != '\0') {
        if (sentence[i] != ' ' && sentence[i] != '\n') {
            end = i;
        }
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i+1] == '\0') {
            reverseWord(sentence, start, end);
            start = i + 1;
        }
        i++;
    }

    printf("Sentence with words reversed: %s", sentence);
    return 0;
}
