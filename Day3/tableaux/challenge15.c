#include <stdio.h>

int main() {
    int n, m, i;

    printf("Nombre d'éléments du premier tableau: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Le nombre d'éléments doit être positif.\n");
        return 1;
    }

    int arr[n];
    printf("Entrez les éléments du premier tableau : ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Nombre d'éléments du deuxième tableau: ");
    scanf("%d", &m);

    if (m <= 0) {
        printf("Le nombre d'éléments doit être positif.\n");
        return 1;
    }

    int arr2[m];

    printf("Entrez les éléments du deuxième tableau : ");
    for (i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    int merged[n + m];

    for (i = 0; i < n; i++) {
        merged[i] = arr[i];
    }

    for (i = 0; i < m; i++) {
        merged[n + i] = arr2[i];
    }

    printf("Tableau fusionné : ");
    for (i = 0; i < n + m; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

