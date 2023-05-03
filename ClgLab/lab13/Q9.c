// WAP to test whether a square matrix is symmetrical or not (i.e. transpose and the matrix is equal.


#include <stdio.h>

int main() {
    int rows, cols, i, j, isSymmetrical = 1;

    printf("Enter the number of rows and columns for the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols], transpose[cols][rows];

    // Getting input for the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Computing the transpose of the matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Checking if the matrix is symmetrical or not
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != transpose[i][j]) {
                isSymmetrical = 0;
                break;
            }
        }
        if (!isSymmetrical) {
            break;
        }
    }

    // Printing the result
    if (isSymmetrical) {
        printf("The matrix is symmetrical.\n");
    } else {
        printf("The matrix is not symmetrical.\n");
    }

    return 0;
}
