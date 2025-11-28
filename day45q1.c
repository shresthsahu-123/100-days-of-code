#include <stdio.h>

int countCharFrequency(char str[], char ch) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    return count;
}

int main() {
    char str1[] = "hello world";
    char ch1 = 'l';
    printf("Test 1: '%c' in \"%s\" = %d\n", ch1, str1, countCharFrequency(str1, ch1));

    char str2[] = "cricket scoreboard";
    char ch2 = 'c';
    printf("Test 2: '%c' in \"%s\" = %d\n", ch2, str2, countCharFrequency(str2, ch2));

    char str3[] = "Mississippi";
    char ch3 = 's';
    printf("Test 3: '%c' in \"%s\" = %d\n", ch3, str3, countCharFrequency(str3, ch3));

    return 0;
}
