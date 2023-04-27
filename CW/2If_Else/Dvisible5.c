#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 5 == 0)
    {
        printf("%d is diisible by 5", n);
    }
    else
    {
        printf("%d isn't divisible by 5", n);
    }

    return 0;
}