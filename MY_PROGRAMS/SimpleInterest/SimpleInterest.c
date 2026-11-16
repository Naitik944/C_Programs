/*Calculate Simple Interest for a set of value representing
principal,number of years and rate of interest.*/
//Principal(P),Number of years(N),Rate of interest(R)
#include "stdio.h"
int main() {
    int P;
    float N,R,Simple,Total;
    printf("Simple Interest➡︎\n");
    printf("NOTE:Don't write any unit like years,%,₹,etc\n");
    printf("Enter your principal amount(Like ₹1000):₹");
    scanf("%d",&P);
    printf("Enter number of years(Ex.3 for 3 years):");
    scanf("%f",&N);
    printf("Enter the rate of interest(Like 8.5):");
    scanf("%f",&R);
    Simple=(P*N*R)/100;
    printf("The Simple Interest is ₹%f\n",Simple);
    Total=P+Simple;
    printf("Total payable amount is ₹%f\n",Total);
    return 0;
}