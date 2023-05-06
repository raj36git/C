// Find GCD of 2 given numbers. 
#include <stdio.h>

int findGCD(int num1, int num2) {
    int gcd;

    for (int i = 1; i <= num1 && i <= num2; i++) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    return gcd;
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    int gcd = findGCD(num1, num2);

    printf("GCD of %d and %d is %d", num1, num2, gcd);

    return 0;
}

