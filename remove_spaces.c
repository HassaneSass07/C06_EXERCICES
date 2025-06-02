#include <stdio.h>

int main() {
    char str[100], new_str[100];
    int i = 0, j = 0;

    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin);

    // Supprime les espaces
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            new_str[j++] = str[i];
        }
        i++;
    }

    new_str[j] = '\0'; // Fin de chaîne
    printf("%s\n", new_str);
    return 0;
}
