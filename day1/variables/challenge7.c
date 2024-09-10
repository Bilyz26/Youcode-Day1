#include <stdio.h>

int main() {
    double n1;
    double n2;
    double n3;
    double p1=2;
    double p2=3;
    double p3=5;

   printf("nombre 1: ");
   scanf("%lf",&n1);

   printf("nombre 2: ");
   scanf("%lf",&n2);

   printf("nombre 3: ");
   scanf("%lf",&n3);

   double moyenne=(n1*p1)+(n2*p2)+(n3*p3)/p1+p2+p3;
   printf(" la moyenne pondérée et %.2f",moyenne);
    return 0;
}
