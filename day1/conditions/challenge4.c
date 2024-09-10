#include <stdio.h>
#include <math.h>
int main() {
    float a, b, c, delta, x1, x2;
      printf("entre TROIS nombre entier: \n");
    scanf("%f %f %f", &a, &b, &c);
    delta = b*b - 4*a*c;
    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b - sqrt(delta)) / (2*a);
        printf("Solutions: %f, %f", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2*a);
        printf("Solution unique: %f", x1);
    } else {
        printf("Pas de solution réelle");
    }
    return 0;
}
