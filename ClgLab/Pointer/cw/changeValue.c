#include <stdio.h>
int main()
{

    int *pc, c;
    c = 5;
    pc = &c;
    c = 1;
    printf("%d \n", c);   // Output: 1
    printf("%d", *pc); // Ouptut: 1
    return 0;
}