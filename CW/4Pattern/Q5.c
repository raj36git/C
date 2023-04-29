// * * * * 
// * * *  
// * *  
// *  

#include <stdio.h>
int main()
{

    int row, col;
    printf("Enter row no: ");
    scanf("%d", &row);

    // printf("Enter column no: ");
    // scanf("%d",&col);

    for (int i = row; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}