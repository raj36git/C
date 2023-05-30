#include <stdio.h>
int main()
{
    int arr[5] = {1, 2, 3, 2, 1};
   
    int i = 0;
    int j = 4;
    while (i < j)
    {
        if (arr[i] != arr[j])
        {
             printf("Not Palindrome");
            break;
        }
        else
        {
             i++;
            j--;
        }
        printf("Palindrome");
         break;
    }
    

    return 0;
}