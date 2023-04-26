#include <stdio.h>
int main()
{
    int n,i;
    int sum = 0;

    for (i = 1; i <= 10; i++) {
        printf("Enter number: ",i);
        scanf("%d", &n);
    if (n < 0){
        break;
    }
      sum += n;
    }
    printf("%d",sum);

    return 0;
}