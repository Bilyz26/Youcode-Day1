#include <stdio.h>

int main() {
    int option;
    char prenom[50], nom[50];
    int note, minNote = 101, maxNote = -1;
    char nomMin[50], nomMax[50];
    int totalStudents = 0;
    int sumNotes = 0;
    int notes[100];
    int noteCount = 0;
    int abovAverage;


    do {
        printf("Choisissez une option:\n");
        printf("1. Ajouter un �tudiant\n");
        printf("2. Calculer et afficher la moyenne\n");
        printf("3. Afficher l'�tudiant avec la meilleure et la pire note\n");
        printf("4. V�rifier combien d'�tudiants ont une note sup�rieure � la moyenne\n");
        printf("5. Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Entrez le pr�nom de l'�tudiant: ");
                scanf("%s", prenom);
                printf("Entrez le nom de l'�tudiant: ");
                scanf("%s", nom);
                printf("Entrez la note de l'�tudiant: ");
                scanf("%d", &note);

                if (note < minNote) {
                    minNote = note;
                    snprintf(nomMin, sizeof(nomMin), "%s %s", prenom, nom);
                }
                if (note > maxNote) {
                    maxNote = note;
                    snprintf(nomMax, sizeof(nomMax), "%s %s", prenom, nom);
                }

                notes[noteCount++] = note;
                sumNotes += note;
                totalStudents++;

                printf("�tudiant ajout�.\n");
                break;

            case 2:
                if (totalStudents > 0) {
                    double average = (double)sumNotes / totalStudents;
                    printf("La moyenne des notes est: %.2f\n", average);
                } else {
                    printf("Aucun �tudiant ajout�.\n");
                }
                break;

            case 3:
                if (totalStudents > 0) {
                    printf("L'�tudiant avec la meilleure note (%d) est: %s\n", maxNote, nomMax);
                    printf("L'�tudiant avec la pire note (%d) est: %s\n", minNote, nomMin);
                } else {
                    printf("Aucun �tudiant ajout�.\n");
                }
                break;

            case 4:
                for(int i=0;i>=totalStudents;i++)
                {
                    if(notes[i]>=sumNotes/totalStudents)
                    {
                        printf("%d ,",notes[i]);
                    }

                }


                break;

            case 5:
                printf("Quitter le programme.\n");
                break;

            default:
                printf("Option invalide. Veuillez r�essayer.\n");
        }

    } while (option != 5);

    return 0;
}
