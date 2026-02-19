#include<stdio.h>
int main(){
int n;
int months;
scanf("%d%d",&n,&months);
int current_streak=0;
int max_streak;
int i=0;
int emi;
while(i<n){
    scanf("%d",&emi);
    i++;
    if(emi==0||emi==1){
        if(emi==0){
            current_streak++;
            if(current_streak>max_streak){
                max_streak=current_streak;
            }
        }
        else{
            current_streak=0;
        }
    }
    i++;
}
    printf("longest default streak:%d",max_streak);
    return 0;

}