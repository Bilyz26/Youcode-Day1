#include <stdio.h>
int main() {
    char c;
    scanf("%c", &c);
    if (c >= 65 && c <= 90)
        printf("Majuscule");
    else
        printf("Non majuscule");
    return 0;
}
