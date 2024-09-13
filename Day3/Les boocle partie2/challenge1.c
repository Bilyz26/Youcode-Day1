#include <stdio.h>
int main() {
    int num;
    printf("Entrez un nombre : ");
    scanf("%d", &num);
    for (int i = 10; i >= 1; i--) {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    return 0;
}
