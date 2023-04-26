#include <stdio.h>
int main()
{
    // n (n+1) (2n+1)] / 6
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (i*i) ;
    }
    printf("Sum is %d", sum);
    return 0;
}