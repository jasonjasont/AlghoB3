# Documentation du fichier tp3.c

Ce fichier contient l'implémentation de l'algorithme de tri fusion (merge sort) en C.

## Fonctions principales

### `void fusion(int arr[], int gauche, int milieu, int droite)`

Cette fonction fusionne deux sous-tableaux triés en un seul tableau trié.



### `void triFusion(int arr[], int gauche, int droite)`

Fonction principale du tri fusion qui trie récursivement le tableau.



### `void afficherTableau(int arr[], int taille)`

Affiche les éléments d'un tableau.



### `int main()`

Fonction principale qui utilise le tri fusion pour trier un tableau et l'afficher.

## Fonctionnement de l'algorithme

1. Le tri fusion divise récursivement le tableau en deux moitiés.
2. Il trie chaque moitié séparément.
3. Il fusionne ensuite les deux moitiés triées pour obtenir le tableau final trié.




