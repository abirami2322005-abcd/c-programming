#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int inactive=0;
    int hours;
    int i=0;
    while(i<n){
        scanf("%d",&hours);
            if(hours==0){
                inactive++;
            }
            i++;
        }
    printf("inactive weeks: %d\n",inactive);
    if (inactive>=3){
        printf("risk status: high");
    }
    else{
        printf("risk status: low");
    }
    return 0;
}

