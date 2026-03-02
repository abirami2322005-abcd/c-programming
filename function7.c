#include <stdio.h>
int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}
int main() {
    int N;
    scanf("%d", &N);
    printf("%d", reverse(N));
    return 0;
}

