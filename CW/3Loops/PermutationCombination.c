#include <stdio.h>
int main()
{
    int n,r,nr;
    printf("Enter n: ");
    scanf("%d",&n);

    printf("Enter r: ");
    scanf("%d",&r);

   int nFact = 1;
   int rFact = 1;
   int nrFact = 1;

    //calculate nfact first
    for (int i = 2; i <= n; i++)
    {
        nFact = nFact*i;
    }
    
  //calculate rfact first
    for (int i = 2; i <= r; i++)
    {
        rFact = rFact*i;
    }

      //calculate nrfact first
    for (int i = 2; i <= n-r; i++)
    {
        nrFact = nrFact*i;
    }

    int nCr = nFact/(rFact*nrFact);
    printf("nCr value is: %d",nCr);
    
   
    return 0;
}
