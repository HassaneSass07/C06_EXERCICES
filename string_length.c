#include <stdio.h>

int main() {
    char str[100];
    int len = 0;

    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin); // Lecture de la chaîne

    // Comptage des caractères jusqu'au '\0' ou '\n'
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    printf("Longueur de la chaîne : %d\n", len);
    return 0;
}
