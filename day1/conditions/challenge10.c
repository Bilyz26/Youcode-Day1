#include <stdio.h>
int main()
{
    int jour, mois, annee;
    printf("�crivez  une date au format dd/mm/yyyy: \n");
    scanf("%d/%d/%d", &j, &m, &a);

    const char* month[] = {"Janvier", "F�vrier",
    "Mars", "Avril", "Mai",
     "Juin", "Juillet", "Ao�t",
     "Septembre", "Octobre", "Novembre", "D�cembre"};

    printf("%d-%s-%d", j, month[m - 1], a);
    return 0;
}
