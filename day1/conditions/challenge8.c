#include <stdio.h>
int main() {
    float m;
    scanf("%f", &m);
    if (m < 10)
        printf("Recal�");
    else if (m < 12)
        printf("Passable");
    else if (m < 14)
        printf("Assez bien");
    else if (m < 16)
        printf("Bien");
    else
        printf("Tr�s bien");
    return 0;
}
