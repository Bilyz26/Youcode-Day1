#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'�l�ments du tableau: ");
    scanf("%d", &n);

    int tableau[n];
    int tblcopy[n];

    printf("Entrez les �l�ments du tableau:\n");
    for (int i = 0; i < n; i++) {
        printf("�l�ment %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    for (int i = 0; i < n; i++) {
        tblcopy[i] = tableau[i];
    }

    printf("Les �l�ments du tableau original sont:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    printf("Les �l�ments du tableau copi� sont:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tblcopy[i]);
    }
    printf("\n");

    return 0;
}
