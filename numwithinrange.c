#include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    scanf("%c",&c);
    if (isdigit(c)) {
        printf("%c is a digit\n",c);
    }
    else {
        printf("%c not digit\n",c);
    }
    return 0;
}