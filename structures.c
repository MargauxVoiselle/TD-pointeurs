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

Person *create_person(char* surname, char* name, Date* birthdate){
    Person *personne = malloc(sizeof(Person));
    personne->prenom = surname;
    personne->nom = name;
    personne->dateDeNaissance = birthdate;
    return personne;
}

void print_person(Person *personne){
    printf("Prénom : %s\nNom : %s\nDate de naissance : ", personne->prenom, personne->nom);
    print_date(personne->dateDeNaissance);
}

void compare(Date* firstDate, Date* secondDate){
    if ((firstDate->annee == secondDate->annee) && (firstDate->mois == secondDate->mois) && (firstDate->jour == secondDate->jour)){
        printf("Les deux dates sont égales !\n");
    }
    else{
        printf("Les deux dates sont différentes !\n");
    }
}

Date* duplicate_date(Date* date){
    Date* newDate = malloc(sizeof(Date));
    newDate->jour = date->jour;
    newDate->mois = date->mois;
    newDate->annee = date->annee;
    return newDate;
}

Person* duplicate_person(Person* personne){
    Person* newPerson = malloc(sizeof(Person));
    newPerson->prenom = personne->prenom;
    newPerson->nom = personne->nom;
    newPerson->dateDeNaissance = personne->dateDeNaissance;
    return newPerson;
}

List* create_list_struct(){
    List *list = malloc(sizeof(List));
    list->element = 0;
    list->next = NULL;
    return list;
}

List *insert_struct(Date *date, List *list){
    List *newList = malloc(sizeof(List));
    newList->element = date;
    newList->next = list;
    return newList;
}

void print_list_struct(List *list){
    while(list->next != NULL){
        print_date(list->element);
        list = list->next;
    }
}