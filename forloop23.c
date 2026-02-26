#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int vibration[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &vibration[i]);
    }

    int i = 0;
    int unsafeCount = 0;
    int continuous = 0;
    int breakdownPoint = -1;

    while(i < N) {

        if(vibration[i] > 70) {
            unsafeCount++;
            continuous++;
        } else {
            continuous = 0;
        }

        if(continuous == 3 && breakdownPoint == -1) {
            breakdownPoint = i + 1;   // reading number (1-based index)
        }

        i++;
    }

    if(breakdownPoint == -1)
        printf("Breakdown At Reading: Not Occurred\n");
    else
        printf("Breakdown At Reading: %d\n", breakdownPoint);

    printf("Unsafe Readings: %d", unsafeCount);

    return 0;
}