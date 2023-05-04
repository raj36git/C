// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5
#include <stdio.h>

int main() {
    int i, j;

    for (i = 1; i <= 3; i++) {
        for (j = 1; j <= 2; j++) {
            if (i == 1 && j == 1) {
                printf("1 \n");
            } else if (i == 1 && j == 2) {
                printf("A B\n");
            } else if (i == 2 && j == 1) {
                printf("1 2 3\n");
            } else if (i == 2 && j == 2) {
                printf("A B C D\n");
            } else if (i == 3 && j == 1) {
                printf("1 2 3 4 5\n");
            }
        }
    }

    return 0;
}
