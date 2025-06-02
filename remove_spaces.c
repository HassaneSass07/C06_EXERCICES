#include <stdio.h>

int main() {
    char str[100], new_str[100];
    int i = 0, j = 0;

    // Lecture de la chaîne 
    scanf("%[^\n]", str); vvv

    // Suppression des espaces
    while (str[i] != '\0') {
        if (str[i] != ' ') {
            new_str[j++] = str[i];
        }
        i++;
    }
    new_str[j] = '\0';

    // Affiche la chaîne sans espaces
    printf("%s\n", new_str);
    return 0;
}