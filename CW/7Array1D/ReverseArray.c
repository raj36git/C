#include <stdio.h>
int main()
{
    int arr[5],i;
    printf("Enter aaray: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reverse array is: ");
    for ( i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    
   
    return 0;
}