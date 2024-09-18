#include <stdio.h>
#include <string.h>

char* inverser_chaine(char* chaine) {
    int longueur = strlen(chaine);
    for (int i = 0; i < longueur / 2; i++) {
        char temp = chaine[i];
        chaine[i] = chaine[longueur - i - 1];
        chaine[longueur - i - 1] = temp;
    }
    return chaine;
}

int main() {
    char chaine[100];
    printf("Entrez une cha�ne de caract�res : ");
    fgets(chaine, sizeof(chaine), stdin);

    chaine[strcspn(chaine, "\n")] = 0;

    printf("Cha�ne invers�e : %s\n", inverser_chaine(chaine));

    return 0;
}
