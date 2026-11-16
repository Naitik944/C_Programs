#include <stdio.h>

int main() {
    int num1, num2, result;
    char division;

    printf("Enter your first number: ");
    scanf("%d", &num1);

    printf("Enter your second number: ");
    scanf("%d", &num2);

    if (num2 == 0) {
        printf("ERROR: Cannot divide by zero.\n");
        return 0;
    }

    printf("What do you want under division (R/Q): ");
    scanf(" %c", &division);

    if (division == 'Q' || division == 'q') {
        result = num1 / num2;
        printf("Quotient is: %d\n", result);
    }
    else if (division == 'R' || division == 'r') {
        result = num1 % num2;
        printf("Remainder is: %d\n", result);
    }
    else {
        printf("WRONG INPUT. Please enter R or Q.\n");
    }

    return 0;
}//this program does division