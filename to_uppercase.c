#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    // Saisie utilisateur
    scanf("%[^\n]", str);

    // Conversion des lettres minuscules en majuscules
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }

    // Affiche la chaîne convertie
    printf("%s\n", str);
    return 0;
}
