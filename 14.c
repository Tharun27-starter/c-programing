#include <stdio.h>
#include <string.h>

int main() {
    char str[100], result[100];
    int freq[256] = {0};
    int i, len, prev = -1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline
    str[strcspn(str, "\n")] = '\0';
    len = strlen(str);

    // Count frequency of characters
    for (i = 0; i < len; i++)
        freq[(int)str[i]]++;

    // Build result string
    for (i = 0; i < len; i++) {
        int max = 0, ch = -1;

        for (int j = 0; j < 256; j++) {
            if (freq[j] > max && j != prev) {
                max = freq[j];
                ch = j;
            }
        }

        // If no valid character found
        if (ch == -1) {
            printf("Rearrangement not possible");
            return 0;
        }

        result[i] = (char)ch;
        freq[ch]--;
        prev = ch;
    }

    result[len] = '\0';

    printf("Rearranged string: %s", result);

    return 0;
}
