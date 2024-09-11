#include <stdio.h>

int iskabissaYear(int year) {
    return (year % 4 == 0 && (year % 100 != 0 ||
                               year % 400 == 0));
}

int getJoInYear(int year) {
    return iskabissaYear(year) ? 366 : 365;
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    printf("Year %d has %d months.\n", year, 12);
    int days = getJoInYear(year);
    printf("Year %d has:\n ", year);
    printf("%d days.\n", days);
    printf("%d hours.\n", days * 24);
    printf("%d minutes.\n", days * 24 * 60);
    printf("%d seconds.\n", days * 24 * 60 * 60);

    return 0;
}
