#include <stdio.h>
 char addNumber(int a, char b);    //function prototype
int main()
{
    int a, b,sum;
  printf("Enter num a and b: ");
  scanf("%d %d",&a,&b);

  sum = addNumber(a,b);         //calling function
  printf("Sum is %c",sum);

    return 0;
}

 // Function Declaration
    // syntax
    //  returnType FunctionName(arguement);
    char addNumber(int a, char b)  //function definiton
    {
        int result;
        result =  b-a;
        return result;       //return statement
    }