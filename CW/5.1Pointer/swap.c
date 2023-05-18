#include <stdio.h>
void swapping(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}
int main()
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);

    swapping(&a, &b);
    printf("after swap a = %d\n", a);
    printf("after swap b = %d\n", b);

    return 0;
}
