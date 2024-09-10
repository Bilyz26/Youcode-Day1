#include <stdio.h>
int main() {
    int n;
    printf("enter nombre: ");
    scanf("%d", &n);
    if (n % 2 == 0)
        printf("Pair");
    else
        printf("Impair");
    return 0;
}
