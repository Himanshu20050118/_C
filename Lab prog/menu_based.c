/*
Write a menu based program to ask the user for following operations on matrices:
a) Transpose of a matrix
b) Sum of diagonal elements of a matrix
c) Addition of two matrix
d) Multiplication of two matrices
*/

#include <stdio.h>

void main() {
    int choice, i, j, k, rows1, cols1, rows2, cols2, sum = 0;

    printf("Menu:\n");
    printf("a) Transpose of a matrix\n");
    printf("b) Sum of diagonal elements of a matrix\n");
    printf("c) Addition of two matrices\n");
    printf("d) Multiplication of two matrices\n");
    printf("Enter your choice (a/b/c/d): ");
    char option;
    scanf(" %c", &option);

    if (option == 'a' || option == 'b') {
        printf("Enter the number of rows and columns of the matrix: ");
        scanf("%d %d", &rows1, &cols1);
        int matrix[rows1][cols1];

        printf("Enter the elements of the matrix:\n");
        for (i = 0; i < rows1; i++) {
            for (j = 0; j < cols1; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }

        if (option == 'a') {
            // Transpose of a matrix
            printf("The transpose of the matrix is:\n");
            for (j = 0; j < cols1; j++) {
                for (i = 0; i < rows1; i++) {
                    printf("%d ", matrix[i][j]);
                }
                printf("\n");
            }
        } else if (option == 'b') {
            // Sum of diagonal elements
            if (rows1 != cols1) {
                printf("Matrix must be square to calculate diagonal sum.\n");
            } else {
                for (i = 0; i < rows1; i++) {
                    sum += matrix[i][i];
                }
                printf("The sum of the diagonal elements is: %d\n", sum);
            }
        }
    } else if (option == 'c' || option == 'd') {
        printf("Enter the number of rows and columns of the first matrix: ");
        scanf("%d %d", &rows1, &cols1);
        int matrix1[rows1][cols1];

        printf("Enter the elements of the first matrix:\n");
        for (i = 0; i < rows1; i++) {
            for (j = 0; j < cols1; j++) {
                scanf("%d", &matrix1[i][j]);
            }
        }

        if (option == 'c') {
            printf("Enter the number of rows and columns of the second matrix (must match first matrix dimensions): ");
            scanf("%d %d", &rows2, &cols2);
            if (rows1 != rows2 || cols1 != cols2) {
                printf("Matrix dimensions must match for addition.\n");
            } else {
                int matrix2[rows2][cols2], result[rows1][cols1];

                printf("Enter the elements of the second matrix:\n");
                for (i = 0; i < rows2; i++) {
                    for (j = 0; j < cols2; j++) {
                        scanf("%d", &matrix2[i][j]);
                    }
                }

                // Matrix addition
                printf("The result of matrix addition is:\n");
                for (i = 0; i < rows1; i++) {
                    for (j = 0; j < cols1; j++) {
                        result[i][j] = matrix1[i][j] + matrix2[i][j];
                        printf("%d ", result[i][j]);
                    }
                    printf("\n");
                }
            }
        } else if (option == 'd') {
            printf("Enter the number of columns of the second matrix: ");
            scanf("%d", &cols2);
            rows2 = cols1; // Number of rows in second matrix must match columns of first matrix
            int matrix2[rows2][cols2], result[rows1][cols2];

            printf("Enter the elements of the second matrix:\n");
            for (i = 0; i < rows2; i++) {
                for (j = 0; j < cols2; j++) {
                    scanf("%d", &matrix2[i][j]);
                }
            }

            // Matrix multiplication
            printf("The result of matrix multiplication is:\n");
            for (i = 0; i < rows1; i++) {
                for (j = 0; j < cols2; j++) {
                    result[i][j] = 0;
                    for (k = 0; k < cols1; k++) {
                        result[i][j] += matrix1[i][k] * matrix2[k][j];
                    }
                    printf("%d ", result[i][j]);
                }
                printf("\n");
            }
        }
    } else {
        printf("Invalid choice. Please run the program again.\n");
    }
}