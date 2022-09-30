#ifndef TDACHOFER_H_INCLUDED
#define TDACHOFER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
//TDAs Chofer


//Estructura que define chófer
typedef struct Chofer{
char* apellido;
char* nombre;
int domicilio;
int cuil;
}Chofer;


//typedef de puntero al tipo de dato
typedef Chofer* ChoferPtr;



// Primitivas - chofer


// Operación de creación
// Precondicion: chofer no fue creado
// Postcondición: se crea chófer y sus datos
// Parámetros:
// nombre: puntero a char
// apellido: puntero a char
// domicilio entero
//cuil: entero
// Devuelve puntero a la estructura chofer en memoria dinámica
ChoferPtr crearChofer(char* nombre, char* apellido, int domicilio, int cuil);


// Operación de destrucción (Destructor)
// Precondicion: chofer debe haberse creado con crearChofer
// Postcondición: se destruye chofer y se libera la memoria que ocupaba
// Parámetros:
// datos(nombre,apellido,domicilio,cuil):  TDAChofer a destruir
// Devuelve NULL
ChoferPtr destruirChofer(ChoferPtr cfp);


// Operación de obtención del nombre
// Precondicion: Chofer debe haberse creado
// Postcondición: se obtiene el nombre del chofer
// Parámetros:
// nombre: TDAChofer del que es obtiene el nombre
// Devuelve un char* con el nombre
int getNombre(ChoferPtr cf);


// Operación de obtención del apellido
// Precondicion: chofer debe haberse creado
// Postcondición: se obtiene el apellido del chofer
// Parámetros:
// apellido: TDAChofer del que es obtiene el apellido
// Devuelve un char* con el apellido
void getApellido(ChoferPtr cf);


// Operación de obtención del domicilio
// Precondicion: chofer debe haberse creado
// Postcondición: se obtiene los datos del domicilio del chofer
// Parámetros:
// domicilio: TDAChofer del que es obtiene el domicilio
// Devuelve un entero representando el cuil
void getDomicilio(ChoferPtr cf);


// Operación de obtención del cuil
// Precondicion: chofer debe haberse creado
// Postcondición: se obtiene el cuil del chofer
// Parámetros:
// cuil: TDAChofer/TDACuil del que es obtiene el cuil
// Devuelve un entero representando el cuil
void getCuil(ChoferPtr cf);


// Función de obtención de memoria
// Precondicion: Ninguna
// Postcondición: se reserva la memoria solicitada
// o se detiene el programa con un mensaje de error si no se pudo
// Parámetros:
// tamanio: tamaño de la memoria a reservar en size_t
// devuelve void* apuntando a la memoria reservada
void* obtenerMemoria(size_t tamano);




// Operación de asignación del nombre
// Precondicion: Chofer debe haberse creado
// Postcondición: chofer cambia con el nuevo valor de nombre
// Parámetros:
// Chofer: TDAChofer al que se asignara el nuevo valor de nombre
// nombre: char* representando el nuevo valor del nombre del chofer
// No devuelve valor.
void setNombre(ChoferPtr cf);


// Operación de asignación  del apellido
// Precondicion: chofer debe haberse creado
// Postcondición: chofer cambia con el nuevo valor de apellido
// Parámetros:
// Chofer: TDAChofer al que se asignara el nuevo valor de apellido
// apellido: char* representando el nuevo valor del apellido del chofer
// No devuelve valor.
void setApellido(ChoferPtr cf);


// Operación de asignación del domicilio
// Precondicion: chofer debe haberse creado
// Postcondición: chofer cambia con el nuevo valor de domicilio
// Parámetros:
// Chofer: TDAChofer al que se asignara el nuevo valor del domicilio
// domicilio: char* representando el nuevo valor del domicilio
// No devuelve valor.
void setDomicilio(ChoferPtr cf);


// Operación de asignación del cuil
// Precondicion: chofer debe haberse creado
// Postcondición: chofer cambia con el nuevo valor de cuil
//parámetros:
// Chofer: TDAChofer al que se asignara el nuevo valor del cuil
// cuil: entero representando el nuevo valor del cuil
// No devuelve valor.
void setCuil(ChoferPtr cf);


#endif // TDACHOFER_H_INCLUDED
