#include <stdio.h>
int main() {
    float bdgt;
    int dstn, prsn;
    printf("entre votre Budget (en euros)\nDestination (1 pour plage, 2 pour montagne, 3 pour ville)\nNombre de personnes\n");
    scanf("%f %d %d", &bdgt, &dstn, &prsn);

    if (bdgt >= 1000)
        printf("Voyage haut de gamme\n");
    else if (bdgt >= 500)
        printf("Voyage moyen\n");
    else
        printf("Voyage �conomique\n");

    if ( bdgt >= 1000 && prsn > 2)
        printf("dstn recommand�e: Plage");
    else if (bdgt >= 500 && prsn <= 2)
        printf("dstn recommand�e: Montagne");
    else
        printf("dstn recommand�e: Ville");

    return 0;
}
