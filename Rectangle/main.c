/* This program computes area or perimeter of a rectangle with the length and breadth entered by the user*/

#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;
    char operation;

    // input from user
    printf("Enter the length of the rectangle: ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &breadth);

    // area or perimeter
    printf("AREA or PERIMETER [A/P]: ");
    scanf(" %c", &operation);

    // condition and logic
    if (operation == 'A' || operation == 'a') {
        area = length * breadth;
        printf("The area of the rectangle is %d units\n", area);
    }
    else if (operation == 'P' || operation == 'p') {
        perimeter = 2 * (length + breadth);
        printf("The perimeter of the rectangle is %d units\n", perimeter);
    }

    return 0;
}