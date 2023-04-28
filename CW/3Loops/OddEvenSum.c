#include <stdio.h>
int main()
{

    int n, odd = 0, even = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum;

    if (n%2==0)
    {
        sum = (-n)/2;
    } else{
        sum = ((-n)/2)+n;
    }
    
//     for (int i = 1; i <= n; i++)
//     {
//         if (i % 2 != 0)
//         {
//             // odd = odd + i;
//             sum = sum + i;
//         }
//         else
//         {
//             // even = even + i;
//             sum = sum - i;
//         }
//     }
//   //  int result = odd - even;

    printf("Sum is: %d", sum);

    return 0;
}