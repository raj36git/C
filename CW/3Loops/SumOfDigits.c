#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int sum = 0;
    while (n != 0)
    {
        int rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    printf("%d", sum);
    return 0;
}