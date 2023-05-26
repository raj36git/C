#include<stdio.h>
int main(){
    /*
    h = Hardness of steel cc = Carbon content ts = Tensile strength */
    float h, cc, ts;
    printf("Enter the value of Hardness: ");
    scanf("%f", &h);
    printf("Enter the value of Carbon Content: ");
    scanf("%f", &cc);
    printf("Enter the value of Tensile Strength: ");
    scanf("%f", &ts);
    if((h>50)&&(cc<0.7)&&(ts>5600)){
        printf("Its Grade 10");
    }
    else if(h>50 && cc<0.7){
        printf("Its Grade 9");
    }
    else if(cc<0.7 && ts>5600){
            printf("Its Grade 8");
    }
    else if(h>50 && ts>5600){
            printf("Its Grade 7");
    }
    else if(h>50||cc<0.7||ts>5600){
            printf("Its Grade 6");
    }
    else{
        printf("Its Grade 5");
    }

    return 0;
}