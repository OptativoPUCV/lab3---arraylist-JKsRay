#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "arraylist.h"

//normal array
typedef struct ArrayList {
    void **data;
    int capacity;
    int size;
} ArrayList;

ArrayList *createList(void) {
  Arraylist *nuevaLista = (Arraylist*) malloc(sizeof(Arraylist));
  if(nuevaLista == NULL) EXIT_FAILURE;

  nuevaLista->capacity = 2;
  nuevaLista->size = 0;
  nuevaLista->data = (void*) malloc(sizeof(void));
  
    return nuevaLista;
}

void append(ArrayList * l, void * data){

}

void push(ArrayList * l, void * data, int i){

}

void* pop(ArrayList * l, int i){
    return NULL;
}

void* get(ArrayList * l, int i){
    return NULL;
}

int get_size(ArrayList * l){
    return l->size;
}

//remove elements
void clean(ArrayList * l){
    
}