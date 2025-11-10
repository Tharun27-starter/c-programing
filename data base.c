#include <stdio.h>

int main(void) {
    int a = 10;
    float b = -3.14f;           // 'f' suffix makes it explicitly a float
    double c = 12.3456789;
    char d = 'x';

    printf("integer value: %d\n", a);
    printf("float value: %.2f\n", b);      // 2 decimal places
    printf("double value: %.6lf\n", c);    // 6 decimal places (default for printf)
    printf("character value: %c\n", d);

    return 0;
}
