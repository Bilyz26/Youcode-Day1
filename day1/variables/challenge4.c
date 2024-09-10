#include <stdio.h>

int main() {
     double vkH;
    printf("Entrez la vitesse en km/h : ");
    scanf("%lf", &vkH);

    double vms = vkH * 0.27778;

    printf("La vitesse en m/s est : %.2f\n", vms);

    return 0;
}
