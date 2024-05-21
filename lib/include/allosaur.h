#ifndef ALLOSAUR_H
#define ALLOSAUR_H

typedef struct array array;
typedef struct node node;
typedef struct list list;

list * alloc_list();
int free_list();
array * alloc_array();
int free_array();

#endif

