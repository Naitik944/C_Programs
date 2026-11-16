#include <stdio.h>
int main() {
    int num1,num2,num3;
    printf("Enter your first number:");
    scanf("%d",&num1);
    printf("Enter your second number:");
    scanf("%d",&num2);
    printf("Enter your third number:");
    scanf("%d",&num3);
    if (num1>num2 && num1>num3) {
        printf("%d is greatest among %d %d %d",num1,num1,num2,num3);
              if (num1=num2 && num2>num3) {
                  printf("%d is same as %d and  both are greater than %d",num1,num2,num3);
              }
        if (num1=num3 && num1>num3) {
            printf("%d is greatest among %d %d %d",num1,num1,num2,num3);
        }
        else {
            printf("%d is greatest among %d %d %d",num1,num1,num2,num3);
        }
    }
    else if (num2>num1 && num2>num3) {
        printf("%d is greatest among %d %d %d",num2,num1,num2,num3);
    }
    else if (num3>num1 && num3>num2) {
        printf("%d is greatest among %d %d %d",num3,num1,num2,num3);
    }
    return 0;
}