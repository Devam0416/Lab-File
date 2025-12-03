#include <stdio.h>

void modifyValues(int *x, float *y) {
    *x += 5;
    *y *= 2;
}

int main() {
    int a = 10;
    float b = 3.5;

    printf("Before: a = %d, b = %.2f\n", a, b);
    modifyValues(&a, &b);
    printf("After: a = %d, b = %.2f\n", a, b);

    return 0;
}