#include <stdio.h>
int est_premier(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    int n;
    printf("Entrez un entier : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (est_premier(i)) printf("%d ", i);
    }
    return 0;
}
