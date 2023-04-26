#include <stdio.h>
int main()
{
    int roll[5] = {1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        printf(" %d \n",roll[i]); //before updation
    }
    roll[2] = 22; //update

    for (int i = 0; i < 5; i++)
    {
        printf("%d \n",roll[i]); //after updation 
    }
    

    return 0;
}