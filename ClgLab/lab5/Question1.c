#include <stdio.h>

int main() {
    int num, first, third, last, sum;

    printf("Enter a 5-digit integer: ");
    scanf("%d", &num);

    first = num / 10000;
    third = (num / 100) % 10;
    last = num % 10;

    sum = first + third + last;

    printf("The sum of the first, third, and last digits is: %d", sum);
    return 0;
}