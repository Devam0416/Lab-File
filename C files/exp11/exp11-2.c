#include <stdio.h>

int main() {
    unsigned int x = 8;  // Binary: 00001000

    unsigned int left_shift = x << 2;   // Shift left by 2 bits
    unsigned int right_shift = x >> 2;  // Shift right by 2 bits

    printf("Original value: %u\n", x);
    printf("Left shift by 2: %u\n", left_shift);   // Expected: 32
    printf("Right shift by 2: %u\n", right_shift); // Expected: 2

    return 0;
}