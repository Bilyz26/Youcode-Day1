#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'�l�ments du tableau: ");
    scanf("%d", &n);
int somme=0;
    int tableau[n];

    printf("Entrez les �l�ments du tableau:\n");
    for (int i = 0; i < n; i++) {
        printf("�l�ment %d: ", i + 1);
        scanf("%d", &tableau[i]);
        somme=somme+tableau[i];
    }

    printf("Les �l�ments du tableau sont:\n");

        printf("%d ", somme);



    return 0;
}
