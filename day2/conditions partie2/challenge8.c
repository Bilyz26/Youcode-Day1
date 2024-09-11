#include <stdio.h>

int main() {
    int age, hstrk, cnvrt;
printf(" Age\nHistorique médical (0 pour aucun problème, 1 pour problème mineur, 2 pour problème majeur)\nType de couverture (1 pour de base, 2 pour étendue)\n");
    scanf("%d %d %d", &age, &hstrk, &cnvrt);

    if (age < 30 || hstrk == 0) {
        printf("Plan de base");
    } else {
        printf("Plan étendu");
    }

    if (hstrk == 2) {
        printf(" avec couverture supplémentaire");
    }

    return 0;
}

