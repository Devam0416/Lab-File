#include <stdio.h>

int main() {
    unsigned int a = 12;   int b = 5;   

    unsigned int and_result = a & b;  // Bitwise AND
    unsigned int or_result = a | b;   // Bitwise OR
    unsigned int not_result = ~a;     // Bitwise NOT

    printf("a = %u, b = %u\n", a, b);
    printf("a & b = %u\n", and_result);   // Expected: 00000100 = 4
    printf("a | b = %u\n", or_result);    // Expected: 00001101 = 13
    printf("~a = %u\n", not_result);      // Bitwise NOT of 12

    return 0;
}