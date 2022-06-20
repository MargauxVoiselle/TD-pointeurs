#include <stdio.h>
#include <stdlib.h>
#include "module.h"

int main(){
    // exercice 1
    // char *string = "Salut";
    // int lengthString = 0;
    // lengthString = length(string);
    // printf("La longueur de la chaîne %s est %d", string, lengthString);

    // exercice 2
    char *stringCopied = malloc(100*sizeof(char)); // alloue une zone de mémoire
    char *stringToCopy = "Je m'appelle Margaux";
    copyString(stringToCopy, stringCopied);
    printf("%s", stringCopied);

    return 0;
}