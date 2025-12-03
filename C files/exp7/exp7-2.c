#include <stdio.h>

#define MAX 100

typedef struct {
    char name[50];
    float basic_pay;
    float gross_salary;
} Employee;

int main() {
    Employee emp[MAX];
    int i;

    for(i = 0; i < MAX; i++) {
        printf("Enter name and basic pay of employee %d: ", i + 1);
        scanf("%s %f", emp[i].name, &emp[i].basic_pay);
        emp[i].gross_salary = emp[i].basic_pay + 0.52 * emp[i].basic_pay;
    }

    printf("\nEmployee Name\tGross Salary\n");
    for(i = 0; i < MAX; i++) {
        printf("%s\t\t%.2f\n", emp[i].name, emp[i].gross_salary);
    }

    return 0;
}