// Sample
//Wap to find minimum number between two number
#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter num1 ");
    scanf("%d", &num1);

    printf("Enter num2 ");
    scanf("%d", &num2);

    int min = (num1 < num2) ? num1 : num2;
    printf("Minimum num is %d", min);

    return 0;
}