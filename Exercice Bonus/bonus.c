#include <stdio.h>

//Recherche de lettre dans un tableau de caractère
// Fonction récursive pour rechercher une lettre dans un tableau de caractères
int recherche_lettre(char tableau[], int taille, char lettre, int index, int occurrences[], int *nb_occurrences) {
    
    if (index >= taille) {
        return *nb_occurrences > 0 ? 0 : -1;
    }
    
    
    if (tableau[index] == lettre) {
        occurrences[*nb_occurrences] = index;
        (*nb_occurrences)++;
    }
    
    
    return recherche_lettre(tableau, taille, lettre, index + 1, occurrences, nb_occurrences);
}


int main() {
    //Définition des données
    char tableau[] = {'a', 'b', 'c', 'd', 'e', 'c'};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    //Exercice bonus recherche de lettre dans un tableau
    char lettre_recherchee = 'c';
    int occurrences[taille];
    int nb_occurrences = 0;
    
    int resultat = recherche_lettre(tableau, taille, lettre_recherchee, 0, occurrences, &nb_occurrences);
    
    if (resultat != -1) {
        printf("La lettre '%c' a été trouvée %d fois.\n", lettre_recherchee, nb_occurrences);
        printf("Indices : ");
        for (int i = 0; i < nb_occurrences; i++) {
            printf("%d ", occurrences[i]);
        }
        printf("\n");
    } else {
        printf("La lettre '%c' n'a pas été trouvée dans le tableau.\n", lettre_recherchee);
    }
    
    return 0;
}
