#include <stdio.h>
int main() {
    int n, inv;
    scanf("%d", &n);
    inv = (n % 10) * 1000 + (n / 10 % 10) * 100 + (n / 100 % 10) * 10 + (n / 1000);
    printf("%d", inv);
    return 0;
}
