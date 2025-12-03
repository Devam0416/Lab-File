#include <stdio.h>

int main() {
    {
        int blockVar = 20;
        printf("Inside block: blockVar = %d\n", blockVar);
    }
    // printf("Outside block: blockVar = %d\n", blockVar); // ❌ Error: blockVar is out of scope

    if (1) {
        int ifVar = 30;
        printf("Inside if: ifVar = %d\n", ifVar);
    }
    // printf("Outside if: ifVar = %d\n", ifVar); // ❌ Error: ifVar is out of scope

    return 0;
}