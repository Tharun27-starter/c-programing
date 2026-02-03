#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    // Remove newline if present
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("All substrings are:\n");

    for (i = 0; i < len; i++) {
        for (j = i; j < len; j++) {
            int k;
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
