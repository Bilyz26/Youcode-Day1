#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'�l�ments du tableau: ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez les �l�ments du tableau:\n");
    for (int i = 0; i < n; i++) {
        printf("�l�ment %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    printf("Les �l�ments du tableau sont:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }

    return 0;
}
