#include <stdio.h>
int main()
{
    int mark[10] = {40,90,99,23,12,50,87,63,87,18};

    for (int i = 0; i < 10; i++)
    {
        if (mark[i]<35)
        {
            printf("%d ",i);
        }
        
    }
    
   
    return 0;
}