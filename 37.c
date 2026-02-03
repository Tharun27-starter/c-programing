#include <stdio.h>

int isPalindrome(char s[], int l, int r) {
    while (l < r) {
        if (s[l] != s[r])
            return 0;
        l++;
        r--;
    }
    return 1;
}

int main() {
    char str[200];
    int i, j, start = 0, maxLen = 1;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        for (j = i; str[j] != '\0'; j++) {
            if (isPalindrome(str, i, j) && (j - i + 1) > maxLen) {
                start = i;
                maxLen = j - i + 1;
            }
        }
    }

    for (i = start; i < start + maxLen; i++)
        printf("%c", str[i]);

    return 0;
}
