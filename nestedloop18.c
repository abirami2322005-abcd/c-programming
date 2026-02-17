#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int j=1;j<=(5-i)*2;j++)
        {
            printf(" ");
        }
        for(int j=i;j>=1;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=5;i>0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        for(int j=1;j<=(5-i)*2;j++)
        {
            printf(" ");
        }
        for(int k=i;k<=(2*i)-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}