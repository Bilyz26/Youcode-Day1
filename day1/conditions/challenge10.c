#include <stdio.h>
int main()
{
    int jour, mois, annee;
    printf("Écrivez  une date au format dd/mm/yyyy: \n");
    scanf("%d/%d/%d", &j, &m, &a);

    const char* month[] = {"Janvier", "Février",
    "Mars", "Avril", "Mai",
     "Juin", "Juillet", "Août",
     "Septembre", "Octobre", "Novembre", "Décembre"};

    printf("%d-%s-%d", j, month[m - 1], a);
    return 0;
}
