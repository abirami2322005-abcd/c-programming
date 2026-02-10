#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a+b>c&&b+C>a&&a+c>b){
        printf("triangle is valid\n");
    } else {
        printf("triangle is not valid\n");
    }

    return 0;
}
