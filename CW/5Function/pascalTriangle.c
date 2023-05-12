#include <stdio.h>

int factorial(int num)
{
    int facto = 1;
    for (int i = 2; i <= num; i++)
    {
        facto = facto * i;
    }
    return facto;
}
int combination(int n, int r)
{
    int combo = factorial(n) / (factorial(r) * factorial(n - r));
    return combo;
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            int iCj = combination(i, j);
            printf("%d ", iCj);
        }
        printf("\n");

    }
            return 0;
}
