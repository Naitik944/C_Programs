#include <stdio.h>

/* Function declarations for each stage of the calculation. */
int input(void);
int process(int n);
int sum(int nx);
void output(int result);

int main(void) {
    int n = input();
    int nx = process(n);
    int result = sum(nx);

    output(result);
    return 0;
}

/* Return the upper limit used by the problem. */
int input(void) {
    return 1000;
}

/* Keep input processing separate so validation or parsing can be added later. */
int process(int n) {
    return n;
}

/* Sum all natural numbers below nx that are divisible by 3 or 5. */
int sum(int nx) {
    int result = 0;

    for (int i = 1; i < nx; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            result += i;
        }
    }

    return result;
}

/* Display the calculated sum. */
void output(int result) {
    printf("%d\n", result);
}
