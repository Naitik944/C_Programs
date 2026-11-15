#include "single.h"

#include <math.h>

double square(double number)
{
    return number * number;
}

double square_root(double number)
{
    return sqrt(number);
}

double absolute_value(double number)
{
    return fabs(number);
}

unsigned long long factorial(unsigned int number)
{
    unsigned long long result = 1;

    for (unsigned int i = 2; i <= number; ++i) {
        result *= i;
    }

    return result;
}
