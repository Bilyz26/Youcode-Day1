#include <stdio.h>
int main() {
    int n, cmpt = 0;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    while (n != 0) {
        n /= 10;
        cmpt++;
    }
    printf("Nombre de chiffres = %d\n", cmpt);
    return 0;
}
