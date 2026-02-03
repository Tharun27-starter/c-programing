#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    int i, atPos = -1, dotPos = -1, countAt = 0, valid = 1;

    printf("Enter email ID: ");
    scanf("%s", email);

    for (i = 0; email[i] != '\0'; i++) {
        if (email[i] == ' ')
            valid = 0;

        if (email[i] == '@') {
            countAt++;
            atPos = i;
        }

        if (email[i] == '.')
            dotPos = i;
    }

    if (countAt != 1)
        valid = 0;
    else if (atPos == 0)
        valid = 0;
    else if (dotPos == -1 || dotPos < atPos + 2)
        valid = 0;
    else if (email[dotPos + 1] == '\0')
        valid = 0;

    if (valid)
        printf("Valid Email ID");
    else
        printf("Invalid Email ID");

    return 0;
}
