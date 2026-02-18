#include<stdio.h>
int main(){
    int totalData, n;
    scanf("%d", &totalData);
    scanf("%d", &n);
    int usage[n];
    int i = 0;
    while(i < n){
        scanf("%d", &usage[i]);
        i++;
    }
    int daysUsed = 0;
    i = 0;
    while(i < n && totalData > 0){
        totalData -= usage[i];
        daysUsed++;
        if(totalData < 0){
            totalData = 0;
        }
        i++;
    }
    printf("Days Used: %d\n", daysUsed);
    printf("Remaining Data: %dGB\n", totalData);
    return 0;
}