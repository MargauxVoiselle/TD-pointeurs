/*
 * Première description de liste (longueur de la liste contenue dans
 *la première case)
 */

// int* create_list();
// void print_list(int* list);
// int* insert(int* list, int element);
// int* append(int* list, int element);
// int len(int* list);
// int get(int* list, int index);
// int* slice(int* list, int lower, int upper);
// int* range(int lower, int upper);

/* 
 * Deuxième description de liste (capacité de la liste dans les 16 bits
 * à droite et longueur de la liste dans les 16 bits à gauche
 */

int* create_list();
int get_capacity(int *list);
int len(int *list);
void print_list(int *list);
int* insert(int* list, int element);
int* append(int* list, int element);
int get(int* list, int index);
int* slice(int* list, int lower, int upper);
int* range(int lower, int upper);