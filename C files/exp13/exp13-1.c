#include <stdio.h>

// Macro definitions for arithmetic operations
#define ADD(x, y)       ((x) + (y))
#define SUBTRACT(x, y)  ((x) - (y))
#define MULTIPLY(x, y)  ((x) * (y))
#define DIVIDE(x, y)    ((y) != 0 ? ((x) / (y)) : 0)  // Avoid divide-by-zero

int main() {
    int a = 20, b = 5;

    printf("a = %d, b = %d\n", a, b);
    printf("Addition: %d\n", ADD(a, b));
    printf("Subtraction: %d\n", SUBTRACT(a, b));
    printf("Multiplication: %d\n", MULTIPLY(a, b));
    printf("Division: %d\n", DIVIDE(a, b));

    return 0;
}