#include <stdio.h>

int main() {
    int L = 20;
    for (int a = 1; a <= L; a++) {
        for (int b = a + 1; b <= L; b++) {
            int sum1 = a*a*a + b*b*b;

            for (int c = 1; c <= L; c++) {
                for (int d = c + 1; d <= L; d++) {
                    int sum2 = c*c*c + d*d*d;

                    if (sum1 == sum2 && (a != c && a != d && b != c && b != d)) {
                        printf("Ramanujan Number: %d = %d^3 + %d^3 = %d^3 + %d^3\n",
                               sum1, a, b, c, d);
                    }
                }
            }
        }
    }

    return 0;
}