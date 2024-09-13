#include <stdio.h>
int main() {
    int num, sum = 0;
    printf("Entrez un nombre : ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
        sum += num * i;
    }
    printf("Somme des produits = %d", sum);
    return 0;
}
