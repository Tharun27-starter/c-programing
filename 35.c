#include <stdio.h>

int main() {
    char str[200];
    int visited[256] = {0}, i;

    scanf("%[^\n]", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!visited[(int)str[i]]) {
            printf("%c", str[i]);
            visited[(int)str[i]] = 1;
        }
    }
    return 0;
}
