#include <stdio.h>
int main() {
    int total3otla, ttl3otlaDwazti, statut;
    printf("entre votre Nombre total de jours de cong�s accord�s\nNombre de jours de cong�s utilis�s\nStatut de l'employ� (0 pour temps partiel, 1 pour temps plein)\n");
    scanf("%d %d %d", &total3otla, &ttl3otlaDwazti, &statut);

    int Lba9i_3otla = (statut == 1) ? total3otla - ttl3otlaDwazti : (total3otla / 2) - ttl3otlaDwazti;

    if (ttl3otlaDwazti > total3otla)
        printf("Alerte: Cong�s d�pass�s");
    else
        printf("Jours de cong� restants: %d", Lba9i_3otla);

    return 0;
}
