#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, length = 0;

    scanf("%[^\n]", str);   // read the string

    // find length of string
    while (str[length] != '\0') {
        length++;
    }

    // reverse the string
    for (i = 0; i < length; i++) {
        rev[i] = str[length - i - 1];
    }
    rev[i] = '\0';

    printf("%s", rev);
    return 0;
}
