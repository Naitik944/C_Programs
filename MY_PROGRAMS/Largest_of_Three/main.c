/*Take three integers and find the largest number.
Example:
Enter three numbers: 15 42 27
Largest = 42
Concepts: if, else if, else, comparison operators.*/

#include <stdio.h>
int main() {
    int num1, num2,num3;
    printf("Enter your first number: ");
    scanf("%d",&num1);
    printf("Enter your second number: ");
    scanf("%d",&num2);
    printf("Enter your third number: ");
    scanf("%d",&num3);
    if(num1>num2 && num1>num3) {
        printf("%d is greater than %d and %d",num1,num2,num3);
    }
    else if(num2>num1 && num2>num3) {
        printf("%d is greater than %d and %d",num2,num1,num3);
    }
    else if(num3>num1 && num3>num2) {
        printf("%d is greater than %d and %d",num3,num1,num2);
    }
    return 0;
}