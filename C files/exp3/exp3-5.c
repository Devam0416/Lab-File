#include <stdio.h>

int main() {
    float length1, width1, length2, width2, length3, width3;
    float perimeter1, perimeter2, perimeter3;
    float highest_perimeter;

    printf("Enter length and width of rectangle 1: ");
    scanf("%f %f", &length1, &width1);

    printf("Enter length and width of rectangle 2: ");
    scanf("%f %f", &length2, &width2);

    printf("Enter length and width of rectangle 3: ");
    scanf("%f %f", &length3, &width3);

    perimeter1 = 2 * (length1 + width1);
    perimeter2 = 2 * (length2 + width2);
    perimeter3 = 2 * (length3 + width3);

    highest_perimeter = (perimeter1 > perimeter2) ? 
                        ((perimeter1 > perimeter3) ? perimeter1 : perimeter3) :
                        ((perimeter2 > perimeter3) ? perimeter2 : perimeter3);

    printf("Perimeter of rectangle 1 is: %.2f\n", perimeter1);
    printf("Perimeter of rectangle 2 is: %.2f\n", perimeter2);
    printf("Perimeter of rectangle 3 is: %.2f\n", perimeter3);
    printf("The highest perimeter is: %.2f\n", highest_perimeter);

    return 0;
}