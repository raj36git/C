// WAP to print the no. of days of a month if a month no and year is given
#include <stdio.h>

int main()
{
    int month, year, days;

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    days = getDaysInMonth(month, year);
    printf("Number of days in month %d of year %d: %d", month, year, days);

    return 0;
}

int getDaysInMonth(int month, int year)
{
    int days;

    switch (month)
    {
    case 2:
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        days = 30;
        break;
    default:
        days = 31;
    }

    return days;
}
