#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'éléments du tableau: ");
    scanf("%d", &n);

    int tableau[n];

    printf("Entrez les éléments du tableau:\n");
    for (int i = 0; i < n; i++) {
        printf("Élément %d: ", i + 1);
        scanf("%d", &tableau[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }

    printf("Tableau trié en ordre croissant:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }

    return 0;
}
