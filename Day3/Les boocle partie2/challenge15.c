#include <stdio.h>
int main() {
    int n, fact = 1;
    printf("Entrez un entier : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) fact *= i;
    printf("Factorielle de %d = %d", n, fact);
    return 0;
}
