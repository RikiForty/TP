#ifndef TDACHOFER_H_INCLUDED
#define TDACHOFER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
//TDAs Chofer


//Estructura que define ch�fer
typedef struct Chofer{
char* apellido;
char* nombre;
int domicilio;
int cuil;
}Chofer;


//typedef de puntero al tipo de dato
typedef Chofer* ChoferPtr;



// Primitivas - chofer


// Operaci�n de creaci�n
// Precondicion: chofer no fue creado
// Postcondici�n: se crea ch�fer y sus datos
// Par�metros:
// nombre: puntero a char
// apellido: puntero a char
// domicilio entero
//cuil: entero
// Devuelve puntero a la estructura chofer en memoria din�mica
ChoferPtr crearChofer(char* nombre, char* apellido, int domicilio, int cuil);


// Operaci�n de destrucci�n (Destructor)
// Precondicion: chofer debe haberse creado con crearChofer
// Postcondici�n: se destruye chofer y se libera la memoria que ocupaba
// Par�metros:
// datos(nombre,apellido,domicilio,cuil):  TDAChofer a destruir
// Devuelve NULL
ChoferPtr destruirChofer(ChoferPtr cfp);


// Operaci�n de obtenci�n del nombre
// Precondicion: Chofer debe haberse creado
// Postcondici�n: se obtiene el nombre del chofer
// Par�metros:
// nombre: TDAChofer del que es obtiene el nombre
// Devuelve un char* con el nombre
int getNombre(ChoferPtr cf);


// Operaci�n de obtenci�n del apellido
// Precondicion: chofer debe haberse creado
// Postcondici�n: se obtiene el apellido del chofer
// Par�metros:
// apellido: TDAChofer del que es obtiene el apellido
// Devuelve un char* con el apellido
void getApellido(ChoferPtr cf);


// Operaci�n de obtenci�n del domicilio
// Precondicion: chofer debe haberse creado
// Postcondici�n: se obtiene los datos del domicilio del chofer
// Par�metros:
// domicilio: TDAChofer del que es obtiene el domicilio
// Devuelve un entero representando el cuil
void getDomicilio(ChoferPtr cf);


// Operaci�n de obtenci�n del cuil
// Precondicion: chofer debe haberse creado
// Postcondici�n: se obtiene el cuil del chofer
// Par�metros:
// cuil: TDAChofer/TDACuil del que es obtiene el cuil
// Devuelve un entero representando el cuil
void getCuil(ChoferPtr cf);


// Funci�n de obtenci�n de memoria
// Precondicion: Ninguna
// Postcondici�n: se reserva la memoria solicitada
// o se detiene el programa con un mensaje de error si no se pudo
// Par�metros:
// tamanio: tama�o de la memoria a reservar en size_t
// devuelve void* apuntando a la memoria reservada
void* obtenerMemoria(size_t tamano);




// Operaci�n de asignaci�n del nombre
// Precondicion: Chofer debe haberse creado
// Postcondici�n: chofer cambia con el nuevo valor de nombre
// Par�metros:
// Chofer: TDAChofer al que se asignara el nuevo valor de nombre
// nombre: char* representando el nuevo valor del nombre del chofer
// No devuelve valor.
void setNombre(ChoferPtr cf);


// Operaci�n de asignaci�n  del apellido
// Precondicion: chofer debe haberse creado
// Postcondici�n: chofer cambia con el nuevo valor de apellido
// Par�metros:
// Chofer: TDAChofer al que se asignara el nuevo valor de apellido
// apellido: char* representando el nuevo valor del apellido del chofer
// No devuelve valor.
void setApellido(ChoferPtr cf);


// Operaci�n de asignaci�n del domicilio
// Precondicion: chofer debe haberse creado
// Postcondici�n: chofer cambia con el nuevo valor de domicilio
// Par�metros:
// Chofer: TDAChofer al que se asignara el nuevo valor del domicilio
// domicilio: char* representando el nuevo valor del domicilio
// No devuelve valor.
void setDomicilio(ChoferPtr cf);


// Operaci�n de asignaci�n del cuil
// Precondicion: chofer debe haberse creado
// Postcondici�n: chofer cambia con el nuevo valor de cuil
//par�metros:
// Chofer: TDAChofer al que se asignara el nuevo valor del cuil
// cuil: entero representando el nuevo valor del cuil
// No devuelve valor.
void setCuil(ChoferPtr cf);


#endif // TDACHOFER_H_INCLUDED
