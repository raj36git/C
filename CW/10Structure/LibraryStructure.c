// Create a structure type 'book' with name, price, and number of pages as its attributes
#include <stdio.h>
#include <string.h>
int main()
{

    struct library //similar to class
    {
        char name[45];
        int price;
        int noOfPages;
    } book1,book2,book3; //objects of library class

    // book1.name[45] = "Think Like A Monk";
    strcpy(book1.name,"Think Like A Monk");
    book1.price = 250;
    book1.noOfPages = 425;
    printf("%s %d %d\n", book1.name, book1.price, book1.noOfPages);

    strcpy(book2.name,"Rich Dad Poor Dad");
    book2.price = 350;
    book2.noOfPages = 464;
    printf("%s %d %d\n", book2.name, book2.price, book2.noOfPages);

    strcpy(book3.name,"Atomic Habits");
    book3.price = 550;
    book3.noOfPages = 644;
    printf("%s %d %d\n", book3.name, book3.price, book3.noOfPages);

    return 0;
}