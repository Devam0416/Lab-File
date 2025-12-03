#include <stdio.h>
#include <string.h>

union Address {
    char name[50];
    char home_address[100];
    char hostel_address[100];
    char city[50];
    char state[50];
    char zip[10];
};

int main() {
    union Address addr;

    strcpy(addr.name, "Prince");
    printf("Name: %s\n", addr.name);

    strcpy(addr.home_address, "123 Main Street");
    printf("Present Address: %s\n", addr.home_address);

    // Note: Only one field is valid at a time in a union
    return 0;
}