#include <stdio.h>
int addTwoNumber()
{
    int n1, n2, sum;
    printf("Enter number n1: ");
    scanf("%d", &n1);
    printf("Enter number n2: ");
    scanf("%d", &n2);

    sum = n1 + n2;
    return sum;
}
int main()
{
    int a, b, result;
    result = addTwoNumber(a, b);
    printf("Sum of n1 and n2 is: %d", result);
    return 0;
}