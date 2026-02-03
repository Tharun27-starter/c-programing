#include <stdio.h>

int main() {
    char str[200], word[50], small[50], large[50];
    int i = 0, j = 0, len, min = 100, max = 0;

    scanf("%[^\n]", str);

    while (1) {
        if (str[i] == ' ' || str[i] == '\0') {
            word[j] = '\0';
            len = j;

            if (len < min && len > 0) {
                min = len;
                for (j = 0; j <= len; j++) small[j] = word[j];
            }
            if (len > max) {
                max = len;
                for (j = 0; j <= len; j++) large[j] = word[j];
            }
            j = 0;
            if (str[i] == '\0') break;
        } else {
            word[j++] = str[i];
        }
        i++;
    }

    printf("Smallest word: %s\n", small);
    printf("Largest word: %s", large);
    return 0;
}
