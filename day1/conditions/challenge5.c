#include <stdio.h>

int main() {
    printf("Entrez le nombre d'années : \n");
    int anne;
    scanf("%d", &anne);

    int kabbissa = anne / 4;
    int jo = anne * 365 + kabbissa;
    int mo = anne * 12;
    int he = jo * 24;
    int min = he * 60;
    int sec = min * 60;

    printf("Mois: %d\n", mo);
    printf("Jours: %d\n", jo);
    printf("Heures: %d\n", he);
    printf("Minutes: %d\n", min);
    printf("Secondes: %d\n", sec);





    return 0;
}
