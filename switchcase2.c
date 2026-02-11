#include <stdio.h>
int main() {
    int account_type;
    int balance;
    int withdrawal_amount;
    scanf("%d%d%d",&account_type,&balance,&withdrawal_amount);
    switch (account_type) {
        case 1:
        if (balance>=withdrawal_amount) 
            printf("Withdrawal successfull");
        else  
            printf("Insufficient balance");
            break;
        case 2:
        if (withdrawal_amount<5000)
            printf("Withdrawal exceeded");
        else
        printf("Withdrawal successfull");
        break;
        default:
        printf("Invalid account type");
        break;
    }
    return 0;
}