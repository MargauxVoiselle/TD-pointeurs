#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "listes.h"
#define N 100

/*
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

// retourne la longueur de la liste
int len(int* list){
    return *list;
}

// retourne l'élément de la liste à l'indice donné
int get(int* list, int index){
    assert (index <= *list); // vérification qu'on demande bien un élément de la liste
    return *(list + index);
}

// retourne une sous-liste de la liste donnée
int* slice(int* list, int lower, int upper){
    assert (upper <= *list);
    int* newList = malloc(N*sizeof(int));
    *newList = upper - lower + 1;
    for (int i = 0 ; i < *newList ; i++){
        *(newList + 1 + i) = *(list + lower + i);
    }
    return newList;
}

int* range(int lower, int upper){
    int *list = malloc(N*sizeof(int));
    *list = upper - lower + 1;
    for (int i = 0 ; i < *list ; i++){
        *(list + 1 + i) = lower + i;
    }
    return list;
}
*/

/*
 * Nouvelle stratégie pour faire des listes : première case contiendra
 * la capacité de la liste sur les 16 bits à gauche et la taille de la
 *liste sur les 16 bits à droite
*/

// créé une liste vide avec 8 cases en mémoire par défault
int* create_list(){
    int* list = malloc(8*sizeof(int));
    *list = (8 << 16) + 0; // 8 cases disponibles et 0 cases occupées
    return list;
}

// renvoie la capacité de la liste contenue dans les 16 bits à gauche de la première case
int get_capacity(int *list){
    int capacity = (*list&0xFFFF0000)>>16;
    return capacity;
}

// renvoie la longueur de la liste contenue dans les 16 bits à droite de la première case
int len(int *list){
    int len = (*list&0x0000FFFF);
    return len;
}

// affiche la liste donnée
void print_list(int *list){
    int length = len(list), capacity = get_capacity(list);
    printf("tab[0] = (capacité cases = %d et cases utilisées = %d)\n", capacity, length);
    for (int i = 1 ; i <= length ; i++){
        printf("tab[%d] = %d\n", i, *(list+i));
    }
}

// insère un élément en début de liste et retourne la liste
int* insert(int* list, int element){
    // Réallocation de la mémoire
    int length = len(list) + 1, capacity = get_capacity(list) * 2;
    int* newList = malloc(capacity*sizeof(int)); // on double la capacité

    // Écriture dans la liste
    *newList = (capacity << 16) + length; // on incrémente la taille de la liste
    *(newList + 1) = element; // on insère l'élément en première position
    for (int i = 1 ; i <= length ; i++){ // on rajoute le reste de la liste
        *(newList + 1 + i) = *(list + i);
    }
    return newList;
}

// insère un élément en queue de liste et retourne la liste
int* append(int* list, int element){
    // Réallocation de la mémoire
    int length = len(list) + 1, capacity = get_capacity(list) * 2;
    int* newList = malloc(capacity*sizeof(int)); // on double la capacité

    // Écriture dans la nouvelle liste
    *newList = (capacity << 16) + length; // on incrémente la taille de la liste
    for (int i = 1 ; i <= length ; i++){ // on rajoute la liste initiale
        *(newList + i) = *(list + i);
    }
    *(newList + length) = element; // on insère l'élément en dernière position
    return newList;
}

// retourne l'élément de la liste à l'indice donné
int get(int* list, int index){
    // Vérification qu'on ne tape pas hors de la liste
    int length = len(list);
    assert (index <= length);
    return *(list + index);
}

// retourne une sous-liste de la liste donnée
int* slice(int* list, int lower, int upper){
    // Vérification qu'on ne tape pas hors de la liste
    int length = len(list);
    assert (upper <= length);

    // Réallocation de la mémoire selon le nombre d'entiers qu'il reste
    int countOfIntDeleted = length - (upper - lower + 1);
    int capacity = get_capacity(list);
    int newCapacity = capacity;
    for (int i = 0 ; i < countOfIntDeleted ; i++){
        newCapacity = newCapacity / 2;
    }
    int* newList = malloc(newCapacity*sizeof(int));

    // Écriture dans la nouvelle liste
    length = upper - lower + 1;
    *newList = (newCapacity << 16) + length;
    for (int i = 0 ; i < length ; i++){
        *(newList + 1 + i) = *(list + lower + i);
    }
    return newList;
}