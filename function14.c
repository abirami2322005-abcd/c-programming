#include <stdio.h>
void fibonacci(int n) {
    int a=0,b =1,next;
    for (int i=0;i<n;i++){
        printf("%d ",a);
        next=a+b;
        a=b;
        b=next;
    }
}
int main(){
    int N;
    scanf("%d",&N);
    fibonacci(N);
    return 0;
}

