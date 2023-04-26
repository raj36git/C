#include <stdio.h>
int main(){
   int num1, num2,and, or, xor, lshift1, lshift2,rshift1, rshift2;

  printf("Enter num1 ");
    scanf("%d", &num1);

    printf("Enter num2 ");
    scanf("%d", &num2); 

    and = num1 & num2;
    printf("Bitwise AND is: %d \n", and);

    or = num1 | num2;
    printf("Bitwise OR is: %d \n", or);

    xor = num1 ^ num2;
    printf("Bitwise XOR is: %d \n", xor);

    lshift1 = num1 << 2;
    printf("Left shift is: %d \n", lshift1);

    lshift2 = num2 << 2;
    printf("Left shift is: %d \n", lshift2);

    rshift1 = num1 >> 2;
    printf("Right Shift is: %d \n", rshift1);

    rshift2 = num2 >> 2;
    printf("Right Shift is: %d \n", rshift2);


    
    return 0;
}