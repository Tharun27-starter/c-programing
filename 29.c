#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i = 0;

    scanf("%s%s", s1, s2);

    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            break;
        i++;
    }

    if (s1[i] > s2[i])
        printf("First string is greater");
    else if (s1[i] < s2[i])
        printf("Second string is greater");
    else
        printf("Strings are equal");

    return 0;
}
