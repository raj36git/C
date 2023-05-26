#include <stdio.h>
int main()
{
   int num;
   printf("Enter number: ");
   scanf("%d", &num);
   int ans = num%2;

   switch (ans)
   {
   case 0 :
   printf("Even \n");
    break;
   case 1 :
   printf("Odd \n");
    break;
   
   default:
   printf("Enter valid num \n");
    break;
   } 
    return 0;
}