#include <stdio.h>
int main() {
    char *jours[] = {"Lundi", "Mardi", "Mercredi", "Jeudi", "Vendredi", "Samedi", "Dimanche"};
    int choix;
    printf("Choisissez un jour (1 = Lundi, 7 = Dimanche) : ");
    scanf("%d", &choix);
    for (int i = choix - 1; i < 7; i++) printf("%s ", jours[i]);
    return 0;
}
