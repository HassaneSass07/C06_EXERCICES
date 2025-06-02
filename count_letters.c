#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    int voyelles = 0;
    int consonnes = 0;

    // Demander à l'utilisateur de saisir une chaîne de caractères
    printf("Entrez une chaîne : ");

    // Lire toute la ligne (avec espaces)
    fgets(str, sizeof(str), stdin); 

    // Parcourir la chaîne caractère par caractère
    while (str[i] != '\0' && str[i] != '\n') {
        char c = str[i];

        // Vérifier si c'est une lettre alphabétique
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {

            // Convertir en minuscule sans utiliser tolower
            if (c >= 'A' && c <= 'Z') {
                c = c + 32;
            }

            // Vérifier si c'est une voyelle
            if (c == 'a' || c == 'e' || c == 'i' ||
                c == 'o' || c == 'u' || c == 'y') {
                voyelles++;
            } else {
                consonnes++;
            }
        }

        i++;
    }

    // Afficher le résultat
    printf(" : %d, %d\n", voyelles, consonnes);
    
    return 0;
}