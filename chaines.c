#include "chaines.h"

// donne la longueur d'une chaîne
int length(char* string){
    int stringLength = 0;
    while (*string){
        string = string + 1;
        stringLength++;
    }
    return stringLength;
}

// copie une chaîne dans un espace mémoire disponible
void copyString(char* stringToCopy, char* stringCopied){
    //char stringCharacter = *stringToCopy;
    int count = 0;
    while (*stringToCopy){
        *(stringCopied + count) = *stringToCopy;
        count++;
        stringToCopy = stringToCopy + 1;
    }
}

// compte le nombre de 'e' dans une chaîne
int numberOfE(char *string){
    int countOfE = 0, i = 0;
    while (*string){
        if (*string == 'e'){
            countOfE++;
        }
        string = string + 1;
    }
    return countOfE;
}

// modifie un caractère d'une chaîne selon la position donnée
void modifyCharacter(char *stringToModify, char newCharacter, int position){
    *(stringToModify + position) = newCharacter;
}
