#include <errno.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#include "multiple.h"
#include "single.h"

#define INPUT_SIZE 128

static int read_number(const char *prompt, double *number)
{
    char input[INPUT_SIZE];
    char *end;

    printf("%s", prompt);
    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 0;
    }

    errno = 0;
    *number = strtod(input, &end);
    while (*end == ' ' || *end == '\t' || *end == '\n') {
        ++end;
    }

    return end != input && *end == '\0' && errno != ERANGE;
}

static int read_integer(const char *prompt, unsigned int *number)
{
    double value;

    if (!read_number(prompt, &value) || value < 0.0 ||
        value > 20.0 || value != floor(value)) {
        return 0;
    }

    *number = (unsigned int)value;
    return 1;
}

static int read_menu_choice(const char *prompt)
{
    char input[INPUT_SIZE];
    char *end;

    printf("%s", prompt);
    if (fgets(input, sizeof(input), stdin) == NULL) {
        return -1;
    }

    errno = 0;
    const long choice = strtol(input, &end, 10);
    while (*end == ' ' || *end == '\t' || *end == '\n') {
        ++end;
    }

    if (end == input || *end != '\0' || errno == ERANGE ||
        choice < 0 || choice > 9) {
        return -2;
    }

    return (int)choice;
}

static void print_main_menu(void)
{
    puts("\n=== Calculator ===");
    puts("1. Single-number operations");
    puts("2. Two-number operations");
    puts("3. Credits");
    puts("0. Exit");
}

static void print_single_menu(void)
{
    puts("\n--- Single-number operations ---");
    puts("1. Square");
    puts("2. Square root");
    puts("3. Absolute value");
    puts("4. Factorial");
    puts("0. Back");
}

static void print_multiple_menu(void)
{
    puts("\n--- Two-number operations ---");
    puts("1. Add");
    puts("2. Subtract");
    puts("3. Multiply");
    puts("4. Divide");
    puts("5. Power");
    puts("0. Back");
}

static void print_credits(void)
{
    puts("\n--- Credits ---");
    puts("Made by Naitik Singh");
}
static void run_single_operations(void)
{
    int choice;
    double number;
    unsigned int integer;

    do {
        print_single_menu();
        choice = read_menu_choice("Choose an option: ");

        switch (choice) {
            case 1:
                if (!read_number("Number: ", &number)) {
                    puts("Invalid number.");
                    break;
                }
                printf("Result: %.10g\n", square(number));
                break;
            case 2:
                if (!read_number("Number: ", &number)) {
                    puts("Invalid number.");
                } else if (number < 0.0) {
                    puts("Square root of a negative number is not real.");
                } else {
                    printf("Result: %.10g\n", square_root(number));
                }
                break;
            case 3:
                if (!read_number("Number: ", &number)) {
                    puts("Invalid number.");
                    break;
                }
                printf("Result: %.10g\n", absolute_value(number));
                break;
            case 4:
                if (!read_integer("Non-negative integer (0-20): ", &integer)) {
                    puts("Factorial is supported for integers from 0 to 20.");
                    break;
                }
                printf("Result: %llu\n", factorial(integer));
                break;
            case 0:
                break;
            case -1:
                puts("Input ended.");
                return;
            default:
                puts("Invalid option. Choose a number from 0 to 4.");
                break;
        }
    } while (choice != 0);
}

static void run_multiple_operations(void)
{
    int choice;
    double first;
    double second;

    do {
        print_multiple_menu();
        choice = read_menu_choice("Choose an option: ");

        switch (choice) {
            case 1:
                if (!read_number("First number: ", &first) ||
                    !read_number("Second number: ", &second)) {
                    puts("Invalid number.");
                    break;
                }
                printf("Result: %.10g\n", add(first, second));
                break;
            case 2:
                if (!read_number("First number: ", &first) ||
                    !read_number("Second number: ", &second)) {
                    puts("Invalid number.");
                    break;
                }
                printf("Result: %.10g\n", subtract(first, second));
                break;
            case 3:
                if (!read_number("First number: ", &first) ||
                    !read_number("Second number: ", &second)) {
                    puts("Invalid number.");
                    break;
                }
                printf("Result: %.10g\n", multiply(first, second));
                break;
            case 4:
                if (!read_number("Dividend: ", &first) ||
                    !read_number("Divisor: ", &second)) {
                    puts("Invalid number.");
                } else if (second == 0.0) {
                    puts("Division by zero is undefined.");
                } else {
                    printf("Quotient: %.10g\n", divide(first, second));
                    printf("Remainder: %.10g\n",
                           remainder_value(first, second));
                }
                break;
            case 5:
                if (!read_number("Base: ", &first) ||
                    !read_number("Exponent: ", &second)) {
                    puts("Invalid number.");
                    break;
                }
                printf("Result: %.10g\n", power(first, second));
                break;
            case 0:
                break;
            case -1:
                puts("Input ended.");
                return;
            default:
                puts("Invalid option. Choose a number from 0 to 5.");
                break;
        }
    } while (choice != 0);
}

int main(void)
{
    int choice;

    puts("Welcome to the modular C calculator.");

    do {
        print_main_menu();
        choice = read_menu_choice("Choose an option: ");

        switch (choice) {
            case 1:
                run_single_operations();
                break;
            case 2:
                run_multiple_operations();
                break;
            case 3:
                print_credits();
                break;
            case 0:
                puts("Goodbye.");
                break;
            case -1:
                puts("Input ended.");
                break;
            default:
                puts("Invalid option. Choose 0, 1, 2, or 3.");
                break;
        }
    } while (choice != 0 && choice != -1);

    return 0;
}
