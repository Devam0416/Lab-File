#include <stdio.h>

int main() {
    int number;
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    char continue_char;

    printf("This program counts positive, negative, and zero numbers.\n");

    do {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number > 0) {
            positive_count++;
        } else if (number < 0) {
            negative_count++;
        } else {
            zero_count++;
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &continue_char);

    } while (continue_char == 'y' || continue_char == 'Y');

    printf("\nFinal Counts:\n");
    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Zeroes: %d\n", zero_count);

    return 0;
}
