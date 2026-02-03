#include <stdio.h>
#include <string.h>

int expand(char str[], int left, int right) {
    while (left >= 0 && str[right] != '\0' && str[left] == str[right]) {
        left--;
        right++;
    }
    return right - left - 1;   // length of palindrome
}

int main() {
    char str[200];
    int i, start = 0, maxLen = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline
    str[strcspn(str, "\n")] = '\0';

    for (i = 0; i < strlen(str); i++) {
        int len1 = expand(str, i, i);       // Odd length
        int len2 = expand(str, i, i + 1);   // Even length
        int len = (len1 > len2) ? len1 : len2;

        if (len > maxLen) {
            maxLen = len;
            start = i - (len - 1) / 2;
        }
    }

    printf("Longest palindromic substring: ");
    for (i = start; i < start + maxLen; i++)
        printf("%c", str[i]);

    return 0;
}
