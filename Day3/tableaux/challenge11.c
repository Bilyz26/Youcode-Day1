#include <stdio.h>

int main() {
    int n, i, old_value, new_value;

    printf("Entrez le nombre d'éléments dans le tableau: ");
    scanf("%d", &n);

    int arr[n];
    printf("Entrez les éléments du tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Entrez la valeur à remplacer: ");
    scanf("%d", &old_value);
    printf("Entrez la nouvelle valeur: ");
    scanf("%d", &new_value);

    for (i = 0; i < n; i++) {
        if (arr[i] == old_value) {
            arr[i] = new_value;
        }
    }

    printf("Tableau après remplacement: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
