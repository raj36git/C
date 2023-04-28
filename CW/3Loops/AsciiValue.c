#include <stdio.h>
int main()
{
    int i = 65;
   char ch = 'A';
   while (ch != 'Z' && i != 90)
   {
    printf("%c -> %d \n",ch ,i);
    ch++;
    i++;
   }
     printf("%c -> ",'Z');
     printf("%d ", 90);
   
   

    return 0;
}
