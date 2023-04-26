#include <stdio.h>
int main()
{
int a;
    printf("Enter a number: \n");
    scanf("%d", &a);

        if(a % 11 ==0 && a%13==0){
        printf("%d is divisible", a);
    } else{
        printf("%d is not divisible", a);
    }
     return 0;
}