#include <stdio.h>
//Exercice 1
//function qui calcule la somme d'un tableau
int sommeTableau(int tableau[], int taille) {
    int somme = 0;
    for (int i = 0; i < taille; i++) {
        somme += tableau[i];
    }
    return somme;
}

//Exercice 2
//function de recherche linaire d'un element dans un tableau qui donne la position de l'element dans le tableau
int rechercheLinaire(int tableau[], int taille, int element) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == element) {
            return i;
        }
    }
    return -1;
}

//Exercice 3
//function de echerche Binaire
int rechercheBinaire(int tableau[], int taille, int element) {
    int debut = 0;
    int fin = taille - 1;
    while (debut <= fin) {
        int milieu = debut + (fin - debut) / 2;
        if (tableau[milieu] == element) {
            return milieu;
        }
        if (tableau[milieu] < element) {
            debut = milieu + 1;
        } else {
            fin = milieu - 1;
        }
    }
    return -1;
}

//main + appel de la fonction
int main() {
    //Declaration du tableau de travaille + calcul de la taille automatiquement
    int tableau[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    //Exercice 1
    printf("La somme du tableau est : %d\n", sommeTableau(tableau, taille));

    //Exercice 2
    int element = 3;
    int position = rechercheLinaire(tableau, taille, element);
    if (position != -1) {
        printf("L'element %d a été trouvé à l'index %d\n", element, position);
    } else {
        printf("L'element %d n'a pas été trouvé dans le tableau\n", element);
    }

    //Exercice 3
    int element2 = 5;
    int position2 = rechercheBinaire(tableau, taille, element2);
    if (position2 != -1) {
        printf("L'element %d a été trouvé à l'index %d\n", element2, position2);
    } else {
        printf("L'element %d n'a pas été trouvé dans le tableau\n", element2);
    }




    return 0;
}
