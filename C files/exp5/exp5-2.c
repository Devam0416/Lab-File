#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int pos = 0, neg = 0, odd = 0, even = 0;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;

        if (arr[i] % 2 == 0) even++;
        else odd++;
    }

    printf("\nPositive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Odd numbers: %d\n", odd);
    printf("Even numbers: %d\n", even);

    return 0;
}