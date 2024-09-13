#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'éléments du tableau: ");
    scanf("%d", &n);
int min;
    int tableau[n];

    printf("Entrez les éléments du tableau:\n");
    for (int i = 0; i < n; i++) {
        printf("Élément %d: ", i + 1);
        scanf("%d", &tableau[i]);
        if(tableau[i]<min)
            min=tableau[i];
    }

    printf("Le plus grand élément du tableau et:\n");
        printf("%d ",min );



    return 0;
}
