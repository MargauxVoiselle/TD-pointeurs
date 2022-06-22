#include <stdio.h>
#include <stdlib.h>
#include "chaines.h"
#include "listes.h"
#include "structures.h"

int main()
{
    /*
    // exercice sur les chaines
    char *string = "Salut";
    int lengthString = 0;
    lengthString = length(string);
    printf("La longueur de la chaîne '%s' est %d", string, lengthString);

    char *stringCopied = malloc(100*sizeof(char)); // alloue une zone de mémoire
    char *stringToCopy = "Je m'appelle Margaux";
    copyString(stringToCopy, stringCopied);
    int countOfE = numberOfE(stringCopied);
    printf("La chaîne '%s' contient %d 'e' !\n", stringCopied, countOfE);
    modifyCharacter(stringCopied, 'o', 14);
    printf("%s", stringCopied);
    */

    /*
    // exercice sur les listes première version
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
    int length = len(newList);
    printf("La longueur de la liste est %d\n", length);
    int element = get(newList, 2);
    printf("Le deuxième élément de la liste est %d\n", element);
    int* otherList = slice(newList, 2, 4);
    print_list(otherList);
    int *list = range(1, 10);
    print_list(list);
    */

    /*
    // exercice sur les listes seconde version
    int *list = create_list();
    print_list(list);
    int capacity = get_capacity(list);
    printf("La capacité de la liste est %d\n", capacity);
    int length = len(list);
    printf("La liste contient %d éléments\n", length);
    print_list(list);

    int *newList = insert(list, 3);
    newList = append(newList, 4);
    print_list(newList);
    newList = append(newList, 4);
    newList = append(newList, 4);
    newList = append(newList, 4);
    newList = append(newList, 4);
    newList = append(newList, 4);
    newList = append(newList, 4);
    print_list(newList);
    newList = slice(newList, 1, 3);
    print_list(newList);

    int element = get(newList, 2);
    printf("%d", element);
    int* list = range(1, 10);
    print_list(list);
    */

    // exercice sur les structures
    Date *anniversaire_papa = create_date(3, 10, 1970);
    print_date(anniversaire_papa);
    Date *anniversaire_moi = create_date(31, 1, 2002);
    print_date(anniversaire_moi);

    return 0;
}
