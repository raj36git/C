//WAP to find the maximum element & minimum element present in a matrix. 
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols], max, min;

    // Getting input for the matrix
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Finding the maximum and minimum elements in the matrix
    max = matrix[0][0];
    min = matrix[0][0];
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    // Printing the maximum and minimum elements in the matrix
    printf("Maximum element in the matrix: %d\n", max);
    printf("Minimum element in the matrix: %d\n", min);

    return 0;
}
