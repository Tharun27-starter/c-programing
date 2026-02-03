#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0}, i;

    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++)
        freq[str[i]]++;

    for (i = 0; str[i] != '\0'; i++) {
        if (freq[str[i]] == 1) {
            printf("%c", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character");
    return 0;
}
