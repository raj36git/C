// Find the total number of pairs in the array whose sum is equal to the given vlue x

#include <stdio.h>
int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x,count=0;
    printf("Enter x: ");
    scanf("%d", &x);



    for (int i = 0; i < 7; i++)
    {
        for (int j =i+1; j < 8; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                count++;
            }
            
        }
        
    }
    printf("%d",count);
    
    return 0;
}