#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'�l�ments du tableau: ");
    scanf("%d", &n);

    char tableau[n];
    char tblcopy[n];

    printf("Entrez les �l�ments du tableau (caract�res):\n");
    for (int i = 0; i < n; i++) {
        printf("�l�ment %d: ", i + 1);
        scanf(" %c", &tableau[i]);
    }

    for (int i = 0; i < n; i++) {
        tblcopy[i] = tableau[i];
    }

    printf("Les �l�ments du tableau original sont:\n");
    for (int i = 0; i < n; i++) {
        printf("%c ", tableau[i]);
    }
    printf("\n");

    printf("Les �l�ments du tableau copi� sont:\n");
    for (int i = 0; i < n; i++) {
        printf("%c ", tblcopy[i]);
    }
    printf("\n");

    return 0;
}
