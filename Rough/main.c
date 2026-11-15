#include <stdio.h>

#include "bitwise_AND.h"
#include "bitwise_OR.h"
#include "bitwise_XOR.h"

int main(void) {
    int and_a = 12;
    int and_b = 10;
    int or_a = 18;
    int or_b = 11;
    int xor_a = 25;
    int xor_b = 17;

    printf("Bitwise AND of %d & %d = %d\n", and_a, and_b, bitwise_and(and_a, and_b));
    printf("Bitwise OR of %d | %d = %d\n", or_a, or_b, bitwise_or(or_a, or_b));
    printf("Bitwise XOR of %d ^ %d = %d\n", xor_a, xor_b, bitwise_xor(xor_a, xor_b));
    return 0;
}
