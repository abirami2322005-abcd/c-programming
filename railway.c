#include <stdio.h>

int main() {
    int seat;
    printf("Enter seat number: ");
    scanf("%d", &seat);
    if (seat >= 1 && seat <= 50) {
        printf("Confirmed\n");
    }
    else {
        printf("Waiting List\n");
    }
    return 0;
}