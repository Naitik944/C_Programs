#include <stdio.h>
int main() {
    int a,b;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("\n");
    printf("Addition = %d\n",a+b);
    printf("Subtraction = %d\n",a-b);
    printf("Multiplication = %d\n",a*b);
    printf("Division = %.2f\n",(float)a/b);
    printf("Modulus = %d\n",a%b);
    return 0;
}