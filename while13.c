#include<stdio.h>
int main(){
    int n;
    int datapack;
    scanf("%d",&n,&datapack);
    int exhaustedday=0;
    int day=0;
    int overuseddata=0;
    int i=0;
    int dailydatausage;
    while(i<n){
        scanf("%d",&dailydatausage);
        dailydatausage-=overuseddata;
        if(day==4){
            dailydatausage++;
            exhaustedday++;
        }
        if(day==3){
            datapack==0;
        }
        i++;
    }
    printf("exhaused day:%d",exhaustedday);
    printf("overuseddata:%d",overuseddata);
    return 0;
}