/*
 * formula_roots.h
 *
 * Public interface for solving a quadratic equation of the form:
 *
 *                         ax^2 + bx + c = 0
 *
 * The implementation keeps the three possible discriminant cases separate:
 *
 *     D > 0  -> two different real roots
 *     D = 0  -> one repeated real root
 *     D < 0  -> two complex-conjugate roots
 *
 * Keeping this structure in a small result type makes it possible for the
 * caller to print the answer without having to repeat the quadratic formula.
 */

#ifndef QUADRATIC_EQUATION_FORMULA_ROOTS_H
#define QUADRATIC_EQUATION_FORMULA_ROOTS_H

typedef enum {
    TWO_DISTINCT_REAL_ROOTS,
    ONE_REPEATED_REAL_ROOT,
    TWO_COMPLEX_ROOTS
} DiscriminantType;

typedef struct {
    double discriminant;
    double root1_real;
    double root2_real;
    double root1_imaginary;
    double root2_imaginary;
    DiscriminantType type;
} QuadraticResult;

/*
 * Solves ax^2 + bx + c = 0.
 *
 * Returns 0 when the equation is genuinely quadratic (a != 0), and stores
 * the discriminant, its classification, and both roots in result.
 * Returns -1 when a is zero, because the input is then linear rather than
 * quadratic.  `result` must point to a valid QuadraticResult object.
 */
int solve_quadratic(double a, double b, double c, QuadraticResult *result);

#endif /* QUADRATIC_EQUATION_FORMULA_ROOTS_H */
