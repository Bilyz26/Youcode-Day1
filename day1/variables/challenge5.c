#include <stdio.h>

int main() {
    double tc;
printf("entre la température en Celsius: ");
scanf("%lf",&tc);
    if (tc < 0) {
        printf("L'eau est solide.\n");
    } else if (tc >= 0 && tc < 100) {
        printf("L'eau est liquide.\n");
    } else {
        printf("L'eau est en gaz.\n");
    }

    return 0;
}
