#include <stdio.h>
int main() {
    printf("ecrire un nombre : ");
    int n;
    scanf("%d", &n);
    if (n> 0)
        printf("Positif");
    else if (n < 0)
        printf("N�gatif");
    else
        printf("Nul");
    return 0;
}
