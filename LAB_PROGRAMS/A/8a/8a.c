#include <stdio.h>

void input(int rows, int cols, int matrix[rows][cols]);
void addMatrix(int rows, int cols, int a[rows][cols], int b[rows][cols], int sum[rows][cols]);
void subtractMatrix(int rows, int cols, int a[rows][cols], int b[rows][cols], int diff[rows][cols]);
void output(int rows, int cols, int matrix[rows][cols]);

int main(void) {
    int rows;
    int cols;

    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        fprintf(stderr, "Rows must be a positive integer.\n");
        return 1;
    }

    printf("Enter the number of columns: ");
    if (scanf("%d", &cols) != 1 || cols <= 0) {
        fprintf(stderr, "Columns must be a positive integer.\n");
        return 1;
    }

    int first[rows][cols];
    int second[rows][cols];
    int sum[rows][cols];
    int difference[rows][cols];

    printf("\nEnter elements of first matrix:\n");
    input(rows, cols, first);

    printf("\nEnter elements of second matrix:\n");
    input(rows, cols, second);

    addMatrix(rows, cols, first, second, sum);
    subtractMatrix(rows, cols, first, second, difference);

    printf("\nSum of matrices:\n");
    output(rows, cols, sum);

    printf("\nDifference of matrices:\n");
    output(rows, cols, difference);

    return 0;
}

void input(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Enter element at [%d][%d]: ", i, j);
            while (scanf("%d", &matrix[i][j]) != 1) {
                fprintf(stderr, "Please enter an integer.\n");
                int ch;
                while ((ch = getchar()) != '\n' && ch != EOF) {
                }
                printf("Enter element at [%d][%d]: ", i, j);
            }
        }
    }
}

void addMatrix(int rows, int cols, int a[rows][cols], int b[rows][cols],
               int sum[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

void subtractMatrix(int rows, int cols, int a[rows][cols], int b[rows][cols],
                    int diff[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }
}

void output(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d", matrix[i][j]);
            if (j < cols - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
}
