#include <stdio.h>

int main() {
    float population = 100000.0;
    int years = 10;
    float growth_rate = 0.10;

    printf("Population at the end of each year for the last decade:\n");

    for (int i = years; i > 0; i--) {
        population = population / (1 + growth_rate);
        printf("Population %d years ago: %.0f\n", i, population);
    }


    return 0;
}
