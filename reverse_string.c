#include <stdio.h>

int main() {
    char str[100];
    int i = 0, len = 0;

    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin); // Lecture de la chaîne saisie par l'utilisateur

    // Calcul de la longueur sans inclure le saut de ligne '\n'
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Affichage des caractères en ordre inverse
    printf("Chaîne inversée : ");
    for (i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
    return 0;
}
