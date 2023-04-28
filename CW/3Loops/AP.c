#include <stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    // 100,97,94,... all positive
    int a = 100; // first element
    for (int i = 1; a>0; i++)
    {
        printf("%d ", a);
        a -= 3;           // diff
    }

    // //4,7,10,13,16,...
    // int a = 4; //first element
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d ",a);
    //     a += 3; //diff
    // }

    // other way
    //  for (int i = 4; i <= 3*n+1; i=i+35
    //  )
    //  {
    //      printf("%d ",i); //4,7,10,13,16,...
    //  }

    // 1,3,5,7,9,...
    //  for (int i = 1; i <= 2*n-1; i=i+2)
    //  {
    //      printf("%d ",i);
    //  }

    return 0;
}
