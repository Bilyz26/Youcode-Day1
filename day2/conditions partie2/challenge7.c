#include <stdio.h>
int main() {
    float rvn, ded;
    int stts;
    printf("entre votre Revenu annuel (en euros)\nStatut fiscal (1 pour célibataire, 2 pour marié, 3 pour chef de famille)\nDéductions (en euros)\n");
    scanf("%f %d %f", &rvn, &stts, &ded);

    float impots;
if (rvn <= 20000) {
    impots = rvn * 0.05;
} else if (rvn <= 50000) {
    impots = rvn * 0.10;
} else {
    impots = rvn * 0.20;
}

if (stts == 1) {
    ded = 1000;
} else if (stts == 2) {
    ded = 2000;
} else {
    ded = 3000;
}

impots -= ded;


    printf("Impôts à payer: %.2f", impots);
    return 0;
}
