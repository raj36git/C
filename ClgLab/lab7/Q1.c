#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);

        if(a >= 0){
        printf("%d is positive", a);
    } else{
        printf("%d is Negative", a);
    }

    return 0;
}