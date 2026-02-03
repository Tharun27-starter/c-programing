#include <stdio.h>

int main() {
    char str[300];
    int i = 0, count = 0, valid = 1;

    scanf("%[^\n]", str);

    while (1) {
        if ((str[i] >= 'A' && str[i] <= 'Z') ||
            (str[i] >= 'a' && str[i] <= 'z')) {
            // valid alphabet
        }
        else if (str[i] == ' ' || str[i] == '\0') {
            if (valid)
                count++;
            valid = 1;
            if (str[i] == '\0')
                break;
        }
        else {
            valid = 0;  // invalid character
        }
        i++;
    }

    printf("%d", count);
    return 0;
}
