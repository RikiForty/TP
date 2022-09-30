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

 // Operaci�n de creaci�n (Constructor)

// Precondici�n: la lista no ha sido creada

 // Postcondici�n: se crea una lista vac�a para hacer uso

 // Par�metros:

// ninguno

// Devuelve puntero con la lista creada

PtrLista crearLista();



 // Operaci�n de destrucci�n (destructor)

// Precondici�n: la lista debe haber sido creada

// Postcondici�n: obtiene memora de lista

// Par�metros:

// lista: puntero de la lista a destruir

// destruir: indica si est�n o no los nodos

// Devuelve: ListaDestruida

PtrLista destruirLista(PtrLista lista);



 // Operaci�n de insertar datos en una lista

// Precondici�n: la lista debe haber sido creada

// Postcondici�n: se inserta los datos en la lista

// Par�metros:

// lista: puntero a la lista

// info: puntero al insertar info

// Devuelve true si pudo insertar info sino da false

void EditarLista(PtrLista,  int posicion);



// Operaci�n de obtenci�n de lista

// Precondici�n: la lista debe haberse creado

// Postcondici�n:  se obtiene la lista

// Par�metros:

// lista: puntero a la lista

// Devuelve puntero de la lista

PtrLista TraerLista(PtrLista lista);

#endif // TDALISTA_H_INCLUDED
