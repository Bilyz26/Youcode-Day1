#include <stdio.h>

int main() {
    int n;

    printf("Entrez le nombre d'�l�ments du tableau: ");
    scanf("%d", &n);
int min;
    int tableau[n];

    printf("Entrez les �l�ments du tableau:\n");
    for (int i = 0; i < n; i++) {
        printf("�l�ment %d: ", i + 1);
        scanf("%d", &tableau[i]);
        if(tableau[i]<min)
            min=tableau[i];
    }

    printf("Le plus grand �l�ment du tableau et:\n");
        printf("%d ",min );



    return 0;
}
