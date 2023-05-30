#include <stdio.h>
int main()
{
     int transpose[2][2],isSymmetric = 1;
    int arr[2][2] = {{1, 1},
                     {2, 2}};

    // transpose
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    //symmetric or not
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
              if ( transpose[i][j] != arr[i][j])
              {
                isSymmetric = 0;
                break;
              } else{
               isSymmetric = 1;
                
              }     
        }
    }

    if (isSymmetric == 1){
        printf("Symmetric");
    } else{
         printf("Not Symmetric");
    }
   
    

    return 0;
}