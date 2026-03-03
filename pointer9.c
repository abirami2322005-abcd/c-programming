#include<stdio.h>
int main(){
    int n,x;
    int arr[20];
    int *ptr;
    int position=-1;
    scanf("%d",&n);
    scanf("%d",&x);
    ptr=arr;
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i); 
    }
    for(int i=0;i<n;i++){
        if(*(ptr+i)==x){
            position=i+1;
            break;
        }
    }
    printf("%d",position);
    return 0;
}