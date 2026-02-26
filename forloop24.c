#include <stdio.h>

int main() {
    int fuel, N;
    scanf("%d", &fuel);
    scanf("%d", &N);

    int burn[N];
    for(int i = 0; i < N; i++) {
        scanf("%d", &burn[i]);
    }

    int i = 0;
    int emergencyStage = -1;
    int wasted = 0;

    while(i < N) {
        fuel -= burn[i];

        if(fuel < 0) {
            emergencyStage = i + 1;   // 1-based stage number
            wasted = -fuel;           // extra fuel used
            break;
        }

        i++;
    }

    if(emergencyStage == -1) {
        printf("Emergency Stage: Not Occurred\n");
        printf("Fuel Wasted: 0");
    } else {
        printf("Emergency Stage: %d\n", emergencyStage);
        printf("Fuel Wasted: %d", wasted);
    }

    return 0;
}