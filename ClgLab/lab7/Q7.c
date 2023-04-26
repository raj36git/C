#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter a floating point no: ");
    scanf("%f", &a);

    //for floor point
    a = (int)a-0.5;
    printf("%d", a);

    // for ceiling point
    b = (int)b + 0.5;
    printf("%d", a);



    return 0;
}