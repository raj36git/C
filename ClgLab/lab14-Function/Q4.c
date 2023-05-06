//WAP to find compound interest using function
#include <stdio.h>
#include <math.h>

float calculateCompoundInterest(float principle, float rate, int time) {
    float amount = principle * pow((1 + rate / 100), time);
    float compoundInterest = amount - principle;

    return compoundInterest;
}

int main() {
    float principle, rate;
    int time;

    printf("Enter principle: ");
    scanf("%f", &principle);

    printf("Enter rate: ");
    scanf("%f", &rate);

    printf("Enter time: ");
    scanf("%d", &time);

    float compoundInterest = calculateCompoundInterest(principle, rate, time);

    printf("Compound interest: %.2f", compoundInterest);

    return 0;
}
