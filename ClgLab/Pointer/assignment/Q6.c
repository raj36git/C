// WAP to convert a given string into upper case if it is in lower case using user defined function having Pointer as argument

#include <stdio.h>

void convertToUpper(char *str);

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%[^\n]s", str);

    convertToUpper(str);

    printf("Converted string: %s\n", str);

    return 0;
}

void convertToUpper(char *str)
{
#include <stdio.h>

    void convertToUpper(char *str);

    int main()
    {
        char str[100];

        printf("Enter a string: ");
        scanf("%[^\n]s", str);

        convertToUpper(str);

        printf("Converted string: %s\n", str);

        return 0;
    }

    void convertToUpper(char *str)
    {
        while (*str)
        {
            if (*str >= 'a' && *str <= 'z')
            {
                *str = *str - 32;
            }
            str++;
        }
    }
