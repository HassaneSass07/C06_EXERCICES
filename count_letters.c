// Exo2: count_letters.c
#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int voyelles = 0;
    int consonnes = 0;

    // Demande à l'utilisateur une chaîne de caractères
    printf("Entrez une chaîne : ");

    // Lecture sécurisée de la ligne complète
    fgets(str, sizeof(str), stdin);

    // Traitement caractère par caractère
    while (str[i] != '\0') {
        char c = str[i];

        // Si c'est une majuscule, la convertir en minuscule
        if (c >= 'A' && c <= 'Z') {
            c = c + ('a' - 'A');
        }

        // Vérifie si c'est une lettre minuscule
        if (c >= 'a' && c <= 'z') {
            // Si c'est une voyelle
            if (c == 'a' || c == 'e' || c == 'i' ||
                c == 'o' || c == 'u' || c == 'y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }
        i++;
    }

    // Affichage du résultat
    printf("Voyelles : %d\nConsonnes : %d\n", voyelles, consonnes);

    return 0;
}
