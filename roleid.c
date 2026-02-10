#include <stdio.h>
int main() {
    int role;
    printf("enter role id: ");
    scanf("%d", &role);
    if (role == 1) {
        printf("Admin\n");
    }
    else if (role == 2) {
        printf("User\n");
    }
    else if (role == 3) {
        printf("Guest\n");
    }
    else {
        printf("Invalid role\n");
    }

    return 0;
}
