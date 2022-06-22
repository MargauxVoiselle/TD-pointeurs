#include "structures.h"
#include <stdio.h>
#include <stdlib.h>

Date *create_date(int day, int month, int year){
    Date *date = malloc(sizeof(Date));
    date->jour = day;
    date->mois = month;
    date->annee = year;
    return date;
}

void print_date(Date *date){
    printf("%d/%d/%d\n", date->jour, date->mois, date->annee);
}