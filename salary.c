#include <stdio.h>
int main () {
    int salary;
    scanf("%d",&salary);
    if (salary>30000) {
        printf("Bonus eleigible\n");
    }
    else {
        printf("Bonus not eligible\n");
    }
    return 0;
}