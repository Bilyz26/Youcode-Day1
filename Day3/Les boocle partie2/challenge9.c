#include <stdio.h>
int main() {
    int base, exp, result = 1;
    printf("Entrez la base : ");
    scanf("%d", &base);
    printf("Entrez l'exposant : ");
    scanf("%d", &exp);
    while (exp != 0) {
        result *= base;
        exp--;
    }
    printf("Résultat = %d", result);
    return 0;
}
