#include <stdio.h>
int main()
{
    //marks out of 40
    float m1 = 40; //maths mark
    float m2 = 37; //physics mark
    float m3 = 29; //chemistry mark
    float m4 = 37; //english mark
    float m5 = 40; //computer mark

    float percentage = (m1 + m2 + m3 + m4 + m5)/200 *100;
    printf("Percentage is: %f", percentage);
    return 0;
}

//     float m1 = 99; //maths mark
//     float m2 = 86; //physics mark
//     float m3 = 83; //chemistry mark
//     float m4 = 86; //english mark
//     float m5 = 99; //computer mark

//     float percentage = (m1 + m2 + m3 + m4 + m5)/5;
//     printf("Percentage is: %f", percentage);
