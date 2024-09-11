#include <stdio.h>
int main() {
    int base, exp, resultat = 1;
    printf("Entrez la base et l'exp : ");
    scanf("%d %d", &base, &exp);
    for (int i = 1; i <= exp; i++) {
        resultat *= base;
    }
    printf("%d^%d = %d\n", base, exp, resultat);
    return 0;
}
