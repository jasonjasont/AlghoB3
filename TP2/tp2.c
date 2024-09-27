#include <stdio.h>

//Exercice 1
//Fonction récursive en C pour faire la somme de tous les éléments d’un tableau arr[] qui contient les éléments de type int.
int somme_recursive(int arr[], int taille) {
    
    if (taille == 0) {
        return 0;
    }
    
    
    return arr[0] + somme_recursive(arr + 1, taille - 1);
}

//Exercice 2
// Fonction récursive pour rechercher linéairement un élément dans un tableau
int recursive_LinearSearch(int arr[], int taille, int v, int index) {
    
    if (index >= taille) {
        return -1;  
    }
    
    // Si l'élément est trouvé à l'index actuel
    if (arr[index] == v) {
        return index;  
    }
    
    
    return recursive_LinearSearch(arr, taille, v, index + 1);
}

//Exercice 3
// Fonction récursive pour la recherche binaire
int recursive_BinarySearch(int arr[], int debut, int fin, int val) {
    
    if (debut > fin) {
        return -1;
    }
    
    int milieu = debut + (fin - debut) / 2;
    
    
    if (arr[milieu] == val) {
        return milieu;
    }
    
    // Si l'élément est plus petit que le milieu, chercher dans la moitié gauche
    if (arr[milieu] > val) {
        return recursive_BinarySearch(arr, debut, milieu - 1, val);
    }
    
    // Sinon, chercher dans la moitié droite
    return recursive_BinarySearch(arr, milieu + 1, fin, val);
}



//Main qui utilise la fonction somme_recursive
int main() {
    //Définition des données
    int tableau[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    
    //Exercice 1
    int resultat = somme_recursive(tableau, taille);
    
    printf("La somme des éléments du tableau est : %d\n", resultat);

    //Exercice 2
    int valeur_recherchee = 3;
    int resultat_recherche = recursive_LinearSearch(tableau, taille, valeur_recherchee, 0);
    
    if (resultat_recherche != -1) {
        printf("La valeur %d a été trouvée à l'index %d.\n", valeur_recherchee, resultat_recherche);
    } else {
        printf("La valeur %d n'a pas été trouvée dans le tableau.\n", valeur_recherchee);
    }

    //Exercice 3
    int valeur_recherchee_binaire = 4;
    int resultat_recherche_binaire = recursive_BinarySearch(tableau, 0, taille - 1, valeur_recherchee_binaire);
    
    if (resultat_recherche_binaire != -1) {
        printf("La valeur %d a été trouvée à l'index %d avec la recherche binaire.\n", valeur_recherchee_binaire, resultat_recherche_binaire);
    } else {
        printf("La valeur %d n'a pas été trouvée dans le tableau avec la recherche binaire.\n", valeur_recherchee_binaire);
    }

    
    return 0;
}


