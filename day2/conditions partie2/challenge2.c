#include <stdio.h>
int main() {
    int age, typ_car, lakssida;
    printf("ecrire votre  age  (en années)\n Type de voiture (1 pour sportive, 2 pour utilitaire, 3 pour familiale)\nNombre d'accidents au cours des 5 dernières années\n");
    float prime_base = 500, prime;
    scanf("%d %d %d", &age, &typ_car, &lakssida);

    prime = (age < 25) ? prime_base * 1.5 :( (age > 65) ? prime_base * 1.2 : prime_base);
    prime *= (typ_car == 1) ? 2 : ((typ_car == 2) ? 1.2 : 1.1);
    if (lakssida > 1)
        prime *= 1.3;

    printf("Prime d'assurance: %.2f", prime);
    return 0;
}
