#include<stdio.h>
int main()
{
    int accountType;
    int balance;
    int withdrawAmount;
    scanf("%d %d %d",&accountType,&balance,&withdrawAmount);
    switch(accountType)
    {
        case 1:
        if(balance>=withdrawAmount)
        printf("transaction successful");
        break;
        case 2:
        if(withdrawAmount>5000)
        printf("limit successful");
        break;
        default:printf("invalid");
        break;
    }
    return 0;

}