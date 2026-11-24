7a) Write a modular C program for string processing to count vowels and consonants.

The program should:

Read a string from the user.
Use a user-defined function to count the number of vowels.
Use another user-defined function to count the number of consonants.
Ignore digits, spaces, and special characters.
Display the total number of vowels and consonants.
Function Prototypes
void input(char str[]);
int countVowels(char str[]);
int countConsonants(char str[]);
void output(int vowels, int consonants);

Sample Input
Programming in C

Sample Output
Enter a string: Programming in C
Number of vowels: 4
Number of consonants: 10