#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int num = 5;
    int a = 10, b = 20;

    printf("Square of %d is %d\n", num, SQUARE(num));
    printf("Maximum of %d and %d is %d\n", a, b, MAX(a, b));
    return 0;
}