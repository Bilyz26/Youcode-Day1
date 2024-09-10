#include <stdio.h>
int main() {
    float x1, y1, x2, y2, px, py;
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);
    scanf("%f %f", &px, &py);
    if ((px - x1) * (y2 - y1) == (py - y1) * (x2 - x1))
        printf("Le point est sur le segment");
    else
        printf("Le point n'est pas sur le segment");
    return 0;
}
