#include <stdio.h>

int main() {
    char str[100], oldc, newc;
    int i;

    scanf("%[^\n]", str);
    scanf(" %c %c", &oldc, &newc);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldc)
            str[i] = newc;
    }

    printf("%s", str);
    return 0;
}
