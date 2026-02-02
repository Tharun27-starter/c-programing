#include <stdio.h>
#include <stdlib.h>

int main() {
    int *c;


    c = (int *)malloc(sizeof(int));

    if (c == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }


    *c = 10;


    printf("Value of c = %d\n", *c);


    free(c);

    return 0;
}
