#include <stdio.h>
int main()
{
    int a = 5;
    int* x = &a;

    printf("%p\n", &a); //address of a
    printf("%d\n", x);  //address of pointer x 
    printf("%d\n", *x);  //value at address x
   
    return 0;
}
