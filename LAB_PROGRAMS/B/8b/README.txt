8b) Write a modular C program by passing two-dimensional arrays to functions to perform transpose of matrices.

The program should:

Read the number of rows and columns of the matrix.
Read the elements of the matrix.
Pass the matrix to a function to find its transpose.
Display the original matrix and its transpose using separate functions.
The transpose of a matrix is obtained by interchanging its rows and columns.

Function Prototypes
void input(int rows, int cols, int matrix[rows][cols]);
void transpose(int rows, int cols, int matrix[rows][cols], int transposed[cols][rows]);
void output(int rows, int cols, int matrix[rows][cols]);

Sample Input
2
3
1 2 3
4 5 6
Sample Output
Enter the number of rows: 2
Enter the number of columns: 3
Enter the elements of the matrix:

Original Matrix:
1 2 3
4 5 6

Transpose of Matrix:
1 4
2 5
3 6