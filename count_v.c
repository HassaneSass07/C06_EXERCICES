#include <stdio.h>
int main(){
    int voyelle = 0;
    int consonne = 0;
    char c;
    scanf("%c", &c);
    while (c != '\n') {
        if (c >= 'a' && c <= 'z') {
            c = c - 32; // Convertit en majuscule
        }
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') {
            voyelle++;
        } else if ((c >= 'B' && c <= 'Z') && !(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y')) {
            consonne++;
        }
        scanf("%c", &c);
    }    

    
    printf("Voyelles : %d, Consonnes : %d",voyelle, consonne);

    return 0;
}