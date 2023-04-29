// 1 2 3 4
// 1 2 3
// 1 2 
// 1 


#include <stdio.h>
int main()
{

    int row, col;
    printf("Enter row no: ");
    scanf("%d", &row);

    // printf("Enter column no: ");
    // scanf("%d",&col);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row+1-i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;
}