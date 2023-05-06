//WAP to find power of a number for both +ve and –ve powers
#include <stdio.h>
#include <math.h>

float calculatePower(float base, int exponent) {
    float result = 1;

    if (exponent > 0) {
        for (int i = 0; i < exponent; i++) {
            result *= base;
        }
    } else if (exponent < 0) {
        exponent = -exponent;

        for (int i = 0; i < exponent; i++) {
            result *= base;
        }

        result = 1 / result;
    }

    return result;
}

int main() {
    float base, result;
    int exponent;

    printf("Enter base: ");
    scanf("%f", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = calculatePower(base, exponent);

    printf("%.2f^%d = %.2f", base, exponent, result);

    return 0;
}
