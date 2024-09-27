#include <stdio.h>


// Fonction pour fusionner deux sous-tableaux triés
void fusion(int arr[], int gauche, int milieu, int droite) {
    int i, j, k;
    int n1 = milieu - gauche + 1;
    int n2 = droite - milieu;

    // Création de tableaux temporaires
    int G[n1], D[n2];

    // Copie des données dans les tableaux temporaires G[] et D[]
    for (i = 0; i < n1; i++)
        G[i] = arr[gauche + i];
    for (j = 0; j < n2; j++)
        D[j] = arr[milieu + 1 + j];

    // Fusion des tableaux temporaires dans arr[gauche..droite]
    i = 0; 
    j = 0; 
    k = gauche; // Index initial du tableau fusionné

    // Comparaison et fusion des éléments
    while (i < n1 && j < n2) {
        if (G[i] <= D[j]) {
            arr[k] = G[i];
            i++;
        } else {
            arr[k] = D[j];
            j++;
        }
        k++;
    }

    // Copie des éléments restants de G[], s'il y en a
    while (i < n1) {
        arr[k] = G[i];
        i++;
        k++;
    }

    // Copie des éléments restants de D[], s'il y en a
    while (j < n2) {
        arr[k] = D[j];
        j++;
        k++;
    }
}

// Fonction principale de tri fusion qui trie le tableau et prépare les données 
void triFusion(int arr[], int gauche, int droite) {
    if (gauche < droite) {
        // Trouve le point milieu
        int milieu = gauche + (droite - gauche) / 2;

        // Trie la première et la deuxième moitié
        triFusion(arr, gauche, milieu);
        triFusion(arr, milieu + 1, droite);

        // Fusionne les moitiés triées
        fusion(arr, gauche, milieu, droite);
    }
}

// Fonction pour afficher un tableau
void afficherTableau(int arr[], int taille) {
    // Parcourt le tableau et affiche chaque élément
    for (int i = 0; i < taille; i++)
        printf("%d ", arr[i]);
    printf("\n");
}






int main() {
    //utilisation de la fonction de tri fusion
    int arr[] = {12, 11, 13, 5, 6, 7};
    int taille = sizeof(arr) / sizeof(arr[0]);

    printf("Tableau non trié : ");
    afficherTableau(arr, taille);

    triFusion(arr, 0, taille - 1);
    
    printf("Tableau trié : ");
    afficherTableau(arr, taille);
    
    return 0;
}