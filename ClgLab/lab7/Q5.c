#include <stdio.h>
int main()
{
    int a,b,c;
printf("Enter sizes");
scanf("%d %d %d", &a,&b,&c);

if(a+b>c && b+c>a && a+c>b){
    printf("Given triangle is valid", a,b,c);
} 

    return 0;
}