#include <stdio.h>
int main()
{

    int n, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
       
        rev = rev * 10 + rem;
    }
    printf("Reverse is: %d", rev);
   

    return 0;
}