#include <stdio.h>

int main() {
    char input[1000];    // Tableau pour stocker la chaîne saisie
    char reversed[1000]; // Tableau pour stocker la chaîne inversée
    int length = 0;      // Variable pour calculer la longueur
    int i;               // Variable de boucle
    
    // Demande de saisie à l'utilisateur
    printf("Entrez une chaîne de caractères : ");
    scanf("%s", input);
    
    // Calcul de la longueur de la chaîne (sans strlen)
    while (input[length] != '\0') {
        length++;
    }
    
    // Inversion de la chaîne
    // On parcourt la chaîne de la fin vers le début
    for (i = 0; i < length; i++) {
        reversed[i] = input[length - 1 - i];
    }
    
    // Ajout du caractère de fin de chaîne
    reversed[length] = '\0';
    
    // Affichage du résultat
    printf("Chaîne inversée : %s\n", reversed);
    
    return 0;
}