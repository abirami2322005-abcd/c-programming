#include<stdio.h>
long long power(int a, int b){
    long long result = 1;
    for (int i= 1;i<=b;i++)
        result*=a;
    return result;
}
int main(){
    int A,B;
    scanf("%d %d",&A,&B);
    printf("%lld",power(A,B));
    return 0;
}
