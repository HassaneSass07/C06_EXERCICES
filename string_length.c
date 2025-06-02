#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    // Lecture de la chaîne
    scanf("%[^\n]", str);

    // Calcul manuel de la longueur
    while (str[len] != '\0') {
        len++;
    }

    // Affiche la longueur
    printf("Longueur de la chaîne : %d\n", len);
    return 0;
}
