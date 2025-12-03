#include <stdio.h>

void counter() {
    static int count = 0; // Static local variable
    count++;
    printf("Function called %d times\n", count);
}

int main() {
    counter(); // Output: 1
    counter(); // Output: 2
    counter(); // Output: 3
    return 0;
}