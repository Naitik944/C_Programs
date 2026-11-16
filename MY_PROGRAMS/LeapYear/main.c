/* Concept: Logical Operators (&&, ||), Relational Operators (!=, ==), Nested if-else
Task: Write a program that takes a year as input and determines if it is a leap year.
A year is a leap year if it is divisible by 4, but not 100, unless it is also divisible by 400. */

#include <stdio.h>
int main() {
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    /*this is the logic behind the code think about it and rewrite the code */
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("The %d is our leap year.\n",year);
    }
    else {
        printf("The %d is not our leap year.\n",year);
    }
    return 0;
}