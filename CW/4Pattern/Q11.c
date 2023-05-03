// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

#include <stdio.h>
int main()
{

    int row;
    char ch = 'A';
    printf("Enter row no: ");
    scanf("%d", &row);

   for (int i = 1; i <= row; i++)
   {
    for (int j = 1; i <= i; i++)
    {
        if (i%2!=0)
        {
          printf("%d",i);
          i+=2;
        } else{
            printf("%c",ch);
            ch++;
        }
        
    }
    printf(" \n");
    
   }
    return 0;
}