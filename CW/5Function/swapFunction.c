#include <stdio.h>
void swapping(int a, int b)

{
    printf("swapping() before a = %d\n", a);
    printf("swapping() before b = %d\n", b);
    int temp = a;
    a = b;
    b = temp;
    printf("swapping() after a = %d\n", a);
    printf("swapping() after b = %d\n", b);
    return;
}
int main()
{
    int a, b;
    printf("Enter a and b: ");
    scanf("%d %d", &a, &b);
    printf("main() before a = %d\n", a);
    printf("main() before b = %d\n", b);

    swapping(a, b);
    printf("main() after a = %d\n", a);
    printf("main() after b = %d\n", b);

    return 0;
}
