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
  ArrayList *nuevaLista = (ArrayList*) malloc(sizeof(ArrayList));
  if(nuevaLista == NULL) EXIT_FAILURE;

  nuevaLista->capacity = 2;
  nuevaLista->size = 0;
  nuevaLista->data = (void*) malloc(sizeof(void));
  
    return nuevaLista;
}

void append(ArrayList * l, void * data){
  if(l->size == l->capacity)
  {
    l->capacity *= 2;
    l->data = (void*) realloc(l->data,l->capacity * sizeof(void));
  }

  l->data[l->size] = data;
  l->size++;
}

void push(ArrayList * l, void * data, int i){
  if(i > l->size) return;
  
  if(l->size == l->capacity)
  {
    l->capacity *= 2;
    l->data = (void*) realloc(l->data,l->capacity * sizeof(void));
  }
  
  for(int j = l->size;  )
  {
    
  }

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
