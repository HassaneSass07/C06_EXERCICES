#include <stdio.h>

int main() {
    char str[100];
    int i = 0, voyelles = 0, consonnes = 0;

    // Saisie de la chaîne (utilisation de fgets pour lire toute la ligne)
    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin);

    // Parcours caractère par caractère
    while (str[i] != '\0' && str[i] != '\n') { // on ignore le '\n' de fin de ligne
        char c = str[i];

        // Vérifie si le caractère est une lettre alphabétique
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            // Convertit en minuscule si c'est une majuscule (sans tolower)
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

    // Affiche le résultat
    printf("Voyelles : %d\nConsonnes : %d\n", voyelles, consonnes);
    return 0;
}
