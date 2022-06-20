#include <stdio.h>
#include <stdlib.h>
#include "chaines.h"
#include "listes.h"

int main(){
    // exercice 1
    // char *string = "Salut";
    // int lengthString = 0;
    // lengthString = length(string);
    // printf("La longueur de la chaîne '%s' est %d", string, lengthString);

    // exercice 2
    // char *stringCopied = malloc(100*sizeof(char)); // alloue une zone de mémoire
    // char *stringToCopy = "Je m'appelle Margaux";
    // copyString(stringToCopy, stringCopied);
    // int countOfE = numberOfE(stringCopied);
    // printf("La chaîne '%s' contient %d 'e' !\n", stringCopied, countOfE);
    // modifyCharacter(stringCopied, 'o', 14);
    // printf("%s", stringCopied);

    // exercice 3
    int *list = create_list();
    printf("La liste de départ est :\n");
    print_list(list);
    int *newList = insert(list, 4);
    printf("La nouvelle liste est :\n");
    print_list(newList);
    newList = append(newList, 3);
    newList = append(newList, 5);
    newList = insert(newList, 10);
    printf("La nouvelle liste est :\n");
    print_list(newList);

    return 0;
}