#include <stdio.h>
int main() {
    int length;
    scanf("%d",&length);
    if (length>=8) {
        printf("password is strong\n");
    }
    else {
        printf("password is weak\n");
    } return 0;
    
}