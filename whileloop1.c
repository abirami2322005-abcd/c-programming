#include <stdio.h>

int main() {
    int N, i = 0;
    int lowBalanceDays = 0;
    int initialBalance;

    scanf("%d", &N);
    scanf("%d", &initialBalance);

    int balance = initialBalance;
    int transaction;

    while (i < N) {
        scanf("%d", &transaction);
        balance += transaction; 

        if (balance < 2000) {
            lowBalanceDays++;
        }

        i++;
    }

    printf("Final Balance: %d\n", balance);
    printf("Low Balance Days: %d\n", lowBalanceDays);

    return 0;
}