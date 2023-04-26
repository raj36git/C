#include <stdio.h>
int main()
{
    int arr[5] = {3, -6, 1, 18, 0}, i;

    for (i = 0; i < sizeof(arr); i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d is  even \n", i);
        }
        if (arr[i] % 2 != 0)
        {
            printf("%d is  odd \n", i);
        }
        if (arr[i] < 0)
        {
            printf("%d is negative \n", i);
        }
        else{
            printf("%d is positive\n", i);
        }
    }

    return 0;
}
