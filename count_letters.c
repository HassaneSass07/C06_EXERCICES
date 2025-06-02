// Exo2: count_letters.c
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int voyelles = 0;
    int consonnes = 0;

    // Demander à l'utilisateur d'entrer une chaîne
    printf("Entrez une chaîne : ");

    // Lire la chaîne avec fgets (permet de lire les espaces)
    fgets(str, 100, stdin);

    // Parcourir chaque caractère de la chaîne
    while (str[i] != '\0') {
        char c = str[i];

        // Ignorer le caractère de saut de ligne '\n'
        if (c == '\n') {
            i++;
            continue;
        }

        // Vérifie si le caractère est une lettre alphabétique
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {

            // Convertir en minuscule sans utiliser tolower
            if (c >= 'A' && c <= 'Z') {
                c = c + 32;
            }

            // Vérifie si c'est une voyelle
            if (c == 'a' || c == 'e' || c == 'i' ||
                c == 'o' || c == 'u' || c == 'y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }

        i++;
    }

    // Afficher le nombre de voyelles et consonnes
    printf("Voyelles : %d\n", voyelles);
    printf("Consonnes : %d\n", consonnes);

    return 0;
}
