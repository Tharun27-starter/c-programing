#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[50];
    int i, valid = 1;

    // List of C keywords
    char *keywords[] = {
        "auto","break","case","char","const","continue","default","do","double",
        "else","enum","extern","float","for","goto","if","int","long","register",
        "return","short","signed","sizeof","static","struct","switch","typedef",
        "union","unsigned","void","volatile","while"
    };

    int keywordCount = 32;

    printf("Enter a string: ");
    scanf("%s", str);

    // Check first character
    if (!(isalpha(str[0]) || str[0] == '_')) {
        valid = 0;
    }

    // Check remaining characters
    for (i = 1; str[i] != '\0' && valid; i++) {
        if (!(isalnum(str[i]) || str[i] == '_')) {
            valid = 0;
        }
    }

    // Check if keyword
    for (i = 0; i < keywordCount && valid; i++) {
        if (strcmp(str, keywords[i]) == 0) {
            valid = 0;
        }
    }

    if (valid)
        printf("Valid identifier");
    else
        printf("Invalid identifier");

    return 0;
}
