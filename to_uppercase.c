#include <stdio.h>

#define MAX_LENGTH 999
#define MIN_CHAR 0
#define MAX_CHAR 127
#define LOWER_A 'a'
#define LOWER_Z 'z'
#define UPPER_A 'A'
#define UPPER_Z 'Z'
#define CASE_DIFF ('a' - 'A')  // Différence ASCII entre maj/min

// Fonction stricte de validation de caractère minuscule
int is_lowercase(char c) {
    return (c >= LOWER_A && c <= LOWER_Z);
}

// Fonction stricte de validation de caractère majuscule
int is_uppercase(char c) {
    return (c >= UPPER_A && c <= UPPER_Z);
}

// Fonction stricte de conversion en majuscule
char to_upper_strict(char c) {
    if (is_lowercase(c)) {
        char result = c - CASE_DIFF;
        // Double validation du résultat
        if (is_uppercase(result)) {
            return result;
        } else {
            return c;  // Retour au caractère original si conversion échoue
        }
    }
    return c;  // Retour inchangé si pas une minuscule
}

int main() {
    char input[MAX_LENGTH + 1];
    int length = 0;
    int i = 0;
    int conversions = 0;  // Compteur de conversions effectuées
    
    // Initialisation stricte du tableau
    for (i = 0; i <= MAX_LENGTH; i++) {
        input[i] = '\0';
    }
    
    printf("Entrez une chaîne de caractères (max %d caractères) : ", MAX_LENGTH);
    
    // Lecture sécurisée avec validation ASCII stricte
    i = 0;
    while (i < MAX_LENGTH) {
        int c = getchar();
        if (c == '\n' || c == EOF) {
            break;
        }
        
        // Validation stricte du caractère ASCII
        if (c < MIN_CHAR || c > MAX_CHAR) {
            printf("Erreur : caractère non-ASCII (code %d) à la position %d\n", c, i);
            return 1;
        }
        
        input[i] = (char)c;
        i++;
    }
    input[i] = '\0';
    
    // Validation de la saisie
    if (input[0] == '\0') {
        printf("Erreur : chaîne vide\n");
        return 1;
    }
    
    // Calcul strict de la longueur avec validation
    length = 0;
    while (input[length] != '\0' && length <= MAX_LENGTH) {
        length++;
    }
    
    if (length == 0 || length > MAX_LENGTH) {
        printf("Erreur : longueur invalide (%d)\n", length);
        return 1;
    }
    
    // Conversion stricte avec validation à chaque étape
    for (i = 0; i < length; i++) {
        // Validation de l'index
        if (i < 0 || i >= MAX_LENGTH + 1) {
            printf("Erreur : index hors limites (%d)\n", i);
            return 1;
        }
        
        char original = input[i];
        
        // Validation du caractère avant conversion
        if (original < MIN_CHAR || original > MAX_CHAR) {
            printf("Erreur : caractère invalide à la position %d\n", i);
            return 1;
        }
        
        // Conversion avec validation
        char converted = to_upper_strict(original);
        
        // Vérification que la conversion est valide
        if (is_lowercase(original) && !is_uppercase(converted)) {
            printf("Erreur : conversion échouée pour le caractère à la position %d\n", i);
            return 1;
        }
        
        // Application de la conversion
        if (original != converted) {
            conversions++;
        }
        input[i] = converted;
    }
    
    // Validation finale de la chaîne
    if (input[length] != '\0') {
        printf("Erreur : terminaison de chaîne corrompue\n");
        return 1;
    }
    
    // Affichage sécurisé caractère par caractère
    for (i = 0; i < length; i++) {
        if (input[i] < MIN_CHAR || input[i] > MAX_CHAR) {
            printf("Erreur : caractère corrompu lors de l'affichage\n");
            return 1;
        }
        printf("%c", input[i]);
    }
    printf("\n");
    
    // Information de debug sur les conversions
    if (conversions > 0) {
        printf("Debug : %d caractère(s) converti(s) en majuscule\n", conversions);
    } else {
        printf("Debug : aucune conversion nécessaire\n");
    }
    
    return 0;
}