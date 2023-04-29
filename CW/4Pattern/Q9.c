// A B C D
// A B C D
// A B C D
// A B C D
// A B C D

#include <stdio.h>
int main()
{

    int row;
    printf("Enter row no: ");
    scanf("%d", &row);

    for (int i = 65; i <= row; i++)
    {
        for (int j = 65; j <= row; j++)
        {
            printf("%c ", j);
        }
        printf("\n");
    }

    return 0;
}