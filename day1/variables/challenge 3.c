#include <stdio.h>

int main() {
    double dk;
    printf("Entrez la distance en kilomètres : ");
    scanf("%lf", &dk);

    double dy = dk * 1093.61;

    printf("La distance en pieds est : %.2f\n", dy);

    return 0;
}

