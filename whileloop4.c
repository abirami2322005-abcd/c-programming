#include <stdio.h>
int main() {
    int maxWeight, n;
    scanf("%d", &maxWeight);
    scanf("%d", &n);
    int weight[n];
    int i = 0;
    while(i < n) {
        scanf("%d", &weight[i]);
        i++;
    }
    int total = 0;
    int allowed = 0;
    int overload = 0;
    i = 0;
    while(i < n) {
        if(total + weight[i] > maxWeight) {
            overload = 1;
            break;
        }
        total += weight[i];
        allowed++;
        i++;
    }
    printf("Passengers Allowed: %d\n", allowed);
    if(overload == 1) {
        printf("Overload: Yes");
    } else {
        printf("Overload: No");
    }
    return 0;
}