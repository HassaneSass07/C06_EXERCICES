// Exo2: count_letters.c
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, voyelles = 0, consonnes = 0;

    // Demande à l'utilisateur d'entrer une chaîne de caractères
    printf("Entrez une chaîne : ");
    // Lecture sécurisée de la chaîne avec fgets (lecture jusqu'à '\n' ou EOF)
    fgets(str, sizeof(str), stdin);

    // Parcours de la chaîne caractère par caractère
    while (str[i] != '\0') {
        char c = str[i];

        // Ignore le saut de ligne final éventuel
        if (c == '\n') {
            i++;
            continue;
        }

        // Vérifie si le caractère est une lettre (majuscule ou minuscule)
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            // Convertit les majuscules en minuscules (manuellement)
            char lower = (c >= 'A' && c <= 'Z') ? c + 32 : c;

            // Vérifie si c'est une voyelle
            if (lower == 'a' || lower == 'e' || lower == 'i' ||
                lower == 'o' || lower == 'u' || lower == 'y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }
        i++;
    }

    // Affichage des résultats
    printf("Voyelles : %d\nConsonnes : %d\n", voyelles, consonnes);
    return 0;
}
