#include <stdio.h>
int main()
{
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    int b;
    printf("Enter b: ");
    scanf("%d", &b);

    //    swaing using extra varible
    //    int temp = a;
    //    a = b;
    //    b = temp;
    //    printf("a = %d \n",a);
    //    printf("b = %d \n",b);

    // swaing without using extra varible
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d \n", a);
    printf("b = %d \n", b);

    return 0;
}
