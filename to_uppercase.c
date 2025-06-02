#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Entrez une chaîne : ");
    fgets(str, sizeof(str), stdin);

    // Conversion en majuscules
    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
        }
        i++;
    }

    printf("%s", str);
    return 0;
}
