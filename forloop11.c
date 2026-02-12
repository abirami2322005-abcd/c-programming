#include<stdio.h>
int main() {
    int base, exponent ;
    int result = 1;   
    printf("Enter the base and exponent");
    scanf("%d%d", &base, &exponent);
    for (int i = 0; i <= exponent; i++) {
        result = result * base;
    }
    printf("result = %d", result);
    return 0;
}
