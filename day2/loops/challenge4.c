#include <stdio.h>
int main() {
    int n, count = 0, i = 1;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    while (count < n) {
        printf("%d ", i);
        i += 2;
        count++;
    }
    return 0;
}
