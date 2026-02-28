#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int sum[r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
            sum[i]+=arr[i][j];
        }
    }
    int max=sum[0],min=sum[0];
    for(int i=0;i<r;i++){
        if(sum[i]>max){
            max=sum[i];
            if(sum[i]<min){
                min=sum[i];
            }
        }
    }
    printf("%d",max-min);
    return 0;
}