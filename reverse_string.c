#include <stdio.h>

int main() {
    char str[100];
    int i = 0, len = 0;

    // Demande à l'utilisateur une chaîne de caractères
    scanf("%[^\n]", str); // Lecture jusqu'au saut de ligne

    // Calcul de la longueur de la chaîne
    while (str[len] != '\0') {
        len++;
    }

    // Affichage de la chaîne inversée
    printf("Chaîne inversée : ");
    for (i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
    return 0; 
}