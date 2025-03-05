#ifndef __NODO_H__
#define __NODO_H__

#include <stdbool.h>

typedef int DATO;
typedef struct _Nodo Nodo;
struct _Nodo{
   DATO dato;
    Nodo* sig;
};

Nodo *crear_nodo();
bool borrarNodo(Nodo*);
Nodo *asignarDato(Nodo*, DATO);
DATO obtenerDato(Nodo*);
Nodo *asignarRef(Nodo*, Nodo*);
Nodo *obtenerRef(Nodo*);

#endif