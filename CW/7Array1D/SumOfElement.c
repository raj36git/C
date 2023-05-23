#include <stdio.h>
// int sum(int arr[], int n)
// {
//     int sum = 0;

//     for (int i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }
//     return sum;
// }

int main()
{
    int arr[6] = {3, 6, 1, 8, 2, 9};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;

    for (int i = 0; i < 6; i++)
    {
        sum = sum + arr[i];
    }
    printf("%d", sum);

    return 0;
}