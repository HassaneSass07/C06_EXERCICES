#include <stdio.h>

int main() {
    char input[1000];   // Tableau pour stocker la chaîne saisie
    int i = 0;          // Variable de boucle
    
    // Demande de saisie à l'utilisateur
    printf("Entrez une chaîne de caractères : ");
    
    // Lecture de la ligne complète (avec espaces)
    getchar(); // Consommer le '\n' laissé par un scanf précédent si nécessaire
    fgets(input, sizeof(input), stdin);
    
    // Parcours de chaque caractère de la chaîne
    while (input[i] != '\0' && input[i] != '\n') {
        // Vérification si le caractère est une minuscule
        if (input[i] >= 'a' && input[i] <= 'z') {
            // Conversion en majuscule
            // La différence entre 'a' et 'A' est de 32 en ASCII
            input[i] = input[i] - ('a' - 'A');
        }
        // Si c'est déjà une majuscule ou un autre caractère, on ne change rien
        
        i++;
    }
    
    // Affichage du résultat
    // On s'assure de ne pas afficher le '\n' de fgets
    i = 0;
    while (input[i] != '\0' && input[i] != '\n') {
        printf("%c", input[i]);
        i++;
    }
    printf("\n");
    
    return 0;
}