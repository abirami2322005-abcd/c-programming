#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int noise[n]; 
    int i = 0;
    while(i<n){
        scanf("%d",&noise[i]);
        i++;
    }
    int count =0;
    int current_streak=0;
    int max_streak=0;
    i=0;
    while(i<n){
        if (noise[i]>70){
            count++;
            current_streak++;
            if(current_streak>max_streak){
                max_streak=current_streak;
            }
        }else 
        current_streak=0;
        i++;
    }
    printf("noise violations:%d\n",count);
    printf("longest violation streak:%d\n",max_streak);
return 0;

}

