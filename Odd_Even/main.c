/*Check Odd/Even

Create a program to check whether a number is even or odd.

Get integer input from the user and store it in the number variable.
If number is even, print even.
If number is odd, print odd.
Hint: A number is even if the remainder is 0 when it's divided by 2. Basically, if number % 2 is equal to 0, the number is even.*/

#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("%d is Even",number);
    }
    else {
        printf("%d is Odd",number);
    }
    return 0;
}