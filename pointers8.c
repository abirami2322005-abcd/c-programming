#include<stdio.h>
int main(){
    int n,key;
    int arr[100];
    int*ptr;
    int found=0;
    scanf("%d",&n);
    scanf("%d",&key);
    ptr=arr;
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
    }
    for(int i=0;i<n;i++){
        if(*(ptr+i)==key){
            found=1;
            break;
        }
    }
    if(found)
    printf("Found");
    else
    printf("Not Found");
    return 0;
}