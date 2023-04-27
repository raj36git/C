#include <stdio.h>
int main()
{
    int l, b, a, p;
    printf("Enter length: ");
    scanf("%d", &l);
    printf("Enter breadth: ");
    scanf("%d", &b);

    a = l * b;
    p = 2 * (l + b);

    printf("Area is: %d", a);
    printf("\n Permimeter is: %d", p);

    if (a > p)
    {
        printf("\n Area is greater");
    }

    return 0;
}