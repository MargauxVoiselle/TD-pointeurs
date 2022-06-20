#include "module.h"

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