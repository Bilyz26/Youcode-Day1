#include <stdio.h>
int main() {
    float rvn;

    int scr_crdt, period;
    printf("ecrire ce coordonne: \n Revenu annuel (en euros) \nScore de cr�dit (sur 1000)\nDur�e du pr�t en ann�es \n");
    scanf("%f %d %d", &rvn, &scr_crdt, &period);

    if (rvn >= 30000 && scr_crdt >=
        700 && period <= 10)
       {
           printf("�ligible");
       }


    else if (rvn >= 30000 && scr_crdt >=
             650 && period <= 15)
             {
                 printf("�ligible avec conditions");
             }

    else
        printf("Non �ligible");
    return 0;
}
