#ifndef TDACLIENTE_H_INCLUDED
#define TDACLIENTE_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
#include "TdaChofer.h"

//TDAs Cliente


//Estructura que define Cliente
typedef struct Cliente{
char* apellido;
char* nombre;
int domicilio;
int cuil;
}Cliente;


//typedef de puntero al tipo de dato
typedef Cliente* ClientePtr;


//------------------------------------------------




// Primitivas - Cliente


// Operaci�n de creaci�n
// Precondicion: Cliente no fue creado
// Postcondici�n: se crea cliente y sus datos
// Par�metros:
// nombre: puntero a char
// apellido: puntero a char
// domicilio entero
//cuil: entero
// Devuelve puntero a la estructura cliente en memoria din�mica
ClientePtr crearCliente(char* nombre, char* apellido, int domicilio, int cuil);


// Operaci�n de destrucci�n (Destructor)
// Precondicion: cliente debe haberse creado con crearCliente
// Postcondici�n: se destruye cliente y se libera la memoria que ocupaba
// Par�metros:
// datos(nombre,apellido,domicilio,cuil):  TDACliente a destruir
// Devuelve NULL
ClientePtr destruirCliente(ClientePtr clp);


// Operaci�n de obtenci�n del nombre
// Precondicion: Cliente debe haberse creado
// Postcondici�n: se obtiene el nombre del cliente
// Par�metros:
// nombre: TDACliente del que es obtiene el nombre
// Devuelve un char* con el nombre
int getNombre(ChoferPtr Chofer);


// Operaci�n de obtenci�n del apellido
// Precondicion: chofer debe haberse creado
// Postcondici�n: se obtiene el apellido del chofer
// Par�metros:
// apellido: TDAChofer del que es obtiene el apellido
// Devuelve un char* con el apellido
char getApellidoCliente(ClientePtr Cliente);


// Operaci�n de obtenci�n del domicilio
// Precondicion: cliente debe haberse creado
// Postcondici�n: se obtiene los datos del domicilio del cliente
// Par�metros:
// domicilio: TDACliente del que es obtiene el domicilio
// Devuelve un entero representando el cuil
void getDomicilioCliente(ClientePtr cl);


// Operaci�n de obtenci�n del cuil
// Precondicion: cliente debe haberse creado
// Postcondici�n: se obtiene el cuil del cliente
// Par�metros:
// cuil: TDACliente/TDACuil del que es obtiene el cuil
// Devuelve un entero representando el cuil
void getCuilCliente(ClientePtr cl);


// Funci�n de obtenci�n de memoria
// Precondicion: Ninguna
// Postcondici�n: se reserva la memoria solicitada
// o se detiene el programa con un mensaje de error si no se pudo
// Par�metros:
// tamanio: tama�o de la memoria a reservar en size_t
// devuelve void* apuntando a la memoria reservada
void* obtenerMemoria(size_t tamano);




// Operaci�n de asignaci�n del nombre
// Precondicion: cliente debe haberse creado
// Postcondici�n: cliente cambia con el nuevo valor de nombre
// Par�metros:
// Cliente: TDACliente al que se asignara el nuevo valor de nombre
// nombre: char* representando el nuevo valor del nombre del chofer
// No devuelve valor.
char setNombreCliente(ClientePtr cl);


// Operaci�n de asignaci�n  del apellido
// Precondicion: cliente debe haberse creado
// Postcondici�n: cliente cambia con el nuevo valor de apellido
// Par�metros:
// Cliente: TDACliente al que se asignara el nuevo valor de apellido
// apellido: char* representando el nuevo valor del apellido del chofer
// No devuelve valor.
char setApellidoCliente(ClientePtr cl);


// Operaci�n de asignaci�n del domicilio
// Precondicion: cliente debe haberse creado
// Postcondici�n: cliente cambia con el nuevo valor de domicilio
// Par�metros:
// cliente: TDACliente al que se asignara el nuevo valor del domicilio
// domicilio: char* representando el nuevo valor del domicilio
// No devuelve valor.
void setDomicilioCliente(ClientePtr cl);


// Operaci�n de asignaci�n del cuil
// Precondicion: cliente debe haberse creado
// Postcondici�n: cliente cambia con el nuevo valor de cuil
//par�metros:
// Cliente: TDACliente al que se asignara el nuevo valor del cuil
// cuil: entero representando el nuevo valor del cuil
// No devuelve valor.
void setCuilCliente(ClientePtr cl);


#endif // TDACLIENTE_H_INCLUDED
