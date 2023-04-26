#include <stdio.h>
int main()
{
    // n (n+1) (2n+1)] / 6
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i ;
    }
    printf("Factorial is %d", factorial);
    return 0;
}