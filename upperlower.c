#include <ctype.h>
#include <stdio.h>
int main() {
    char c;
    scanf("%c",&c);
    if (isupper(c)) {
        printf("%c uppercase letter\n",c);
    }
    else if (islower(c)){
        printf("%c lowercase letter\n",c);
    }
    else {