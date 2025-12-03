#include <stdio.h>

int main() {
    int arrInt[3] = {10, 20, 30};
    float arrFloat[3] = {1.1, 2.2, 3.3};
    char arrChar[3] = {'A', 'B', 'C'};

    int *pInt = arrInt;
    float *pFloat = arrFloat;
    char *pChar = arrChar;

    printf("Initial int pointer: %p, value: %d\n", pInt, *pInt);
    pInt++;
    printf("After increment: %p, value: %d\n", pInt, *pInt);
    pInt--;
    printf("After decrement: %p, value: %d\n", pInt, *pInt);

    printf("\nInitial float pointer: %p, value: %.2f\n", pFloat, *pFloat);
    pFloat++;
    printf("After increment: %p, value: %.2f\n", pFloat, *pFloat);
    pFloat--;

    printf("\nInitial char pointer: %p, value: %c\n", pChar, *pChar);
    pChar++;
    printf("After increment: %p, value: %c\n", pChar, *pChar);
    pChar--;

    return 0;
}