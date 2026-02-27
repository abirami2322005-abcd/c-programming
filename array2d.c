#include<stdio.h>
int main(){
    int r,c;
    printf("enter the rows and columns");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    int secondmax=-1;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int current=arr[i][j];
        if(current>max){
            secondmax=max;
            max=current;
        }
        else if(current>secondmax&&current<max){
            secondmax=current;
        }
        
        }
    }
    printf("%d",secondmax);
}