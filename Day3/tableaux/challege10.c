#include <stdio.h>

int main() {
    int n, i, element;

    printf("Entrez le nombre d'�l�ments dans le tableau: ");
    scanf("%d", &n);

    int arr[n];

    printf("Entrez les �l�ments du tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Entrez l'�l�ment � rechercher: ");
    scanf("%d", &element);

    int found = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = 1;
            break;
        }
    }

    if (found==1) {
        printf("�l�ment trouv�\n");
    } else {
        printf("�l�ment non trouv�\n");
    }

    return 0;
}
