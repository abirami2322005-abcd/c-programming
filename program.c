#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);
    if (num>0){
        printf("Positive number");
    }
    if (num<0){
        printf("Negative number");
    }
    if (num==0){
        printf("zero");
    }

    return 0;
}