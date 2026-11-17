#include <stdio.h>

int main(void) {
    // Only Fibonacci terms up to four million are included.
    const int limit = 4000000;

    // Start with the first two terms: 1 and 2.
    int previous = 1;
    int current = 2;
    int even_sum = 0;

    while (current <= limit) {
        // Add the current term only when it is even.
        if (current % 2 == 0) {
            even_sum += current;
        }

        // Generate the next Fibonacci term and advance the sequence.
        int next = previous + current;
        previous = current;
        current = next;
    }

    printf("%d\n", even_sum);
    return 0;
}
