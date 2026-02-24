#include <stdio.h>
int main() {
    int batteryPercent, N, drain;
    scanf("%d", &batteryPercent);
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", &drain);
        batteryPercent -= drain;
    }
    printf("Remaining Battery: %d%%", batteryPercent);
    return 0;
}