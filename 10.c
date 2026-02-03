#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];
    int n, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    // Remove newline if present
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("Enter number of positions to rotate: ");
    scanf("%d", &n);

    n = n % len;   // Handle rotation greater than length

    // Copy rotated string
    strcpy(temp, str + n);
    strncat(temp, str, n);

    printf("Left rotated string: %s", temp);

    return 0;
}
