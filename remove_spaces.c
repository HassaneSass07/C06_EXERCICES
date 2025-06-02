#include <stdio.h>

int main() {
    char input[1000];     // Tableau pour stocker la chaîne saisie
    char output[1000];    // Tableau pour stocker la chaîne sans espaces
    int i = 0;            // Index pour parcourir la chaîne d'entrée
    int j = 0;            // Index pour construire la chaîne de sortie
    
    // Demande de saisie à l'utilisateur
    printf("Entrez une chaîne de caractères : ");
    
    // Lecture de la ligne complète (avec espaces)
    getchar(); // Consommer le '\n' laissé par un scanf précédent si nécessaire
    fgets(input, sizeof(input), stdin);
    
    // Parcours de chaque caractère de la chaîne d'entrée
    while (input[i] != '\0' && input[i] != '\n') {
        // Si le caractère n'est pas un espace, on le copie
        if (input[i] != ' ') {
            output[j] = input[i];
            j++; // On avance dans la chaîne de sortie
        }
        // Si c'est un espace, on l'ignore (on ne l'ajoute pas à output)
        
        i++; // On avance dans la chaîne d'entrée
    }
    
    // Ajout du caractère de fin de chaîne
    output[j] = '\0';
    
    // Affichage du résultat
    printf("%s\n", output);
    
    return 0;
}