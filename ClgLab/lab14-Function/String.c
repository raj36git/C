#include <stdio.h>
int main()
{

//    Declaretion
   char name1[] = {'a','w'};
   char name2[] = {"\n razz"};

//    taking input
   char str[2];
   printf("Enter string: ");
   scanf("%s",str);

   printf("%s\n",name1);
   printf("%s\n",name2);
   printf("My name is %s",str);




    return 0;
}