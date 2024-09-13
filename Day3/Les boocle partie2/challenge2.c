#include <stdio.h>
#include <stdbool.h>

int main() {
    int num_lines;
    printf("Entrez le nombre de lignes pour la pyramide : ");
    scanf("%d", &num_lines);

    if (num_lines <= 0) {
        printf("Le nombre de lignes doit être positif.\n");
        return 1;
    }

    int primes[num_lines];
    int count = 0;
    int num = 2;

    while (count < num_lines) {
        bool is_prime = true;
        if (num <= 1) {
            is_prime = false;
        } else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    is_prime = false;
                    break;
                }
            }
        }

        if (is_prime) {
            primes[count] = num;
            count++;
        }
        num++;
    }

    for (int i = 0; i < num_lines; i++) {
        int num_stars = primes[i];
        int spaces = num_lines - i - 1;

        for (int j = 0; j < spaces; j++) {
            printf(" ");
        }

        for (int k = 0; k < num_stars; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
