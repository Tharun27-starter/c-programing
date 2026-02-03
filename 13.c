#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int i, key;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter key value: ");
    scanf("%d", &key);

    key = key % 26;   // Limit key to alphabet range

    for (i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = ((str[i] - 'A' + key) % 26) + 'A';
        }
        else if (islower(str[i])) {
            str[i] = ((str[i] - 'a' + key) % 26) + 'a';
        }
    }

    printf("Encrypted string: %s", str);

    return 0;
}
