#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    int *pInt = &a;
    float *pFloat = &b;
    char *pChar = &c;

    printf("Integer value: %d, Pointer: %p, Pointed value: %d\n", a, pInt, *pInt);
    printf("Float value: %.2f, Pointer: %p, Pointed value: %.2f\n", b, pFloat, *pFloat);
    printf("Char value: %c, Pointer: %p, Pointed value: %c\n", c, pChar, *pChar);

    return 0;
}