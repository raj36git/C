// 3,6,12,24,48,..
#include <stdio.h>
int main()
{
    //100,50,25,.,.,.
    float n;
    printf("Enter n: ");
    scanf("%f", &n);
    float a = 100; //first element
    for (int i = 1; i <= n; i++)
    {
        printf("%f ", a);
        a = a * (0.5); //ratio factor
    }


    //3,9,27,...
    // int n;
    // printf("Enter n: ");
    // scanf("%d", &n);
    // int a = 3; //first element
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d ", a);
    //     a = a * 3; //ratio factor
    // }

    return 0;
}
