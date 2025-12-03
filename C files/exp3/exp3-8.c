#include<stdio.h>

int main() {
    int rows, i, j;
    int term; 

    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &rows);

    for (i = 0; i < rows; i++) {
     
        for (int space = 0; space < rows - i; space++) {
            printf("  ");
        }
        
        term = 1;
        for (j = 0; j <= i; j++) {
            printf("%4d ", term);
            term = term * (i - j) / (j + 1);
        }
        printf("\n");
    }
    printf("\n\nEnter the number of rows for the 1, 2 3, 4 5 6 pyramid: ");
    scanf("%d", &rows);
    int number = 1;

    for (i = 1; i <= rows; i++) {
        // Add leading spaces for centering
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }
        for (j = 1; j <= i; j++) {
            printf("%4d ", number);
            number++;
        }
        printf("\n");
    }

    return 0;
}


