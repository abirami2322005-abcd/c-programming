#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int maxunique=0;
    int deptindex=0;
    for(int i=0;i<r;i++){
        int uniquecount=0;
        for(int j=0;j<c;j++){
            int isunique=1;
            for(int k=0;k<j;k++){
                if(arr[i][j]==arr[i][k]){
                    isunique=0;
                    break;
                }
            }
            if(isunique){
                uniquecount++;
            }
        }
        if(uniquecount>maxunique){
            maxunique=uniquecount;
            deptindex=i;
        }
    }
    printf("%d",deptindex);
    return 0;
}

          
       