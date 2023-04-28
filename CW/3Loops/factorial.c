#include <stdio.h>
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int facto = 1;
    for (int i = 1; i <= n; i++)
    {
        facto = facto*i;
        printf("\n Factorial of %d is: %d", facto);
    }
    

    

    return 0;
}