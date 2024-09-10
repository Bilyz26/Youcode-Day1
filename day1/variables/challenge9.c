#include <stdio.h>
#include <math.h>
int main() {
    float x1, y1, z1, x2, y2, z2, d;
    printf("entre 3 nombre");
    scanf("%f %f %f", &x1, &y1, &z1);
  printf("entre 3 nombre");
    scanf("%f %f %f", &x2, &y2, &z2);
    d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    printf("%f", d);
    return 0;
}
