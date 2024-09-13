#include <stdio.h>

int main() {
    int n, i;
    int sum = 0;

    printf("Entrez le nombre d'éléments : ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Le nombre d'éléments doit être positif.\n");
        return 1;
    }

    int arr[n];

    printf("Entrez %d nombres :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float average = (float)sum / n;

    printf("La moyenne est : %.2f\n", average);

    return 0;
}
