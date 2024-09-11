#include <stdio.h>
int main() {
    float rvn;

    int scr_crdt, period;
    printf("ecrire ce coordonne: \n Revenu annuel (en euros) \nScore de crédit (sur 1000)\nDurée du prêt en années \n");
    scanf("%f %d %d", &rvn, &scr_crdt, &period);

    if (rvn >= 30000 && scr_crdt >=
        700 && period <= 10)
       {
           printf("Éligible");
       }


    else if (rvn >= 30000 && scr_crdt >=
             650 && period <= 15)
             {
                 printf("Éligible avec conditions");
             }

    else
        printf("Non éligible");
    return 0;
}
