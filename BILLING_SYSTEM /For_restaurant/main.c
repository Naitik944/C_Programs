#include <stdio.h>
#include "details.h"

int main(void) {
    int table;

    print_restaurant_details();

    printf("Enter table number: ");
    if (scanf("%d", &table) != 1 || table < 1) {
        fputs("Invalid table number.\n", stderr);
        return 1;
    }

    print_etc_details(table);
    return 0;
}
