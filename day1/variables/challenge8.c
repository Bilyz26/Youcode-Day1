#include <stdio.h>
#include <math.h>
int main() {
    float n1;
    float n2;
    float n3;


   printf("nombre 1: ");
   scanf("%f",&n1);

   printf("nombre 2: ");
   scanf("%f",&n2);

   printf("nombre 3: ");
   scanf("%f",&n3);

   int m=pow(n1*n2*n3,1.0/3.0);


   printf(" la moyenne  et %.2f",m);
return 0;
}
