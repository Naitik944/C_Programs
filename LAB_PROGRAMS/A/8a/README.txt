8a)  Write a modular C program by passing two-dimensional arrays to functions to perform matrix operations like addition, subtraction.

The program should:

Read a string from the user.
Use a user-defined function to count the number of vowels.
Use another user-defined function to count the number of consonants.
Ignore digits, spaces, and special characters.
Display the total number of vowels and consonants.
Function Prototypes
void input(int rows, int cols, int matrix[rows][cols]);
void addMatrix(int rows, int cols, int a[rows][cols], int b[rows][cols], int sum[rows][cols]);
void subtractMatrix(int rows, int cols, int a[rows][cols], int b[rows][cols], int diff[rows][cols]);
void output(int rows, int cols, int matrix[rows][cols]);

Sample Input
Enter the number of rows: 2
Enter the number of columns: 2

Enter elements of first matrix:
Enter element at [0][0]: 1
Enter element at [0][1]: 2
Enter element at [1][0]: 3
Enter element at [1][1]: 4

Enter elements of second matrix:
Enter element at [0][0]: 5
Enter element at [0][1]: 6
Enter element at [1][0]: 7
Enter element at [1][1]: 8

Sample Output
Sum of matrices:
6 8
10 12

Difference of matrices:
-4 -4
-4 -4