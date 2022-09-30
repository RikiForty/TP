#ifndef TDAPAQUETE_H_INCLUDED
#define TDAPAQUETE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
//TDA paquete


//estructura que define paquete
typedef struct Paquete{
char* elemento;
int id; }
Paquete;


//typedef de puntero al tipo de dato
typedef Paquete* PaquetePtr;


//------------------------------------------------


// Primitivas - Paquete


// Operaci�n de creaci�n
// Precondicion: Paquete no fue creado
// Postcondici�n: se crea paquete y sus datos
// Par�metros:
// elemento: puntero a char
// id: entero
// Devuelve puntero a la estructura paquete en memoria din�mica
PaquetePtr crearPaquete(char* elemento, int id);


// Operaci�n de destrucci�n (Destructor)
// Precondicion: paquete debe haberse creado con crearPaquete
// Postcondici�n: se destruye Paquete y se libera la memoria que ocupaba
// Par�metros:
// datos(elemento,id):  TDAPaquete a destruir
// Devuelve NULL
PaquetePtr destruirPaquete(PaquetePtr pp);


// Operaci�n de obtenci�n del elemento
// Precondicion: Paquete debe haberse creado
// Postcondici�n: se obtiene el elemento del paquete
// Par�metros:
// elemento: TDAPaquete del que se obtiene el elemento
// Devuelve un char* con el elemento
int getPaquete(PaquetePtr pp);


// Operaci�n de obtenci�n del id
// Precondicion: paquete debe haberse creado
// Postcondici�n: se obtiene el id del paquete
// Par�metros:
// id: TDAPaquete del que es obtiene el id
// Devuelve un entero con el id
int getId(PaquetePtr pp);


// Funci�n de obtenci�n de memoria
// Precondicion: Ninguna
// Postcondici�n: se reserva la memoria solicitada
// o se detiene el programa con un mensaje de error si no se pudo
// Par�metros:
// tamanio: tama�o de la memoria a reservar en size_t
// devuelve void* apuntando a la memoria reservada
void* obtenerMemoria(size_t tamano);




// Operaci�n de asignaci�n del paquete
// Precondicion: Paquete debe haberse creado
// Postcondici�n: Paquete cambia con el nuevo valor de elemento
// Par�metros:
// paquete: TDAPaquete al que se asignara el nuevo valor de elemento
// elemento: char* representando el nuevo valor del elemento del paquete
// No devuelve valor.
int setElemento(PaquetePtr pp);


// Operaci�n de asignaci�n  del id
// Precondicion: paquete debe haberse creado
// Postcondici�n: paquete cambia con el nuevo valor del id
// Par�metros:
// paquete: TDAPaquete al que se asignara el nuevo valor del id
// id: entero representando el nuevo valor del id del paquete
// No devuelve valor.
int setId(PaquetePtr pp);

#endif // TDAPAQUETE_H_INCLUDED
