//Check whether input number is leap year or not

#include<stdio.h>  
  
int main()  
{  
    int year;  
  
    printf("Enter the year: \n");  
    scanf("%d", &year);  
  
  //using if else
  if(year % 100 == 0){
    if(year % 400 == 0){
        (printf("%d is leap year\n", year));
    } else{
        (printf("%d is not leap year\n", year));
    } 
 } else if(year % 4 == 0){
        (printf("%d is leap year\n", year));
    } else{
        (printf("%d is not leap year\n", year));
    }

//using ternary operator
    (year % 100 == 0) ?  
    ( (year % 400 == 0)? (printf("%d is leap year\n", year)) : 
    (printf("%d is not leap year\n", year))) : 
    ( (year % 4 == 0)? 
    (printf("%d is leap year\n", year)):  
      (printf("%d is not leap year\n", year))  
    );  
  
    return 0;  
} 