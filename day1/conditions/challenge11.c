#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));

    const char* days[] = {"Lundi", "Mardi", "Mercredi",
    "Jeudi", "Vendredi", "Samedi", "Dimanche"};

    int rJ = rand() % 7;
    printf("le jour aléatoire   : %s", days[rJ]);
    return 0;
}
