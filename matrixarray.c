#include <stdio.h>

void inputMatrix(int rows, int cols, int matrix[rows][cols]) {
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int rows, int cols, int matrix[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void subtractMatrices(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols], int result[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void multiplyMatrices(int r1, int c1, int mat1[r1][c1], int r2, int c2, int mat2[r2][c2], int result[r1][c2]) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int rows1, cols1, rows2, cols2;

    // Input dimensions for Matrix 1
    printf("Enter rows and columns for Matrix 1: ");
    scanf("%d %d", &rows1, &cols1);

    // Input dimensions for Matrix 2
    printf("Enter rows and columns for Matrix 2: ");
    scanf("%d %d", &rows2, &cols2);

    int mat1[rows1][cols1], mat2[rows2][cols2], result[rows1][cols1];

    // Input matrices
    printf("\nMatrix 1:\n");
    inputMatrix(rows1, cols1, mat1);

    printf("\nMatrix 2:\n");
    inputMatrix(rows2, cols2, mat2);

    // Addition
    if (rows1 == rows2 && cols1 == cols2) {
        addMatrices(rows1, cols1, mat1, mat2, result);
        printf("\nAddition of the matrices:\n");
        printMatrix(rows1, cols1, result);
    } else {
        printf("\nAddition not possible (dimensions mismatch).\n");
    }

    // Subtraction
    if (rows1 == rows2 && cols1 == cols2) {
        subtractMatrices(rows1, cols1, mat1, mat2, result);
        printf("\nSubtraction of the matrices:\n");
        printMatrix(rows1, cols1, result);
    } else {
        printf("\nSubtraction not possible (dimensions mismatch).\n");
    }

    // Multiplication
    if (cols1 == rows2) {
        int product[rows1][cols2];
        multiplyMatrices(rows1, cols1, mat1, rows2, cols2, mat2, product);
        printf("\nMultiplication of the matrices:\n");
        printMatrix(rows1, cols2, product);
    } else {
        printf("\nMultiplication not possible (dimensions mismatch).\n");
    }

    return 0;
}

