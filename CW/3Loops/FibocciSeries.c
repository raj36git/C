#include <stdio.h>
int main()
{

    int temp, n;
    printf("Enter n: ");
    scanf("%d", &n);

    int a = 0;
    int b = 1;
    // printing the 0th and 1st term
    printf("%d\n", a);
    printf("%d\n",b);

    for (int i = 3; i <= n; i++)
    {
        temp = a + b;
        a = b;
        b = temp;
        
    printf("%d \n", temp);

    }


    return 0;
}