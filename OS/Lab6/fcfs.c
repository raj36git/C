#include<stdio.h>
#include<stdlib.h>

typedef struct process process;
struct process{
    int id,AT,BT,CT,WT,TAT;
};

process* arr;

void sort(process* abc,int n){
    int i=0,j=0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(abc[j].AT>abc[j+1].AT){
                process temp=abc[j];
                abc[j]=abc[j+1];
                abc[j+1]=temp;
            }
        }
    }
}
void sorting(process* abc,int n){
    int i=0,j=0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(abc[j].id>abc[j+1].id){
                process temp=abc[j];
                abc[j]=abc[j+1];
                abc[j+1]=temp;
            }
        }
    }
}
int main(){
    printf("Enter the number of processes: ");
    int n;
    scanf("%d",&n);
    arr=(process*)malloc(n*sizeof(process));
    int i=0,j=0;
    while(i<n){
        printf("For process %d:\nAT: ",(i+1));
        scanf("%d",&arr[i].AT);
        printf("BT: ");
        scanf("%d",&arr[i].BT);
        arr[i].id=i+1;
        i++;
    }
    sort(arr,n);
    i=0;
    int time=0;
    while(i<n){
        if(time>=arr[i].AT){
            time=time+arr[i].BT;
            arr[i].CT=time;
            i++;
        }
        else{
            time=arr[i].AT;
        }
    }
    i=0;
    while(i<n){
        arr[i].TAT=arr[i].CT-arr[i].AT;
        arr[i].WT=arr[i].TAT-arr[i].BT;
        i++;
    }
    sorting(arr,n);
    printf("P.ID    AT    BT    CT    WT    TAT\n");
    i=0;
    while(i<n){
        printf("%d        %d     %d     %d     %d     %d\n",arr[i].id,arr[i].AT,arr[i].BT,arr[i].CT,arr[i].WT,arr[i].TAT);
        i++;
    }
    return 0;
}