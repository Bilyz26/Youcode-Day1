#include <stdio.h>
int main() {
    char c;
    printf("ecrire un carractere:\n ");
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        if (c >= 'A' && c <= 'Z')
            printf("Majuscule");
        else
            printf("Minuscule");
    } else {
        printf("Non alphabet");
    }
    return 0;
}
