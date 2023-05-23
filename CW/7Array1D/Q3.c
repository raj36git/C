#include <stdio.h>
int main()
{
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    int count = 0;
    int arr[5] = {2, 46, 49, 3, 5};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]> x)
        {
            count++;
        }
    }
printf("%d",count);
    return 0;
}
