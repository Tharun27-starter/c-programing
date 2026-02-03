#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int f1[256] = {0}, f2[256] = {0}, i;

    scanf("%s%s", s1, s2);

    for (i = 0; s1[i] != '\0'; i++) f1[s1[i]]++;
    for (i = 0; s2[i] != '\0'; i++) f2[s2[i]]++;

    for (i = 0; i < 256; i++) {
        if (f1[i] != f2[i]) {
            printf("Not Anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
