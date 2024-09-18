#include <stdio.h>

// Fonction pour vérifier si un nombre est pair ou impair
int est_pair(int nombre) {
    return nombre % 2 == 0;
}

int main() {
    int nombre;
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    if (est_pair(nombre)) {
        printf("%d est pair.\n", nombre);
    } else {
        printf("%d est impair.\n", nombre);
    }

    return 0;
}
