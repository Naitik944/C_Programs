/*4a) Write modular C program that implements for loop to compute aggregate values like sum up to n.

The program should:

Read a positive integer n from the user.
Use a user-defined function to compute the sum of the first n natural numbers using a for loop.
Display the computed sum.
Function Prototypes
int input();
int computeSum(int n);
void output(int n, int sum);

Sample Input
10
Sample Output
Enter the value of n: 10
Sum of first 10 natural numbers = 55 */

#include <stdio.h>

int input();
int computeSum(int n);
void output(int n,int sum);

int main() {
    int n;
    n=input();
    int sum=computeSum(n);
    output(n,sum);
    return 0;
}
int input() {
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    return n;
}
int computeSum(int n) {
    int i; int sum=0;
    for (i=1;i<=n;i++) {
        sum=sum+i;
    }
    return sum;
}
void output(int n,int sum) {
    printf("Sum of first %d numbers is: %d\n",n,sum);
}