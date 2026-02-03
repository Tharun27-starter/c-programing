#include <stdio.h>
#include <string.h>

int main() {
    int n, i, j, found;
    char emails[100][100], domains[100][100];
    int freq[100] = {0};
    char *domainPart;

    printf("Enter number of emails: ");
    scanf("%d", &n);

    printf("Enter emails:\n");
    for (i = 0; i < n; i++)
        scanf("%s", emails[i]);

    int domainCount = 0;

    for (i = 0; i < n; i++) {
        // Extract domain
        domainPart = strchr(emails[i], '@');
        if (domainPart != NULL)
            domainPart++; // skip '@'
        else
            continue; // invalid email, skip

        // Check if domain already exists
        found = 0;
        for (j = 0; j < domainCount; j++) {
            if (strcmp(domains[j], domainPart) == 0) {
                freq[j]++;
                found = 1;
                break;
            }
        }

        // If new domain, add it
        if (!found) {
            strcpy(domains[domainCount], domainPart);
            freq[domainCount] = 1;
            domainCount++;
        }
    }

    printf("\nDomain Frequency:\n");
    for (i = 0; i < domainCount; i++)
        printf("%s : %d\n", domains[i], freq[i]);

    return 0;
}
