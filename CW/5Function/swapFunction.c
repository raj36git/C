#include <stdio.h>
void swapping(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    printf("a = %d\n", a);
    printf("b = %d", b);
}
int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    int b;
    printf("Enter b: ");
    scanf("%d", &b);

    swapping(a, b);

    return 0;
}
