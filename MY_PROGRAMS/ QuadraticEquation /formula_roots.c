/*
 * formula_roots.c
 *
 * This file contains the mathematical part of the program.  The formula
 * used is:
 *
 *                         -b +/- sqrt(D)
 *                    x = ---------------
 *                              2a
 *
 * where:
 *
 *                         D = b^2 - 4ac
 *
 * For a negative discriminant, sqrt(D) is not a real number.  Instead:
 *
 *                   sqrt(D) = i * sqrt(-D)
 *
 * Therefore the roots are represented as:
 *
 *                 -b       sqrt(-D)
 *            x = ---- +/- i ---------
 *                 2a          2a
 *
 * The result structure stores real and imaginary parts separately so that
 * the caller can display them clearly in human-readable mathematical form.
 */

#include "formula_roots.h"

#include <math.h>
#include <stddef.h>

/*
 * A small tolerance prevents tiny floating-point round-off errors from
 * turning a mathematically repeated root into two almost-identical roots.
 * The tolerance is relative to the size of the terms used to calculate D.
 */
static int is_zero_with_tolerance(double value, double scale)
{
    const double tolerance = 1e-12;

    return fabs(value) <= tolerance * fmax(1.0, scale);
}

int solve_quadratic(double a, double b, double c, QuadraticResult *result)
{
    const double discriminant = b * b - (4.0 * a * c);
    const double discriminant_scale = fabs(b * b) + fabs(4.0 * a * c);

    if (result == NULL || a == 0.0) {
        /*
         * A zero leading coefficient means there is no x^2 term, so the
         * equation is not quadratic.  Do not divide by 2a in that case.
         */
        return -1;
    }

    result->discriminant = discriminant;
    result->root1_real = 0.0;
    result->root2_real = 0.0;
    result->root1_imaginary = 0.0;
    result->root2_imaginary = 0.0;

    if (is_zero_with_tolerance(discriminant, discriminant_scale)) {
        /*
         * D = 0 gives the same root twice:
         *
         *                         -b
         *                    x = ----
         *                         2a
         */
        const double repeated_root = -b / (2.0 * a);

        result->type = ONE_REPEATED_REAL_ROOT;
        result->discriminant = 0.0;
        result->root1_real = repeated_root;
        result->root2_real = repeated_root;
    } else if (discriminant > 0.0) {
        /*
         * D > 0 gives two different real roots.  sqrt() is safe here because
         * the branch has already established that the discriminant is
         * positive.
         */
        const double square_root = sqrt(discriminant);
        const double denominator = 2.0 * a;

        result->type = TWO_DISTINCT_REAL_ROOTS;
        result->root1_real = (-b + square_root) / denominator;
        result->root2_real = (-b - square_root) / denominator;
    } else {
        /*
         * D < 0 gives a complex-conjugate pair:
         *
         *             -b + i*sqrt(-D)       -b - i*sqrt(-D)
         *         x1 = ----------------, x2 = ----------------
         *                    2a                    2a
         */
        const double real_part = -b / (2.0 * a);
        const double imaginary_part = sqrt(-discriminant) / fabs(2.0 * a);

        result->type = TWO_COMPLEX_ROOTS;
        result->root1_real = real_part;
        result->root2_real = real_part;
        result->root1_imaginary = imaginary_part;
        result->root2_imaginary = -imaginary_part;
    }

    return 0;
}
