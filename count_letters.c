#include <stdio.h>

int main() {
    char input[1000];   // Tableau pour stocker la chaîne saisie
    int vowels = 0;     // Compteur de voyelles
    int consonants = 0; // Compteur de consonnes
    int i = 0;          // Variable de boucle
    char c;             // Variable pour stocker le caractère courant
    
    // Demande de saisie à l'utilisateur
    printf("Entrez une chaîne de caractères : ");
    
    // Lecture de la ligne complète (avec espaces)
    getchar(); // Consommer le '\n' laissé par un scanf précédent si nécessaire
    fgets(input, sizeof(input), stdin);
    
    // Parcours de chaque caractère de la chaîne
    while (input[i] != '\0' && input[i] != '\n') {
        c = input[i];
        
        // Vérification si c'est une lettre
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            // Conversion en minuscule pour simplifier la comparaison
            if (c >= 'A' && c <= 'Z') {
                c = c + ('a' - 'A'); // Conversion majuscule -> minuscule
            }
            
            // Vérification si c'est une voyelle
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        // Si ce n'est pas une lettre, on l'ignore (espaces, ponctuation, etc.)
        
        i++;
    }
    
    // Affichage des résultats
    printf("Voyelles : %d\n", vowels);
    printf("Consonnes : %d\n", consonants);
    
    return 0;
}