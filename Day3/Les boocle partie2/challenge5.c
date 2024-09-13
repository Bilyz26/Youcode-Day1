#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Entrez un entier : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) sum += i;
    printf("Somme = %d", sum);
    return 0;
}
