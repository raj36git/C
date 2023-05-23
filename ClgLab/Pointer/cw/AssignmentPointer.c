#include <stdio.h>
int main()
{
    int numI;
    printf("Enter a number: ");
    scanf("%d", &numI);
    int *numberI = &numI;
    printf("Integer value is: %d\n", *numberI);

    float numF;
    printf("Enter a float number: ");
    scanf("%f", &numF);
    float *numberF = &numF;
    printf("Floating value is: %f\n", *numberF);

    double numD;
    printf("Enter a double number: ");
    scanf("%lf", &numD);
    double *numberD = &numD;
    printf("Double value is: %lf\n", *numberD);

    char strC;
    printf("Enter a string: ");
    scanf(" %c", &strC);
    char *strP = &strC;
    printf("Char value is: %c\n", *strP);

    return 0;
}