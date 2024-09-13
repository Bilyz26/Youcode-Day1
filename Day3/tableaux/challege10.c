#include <stdio.h>

int main() {
    int n, i, element;

    printf("Entrez le nombre d'éléments dans le tableau: ");
    scanf("%d", &n);

    int arr[n];

    printf("Entrez les éléments du tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Entrez l'élément à rechercher: ");
    scanf("%d", &element);

    int found = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = 1;
            break;
        }
    }

    if (found==1) {
        printf("Élément trouvé\n");
    } else {
        printf("Élément non trouvé\n");
    }

    return 0;
}
