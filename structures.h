#ifndef STRUCTURES_H
#define STRUCTURES_H

typedef struct _Date{
    int jour;
    int mois;
    int annee;
} Date;

Date* create_date(int day, int month, int year);
void print_date(Date *date);

typedef struct _Person{
    char* prenom;
    char* nom;
    Date* dateDeNaissance;
} Person;

Person *create_person(char* surname, char* name, Date* birthdate);
void print_person(Person *personne);

void compare(Date* firstDate, Date* secondDate);
Date* duplicate_date(Date* date);
Person* duplicate_person(Person* personne);

typedef struct _List{
    Date* element;
    struct _List* next;
} List;

List* create_list_struct();
List* insert_struct(Date *date, List *list);
void print_list_struct(List *list);

#endif