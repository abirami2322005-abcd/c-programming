#include <stdio.h>
void table(int n) {
    for (int i=1;i<=10;i++)
        printf("%d X %d=%d\n", n, i, n * i);
}
int main() {
    int N;
    scanf("%d", &N);
    table(N);
    return 0;
}
