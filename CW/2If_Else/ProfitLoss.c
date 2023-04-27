#include <stdio.h>
int main()
{
    int cp, sp, p, l;
    printf("Enter cp: ");
    scanf("%d", &cp);
    printf("Enter sp: ");
    scanf("%d", &sp);

    p = sp - cp;
    l = cp - sp;

    if (cp < sp)
    {
        printf("Profit incurred \n");
        printf("Profit amount is: %d", p);
    }
    else if(cp>sp)
    {
        printf("Loss incurred \n");
        printf("Loss amount is: %d", l);
    } else 
    {
      printf("No profit No loss");
    }
    

    return 0;
}
