// Challenge 6: Structure et Tableau de Structures
#include <stdio.h>

struct Produit {
    char nom[50];
    float prix;
    int quantite;
};

int main() {
    struct Produit produits[3] = {
        {"Produit A", 10.5, 100},
        {"Produit B", 15.0, 200},
        {"Produit C", 8.75, 150}
    };

    for (int i = 0; i < 3; i++) {
        printf("Nom: %s, Prix: %.2f, Quantité: %d\n", produits[i].nom, produits[i].prix, produits[i].quantite);
    }

    return 0;
}
