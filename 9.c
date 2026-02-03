#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    int i, j, len, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str) - 1;   // ignore newline
    i = 0;
    j = len - 1;

    while (i < j) {
        // Skip spaces from left
        if (str[i] == ' ') {
            i++;
            continue;
        }
        // Skip spaces from right
        if (str[j] == ' ') {
            j--;
            continue;
        }

        if (str[i] != str[j]) {
            flag = 0;
            break;
        }
        i++;
        j--;
    }

    if (flag)
        printf("Palindrome (ignoring spaces)");
    else
        printf("Not a palindrome");

    return 0;
}
