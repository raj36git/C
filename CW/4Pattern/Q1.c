// * * * * *
// * * * * *
// * * * * *

#include<stdio.h>
int main(){

    int row, col;
    printf("Enter row no: ");
    scanf("%d",&row);

    printf("Enter column no: ");
    scanf("%d",&col);

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            printf("* ");
        }
         printf("\n");
    }
    

    return 0;
}