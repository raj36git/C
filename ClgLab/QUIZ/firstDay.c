#include <stdio.h>
int main()
{
   /*
   B=BASE YEAR==1900
    Y = YEAR OF U WANT TO KNOW THE FIRST DAY
    TY = TOTAL YEAR
    LY = TOTAL LEAP YEAR
    NLY = TOTAL NON-LEAP YEAR
    TD  = TOTAL DAY
   */ 
    // int B, year, TY, LY, NLY, TD;
    int year;
    printf("Enter  Year: ", year);
    scanf("%d", &year);

    // TY = (year - 1) - B;
    // LY = TY / 4;
    // NLY = TY - LY;
    // TD = (LY * 366) + (NLY * 365) + 1;
    // int firstDay = TD%7;
 int firstDay =  (1 + 5 * ((year - 1) % 4) + 4 * ((year - 1) % 100) + 6 * ((year - 1) % 400)) % 7;
    printf("First day of %d was: ", year);
   
    switch (firstDay)
    {
    case 1:
        printf("Monday \n");
        break;
    case 2:
        printf("Tuesday \n");
        break;
    case 3:
        printf("Wednesday \n");
        break;
    case 4:
        printf("Thursday \n");
        break;
    case 5:
        printf("Friday \n");
        break;
    case 6:
        printf("Saturday \n");
        break;
    case 7:
        printf("Sunday \n");
        break;
    default:
     printf("wrong input \n");
        break;
    }
    return 0;
}
