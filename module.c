#include "module.h"

// donne la longueur d'une chaîne
int length(char* string){
    int stringLength = 1;
    char stringCharacter = *string;
    while (stringCharacter != '\0'){
        stringCharacter = *(string + stringLength);
        stringLength++;
    }
    stringLength--; // on retire le '\0'
    return stringLength;
}

// copie une chaîne dans un espace mémoire disponible
void copyString(char* stringToCopy, char* stringCopied){
    char stringCharacter = *stringToCopy;
    int count = 0;
    while (stringCharacter != '\0'){
        *(stringCopied + count) = stringCharacter;
        count++;
        stringCharacter = *(stringToCopy + count);
    }
}

// compte le nombre de 'e' dans une chaîne
int numberOfE(char *string){
    char stringCharacter = *string;
    int countOfE = 0, i = 0;
    while (stringCharacter != '\0'){
        if (stringCharacter == 'e'){
            countOfE++;
        }
        i++;
        stringCharacter = *(string + i);
    }
    return countOfE;
}