#include <stdio.h>
int main()
{
    int b, p, ans = 1;
    printf("Enter base number: ");
    scanf("%d", &b);
    printf("Enter power number: ");
    scanf("%d",&p);

    for (int i = 1; i <= p; i++)
    {
        ans = ans*b;
    }
    printf("%d",ans);

    return 0;
}
