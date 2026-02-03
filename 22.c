#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    scanf("%[^\n]", str);   // read the string

    while (str[length] != '\0') {
        length++;
    }

    printf("%d", length);
    return 0;
}
