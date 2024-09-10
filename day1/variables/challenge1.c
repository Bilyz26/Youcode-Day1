#include <stdio.h>

int main() {

    char nom[50];
    char prenom[50];
    int age;
    char sexe;
    char email[100];


    printf("Entrez votre nom : ");
    scanf("%s", nom);


    printf("Entrez votre prénom : ");
    scanf("%s", prenom);


    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez votre sexe (M/F) : ");
    scanf(" %s", &sexe);

    printf("Entrez votre adresse email : ");
    scanf("%s", email);

    printf("\nInformations saisies :\n");
    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Âge : %d\n", age);
    printf("Sexe : %c\n", sexe);
    printf("Adresse email : %s\n", email);




    return 0;
}
