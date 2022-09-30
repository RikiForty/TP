#ifndef TDAVEHICULO_H_INCLUDED
#define TDAVEHICULO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>
//TDA vehiculo


//estructura que define vehiculo
typedef struct Vehiculo{
char *tipo;
char  *marca;
char *modelo;
char *patente;
}Vehiculo;


//typedef de puntero al tipo de dato
typedef Vehiculo* VehiculoPtr;


//------------------------------------------------


// Primitivas - Vehiculo


// Operaci�n de creaci�n
// Precondicion: Vehiculo no fue creado
// Postcondici�n: se crea Veh�culo y sus datos
// Par�metros:
// tipo: char*
// marca: string
// modelo: string
// patente: string
//Devuelve puntero a la estructura vehiculo en memoria din�mica
VehiculoPtr crearVehiculo(char* tipo, char marca, char modelo, char patente);


// Operaci�n de destrucci�n (Destructor)
// Precondicion: Vehiculo debe haberse creado con crearVehiculo
// Postcondici�n: se destruye vehiculo y se libera la memoria que ocupaba
// Par�metros:
// datos(tipo,marca,modelo,patente):  TDAVehiculo a destruir
// Devuelve NULL
VehiculoPtr destruirVehiculo(VehiculoPtr vp);


// Operaci�n de obtenci�n del Tipo
// Precondicion: Vehiculo debe haberse creado
// Postcondici�n: se obtiene el tipo de veh�culo
// Par�metros:
// tipo: TDAVehiculo del que es obtiene el tipo
// Devuelve un char* con el tipo
char* getTipo(VehiculoPtr vp);


// Operaci�n de obtenci�n de Marca
// Precondicion: vehiculo debe haberse creado
// Postcondici�n: se obtiene la marca  del vehiculo
// Par�metros:
// Marca: TDAVehiculo del que se obtiene la marca
// Devuelve un string con la marca
int getMarca(VehiculoPtr vp);


// Operaci�n de obtenci�n de Modelo
// Precondicion: Vehiculo debe haberse creado
// Postcondici�n: se obtiene el modelo del Vehiculo
// Par�metros:
// modelo: TDAVehiculo del que se obtiene el modelo
// Devuelve un string del modelo
int getModelo(VehiculoPtr vp);


// Operaci�n de obtenci�n de Patente
// Precondicion: Vehiculo debe haberse creado
// Postcondici�n: se obtiene la patente del vehiculo
// Par�metros:
// patente: TDAVehiculo del que se obtiene la patente
// Devuelve un string de la patente
int getPatente(VehiculoPtr vp);


// Funci�n de obtenci�n de memoria
// Precondicion: Ninguna
// Postcondici�n: se reserva la memoria solicitada
// o se detiene el programa con un mensaje de error si no se pudo
// Par�metros:
// tamanio: tama�o de la memoria a reservar en size_t
// devuelve void* apuntando a la memoria reservada
void* obtenerMemoria(size_t tamano);




// Operaci�n de asignaci�n del tipo
// Precondicion: Vehiculo debe haberse creado
// Postcondici�n: Vehiculo cambia con el nuevo valor de tipo
// Par�metros:
// Vehiculo: TDAVehiculo al que se asignara el nuevo valor de tipo
// nombre: char* representando el nuevo valor del tipo de vehiculo
// No devuelve valor.
int setTipo(VehiculoPtr vp);


// Operaci�n de asignaci�n  de marca
// Precondicion: Vehiculo debe haberse creado
// Postcondici�n: Vehiculo cambia con el nuevo valor de marca
// Par�metros:
// Vehiculo: TDAVehiculo al que se asignara el nuevo valor de marca
// apellido: string representando la marca del vehiculo
// No devuelve valor.
int setMarca(VehiculoPtr vp);


// Operaci�n de asignaci�n de modelo
// Precondicion: Vehiculo debe haberse creado
// Postcondici�n: Vehiculo cambia con el nuevo valor del modelo
// Par�metros:
// Vehiculo: TDAVehiculo al que se asignara el nuevo valor del modelo
// modelo: string representando el nuevo valor del modelo
// No devuelve valor.
int setModelo(VehiculoPtr vp);


// Operaci�n de asignaci�n de patente
// Precondicion: Vehiculo debe haberse creado
// Postcondici�n: Vehiculo cambia con el nuevo valor de cuil
//par�metros:
// Vehiculo: TDAVehiculo al que se asignara el nuevo valor de patente
// patente: string representando el nuevo valor de patente
// No devuelve valor.
int setPatente(VehiculoPtr vp);

#endif // TDAVEHICULO_H_INCLUDED
