#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int len, i, digitCount = 0;

    printf("Enter a phone number: ");
    scanf("%s", str);

    len = strlen(str);

    // Count total digits
    for (i = 0; i < len; i++) {
        if (isdigit(str[i]))
            digitCount++;
    }

    int digitsToMask = digitCount - 4;
    int masked = 0;

    for (i = 0; i < len; i++) {
        if (isdigit(str[i]) && masked < digitsToMask) {
            str[i] = '*';
            masked++;
        }
    }

    printf("Masked number: %s\n", str);

    return 0;
}
