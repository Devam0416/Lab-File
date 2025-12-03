#include <stdio.h>

// Recursive factorial
int FACT_R(int n) {
    if (n == 0) return 1;
    return n * FACT_R(n - 1);
}

// Non-recursive factorial
int FACT_NR(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

// Binomial coefficient C(n, r) = n! / (r! * (n-r)!)
int BINOMIAL(int n, int r) {
    return FACT_R(n) / (FACT_R(r) * FACT_R(n - r));
}

int main() {
    printf("n\tr\tC(n,r)\n");
    for (int n = 0; n <= 5; n++) {
        for (int r = 0; r <= n; r++) {
            printf("%d\t%d\t%d\n", n, r, BINOMIAL(n, r));
        }
    }
    return 0;
}