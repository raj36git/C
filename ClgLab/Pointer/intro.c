#include <stdio.h>
void pointerC()
{
    int vari = 12;
    int *povar = &vari;
    *povar = 33;

    printf("Value of vari is =  %d \n", vari);
    printf("address of povar is =  %p\n", povar); // address of pointer povar
    printf("Value of *povar is =  %d \n", *povar);
    printf("Value of *povar is =  %d \n", povar);
    printf("Value of vari is =  %d", vari);
}

int main()
{
    pointerC();
    return 0;
}