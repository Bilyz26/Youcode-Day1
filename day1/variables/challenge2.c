#include <stdio.h>

int main() {

    int t;
    printf("Enter temperature in Celsius: ");

    scanf("%d", &t);

    double tk = t + 273.15;

    printf("Temperature in Kelvin: %.2f\n", tk);





    return 0;
}
