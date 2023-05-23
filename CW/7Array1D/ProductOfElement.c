#include<stdio.h>

int main()
{
   
     int arr[3] = {3, 6, 1};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int product = 1;

    for (int i = 0; i < 3; i++)
    {
        product = product * arr[i];
    }
    printf("%d", product);

    return 0;
}