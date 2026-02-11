#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rev=0;
    for (int i=n;i>0;i=i/10){
        int rem=i%10;
        rev=rev*10+rem;
    }
    printf("%d",rev);
    return 0;
}