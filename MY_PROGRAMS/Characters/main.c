#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");

    if (scanf(" %c", &character) != 1) {
        return 1;
    }

    if (character >= 65 && character <= 90) {
        printf("%c is a capital letter\n", character);
    } else if (character >= 97 && character <= 122) {
        printf("%c is a small letter\n", character);
    } else if (character >= 48 && character <= 57) {
        printf("%c is a number\n", character);
    } else {
        printf("%c is a special character\n", character);
    }

    return 0;
}