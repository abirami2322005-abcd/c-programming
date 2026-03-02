#include <stdio.h>
void checkPrime(int n) {
    if (n <= 1) {
        printf("Not Prime");
        return;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("Not Prime");
            return;
        }
    }
    printf("Prime");
}
int main() {
    int N;
    scanf("%d", &N);
    checkPrime(N);
    return 0;
}
