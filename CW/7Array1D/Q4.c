
#include <stdio.h>
int main()
{
    int sumOdd = 0;
    int sumEven = 0;
    int arr[5] = {2, 4, 4, 3, 5};
    for (int i = 0; i < 5; i++)
    {
        if (i%2==0 )
        {
            sumEven+=arr[i];
        } else{
                sumOdd+=arr[i];
        }
    }
    int diff = sumEven-sumOdd;
printf("%d",diff);
    return 0;
}