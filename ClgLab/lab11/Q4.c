#include <stdio.h>
int main()
{
    int arr[5] = {3, -6, 1, 18, 0}, i;
    int min = arr[0];
    int max = arr[0];
    int sum = 0;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }

    }

    

    printf("%d \n", min);
    printf("%d", max);

    return 0;
}