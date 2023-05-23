#include <stdio.h>

int main()
{

    int arr[7] = {3, 9, 11, 5, -2, 6, 1};

    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > max)
           max = arr[i];
    
        if (arr[i]<min)
            min = arr[i];
        
    }
    printf("%d is max\n", max);
    printf("%d is min\n", min);
    

    return 0;
}