#include <stdio.h>
int main() {
    int n,m;
    scanf("%d,%d",&n,&m);
    printf("enter the option 1 for addition, 2 for subtrction, 3 for multiplication, 4 for division");
    int k;
    scanf("%d",&k);
    switch (k) {
        case 1:
        printf("the sum is %d",n+m);
        break;
        case 2:
        printf("the subtract is %d",n-m);
        return 0;
    
}
}
