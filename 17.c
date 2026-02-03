#include <stdio.h>
#include <string.h>

int main() {
    char email[100], username[100];
    int i, j = 0;

    printf("Enter email ID: ");
    scanf("%s", email);

    for (i = 0; email[i] != '\0'; i++) {
        if (email[i] == '@')
            break;      // Stop at '@'
        username[j++] = email[i];
    }

    username[j] = '\0';   // Null terminate the string

    printf("Username: %s", username);

    return 0;
}
