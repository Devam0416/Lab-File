#include <stdio.h>
void pgt(float a , float b, float c){
if ((a*a)+(b*b)==(c*c) ||(c*c)+(b*b)==(a*a) ||(a*a)+(c*c)==(b*b) )
{printf("it is an right angled triangle");
return;}
else
{return;}
}

int main() {
    float side1, side2, side3;

    printf("Enter the three sides of the triangle:\n");
    scanf("%f %f %f", &side1, &side2, &side3);

    // Check for triangle validity
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        printf("The sides form a valid triangle.\n");

        // Check the type of the triangle
        if (side1 == side2 && side2 == side3) {
            printf("It is an equilateral triangle.\n");
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("It is an isosceles triangle.\n");
        } else {
            printf("It is a scalene triangle.\n");
            pgt(side1,side2,side3);
        }
    } else {
        printf("The sides do not form a valid triangle.\n");
    }

    return 0;
}