#include <stdio.h>
int main() {
    char str[100], ch;
    int i = 0, index = -1;
    scanf("%s %c", str, &ch);
    while(str[i] != '\0') {
        if(str[i] == ch) {
            index = i;
            break;
        }
        i++;
    }
    printf("%d", index);
    return 0;
}
