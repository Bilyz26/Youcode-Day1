#include <stdio.h>
int main() {
    char c;
    scanf("%c", &c);
    switch(c) {
        case 'a': case 'e': case 'i': case 'o': case 'u': case 'y':

            printf("Voyelle");
            break;
        default:
            printf("Non voyelle");
    }
    return 0;
}
