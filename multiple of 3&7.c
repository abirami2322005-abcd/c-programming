#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if (num%3==0&&num%7==0) {
        printf("%d is a multiple of both 3 and 7",num);
    }
    else 
    printf("%d is not a multiple of both 3 and 7");
    
    return 0;
}