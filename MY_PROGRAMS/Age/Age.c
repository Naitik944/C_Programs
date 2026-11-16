#include <stdio.h>
int main() {
    int age,cyear,year;
    char name[50];
    printf("Enter your name:");
    fgets(name, sizeof(name), stdin);
    //scanf("%s",name);
    printf("Enter your year of birth:");
    scanf("%d",&year);
    printf("Enter the current year:");
    scanf("%d",&cyear);
    age=cyear-year;
    printf("%s is %d years old", name, age);
    return 0;
}
