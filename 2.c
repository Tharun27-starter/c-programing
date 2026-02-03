#include <stdio.h>

int main() {
    char str[100];
    int upper = 0, lower = 0, digit = 0, special = 0, i;

    printf("Enter a string: ");
    gets(str);   // you can also use fgets

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            upper++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            lower++;
        else if (str[i] >= '0' && str[i] <= '9')
            digit++;
        else
            special++;
    }

    printf("Uppercase letters: %d\n", upper);
    printf("Lowercase letters: %d\n", lower);
    printf("Digits: %d\n", digit);
    printf("Special characters: %d\n", special);

    return 0;
}
