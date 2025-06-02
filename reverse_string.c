#include <stdio.h>

int main() {
    char str[100];
    int i = 0, len = 0;

    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin);

    // Calcul de la longueur sans le caractère de fin de ligne
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    printf("Chaîne inversée : ");
    // Affiche la chaîne en sens inverse
    for (i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
    return 0;
}
