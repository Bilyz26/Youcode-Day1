#include <stdio.h>
int main() {
    int n, invrs = 0;
    printf("Entrez un n : ");
    scanf("%d", &n);
    while (n != 0) {
        invrs = invrs * 10 + n % 10;
        n /= 10;
    }
    printf("L'invrs est : %d\n", invrs);
    return 0;
}
