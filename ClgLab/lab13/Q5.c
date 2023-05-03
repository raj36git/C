// WAP to swap two rows in a given matrix. 

#include <stdio.h>

int main() {
    int rows, cols, i, j, row1, row2;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols], temp;

    // Getting input for the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Getting input for the rows to be swapped
    printf("Enter the two rows to be swapped: ");
    scanf("%d %d", &row1, &row2);

    // Swapping the rows
    for (j = 0; j < cols; j++) {
        temp = matrix[row1][j];
        matrix[row1][j] = matrix[row2][j];
        matrix[row2][j] = temp;
    }

    // Printing the matrix after swapping the rows
    printf("Matrix after swapping rows %d and %d:\n", row1, row2);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

