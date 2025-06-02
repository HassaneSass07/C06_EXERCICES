#include <stdio.h>

#define MAX_LENGTH 999
#define SPACE_CHAR ' '
#define TAB_CHAR '\t'
#define MIN_CHAR 0
#define MAX_CHAR 127

// Fonction stricte pour identifier les espaces (espace et tabulation)
int is_space_char(char c) {
    return (c == SPACE_CHAR || c == TAB_CHAR);
}

int main() {
    char input[MAX_LENGTH + 1];
    char output[MAX_LENGTH + 1];
    int input_index = 0;
    int output_index = 0;
    int input_length = 0;
    
    // Initialisation stricte des tableaux
    for (int i = 0; i <= MAX_LENGTH; i++) {
        input[i] = '\0';
        output[i] = '\0';
    }
    
    printf("Entrez une chaîne de caractères (max %d caractères) : ", MAX_LENGTH);
    
    // Lecture sécurisée avec validation ASCII
    input_index = 0;
    while (input_index < MAX_LENGTH) {
        int c = getchar();
        if (c == '\n' || c == EOF) {
            break;
        }
        
        // Validation stricte du caractère
        if (c < MIN_CHAR || c > MAX_CHAR) {
            printf("Erreur : caractère non-ASCII à la position %d\n", input_index);
            return 1;
        }
        
        input[input_index] = (char)c;
        input_index++;
    }
    input[input_index] = '\0';
    
    // Validation de la saisie
    if (input[0] == '\0') {
        printf("Erreur : chaîne vide\n");
        return 1;
    }
    
    // Calcul strict de la longueur d'entrée
    input_length = 0;
    while (input[input_length] != '\0' && input_length <= MAX_LENGTH) {
        input_length++;
    }
    
    // Validation de la longueur
    if (input_length == 0 || input_length > MAX_LENGTH) {
        printf("Erreur : longueur d'entrée invalide (%d)\n", input_length);
        return 1;
    }
    
    // Filtrage strict avec double validation des indices
    input_index = 0;
    output_index = 0;
    
    while (input_index < input_length && input[input_index] != '\0') {
        // Validation des bornes d'entrée
        if (input_index < 0 || input_index > MAX_LENGTH) {
            printf("Erreur : débordement d'index d'entrée\n");
            return 1;
        }
        
        char current_char = input[input_index];
        
        // Validation du caractère courant
        if (current_char < MIN_CHAR || current_char > MAX_CHAR) {
            printf("Erreur : caractère invalide détecté\n");
            return 1;
        }
        
        // Filtrage : copier seulement si ce n'est pas un espace
        if (!is_space_char(current_char)) {
            // Validation des bornes de sortie
            if (output_index < 0 || output_index >= MAX_LENGTH) {
                printf("Erreur : débordement d'index de sortie\n");
                return 1;
            }
            
            output[output_index] = current_char;
            output_index++;
        }
        
        input_index++;
    }
    
    // Terminaison stricte de la chaîne de sortie
    if (output_index >= 0 && output_index <= MAX_LENGTH) {
        output[output_index] = '\0';
    } else {
        printf("Erreur : index de terminaison invalide\n");
        return 1;
    }
    
    // Validation finale avant affichage
    if (output_index < 0) {
        printf("Erreur : résultat invalide\n");
        return 1;
    }
    
    // Affichage du résultat
    printf("%s\n", output);
    
    // Information de debug sur la compression
    int spaces_removed = input_length - output_index;
    if (spaces_removed > 0) {
        printf("Debug : %d espace(s) supprimé(s)\n", spaces_removed);
    }
    
    return 0;
}