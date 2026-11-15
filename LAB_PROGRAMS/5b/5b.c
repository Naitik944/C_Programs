/* 5b) Write a modular C program using a while loop to generate the Fibonacci sequence for the given number of terms.

The Fibonacci sequence starts with:

0, 1, 1, 2, 3, 5, 8,…

Each term after the first two terms is obtained by adding the previous two terms.

The program should:

Read the number of terms n.
Use a while loop to generate the first n terms of the Fibonacci sequence.
Display the generated sequence.
Function Prototypes
int input();
void generateFibonacci(int n);
void output(int value);

Sample Input
7
Sample Output
Enter the number of terms: 7
0 1 1 2 3 5 8 */
#include <stdio.h>

int input();
void generateFibonacci(int n);
void output(int value);

int main() {
    int n;
    n = input();
    generateFibonacci(n);
    return 0;
}
int input() {
    int n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    return n;
}
void generateFibonacci(int n) {
    int a=0,b=1,next;
    int count=0;

    while(count<n) {
        output(a);
        next=a+b;
        a=b;
        b=next;
        count++;
    }
    printf("\n");

}
void output(int value) {
    printf("%d, ",value);
}