/*Can Vote?

Create a program to check whether a person can vote or not depending on his/her age.

Get integer input from the user and store it in the age variable.
If age is 18 or above, print The person can vote. If not, don't print anything.*/

#include <stdio.h>
int main() {
    char name[20];
    int age,diff;
    printf("Enter your name:");
    fgets(name, sizeof(name), stdin);
    //scanf("%s", name);
    printf("Enter your age:");
    scanf("%d", &age);
    diff=18-age;
    if (age < 18) {
        printf("Your age is below voting age\n");
        printf("You need %d more age at present age of %dyrs",diff,age);
    }
    else {
        printf("Your are eligible for voting\n");
        printf("HAPPY VOTING");
        }
return 0;
}        