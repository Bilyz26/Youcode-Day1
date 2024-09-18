#include <stdio.h>

unsigned long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    unsigned long long a = 0, b = 1, temp;
    for (int i = 2; i <= n; i++) {
            if(temp>n

        temp = a + b;
        a = b;
        b = temp;
    }

    return b;
}

int main() {
    int n;
    printf("Entrez le rang du terme de Fibonacci � calculer : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Veuillez entrer un nombre non n�gatif.\n");
        return 1;
    }

    unsigned long long resultat = fibonacci(n);
    printf("Le %d-�me terme de la suite de Fibonacci est : %llu\n", n, resultat);

    return 0;
}
