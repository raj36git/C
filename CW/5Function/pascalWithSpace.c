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
        // print two spaces
        for(int j=0; j<=n-i; j++) {
            printf("  "); 
        }
            
        for (int k = 0; k <= i; k++)
        {
            int iCk = combination(i, k);
            printf("%d ", iCk);
        }
        
        printf("\n");

    }
    
            return 0;
}
