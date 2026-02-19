#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int delays;
    int totaldelays=0;
    int delayeddays=0;
    int i=0;
    while(i<n){
        scanf("%d",&delays);
         totaldelays+=delays;
         if(delays>2){
            delayeddays++;
         }
         i++;
    }
    printf("total delay: %d\n",totaldelays);
    printf("delayeddays: %d\n",delayeddays);
    return 0;
}