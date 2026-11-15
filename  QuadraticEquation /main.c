/*
 * main.c
 *
 * This file handles the user interface only.  The actual quadratic formula
 * is implemented in formula_roots.c, which keeps the calculation reusable
 * and makes each discriminant case explicit.
 */

#include <stdio.h>

#include "formula_roots.h"

/*
 * Reads one coefficient and reports malformed input immediately.  Using
 * doubles is important because roots and coefficients do not need to be
 * whole numbers.
 */
static int read_coefficient(const char *name, double *value)
{
    printf("Enter %s: ", name);

    if (scanf("%lf", value) != 1) {
        fprintf(stderr, "Invalid input: %s must be a number.\n", name);
        return 0;
    }

    return 1;
}

static void print_discriminant_type(DiscriminantType type)
{
    switch (type) {
        case TWO_DISTINCT_REAL_ROOTS:
            printf("Discriminant type: positive (D > 0) - two distinct real roots.\n");
            break;
        case ONE_REPEATED_REAL_ROOT:
            printf("Discriminant type: zero (D = 0) - one repeated real root.\n");
            break;
        case TWO_COMPLEX_ROOTS:
            printf("Discriminant type: negative (D < 0) - two complex-conjugate roots.\n");
            break;
    }
}

/*
 * Prints a complex number as "real + imaginary i".  The sign is selected
 * explicitly so negative imaginary parts are not displayed as "+ -...i".
 */
static void print_complex_root(const char *label, double real, double imaginary)
{
    if (imaginary < 0.0) {
        printf("%s = %.12g - %.12gi\n", label, real, -imaginary);
    } else {
        printf("%s = %.12g + %.12gi\n", label, real, imaginary);
    }
}

int main(void)
{
    double a;
    double b;
    double c;
    QuadraticResult result;

    printf("QUADRATIC EQUATION SOLVER\n");
    printf("Equation: ax^2 + bx + c = 0\n\n");

    if (!read_coefficient("a", &a) ||
        !read_coefficient("b", &b) ||
        !read_coefficient("c", &c)) {
        return 1;
    }

    if (solve_quadratic(a, b, c, &result) != 0) {
        fprintf(stderr,
                "Error: a must not be zero; otherwise the equation is linear.\n");
        return 1;
    }

    /*
     * The %g conversion removes unnecessary trailing zeroes:
     *
     *     1.000000  becomes 1
     *     3.500000  becomes 3.5
     *
     * Twelve significant digits still preserve useful precision for normal
     * calculator-sized inputs.
     */
    printf("\nEquation: %.12gx^2 %+.12gx %+.12g = 0\n", a, b, c);
    printf("Discriminant: D = b^2 - 4ac = %.12g\n", result.discriminant);
    print_discriminant_type(result.type);
    printf("\nRoots:\n");

    if (result.type == TWO_COMPLEX_ROOTS) {
        print_complex_root("x1", result.root1_real, result.root1_imaginary);
        print_complex_root("x2", result.root2_real, result.root2_imaginary);
    } else if (result.type == ONE_REPEATED_REAL_ROOT) {
        printf("x1 = x2 = %.12g\n", result.root1_real);
    } else {
        printf("x1 = %.12g\n", result.root1_real);
        printf("x2 = %.12g\n", result.root2_real);
    }

    return 0;
}