#include <stdio.h>
#include <math.h>
int main() {
    int n;
    int fct;
    printf("Entrez le facteur: ");
    scanf("%d", &fct);

    printf("Entrez le nombre d'éléments du tableau: ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez les éléments du tableau:\n");
    for (int i = 0; i < n; i++) {
        printf("Élément %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Les éléments du tableau sont:\n");
    for (int i = 0; i < n; i++) {
        printf("%d*%d=%d \n",fct,tableau[i],fct*tableau[i]);
    }

    return 0;
}
