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


// Operación de creación
// Precondicion: Paquete no fue creado
// Postcondición: se crea paquete y sus datos
// Parámetros:
// elemento: puntero a char
// id: entero
// Devuelve puntero a la estructura paquete en memoria dinámica
PaquetePtr crearPaquete(char* elemento, int id);


// Operación de destrucción (Destructor)
// Precondicion: paquete debe haberse creado con crearPaquete
// Postcondición: se destruye Paquete y se libera la memoria que ocupaba
// Parámetros:
// datos(elemento,id):  TDAPaquete a destruir
// Devuelve NULL
PaquetePtr destruirPaquete(PaquetePtr pp);


// Operación de obtención del elemento
// Precondicion: Paquete debe haberse creado
// Postcondición: se obtiene el elemento del paquete
// Parámetros:
// elemento: TDAPaquete del que se obtiene el elemento
// Devuelve un char* con el elemento
int getPaquete(PaquetePtr pp);


// Operación de obtención del id
// Precondicion: paquete debe haberse creado
// Postcondición: se obtiene el id del paquete
// Parámetros:
// id: TDAPaquete del que es obtiene el id
// Devuelve un entero con el id
int getId(PaquetePtr pp);


// Función de obtención de memoria
// Precondicion: Ninguna
// Postcondición: se reserva la memoria solicitada
// o se detiene el programa con un mensaje de error si no se pudo
// Parámetros:
// tamanio: tamaño de la memoria a reservar en size_t
// devuelve void* apuntando a la memoria reservada
void* obtenerMemoria(size_t tamano);




// Operación de asignación del paquete
// Precondicion: Paquete debe haberse creado
// Postcondición: Paquete cambia con el nuevo valor de elemento
// Parámetros:
// paquete: TDAPaquete al que se asignara el nuevo valor de elemento
// elemento: char* representando el nuevo valor del elemento del paquete
// No devuelve valor.
int setElemento(PaquetePtr pp);


// Operación de asignación  del id
// Precondicion: paquete debe haberse creado
// Postcondición: paquete cambia con el nuevo valor del id
// Parámetros:
// paquete: TDAPaquete al que se asignara el nuevo valor del id
// id: entero representando el nuevo valor del id del paquete
// No devuelve valor.
int setId(PaquetePtr pp);

#endif // TDAPAQUETE_H_INCLUDED
