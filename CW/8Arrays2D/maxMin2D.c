#include <stdio.h>

int main()
{
    // int arr[2][2] = {{11, 2},
    //                  {32, -4}};
    int row, col;
    printf("Enter row and col no: \n ");
    scanf("%d %d", &row, &col);
    int arr[row][col];
    

    printf("Enter the elements of arr:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0];
    int min = arr[0][0];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }

            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }

    printf("%d is maximum\n",max);
    printf("%d is minimun", min);

    return 0;
}