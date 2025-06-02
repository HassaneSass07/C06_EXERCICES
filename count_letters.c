#include <stdio.h>

int main() {
    char str[100];
    int i = 0, voyelles = 0, consonnes = 0;

    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin); // Lecture de la chaîne

    while (str[i] != '\0' && str[i] != '\n') {
        char c = str[i];

        // Vérifie si le caractère est une lettre alphabétique
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            // Conversion en minuscule si besoin
            char lower = (c >= 'A' && c <= 'Z') ? c + 32 : c;

            // Test de voyelle
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u' || lower == 'y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }
        i++;
    }

    printf("Voyelles : %d\nConsonnes : %d\n", voyelles, consonnes);
    return 0;
}
