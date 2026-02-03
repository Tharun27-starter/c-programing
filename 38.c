#include <stdio.h>

int isSubstring(char s[], char t[]) {
    int i, j;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = 0; t[j] != '\0'; j++) {
            if (s[i + j] != t[j])
                break;
        }
        if (t[j] == '\0')
            return 1;
    }
    return 0;
}

int main() {
    char s[100], t[100], temp[200];
    int i, len = 0;

    scanf("%s %s", s, t);

    while (s[len] != '\0')
        len++;

    for (i = 0; i < len; i++)
        temp[i] = s[i];
    for (i = 0; i < len; i++)
        temp[len + i] = s[i];
    temp[2 * len] = '\0';

    if (isSubstring(temp, t))
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}
