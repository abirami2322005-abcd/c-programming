#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a^b;
    a=b^a;
    b=c^ b;
    printf("%d %d",a,b);

    return 0;
}