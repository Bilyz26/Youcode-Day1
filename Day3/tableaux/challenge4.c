#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'�l�ments du tableau: ");
    scanf("%d", &n);
int max;
    int tableau[n];

    printf("Entrez les �l�ments du tableau:\n");
    for (int i = 0; i < n; i++) {
        printf("�l�ment %d: ", i + 1);
        scanf("%d", &tableau[i]);
        if(tableau[i]>max)
            max=tableau[i];
    }

    printf("Le plus grand �l�ment du tableau et:\n");

        printf("%d ",max );



    return 0;
}
