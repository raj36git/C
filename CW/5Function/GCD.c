#include <stdio.h>
int min(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int GCD(int a, int b)
{
    int hcf;
    for (int i = 1; i <= min(a, b); i++)
    // for (int i = min(a,b); i >= 1; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            hcf = i;
          //  break;
        }
    }
    return hcf;
}
int main()
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    int hcf = GCD(a, b);
    printf("GCD of %d and %d is: %d", a, b, hcf);

    return 0;
}
