// Exo2: count_vc.c
#include <stdio.h>

int main() {
    char str[100];
    int i = 0, voyelles = 0, consonnes = 0;

    // Lecture de toute la ligne (l'espace avant %[^\n] est crucial)
    scanf(" %[^\n]", str);

    // Traitement caractère par caractère
    while (str[i] != '\0') {
        char c = str[i];

        // Convertir en minuscule manuellement si lettre majuscule
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        // Vérifie si c'est une lettre minuscule
        if (c >= 'a' && c <= 'z') {
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

    // Affichage sur une seule ligne, sans saut de ligne supplémentaire
    printf("Voyelles : %d, Consonnes : %d\n", voyelles, consonnes);

    return 0;
}
