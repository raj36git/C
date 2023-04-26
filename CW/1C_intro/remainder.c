#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers ");
    scanf("%d %d", &a, &b);
//int quotient(q) = a/b
//int remainder(r) = a-b*q
    int remainder = a%b;
    printf("%d",remainder);
    return 0;
}