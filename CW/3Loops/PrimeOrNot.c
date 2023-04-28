#include <stdio.h>
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            printf("Not Prime, it is composite");
            break;
        }
        else
        {
            printf(" Prime");
            break;
        }
    }

    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         printf("Not Prime");
    //         break;
    //     }
    //     else
    //     {
    //         printf(" Prime");
    //         break;
    //     }
    // }

    return 0;
}
