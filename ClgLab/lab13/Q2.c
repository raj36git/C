// WAP to replace upper half of a square matrix to zero. 
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    // Creating a square matrix of size n with all elements set to 1
    int matrix[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matrix[i][j] = i <= j ? 1 : 0;
        }
    }

    // Replacing the upper half of the matrix with zeros
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            matrix[i][j] = 0;
        }
    }

    // Printing the modified matrix
    printf("Modified matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

