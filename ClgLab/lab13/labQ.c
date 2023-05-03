#include <stdio.h>
int main()
{
    int arr[10] = {15, 4, 7, 6, 9, 4,99, 23, 33,66,12};

    for (int i = 0; i <= 10; i++)
    {
        if (arr[i] % 3 == 0 && arr[i] % 5 == 0)
        {
            arr[i] = 1;
        }
        else if (arr[i] % 3 == 0 || arr[i] % 5 == 0)
        {
            arr[i] = 2;
        }
        else
        {
            arr[i] = 0;
        }
    }
        for (int j = 0; j <= 10; j++)
        {
            printf("%d\n", arr[j]);
        }

    return 0;
}