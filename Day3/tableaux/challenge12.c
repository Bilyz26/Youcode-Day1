#include <stdio.h>

int main() {
    int n, i;

    printf("Entrez le nombre d'�l�ments dans le tableau: ");
    scanf("%d", &n);

    int arr[n];
    printf("Entrez les �l�ments du tableau:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("�l�ments pairs: ");
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
