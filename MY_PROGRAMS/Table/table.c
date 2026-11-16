//A program which can write tables for the number provided//
#include <stdio.h>
int main() {
    int num,i;
    printf("This program creates a table.\n");
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The table is:\n");
    for (i = 1; i <= 10; i = i + 1) {
        printf("%d*%d=%d\n",num,i,num*i);
    }
    return 0;
}