#include <stdio.h>
#include <string.h>
int main()
{
    //Declarataion and Intitialization
    // char arr[5] = {'a', 'e', 'i', 'o', 'u'};
    // printf("%c", arr[2]);

    // char arr[] = {'w','e','q','o','p', '\0'};
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%c ",arr[i]);
    // }

    //better way to initialize 
    // char str[] = "My name is Razz";
    // str[1] = 98; //b
    // int i = 0;
    //  while (str[i] != 0)
    // {
    //    printf("%c",str[i]);
    //    i++;
    // }

    //easy way to print string
    // printf("%s", str);
    //to print string, we can use
    // puts(str);
    // puts("Hello everyone");


    //Taking input
    char str[22];
    printf("Enter String: ");
    scanf("%s", str); //only the first world will be considred

    //instead that use gets()
    gets(str);

    printf("%s", str);
    
    return 0;
}