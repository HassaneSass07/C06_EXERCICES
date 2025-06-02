// Exo2: count_letters.c
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int voyelles = 0;
    int consonnes = 0;

    // Demande à l'utilisateur une chaîne de caractères
    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin); // Lecture de toute la ligne

    // Parcours de la chaîne caractère par caractère
    while (str[i] != '\0' && str[i] != '\n') {
        char c = str[i];

        // Vérifie si le caractère est une lettre alphabétique
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {

            // Convertir en minuscule manuellement si besoin
            if (c >= 'A' && c <= 'Z') {
                c = c + 32;
            }

            // Vérifie si le caractère est une voyelle
            if (c == 'a' || c == 'e' || c == 'i' ||
                c == 'o' || c == 'u' || c == 'y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }
        i++;
    }

    // Affiche le nombre de voyelles et de consonnes
    printf("Voyelles : %d\nConsonnes : %d\n", voyelles, consonnes);
    return 0;
}
