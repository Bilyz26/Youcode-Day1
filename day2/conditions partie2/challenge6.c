#include <stdio.h>
int main() {
    float cnsm;
    int typ_user, typ_cntr;
    printf("entre votre Consommation d'électricité (en kWh)\nType d'utilisateur (1 pour résidentiel, 2 pour commercial)\nType de contrat (0 pour standard, 1 pour réduit)\n");
    scanf("%f %d %d", &cnsm, &typ_user, &typ_cntr);

   float trf;
if (typ_user == 1) {
    if (typ_cntr == 0) {
        trf = 0.20;
    } else {
        trf = 0.15;
    }
} else {
    if (typ_cntr == 0) {
        trf = 0.30;
    } else {
        trf = 0.25;
    }
}

float fctr = cnsm * trf;


    if (cnsm > 500)
        fctr *= 1.1;

    printf("Facture d'électricité: %.2f", fctr);
    return 0;
}
