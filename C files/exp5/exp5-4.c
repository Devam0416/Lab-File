#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;

    // Input dimensions
    printf("Enter rows and columns of matrix A (m n): ");
    scanf("%d %d", &m, &n);
    printf("Enter rows and columns of matrix B (p q): ");
    scanf("%d %d", &p, &q);

    // Check compatibility
    if(n != p) {
        printf("Matrix multiplication not possible. Columns of A must equal rows of B.\n");
        return 1;
    }

    int A[m][n], B[p][q], C[m][q];

    // Input matrix A
    printf("Enter elements of matrix A (%d x %d):\n", m, n);
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &A[i][j]);

    // Input matrix B
    printf("Enter elements of matrix B (%d x %d):\n", p, q);
    for(i = 0; i < p; i++)
        for(j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    // Initialize result matrix C
    for(i = 0; i < m; i++)
        for(j = 0; j < q; j++)
            C[i][j] = 0;

    // Matrix multiplication
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++) {
            for(k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Print matrices
    printf("\nMatrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++)
            printf("%4d", A[i][j]);
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++)
            printf("%4d", B[i][j]);
        printf("\n");
    }

    printf("\nProduct Matrix C (A x B):\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < q; j++)
            printf("%4d", C[i][j]);
        printf("\n");
    }

    return 0;
}