#include <stdio.h>
int main() {
    int num, sum = 0, count = 0;
    printf("Entrez une série de nombres positifs (0 pour terminer) : ");
    while (1) {
        scanf("%d", &num);
        if (num == 0) break;
        sum += num;
        count++;
    }
    if (count != 0) printf("Moyenne = %.2f", (float)sum / count);
    return 0;
}
