#include <stdio.h>

int main()
{
    // int arr[3][3] = {1,2,3,4};
    int r, c;
    printf("Enter row and col: ");
    scanf("%d %d", &r, &c);
    int arr[r][c];

    // input
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // output
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}