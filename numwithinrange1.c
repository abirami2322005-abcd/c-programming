#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n>10&&n<20) {
        printf("%d number is within range\n",n);
     }
     else {
        printf("%d number is out of range\n",n);
     }
     return 0;
}