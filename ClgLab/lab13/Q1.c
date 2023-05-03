//. WAP to make all diagonal elements as 0 and others as 1 of a square matrix. 
#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    // Creating a square matrix of size n with all elements set to 1
    int matrix[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            matrix[i][j] = 1;
        }
    }

    // Setting diagonal elements to 0
    for (i = 0; i < n; i++) {
        matrix[i][i] = 0;
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