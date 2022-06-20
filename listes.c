#include <stdio.h>
#include <stdlib.h>
#include "listes.h"
#define N 100

// créé une liste vide
int* create_list(){
    int* list = malloc(N*sizeof(int));
    *list = 0;
    return list;
}

// affiche les éléments d'une liste
void print_list(int* list){
    int i = 0;
    while (i <= *list){
        printf("tab[%d] = %d\n", i, *(list + i));
        i++;
    }
}

// insère un élément en tête de liste
int* insert(int* list, int element){
    int* newList = malloc(N*sizeof(int));
    *newList = *list + 1; // on incrémente la première case du tableau qui contient la taille
    *(newList + 1) = element; // on insère l'élément en première position
    for (int i = 1 ; i <= *list ; i++){ // on rajoute le reste de la liste
        *(newList + 1 + i) = *(list + i);
    }
    return newList;
}

// insère un élément en queue de liste
int* append(int* list, int element){
    int* newList = malloc(N*sizeof(int));
    *newList = *list + 1; // on incrémente la première case du tableau qui contient la taille
    for (int i = 1 ; i <= *list ; i++){ // on rajoute la liste initiale
        *(newList + i) = *(list + i);
    }
    *(newList + *newList) = element; // on insère l'élément en dernière position
    return newList;
}