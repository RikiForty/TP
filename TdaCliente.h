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


// Operación de creación
// Precondicion: Cliente no fue creado
// Postcondición: se crea cliente y sus datos
// Parámetros:
// nombre: puntero a char
// apellido: puntero a char
// domicilio entero
//cuil: entero
// Devuelve puntero a la estructura cliente en memoria dinámica
ClientePtr crearCliente(char* nombre, char* apellido, int domicilio, int cuil);


// Operación de destrucción (Destructor)
// Precondicion: cliente debe haberse creado con crearCliente
// Postcondición: se destruye cliente y se libera la memoria que ocupaba
// Parámetros:
// datos(nombre,apellido,domicilio,cuil):  TDACliente a destruir
// Devuelve NULL
ClientePtr destruirCliente(ClientePtr clp);


// Operación de obtención del nombre
// Precondicion: Cliente debe haberse creado
// Postcondición: se obtiene el nombre del cliente
// Parámetros:
// nombre: TDACliente del que es obtiene el nombre
// Devuelve un char* con el nombre
int getNombre(ChoferPtr Chofer);


// Operación de obtención del apellido
// Precondicion: chofer debe haberse creado
// Postcondición: se obtiene el apellido del chofer
// Parámetros:
// apellido: TDAChofer del que es obtiene el apellido
// Devuelve un char* con el apellido
char getApellidoCliente(ClientePtr Cliente);


// Operación de obtención del domicilio
// Precondicion: cliente debe haberse creado
// Postcondición: se obtiene los datos del domicilio del cliente
// Parámetros:
// domicilio: TDACliente del que es obtiene el domicilio
// Devuelve un entero representando el cuil
void getDomicilioCliente(ClientePtr cl);


// Operación de obtención del cuil
// Precondicion: cliente debe haberse creado
// Postcondición: se obtiene el cuil del cliente
// Parámetros:
// cuil: TDACliente/TDACuil del que es obtiene el cuil
// Devuelve un entero representando el cuil
void getCuilCliente(ClientePtr cl);


// Función de obtención de memoria
// Precondicion: Ninguna
// Postcondición: se reserva la memoria solicitada
// o se detiene el programa con un mensaje de error si no se pudo
// Parámetros:
// tamanio: tamaño de la memoria a reservar en size_t
// devuelve void* apuntando a la memoria reservada
void* obtenerMemoria(size_t tamano);




// Operación de asignación del nombre
// Precondicion: cliente debe haberse creado
// Postcondición: cliente cambia con el nuevo valor de nombre
// Parámetros:
// Cliente: TDACliente al que se asignara el nuevo valor de nombre
// nombre: char* representando el nuevo valor del nombre del chofer
// No devuelve valor.
char setNombreCliente(ClientePtr cl);


// Operación de asignación  del apellido
// Precondicion: cliente debe haberse creado
// Postcondición: cliente cambia con el nuevo valor de apellido
// Parámetros:
// Cliente: TDACliente al que se asignara el nuevo valor de apellido
// apellido: char* representando el nuevo valor del apellido del chofer
// No devuelve valor.
char setApellidoCliente(ClientePtr cl);


// Operación de asignación del domicilio
// Precondicion: cliente debe haberse creado
// Postcondición: cliente cambia con el nuevo valor de domicilio
// Parámetros:
// cliente: TDACliente al que se asignara el nuevo valor del domicilio
// domicilio: char* representando el nuevo valor del domicilio
// No devuelve valor.
void setDomicilioCliente(ClientePtr cl);


// Operación de asignación del cuil
// Precondicion: cliente debe haberse creado
// Postcondición: cliente cambia con el nuevo valor de cuil
//parámetros:
// Cliente: TDACliente al que se asignara el nuevo valor del cuil
// cuil: entero representando el nuevo valor del cuil
// No devuelve valor.
void setCuilCliente(ClientePtr cl);


#endif // TDACLIENTE_H_INCLUDED
