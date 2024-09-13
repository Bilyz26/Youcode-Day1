#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int n;
    printf("Entrez la longueur du mot de passe : ");
    scanf("%d", &n);
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    srand(time(0));
    for (int i = 0; i < n; i++) {
        printf("%c", charset[rand() % (sizeof(charset) - 1)]);
    }
    return 0;
}
