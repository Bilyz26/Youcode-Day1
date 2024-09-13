#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'éléments du tableau: ");
    scanf("%d", &n);
int somme=0;
    int tableau[n];

    printf("Entrez les éléments du tableau:\n");
    for (int i = 0; i < n; i++) {
        printf("Élément %d: ", i + 1);
        scanf("%d", &tableau[i]);
        somme=somme+tableau[i];
    }

    printf("Les éléments du tableau sont:\n");

        printf("%d ", somme);



    return 0;
}
