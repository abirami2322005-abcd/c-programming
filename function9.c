#include <stdio.h>
int sumN(int n) {
    return (n * (n + 1)) / 2;
}
int main() {
    int N;
    scanf("%d", &N);
    printf("%d", sumN(N));
    return 0;
}
