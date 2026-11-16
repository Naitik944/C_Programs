#include <stdio.h>
#include "power.h"

int main(void) {
    int base;
    int exponent;

    printf("Enter base: ");
    if (scanf("%d", &base) != 1) {
        fprintf(stderr, "Please enter a valid integer base.\n");
        return 1;
    }

    printf("Enter exponent: ");
    if (scanf("%d", &exponent) != 1 || exponent < 0) {
        fprintf(stderr, "Please enter a base and a non-negative integer exponent.\n");
        return 1;
    }

    printf("The power result is: %d\n", power(base, exponent));
    return 0;
}