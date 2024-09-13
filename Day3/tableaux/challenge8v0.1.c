#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'éléments du tableau: ");
    scanf("%d", &n);

    char tableau[n];
    char tblcopy[n];

    printf("Entrez les éléments du tableau (caractères):\n");
    for (int i = 0; i < n; i++) {
        printf("Élément %d: ", i + 1);
        scanf(" %c", &tableau[i]);
    }

    for (int i = 0; i < n; i++) {
        tblcopy[i] = tableau[i];
    }

    printf("Les éléments du tableau original sont:\n");
    for (int i = 0; i < n; i++) {
        printf("%c ", tableau[i]);
    }
    printf("\n");

    printf("Les éléments du tableau copié sont:\n");
    for (int i = 0; i < n; i++) {
        printf("%c ", tblcopy[i]);
    }
    printf("\n");

    return 0;
}
