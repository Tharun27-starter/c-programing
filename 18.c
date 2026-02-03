#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[100];
    int i;
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

    printf("Enter password: ");
    scanf("%s", password);

    if (strlen(password) < 8) {
        printf("Weak password: Less than 8 characters\n");
        return 0;
    }

    for (i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i]))
            hasUpper = 1;
        else if (islower(password[i]))
            hasLower = 1;
        else if (isdigit(password[i]))
            hasDigit = 1;
        else
            hasSpecial = 1;
    }

    if (hasUpper && hasLower && hasDigit && hasSpecial)
        printf("Strong password\n");
    else
        printf("Weak password\n");

    return 0;
}
