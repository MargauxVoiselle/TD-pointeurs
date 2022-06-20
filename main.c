#include <stdio.h>
#include "module.h"

int main(){
    char *string = "Salut";
    int lengthString = 0;
    lengthString = length(string);
    printf("La longueur de la chaîne %s est %d", string, lengthString);

    return 0;
}