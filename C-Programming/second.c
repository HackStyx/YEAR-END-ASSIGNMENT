#include <stdio.h>

void displayLowerTriangular(int mat[10][10], int n) {
    // Set upper triangular elements to zero
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            mat[i][j] = 0;
        }
    }

    // Display the modified matrix (lower triangular)
    printf("Lower Triangular Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[10][10];
    int n;

    // Taking input for the matrix size
    printf("Enter the size of the matrix (maximum 10): ");
    scanf("%d", &n);

    // Taking input for the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    displayLowerTriangular(matrix, n);

    return 0;
}
