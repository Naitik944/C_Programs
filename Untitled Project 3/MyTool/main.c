/*if we list all the natural numbers below 10 that are multiples of 3 or 5 ,
 we get 3,4,6 and 9. The sum of these multiples is 23 . Find the sum of all
 the multiples of 3 or 5 below 1000*/


#include <stdio.h>

int input();
int calculateSum(int num);
void output(int num, int result);

int main()
{
    int num = input();
    int result = calculateSum(num);
    output(num, result);

    return 0;
}

int input()
{
    int num;

    printf("Enter the range of number: ");
    scanf("%d", &num);

    return num;
}

int calculateSum(int num)
{
    int sum = 0;

    for (int i = 1; i < num; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    return sum;
}

void output(int num, int result)
{
    printf("The sum of multiples of 3 and 5 below %d is %d\n",
           num, result);
}
