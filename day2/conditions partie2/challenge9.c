#include <stdio.h>
int main() {
    float slrBase, sway3Zyada;
    int poste;
    printf(" Salaire de base (en euros)\nNombre d'heures supplémentaires\nType de poste (1 pour junior, 2 pour senior)\n");

    scanf("%f %f %d", &slrBase, &sway3Zyada, &poste);

    float t_Hrr = slrBase / 160;
float slr = slrBase + (sway3Zyada * t_Hrr * 1.5);

if (poste == 1) {
    slr += slrBase * 0.10;
} else {
    slr += slrBase * 0.20;
}


    printf("slr total: %.2f", slr);
    return 0;
}
