#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'éléments du tableau: ");
    scanf("%d", &n);

    int tableau[n];
    int tblcopy[n];

    printf("Entrez les éléments du tableau:\n");
    for (int i = 0; i < n; i++) {
        printf("Élément %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    for (int i = 0; i < n; i++) {
        tblcopy[i] = tableau[i];
    }

    printf("Les éléments du tableau original sont:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    printf("Les éléments du tableau copié sont:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tblcopy[i]);
    }
    printf("\n");

    return 0;
}
