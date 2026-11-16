# Prime Number Checker

This program is a modular C program that reads an integer, checks whether it
is prime using a `while` loop, and prints the result.

## Line-by-line explanation of `5a.c`

The comments at the beginning of `5a.c` describe the exercise, required
functions, and sample input/output.

| Line | Code | Explanation |
|---:|---|---|
| 1 | `#include <stdio.h>` | Includes the standard input/output library so the program can use `printf` and `scanf`. |
| 2 | `int input();` | Declares the `input` function before it is used. It returns an integer and takes no arguments. |
| 3 | `int isPrime(int n);` | Declares the `isPrime` function. It accepts an integer and returns an integer result. |
| 4 | `void output(int n,int result);` | Declares the `output` function. It receives the number and result and returns nothing. |
| 5 | `int main() {` | Defines the program's starting function. |
| 6 | `int n;` | Declares `n`, which stores the number entered by the user. |
| 7 | `n=input();` | Calls `input` and stores its returned number in `n`. |
| 8 | `int result=isPrime(n);` | Calls `isPrime` and stores its returned result in `result`. |
| 9 | `output(n,result);` | Calls `output` to display whether `n` is prime. |
| 10 | `return 0;` | Ends `main` and tells the operating system that the program completed successfully. |
| 11 | `}` | Ends the `main` function. |
| 12 | `int input() {` | Begins the function that reads the user's number. |
| 13 | `int n;` | Declares a local variable to hold the input. |
| 14 | `printf("Enter a positive integer:");` | Displays a prompt for the user. |
| 15 | `scanf("%d",&n);` | Reads an integer and stores it in `n`; `&n` supplies its memory address. |
| 16 | `return n;` | Returns the entered number to the caller. |
| 17 | `}` | Ends the `input` function. |
| 18 | `int isPrime(int n) {` | Begins the function that determines whether `n` is prime. |
| 19 | `if (n<0)` | Checks whether the number is negative. |
| 20 | `return 0;` | Returns `0` for a negative number, meaning “not prime” in this program. |
| 21 | `int i=2;` | Starts testing possible divisors at `2`, the smallest prime divisor. |
| 22 | The loop comment | Explains why the divisor search starts at `2` and when it can stop. |
| 23 | `while (i*i<=n) {` | Repeats the divisor test while the square of `i` is no greater than `n`. |
| 24 | `if (n%i==0)` | Checks whether `n` divides evenly by `i`; `%` gives the remainder. |
| 25 | `return 0;` | Immediately reports “not prime” when a divisor is found. |
| 26 | `i++;` | Increases `i` by one so the next possible divisor is tested. |
| 27 | `}` | Ends the `while` loop. |
| 28 | `return 1;` | Reports “prime” when no divisor was found before the loop stopped. |
| 29 | `}` | Ends the `isPrime` function. |
| 30 | `void output(int n,int result) {` | Begins the function that prints the result. |
| 31 | `if (result==1) {` | Checks whether `isPrime` returned `1`. |
| 32 | `printf("%d is a prime number",n);` | Prints that the number is prime. |
| 33 | `}` | Ends the first conditional block. |
| 34 | `else {` | Selects the alternative block when the result is not `1`. |
| 35 | `printf("%d is not a prime number",n);` | Prints that the number is not prime. |
| 36 | `}` | Ends the `else` block. |
| 37 | `}` | Ends the `output` function. |

Blank lines only separate sections of the source code and do not execute any
instruction.

## Loop and prime-checking logic

The loop is:

```c
int i=2;
while (i*i<=n) {
    if (n%i==0)
        return 0;
    i++;
}
```

1. `i` starts at `2`, because every integer is divisible by `1`, and testing
   `1` would not help identify a non-prime number.
2. `n % i` calculates the remainder after dividing `n` by `i`.
3. If the remainder is `0`, `i` is a factor of `n`, so the function
   immediately returns `0` (“not prime”).
4. If `i` is not a factor, `i++` moves to the next possible divisor.
5. The condition `i*i <= n` is equivalent to checking divisors up to the
   square root of `n`. If `n` had a factor larger than its square root, it
   would also have a matching factor smaller than the square root, which
   would already have been found.
6. If the loop finishes without returning `0`, the function returns `1`
   (“prime”).

## Program flow

`main` calls the functions in this order:

1. `input()` reads the number.
2. `isPrime(n)` checks its factors using the `while` loop.
3. `output(n, result)` prints the appropriate message.

The current condition explicitly rejects negative numbers. The assignment
asks for a positive integer; therefore, the expected inputs are positive.
