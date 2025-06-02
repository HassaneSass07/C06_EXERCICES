#include <stdio.h>

int main() {
    char input[1000];   // Tableau pour stocker la chaîne saisie
    int length = 0;     // Compteur pour la longueur
    
    // Demande de saisie à l'utilisateur
    printf("Entrez une chaîne de caractères : ");
    scanf("%s", input);
    
    // Calcul de la longueur en parcourant caractère par caractère
    // On compte jusqu'à rencontrer le caractère de fin de chaîne '\0'
    while (input[length] != '\0') {
        length++;
    }
    
    // Affichage du résultat
    printf("Longueur de la chaîne : %d\n", length);
    
    return 0;
}