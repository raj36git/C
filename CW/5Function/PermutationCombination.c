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

int main()
{
    int n, r;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter r: ");
    scanf("%d", &r);

    // int nFact = factorial(n);
    // int rFact = factorial(r);
    // int nrFact = factorial(n - r);
//int nCr = nFact / (rFact * nrFact);

    int nCr = factorial(n) / (factorial(r) * factorial(n-r));
    printf("nCr value is: %d", nCr);

    return 0;
}
