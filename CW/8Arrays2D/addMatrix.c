#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter r & c: ");
    scanf("%d %d", &r, &c);
    int arr1[r][c];
    int arr2[r][c];
    int result[r][c];

    printf("Enter 1st array element: ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter 2nd array element: ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("result matrix is: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}