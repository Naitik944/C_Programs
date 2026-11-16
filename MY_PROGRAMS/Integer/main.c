/*Check Positive or Negative or Zero

Create a program to check whether a number is positive, negative, or zero.

Get integer input from the user and store it in the number variable.
If number is positive, print positive.
If number is negative, print negative.
If number is 0, print zero.*/

#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("Number is zero.\n");
    }
    else if (number < 0) {
        printf("Number is negative.\n");
    }
    else if (number > 0) {
        printf("Number is positive.\n");
    }
    else {
        printf("INVALID INPUT.............\n");
    }
    return 0;
}