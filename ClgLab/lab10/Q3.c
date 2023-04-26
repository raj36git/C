#include <stdio.h>
int main(){
    int i, j;
    int r = 5;

    for(i = 1; i <= r; i++){
        // print space
        for (int j = 1; j <= r - i; j++){
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++){
            printf("* ");
        }
        printf("\n");
       
    }
     return 0;
}
