#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int voyelles = 0;
    int consonnes = 0;

    // Lecture sans prompt et avec scanf 
    scanf(" %[^\n]", str);

    // Traitement caractère par caractère
    while (str[i] != '\0') {
        char c = str[i];

        // Vérifie si c'est une lettre (minuscule)
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

    // Affichage final sans ligne vide en plus
    printf("Voyelles : %d\nConsonnes : %d\n", voyelles, consonnes);

    return 0;
}
