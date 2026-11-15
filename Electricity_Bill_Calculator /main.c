/*Concept: Arithmetic Operators, Relational Operators, Logical AND, if-else if-else
Task: Write a program that calculates an electricity bill based on units consumed using the following slab rates:
First 100 units: $5 per unit
Next 100 units (101–200): $8 per unit
Above 200 units: $10 per unit
Include a fixed service charge of $50 for any bill exceeding 100 units. */

#include <stdio.h>

int main(void) {
    int units;
    double bill;

    printf("Electricity Bill Calculator\n");

    printf("Enter units consumed: ");
    if (scanf("%d", &units) != 1 || units < 0) {
        printf("Invalid input. Please enter a non-negative whole number.\n");
        return 1;
    }

    if (units <= 100) {
        bill = units * 5.0;
    } else if (units <= 200) {
        bill = (100 * 5.0) + ((units - 100) * 8.0);
    } else {
        bill = (100 * 5.0) + (100 * 8.0) + ((units - 200) * 10.0);
    }

    if (units > 100) {
        bill += 50.0;
    }

    printf("Electricity bill: $%.2f\n", bill);
    return 0;
}