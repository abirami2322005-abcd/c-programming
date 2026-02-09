#include <stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if (num>=100&&num<=999){
    printf("Three-digit number");
    }
    else if(num>=10&&num<=99) {
        printf("Two digit number");
    }
    else if(num>=1000&&num<=9999){
        printf("four digit number");
    }
    else
    printf("Not a two three four digit number");

    return 0;

}