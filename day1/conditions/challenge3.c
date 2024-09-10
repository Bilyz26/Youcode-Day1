#include <stdio.h>
int main() {
    int a, b;
    printf("entre deux nombre entier: \n");
    scanf("%d %d", &a, &b);
    if (a == b)
        printf("%d", 3 * (a + b));
    else
        printf("%d", a + b);
    return 0;
}
