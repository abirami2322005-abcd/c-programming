#include<stdio.h>
int main(){
    int capacity,n;
    scanf("%d%d",&capacity,&n);
    int total=0;
    int count=0;
    int i=0;
    int admission;
    while(i<n){
        scanf("%d",&admission);
        total=total+admission;
        if(total>capacity*0.9){
            count++;
        }
        i++;
    }
    printf("final occupied beds:%d",total);
        printf("criticalcount hours: %d",count);
        return 0;
}