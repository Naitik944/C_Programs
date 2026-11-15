#include <stdio.h>

int main() {
    int second,hours,minutes;
    printf("Enter the seconds:");
    scanf("%d",&second);
    hours=second%60;
    minutes=hours%60;
    second=second%60;
    printf("The hours is:%d\n",hours);
    printf("The minutes is:%d\n",minutes);
    printf("The seconds is:%d\n",second);
    printf("%dH:%dM:%dS",hours,minutes,second);
    return 0;
}