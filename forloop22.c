#include <stdio.h>
int main() {
    int N, rain;
    int total = 0, heavyDays = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &rain);
        total += rain;
        if(rain > 50) {
            heavyDays++;
        }
    printf("Total Rainfall: %d\n", total);
    printf("Heavy Rain Days: %d", heavyDays);
    return 0;
}
}