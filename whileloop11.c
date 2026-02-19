#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int successful=0;
    int cancelled=0;
    int i=0;
    int order;
    while(i<n){
        scanf("%d",&order);
        if(order==1){
            successful++;
        }
        else{
            cancelled++;
        }
        i++;
    }
    printf("successful:%d\n",successful);
    printf("cancelled:%d\n",cancelled);
    if (cancelled<=3){
        printf("status:risk\n");
    }
    else{
        printf("status:safe");

    }
    return 0;

}