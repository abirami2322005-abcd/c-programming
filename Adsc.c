#include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    scanf("%c", &c);
    if (isalpha(c)) {
        printf("%c alphabet\n", c);
    }
    else if (isdigit(c)) {
        printf("%c digit\n",c);
    }
    else {
        printf("%c special character\n",c);
    }
    return 0;
    
}