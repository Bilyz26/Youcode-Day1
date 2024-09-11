#include <stdio.h>
int main() {
    int total3otla, ttl3otlaDwazti, statut;
    printf("entre votre Nombre total de jours de congés accordés\nNombre de jours de congés utilisés\nStatut de l'employé (0 pour temps partiel, 1 pour temps plein)\n");
    scanf("%d %d %d", &total3otla, &ttl3otlaDwazti, &statut);

    int Lba9i_3otla = (statut == 1) ? total3otla - ttl3otlaDwazti : (total3otla / 2) - ttl3otlaDwazti;

    if (ttl3otlaDwazti > total3otla)
        printf("Alerte: Congés dépassés");
    else
        printf("Jours de congé restants: %d", Lba9i_3otla);

    return 0;
}
