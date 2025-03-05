#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "Nodo.h"

Nodo *crear_nodo(){
    Nodo *nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo -> sig = NULL;
    nuevo -> dato = 0;
    return nuevo;
}

bool borrarNodo(Nodo *n){
    if(n -> sig == NULL){
        free(n);
        return true;
    }
    return false;
}

Nodo *asignarDato(Nodo *n, DATO d){
    if(n != NULL){
        n -> dato = d;
    }
    return n;
}

DATO obtenerDato(Nodo *n){
    if(n != NULL){
        return -1;
    }
    return n -> dato;
}

Nodo *asignarRef(Nodo *n, Nodo *m){
    if(n != NULL){
        n -> sig = m;
    }
    return n;
}

Nodo *obtenerRef(Nodo *n){
    if(n != NULL){
        return n -> sig;
    }
    return NULL;
}
