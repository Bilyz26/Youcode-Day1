#include <stdio.h>
int main() {
    int num, reverse = 0;
    printf("Entrez un entier : ");
    scanf("%d", &num);
    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    printf("Nombre inversé : %d", reverse);
    return 0;
}
