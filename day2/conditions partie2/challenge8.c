#include <stdio.h>

int main() {
    int age, hstrk, cnvrt;
printf(" Age\nHistorique m�dical (0 pour aucun probl�me, 1 pour probl�me mineur, 2 pour probl�me majeur)\nType de couverture (1 pour de base, 2 pour �tendue)\n");
    scanf("%d %d %d", &age, &hstrk, &cnvrt);

    if (age < 30 || hstrk == 0) {
        printf("Plan de base");
    } else {
        printf("Plan �tendu");
    }

    if (hstrk == 2) {
        printf(" avec couverture suppl�mentaire");
    }

    return 0;
}

