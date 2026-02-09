#include <stdio.h>
int main() {
    int num1;
    int num2;
    scanf("%d,%d",&num1,&num2);
    if (num1>num2) {
        printf("%d, num1 is greater",num1);
    }
    else if (num1<num2) {
        printf("%d,num2 is greater",num2);
    }
    else {
        printf("Both numbers are equal");
    }
    return 0;
}