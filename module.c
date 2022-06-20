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

void copyString(char* stringToCopy, char* stringCopied){
    char stringCharacter = *stringToCopy;
    int count = 0;
    while (stringCharacter != '\0'){
        *(stringCopied + count) = stringCharacter;
        count++;
        stringCharacter = *(stringToCopy + count);
    }
}