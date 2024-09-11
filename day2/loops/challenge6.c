#include <stdio.h>
int main() {
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d ", i * 2);
    }
    return 0;
}



