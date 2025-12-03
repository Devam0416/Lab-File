#include <stdio.h>

int main() {
    int year;
    int diff_year, leap_years, normal_years;
    int day;

    printf("Enter a year (e.g., 2024): ");
    scanf("%d", &year);


    diff_year = year - 1;

    leap_years = (diff_year / 4) - (diff_year / 100) + (diff_year / 400);
    normal_years = diff_year - leap_years;

    day = (normal_years + (leap_years * 2)) % 7;

    switch (day) {
        case 0:
            printf("The 1st of January of the year %d was a Monday\n", year);
            break;
        case 1:
            printf("The 1st of January of the year %d was a Tuesday\n", year);
            break;
        case 2:
            printf("The 1st of January of the year %d was a Wednesday\n", year);
            break;
        case 3:
            printf("The 1st of January of the year %d was a Thursday\n", year);
            break;
        case 4:
            printf("The 1st of January of the year %d was a Friday\n", year);
            break;
        case 5:
            printf("The 1st of January of the year %d was a Saturday\n", year);
            break;
        case 6:
            printf("The 1st of January of the year %d was a Sunday\n", year);
            break;
    }

    return 0;
}
