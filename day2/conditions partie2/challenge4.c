#include <stdio.h>
int main() {
    int scr, l2a9damiya, lkadoyat;
    printf("entre votreScore de performance (de 0 à 100)\n Ancienneté (en années)\nRécompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus)\n ");
    scanf("%d %d %d", &scr, &l2a9damiya, &lkadoyat);

    if (scr >= 90 && l2a9damiya >= 5)
        printf("Excellente");
    else if (scr >= 75 && l2a9damiya >= 3)
        printf("Bonne");
    else if (scr >= 50 && l2a9damiya < 3)
        printf("Satisfaisante");
    else
        printf("Insuffisante");

    if (lkadoyat == 1)
        printf(" avec bonus de 10%%");
    else if (lkadoyat >= 2)
        printf(" avec bonus de 20%%");

    return 0;
}
