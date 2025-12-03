#include <stdio.h>

int globalVar = 10; // Global variable

void testScope() {
    int localVar = 5; // Local variable
    printf("Inside function: localVar = %d\n", localVar);
    printf("Inside function: globalVar = %d\n", globalVar);
}

int main() {
    testScope();
    //printf("Outside function: localVar = %d\n", localVar); // ❌ Error: localVar is not accessible here
    printf("Outside function: globalVar = %d\n", globalVar); // ✅ Accessible
    return 0;
}