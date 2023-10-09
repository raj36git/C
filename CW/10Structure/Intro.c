// Structure
#include <stdio.h>
int main()
{
    // struct pokemon
    // { // user defined data type
    //     int attack;
    //     int hp;
    //     int speed;
    //     char tier;
    // };
    // // Initialization using Assignment Operator
    // struct pokemon pikachu;
    // pikachu.attack = 111;
    // pikachu.hp = 33;
    // pikachu.speed = 311;
    // pikachu.tier = 'A';

    // // // Initialization using Initializer List
    // // struct pokemon pikachu = {111, 33, 311, 'A'};

    // printf("%d\n", pikachu.attack);

    // other way to initialize structure
    struct doremon
    { // user defined data type
        int attack;
        int hp;
        int speed;
        char tier;
    } charized, mewto;

    charized.attack = 132;
    charized.hp = 45;
    charized.speed = 333;
    charized.tier = 'S';

    mewto.attack = 152;
    mewto.hp = 75;
    mewto.speed = 393;
    mewto.tier = 'G';

    printf("%c\n", charized.tier);
    printf("%d\n", mewto.speed);
    return 0;
}
