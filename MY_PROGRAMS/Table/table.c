//this program computes number table for the user as requested

#include <stdio.h>
/* these are the parameters*/
int input(void);
void  process(int n);
void display(int n,int i,int table);
/*main function*/
int main(void) {
    int n;
    n=input();
    process(n);
    return 0;
}
/*input function*/
int input(void) {
    int n;
    printf("THIS PROGRAM COMPUTES TABLE\n");
    printf("Enter your number:");
    scanf("%d",&n);
    return n;
}
/*for loop the main logic for our program*/
void process(int n) {
    int i,table;
    for (i=1;i<=10;i++) {
        table=n*i;
        display(n,i,table);
    }
}
/*this function displays the output to user i.e. table.*/
void display(int n,int i,int table) {
    printf("%d X %d = %d\n",n,i,table);
}
