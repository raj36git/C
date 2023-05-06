// .WAP to obtain the running sum of first n numbers using recursion

#include <stdio.h>

int runningSum(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + runningSum(n - 1);
    }
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = runningSum(n);

    printf("Running sum of first %d numbers is: %d", n, sum);

    return 0;
}
