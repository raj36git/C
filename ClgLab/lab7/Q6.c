#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter sizes");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (c == d)
    {
        printf("Error");
    }
    else
    {
        int X = (a - b) / (c - d);
        printf("%d", X);
    }

    return 0;
}