#include <stdio.h>

void interchangeRows(int matrix[10][10], int row1, int row2, int cols) {
    for (int i = 0; i < cols; i++) {
        int temp = matrix[row1][i];
        matrix[row1][i] = matrix[row2][i];
        matrix[row2][i] = temp;
    }
}

void interchangeColumns(int matrix[10][10], int col1, int col2, int rows) {
    for (int i = 0; i < rows; i++) {
        int temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }
}

void displayMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[10][10];
    int rows, cols, row1, row2, col1, col2;

    // Input the size of the matrix
    printf("Enter the number of rows and columns (max 10 each): ");
    scanf("%d %d", &rows, &cols);

    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the original matrix
    printf("Original Matrix:\n");
    displayMatrix(matrix, rows, cols);

    // Input rows and columns to interchange
    printf("Enter two rows to interchange: ");
    scanf("%d %d", &row1, &row2);

    interchangeRows(matrix, row1, row2, cols);

    // Display the matrix after interchanging rows
    printf("Matrix after interchanging rows %d and %d:\n", row1, row2);
    displayMatrix(matrix, rows, cols);

    // Input columns to interchange
    printf("Enter two columns to interchange: ");
    scanf("%d %d", &col1, &col2);

    interchangeColumns(matrix, col1, col2, rows);

    // Display the final matrix after interchanging columns
    printf("Matrix after interchanging columns %d and %d:\n", col1, col2);
    displayMatrix(matrix, rows, cols);

    return 0;
}