// WAP to subtract two matrices
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], diff[rows][cols];

    // Getting input for matrix1
    printf("Enter the elements of matrix1:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Getting input for matrix2
    printf("Enter the elements of matrix2:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Subtarcting the matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            diff[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    // Printing the sum matrix
    printf("Difference of the matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}