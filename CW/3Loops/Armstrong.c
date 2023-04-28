#include <stdio.h>
int main()
{
    int n, original, result = 0;
    printf("Enter three digit number: ");
    scanf("%d", &n);
    original = n;
    while (n > 0)
    {
        int rem = n % 10;
        result = result + rem * rem * rem;
        n = n / 10;
    }
    if (result == original)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not Armstrong");
    }

    return 0;
}
