
#include <stdio.h>

void input(int rows,int cols,int matrix[rows][cols]);
void transpose(int rows,int cols,int matrix[rows][cols],int transposed[cols][rows]);
void output(int rows,int cols,int matrix[rows][cols]);

int main() {
    int rows,cols;

    printf("Enter the number of rows: ");
    scanf("%d",&rows);

    printf("Enter the number of columns: ");
    scanf("%d",&cols);

    int matrix[rows][cols];
    int transposed[cols][rows];

    printf("Enter the elements of the matrix:\n");
    input(rows,cols,matrix);

    transpose(rows,cols,matrix,transposed);

    printf("\nOriginal Matrix:\n");
    output(rows,cols,matrix);

    printf("\nTranspose of Matrix:\n");
    output(cols,rows,transposed);

    return 0;
}

void input(int rows,int cols,int matrix[rows][cols]) {
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
}

void transpose(int rows,int cols,int matrix[rows][cols],int transposed[cols][rows]) {
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            transposed[j][i]=matrix[i][j];
        }
    }
}

void output(int rows,int cols,int matrix[rows][cols]) {
    for (int i=0;i<rows;i++)
    {
        for (int j=0;j<cols;j++)
        {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
