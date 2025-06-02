#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int voyelles = 0, consonnes = 0;

    // Lecture de la chaîne 
    scanf(" %[^\n]", str);

    // Parcours de la chaîne
    while (str[i] != '\0') {
        char c = str[i];

        // Convertir en minuscule manuellement
        if (c >= 'A' && c <= 'Z') {
            c = c + ('a' - 'A');
        }

        // Vérifie si c'est une lettre
        if (c >= 'a' && c <= 'z') {
            if (c == 'a' || c == 'e' || c == 'i' ||
                c == 'o' || c == 'u' || c == 'y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }
        i++;
    }

    // Affichage conforme
    printf("Voyelles : %d\nConsonnes : %d\n", voyelles, consonnes);
    return 0;
}
