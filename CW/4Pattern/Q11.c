//1
// A B
//1 2 3
// A B C D
//1 2 3 4 5

#include <stdio.h>
int main()
{

    int row;
    printf("Enter row no: ");
    scanf("%d", &row);

    for (int i = 65; i <= row; i++)
    {
        for (int j = 65; j <= i; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}