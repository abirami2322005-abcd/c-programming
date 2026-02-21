#include<stdio.h>
int main(){
    int size;
    int even=0;
    int odd=0;
    scanf("%d",&size);
    int arr[size];
    for (int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("even:%d odd:%d",even,odd);
    return 0;
}