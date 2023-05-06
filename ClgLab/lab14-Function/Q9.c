//Print n fibonacci series using function.

#include <stdio.h>

void printFibonacci(int n) {
    int a = 0, b = 1, c;

    printf("Fibonacci series up to %d terms: ", n);

    for (int i = 1; i <= n; i++) {
        printf("%d, ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printFibonacci(n);

    return 0;
}
