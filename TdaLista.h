#ifndef TDALISTA_H_INCLUDED
#define TDALISTA_H_INCLUDED
#include "FuncionesVarias.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

// Interfaz de TDA Lista

 // Estructura que define al tipo

 typedef struct Lista {

  PtrDato lista;

} lista;

// Typedef de puntero al tipo de dato

typedef lista *PtrLista;

// Primitivas

 // Operación de creación (Constructor)

// Precondición: la lista no ha sido creada

 // Postcondición: se crea una lista vacía para hacer uso

 // Parámetros:

// ninguno

// Devuelve puntero con la lista creada

PtrLista crearLista();



 // Operación de destrucción (destructor)

// Precondición: la lista debe haber sido creada

// Postcondición: obtiene memora de lista

// Parámetros:

// lista: puntero de la lista a destruir

// destruir: indica si están o no los nodos

// Devuelve: ListaDestruida

PtrLista destruirLista(PtrLista lista);



 // Operación de insertar datos en una lista

// Precondición: la lista debe haber sido creada

// Postcondición: se inserta los datos en la lista

// Parámetros:

// lista: puntero a la lista

// info: puntero al insertar info

// Devuelve true si pudo insertar info sino da false

void EditarLista(PtrLista,  int posicion);



// Operación de obtención de lista

// Precondición: la lista debe haberse creado

// Postcondición:  se obtiene la lista

// Parámetros:

// lista: puntero a la lista

// Devuelve puntero de la lista

PtrLista TraerLista(PtrLista lista);

#endif // TDALISTA_H_INCLUDED
