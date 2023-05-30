#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter r & c: ");
    scanf("%d %d", &r, &c);
    int arr1[r][c];

    printf("Enter  array element: ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
        printf("\n");
    }

    for (int i = 0; i < r; i++)
    {
        int rowSum = 0;
        int colSum = 0;
        for (int j = 0; j < c; j++)
        {
            rowSum = rowSum + arr1[i][j];
            colSum = colSum + arr1[j][i];
        }
        printf("%d %d \n", rowSum,colSum);
    
        printf("\n");
    }

    return 0;
}