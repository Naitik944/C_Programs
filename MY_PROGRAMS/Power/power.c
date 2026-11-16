//
// Created by Naitik Singh on 13/10/26.
//

#include "power.h"

int power(int base, int exponent) {
    int result = 1;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}