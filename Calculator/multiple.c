#include "multiple.h"

#include <math.h>

double add(double first, double second)
{
    return first + second;
}

double subtract(double first, double second)
{
    return first - second;
}

double multiply(double first, double second)
{
    return first * second;
}

double divide(double first, double second)
{
    return first / second;
}

double remainder_value(double first, double second)
{
    return fmod(first, second);
}

double power(double base, double exponent)
{
    return pow(base, exponent);
}
