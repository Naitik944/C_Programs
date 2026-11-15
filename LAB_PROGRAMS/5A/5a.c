/*5a) Write a modular C program that implements while loop to test whether a number is prime.

The program should:

Read an integer from the user.
Use a function to determine whether the number is prime using a while loop.
Display whether the given number is Prime or Not Prime.
Function Prototypes
int input();
int isPrime(int n);
void output(int n, int result);

Sample Input 1
17
Sample Output 1
Enter a positive integer: 17
17 is a Prime Number.

Sample Input 1
10
Sample Output 1
Enter a positive integer: 17
10 is Not a Prime Number.*/
#include <stdio.h>

int input();
int isPrime(int n);
void output(int n,int result);

int main() {
    int n;
    n=input();
    int result=isPrime(n);
    output(n,result);
    return 0;
}
int input() {
    int n;
    printf("Enter a positive integer:");
    scanf("%d",&n);
    return n;
}
int isPrime(int n) {
    if (n<0)
        return 0;
    int i=2;
    // Test divisors from 2 upward; stop when i*i is greater than n because
    // any factor larger than the square root would have a smaller matching factor.
    while (i*i<=n) {
        if (n%i==0)
            return 0;
        i++;
    }
    return 1;
}
void output(int n,int result) {
    if (result==1) {
        printf("%d is a prime number",n);
    }
    else {
        printf("%d is not a prime number",n);
    }
}